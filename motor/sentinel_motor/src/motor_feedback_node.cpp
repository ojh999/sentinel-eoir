/**
 * motor_feedback_node
 *
 * 역할: Zybo → Thor UDP 피드백 수신 → ROS 토픽 발행
 *
 * 발행:
 *   /motor/angle/get (MotorAngle)  — 4096 분주 position
 *   /motor/status    (MotorStatus) — 나머지 피드백 전부
 */

#include "sentinel_motor/PacketDef.hpp"
#include "sentinel_motor/UdpTransport.hpp"

#include <rclcpp/rclcpp.hpp>
#include <sentinel_interfaces/msg/motor_angle.hpp>
#include <sentinel_interfaces/msg/motor_status.hpp>

#include <array>
#include <chrono>
#include <functional>

using namespace std::chrono_literals;

class MotorFeedbackNode : public rclcpp::Node
{
public:
  MotorFeedbackNode()
  : Node("motor_feedback_node")
  {
    listen_port_      = declare_parameter<int>("listen_port", 6001);
    feedback_poll_ms_ = declare_parameter<int>("feedback_poll_ms", 50);

    transport_ = std::make_unique<sentinel_motor::UdpTransport>(
      "0.0.0.0", 0, static_cast<uint16_t>(listen_port_));
    transport_->open();

    angle_pub_  = create_publisher<sentinel_interfaces::msg::MotorAngle>(
      "/motor/angle/get", rclcpp::QoS(10));
    status_pub_ = create_publisher<sentinel_interfaces::msg::MotorStatus>(
      "/motor/status", rclcpp::QoS(10));

    poll_timer_ = create_wall_timer(
      std::chrono::milliseconds(feedback_poll_ms_),
      std::bind(&MotorFeedbackNode::pollFeedback, this));

    RCLCPP_INFO(get_logger(),
      "motor_feedback_node ready | listen=%d poll=%dms",
      listen_port_, feedback_poll_ms_);
  }

private:
  void pollFeedback()
  {
    std::array<uint8_t, sentinel_motor::kFeedbackPacketSize> buf{};
    std::array<uint8_t, sentinel_motor::kFeedbackPacketSize> latest{};
    bool got_any = false;

    try {
      while (transport_->receive_feedback(buf)) {
        latest  = buf;
        got_any = true;
      }
    } catch (const std::exception & ex) {
      RCLCPP_WARN(get_logger(), "Bad feedback packet: %s", ex.what());
      return;
    }
    if (!got_any) return;

    const auto fb = sentinel_motor::parse_feedback(latest);

    // /motor/angle/get — position만 (4096 분주)
    sentinel_interfaces::msg::MotorAngle angle_msg;
    angle_msg.pan  = static_cast<uint16_t>(fb.pan.position);
    angle_msg.tilt = static_cast<uint16_t>(fb.tilt.position);
    angle_pub_->publish(angle_msg);

    // /motor/status — position 제외 나머지 전부
    sentinel_interfaces::msg::MotorStatus status_msg;
    status_msg.pan_moving        = fb.pan.moving;
    status_msg.pan_moving_status = fb.pan.moving_status;
    status_msg.pan_pwm           = fb.pan.pwm;
    status_msg.pan_current       = fb.pan.current;
    status_msg.pan_velocity      = fb.pan.velocity;
    status_msg.pan_position      = fb.pan.position;
    status_msg.pan_voltage       = fb.pan.voltage;
    status_msg.pan_temperature   = fb.pan.temperature;
    status_msg.pan_hw_error      = fb.pan.hw_error;

    status_msg.tilt_moving        = fb.tilt.moving;
    status_msg.tilt_moving_status = fb.tilt.moving_status;
    status_msg.tilt_pwm           = fb.tilt.pwm;
    status_msg.tilt_current       = fb.tilt.current;
    status_msg.tilt_velocity      = fb.tilt.velocity;
    status_msg.tilt_position      = fb.tilt.position;
    status_msg.tilt_voltage       = fb.tilt.voltage;
    status_msg.tilt_temperature   = fb.tilt.temperature;
    status_msg.tilt_hw_error      = fb.tilt.hw_error;
    status_pub_->publish(status_msg);

    RCLCPP_INFO_THROTTLE(get_logger(), *get_clock(), 1000,
      "FB | pan=%u tilt=%u",
      fb.pan.position, fb.tilt.position);
  }

  int listen_port_;
  int feedback_poll_ms_;

  std::unique_ptr<sentinel_motor::UdpTransport> transport_;
  rclcpp::Publisher<sentinel_interfaces::msg::MotorAngle>::SharedPtr  angle_pub_;
  rclcpp::Publisher<sentinel_interfaces::msg::MotorStatus>::SharedPtr status_pub_;
  rclcpp::TimerBase::SharedPtr poll_timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MotorFeedbackNode>());
  rclcpp::shutdown();
  return 0;
}