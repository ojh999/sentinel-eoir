/**
 * pan_tilt_control_node
 *
 * 역할: ROS 토픽 값을 그대로 8B UDP 패킷으로 묶어서 Zybo로 전송
 *
 * 패킷 구조 (Thor → Zybo, 8B):
 *   [0]   mode        (uint8)  0=SCAN / 1=MANUAL / 2=TRACK
 *   [1]   btn         (uint8)  수동모드 버튼 비트마스크
 *   [2-3] pan         (uint16, LE) 팬 위치 (0~4095)
 *   [4-5] tilt        (uint16, LE) 틸트 위치 (0~4095)
 *   [6]   scan_step   (uint8)  스캔 스텝 (1~10)
 *   [7]   manual_step (uint8)  수동 스텝 (1~10)
 *
 * 구독:
 *   /system/mode       (UInt8)      — 0/1/2
 *   /motor/angle/set   (MotorAngle) — TRACK 모드, pan/tilt step 값
 *   /motor/scan_step   (UInt16)     — 스캔 스텝 크기
 *   /motor/manual_step (UInt16)     — 수동 스텝 크기
 *   /motor/manual_btn  (UInt8)      — 버튼 비트마스크
 */

#include "sentinel_motor/PacketDef.hpp"
#include "sentinel_motor/UdpTransport.hpp"

#include <rclcpp/rclcpp.hpp>
#include <sentinel_interfaces/msg/motor_angle.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/u_int16.hpp>

#include <algorithm>
#include <chrono>
#include <functional>
#include <string>

using namespace std::chrono_literals;

static constexpr uint8_t MODE_SCAN   = 0;
static constexpr uint8_t MODE_MANUAL = 1;
static constexpr uint8_t MODE_TRACK  = 2;
static constexpr uint8_t MODE_IDLE   = 3;

class PanTiltControlNode : public rclcpp::Node
{
public:
  PanTiltControlNode()
  : Node("pan_tilt_control_node")
  {
    target_ip_         = declare_parameter<std::string>("target_ip", "10.42.0.168");
    target_port_       = declare_parameter<int>("target_port", 6000);
    command_resend_ms_ = declare_parameter<int>("command_resend_ms", 50);
    home_pan_          = declare_parameter<int>("home_pan",  2047);
    home_tilt_         = declare_parameter<int>("home_tilt", 2047);
    pan_min_           = declare_parameter<int>("pan_min",   511);
    pan_max_           = declare_parameter<int>("pan_max",   3583);
    tilt_min_          = declare_parameter<int>("tilt_min",  0);
    tilt_max_          = declare_parameter<int>("tilt_max",  4095);

    pan_  = static_cast<uint16_t>(home_pan_);
    tilt_ = static_cast<uint16_t>(home_tilt_);
    actual_pan_  = static_cast<uint16_t>(home_pan_);
    actual_tilt_ = static_cast<uint16_t>(home_tilt_);

    transport_ = std::make_unique<sentinel_motor::UdpTransport>(
      target_ip_, static_cast<uint16_t>(target_port_), 0);
    transport_->open();

    mode_sub_ = create_subscription<std_msgs::msg::UInt8>(
      "/system/mode", rclcpp::QoS(10),
      std::bind(&PanTiltControlNode::modeCallback, this, std::placeholders::_1));

    angle_set_sub_ = create_subscription<sentinel_interfaces::msg::MotorAngle>(
      "/motor/angle/set", rclcpp::QoS(10),
      std::bind(&PanTiltControlNode::angleSetCallback, this, std::placeholders::_1));

    scan_step_sub_ = create_subscription<std_msgs::msg::UInt16>(
      "/motor/scan_step", rclcpp::QoS(10),
      std::bind(&PanTiltControlNode::scanStepCallback, this, std::placeholders::_1));

    manual_step_sub_ = create_subscription<std_msgs::msg::UInt16>(
      "/motor/manual_step", rclcpp::QoS(10),
      std::bind(&PanTiltControlNode::manualStepCallback, this, std::placeholders::_1));

    manual_btn_sub_ = create_subscription<std_msgs::msg::UInt8>(
      "/motor/manual_btn", rclcpp::QoS(10),
      std::bind(&PanTiltControlNode::manualBtnCallback, this, std::placeholders::_1));

    manual_angle_sub_ = create_subscription<sentinel_interfaces::msg::MotorAngle>(
      "/motor/angle/manual", rclcpp::QoS(10),
      std::bind(&PanTiltControlNode::manualAngleCallback, this, std::placeholders::_1));

    actual_pos_sub_ = create_subscription<sentinel_interfaces::msg::MotorAngle>(
      "/motor/angle/get", rclcpp::QoS(10),
      std::bind(&PanTiltControlNode::actualPosCallback, this, std::placeholders::_1));

    resend_timer_ = create_wall_timer(
      std::chrono::milliseconds(command_resend_ms_),
      std::bind(&PanTiltControlNode::resendCommand, this));

    RCLCPP_INFO(get_logger(),
      "pan_tilt_control_node ready | target=%s:%d resend=%dms | "
      "pan=[%d~%d] tilt=[%d~%d] home=(%d,%d)",
      target_ip_.c_str(), target_port_, command_resend_ms_,
      pan_min_, pan_max_, tilt_min_, tilt_max_,
      home_pan_, home_tilt_);
  }

private:
  uint16_t clamp_pan(int v)
  {
    return static_cast<uint16_t>(std::clamp(v, pan_min_, pan_max_));
  }

  uint16_t clamp_tilt(int v)
  {
    return static_cast<uint16_t>(std::clamp(v, tilt_min_, tilt_max_));
  }

  void modeCallback(const std_msgs::msg::UInt8::SharedPtr msg)
  {
    if (msg->data > MODE_TRACK) {
      RCLCPP_WARN(get_logger(), "Unknown mode: %u, ignored", msg->data);
      return;
    }
    if (current_mode_ != msg->data) {
      RCLCPP_INFO(get_logger(), "Mode %u → %u", current_mode_, msg->data);
      manual_btn_ = 0;
      pan_  = clamp_pan(actual_pan_);
      tilt_ = clamp_tilt(actual_tilt_);
      RCLCPP_INFO(get_logger(), "Mode transition: pan=%u tilt=%u", pan_, tilt_);
    }
    current_mode_ = msg->data;
  }

  void angleSetCallback(const sentinel_interfaces::msg::MotorAngle::SharedPtr msg)
  {
    if (current_mode_ != MODE_TRACK) return;
    pan_  = clamp_pan(msg->pan);
    tilt_ = clamp_tilt(msg->tilt);
    sendCommand();
  }

  void scanStepCallback(const std_msgs::msg::UInt16::SharedPtr msg)
  {
    scan_step_ = static_cast<uint8_t>(std::clamp<int>(msg->data, 1, 10));
  }

  void manualStepCallback(const std_msgs::msg::UInt16::SharedPtr msg)
  {
    manual_step_ = static_cast<uint8_t>(std::clamp<int>(msg->data, 1, 10));
  }

  void manualBtnCallback(const std_msgs::msg::UInt8::SharedPtr msg)
  {
    manual_btn_ = msg->data;
  }

  void manualAngleCallback(const sentinel_interfaces::msg::MotorAngle::SharedPtr msg)
  {
    if (current_mode_ != MODE_MANUAL) return;
    if (msg->pan == 0 && msg->tilt == 0) return;
    pan_  = clamp_pan(msg->pan);
    tilt_ = clamp_tilt(msg->tilt);
  }

  void actualPosCallback(const sentinel_interfaces::msg::MotorAngle::SharedPtr msg)
  {
    actual_pan_  = msg->pan;
    actual_tilt_ = msg->tilt;
  }

  void resendCommand()
  {
    sendCommand(false);
  }

  void sendCommand(bool log = true)
  {
    sentinel_motor::CommandPacket cmd{};
    cmd.mode      = current_mode_;
    cmd.btn       = (current_mode_ == MODE_MANUAL) ? manual_btn_ : uint8_t(0);
    cmd.pan       = pan_;
    cmd.tilt      = tilt_;
    cmd.scan_step = scan_step_;
    cmd.man_step  = manual_step_;

    try {
      transport_->send_command(cmd);
      if (log) {
        RCLCPP_INFO(get_logger(),
          "TX | mode=%u btn=0x%02X pan=%u tilt=%u scan=%u man=%u",
          cmd.mode, cmd.btn, cmd.pan, cmd.tilt, cmd.scan_step, cmd.man_step);
      }
    } catch (const std::exception & ex) {
      RCLCPP_ERROR(get_logger(), "UDP send failed: %s", ex.what());
    }
  }

  // ── 파라미터 ──
  std::string target_ip_;
  int target_port_;
  int command_resend_ms_;
  int home_pan_{2047},  home_tilt_{2047};
  int pan_min_{511},    pan_max_{3583};
  int tilt_min_{0},     tilt_max_{4095};

  // ── 상태 ──
  uint8_t  current_mode_{MODE_IDLE};
  uint8_t  manual_btn_{0};
  uint16_t pan_{2047};
  uint16_t tilt_{2047};
  uint16_t actual_pan_{2047};
  uint16_t actual_tilt_{2047};
  uint8_t  scan_step_{5};
  uint8_t  manual_step_{5};

  // ── ROS / UDP ──
  std::unique_ptr<sentinel_motor::UdpTransport> transport_;
  rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr              mode_sub_;
  rclcpp::Subscription<sentinel_interfaces::msg::MotorAngle>::SharedPtr angle_set_sub_;
  rclcpp::Subscription<std_msgs::msg::UInt16>::SharedPtr             scan_step_sub_;
  rclcpp::Subscription<std_msgs::msg::UInt16>::SharedPtr             manual_step_sub_;
  rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr              manual_btn_sub_;
  rclcpp::Subscription<sentinel_interfaces::msg::MotorAngle>::SharedPtr manual_angle_sub_;
  rclcpp::Subscription<sentinel_interfaces::msg::MotorAngle>::SharedPtr actual_pos_sub_;
  rclcpp::TimerBase::SharedPtr resend_timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PanTiltControlNode>());
  rclcpp::shutdown();
  return 0;
}