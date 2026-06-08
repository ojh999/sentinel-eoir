/*
ModeManagerNode
├─ 구독: /system/cmd_mode      (UInt8) → 0=SCAN, 1=MANUAL
├─ 구독: /system/cmd_track     (Bool)  → 추적 ON/OFF
├─ 구독: /system/stream_select (UInt8) → 0=EO, 1=IR
├─ 구독: /driver/detection     (Detection) → 선택된 스트림 객체 중심좌표
└─ 발행: /system/mode          (UInt8) → 0=SCAN, 1=MANUAL, 2=TRACKING
*/
#include <rclcpp/rclcpp.hpp>
#include <sentinel_interfaces/msg/detection.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/bool.hpp>

using namespace std::chrono_literals;

class ModeManagerNode : public rclcpp::Node
{
public:
    ModeManagerNode() : Node("mode_manager_node")
    {
        object_timeout_s_ = this->declare_parameter("object_timeout_s", 10.0);

        // ── 구독 ──────────────────────────────────────────────────
        sub_cmd_mode_ = this->create_subscription<std_msgs::msg::UInt8>(
            "/system/cmd_mode", 10,
            std::bind(&ModeManagerNode::cmdModeCallback, this, std::placeholders::_1)
        );
        sub_cmd_track_ = this->create_subscription<std_msgs::msg::Bool>(
            "/system/cmd_track", 10,
            std::bind(&ModeManagerNode::cmdTrackCallback, this, std::placeholders::_1)
        );
        sub_stream_select_ = this->create_subscription<std_msgs::msg::UInt8>(
            "/system/stream_select", 10,
            std::bind(&ModeManagerNode::streamSelectCallback, this, std::placeholders::_1)
        );
        sub_detection_ = this->create_subscription<sentinel_interfaces::msg::Detection>(
            "/driver/detection", 10,
            std::bind(&ModeManagerNode::detectionCallback, this, std::placeholders::_1)
        );

        // ── 발행 ──────────────────────────────────────────────────
        pub_mode_ = this->create_publisher<std_msgs::msg::UInt8>(
            "/system/mode", 10
        );

        // ── 타이머 (100ms 주기로 모드 평가) ──────────────────────
        timer_ = this->create_wall_timer(
            100ms,
            std::bind(&ModeManagerNode::evaluate, this)
        );

        RCLCPP_INFO(this->get_logger(),
            "ModeManagerNode started | timeout=%.1fs", object_timeout_s_);
    }

private:
    void cmdModeCallback(const std_msgs::msg::UInt8::SharedPtr msg)
    {
        if (msg->data > 1) {
            RCLCPP_WARN(this->get_logger(),
                "Invalid cmd_mode: %d (0=SCAN, 1=MANUAL)", msg->data);
            return;
        }
        if (base_mode_ != msg->data) {
            RCLCPP_INFO(this->get_logger(),
                "Base mode: %s → %s",
                base_mode_ == 0 ? "SCAN" : "MANUAL",
                msg->data  == 0 ? "SCAN" : "MANUAL");
        }
        base_mode_ = msg->data;
        evaluate();
    }

    void cmdTrackCallback(const std_msgs::msg::Bool::SharedPtr msg)
    {
        if (track_enabled_ != msg->data) {
            RCLCPP_INFO(this->get_logger(),
                "Track: %s → %s",
                track_enabled_ ? "ON" : "OFF",
                msg->data      ? "ON" : "OFF");
        }
        track_enabled_ = msg->data;
        evaluate();
    }

    void streamSelectCallback(const std_msgs::msg::UInt8::SharedPtr msg)
    {
        if (stream_select_ != msg->data) {
            RCLCPP_INFO(this->get_logger(),
                "Stream: %s → %s",
                stream_select_ == 0 ? "EO" : "IR",
                msg->data      == 0 ? "EO" : "IR");
            // 스트림 변경 시 객체 감지 상태 초기화
            object_detected_ = false;
            last_detection_time_ = rclcpp::Time(0);
        }
        stream_select_ = msg->data;
    }

    void detectionCallback(const sentinel_interfaces::msg::Detection::SharedPtr)
    {
        // 객체 감지됨 → 타임스탬프 갱신
        last_detection_time_ = this->now();
        if (!object_detected_) {
            object_detected_ = true;
            RCLCPP_INFO(this->get_logger(),
                "Object detected on %s stream",
                stream_select_ == 0 ? "EO" : "IR");
            evaluate();
        }
    }

    void evaluate()
    {
        // ── 객체 소실 판단 (타임아웃) ─────────────────────────────
        if (object_detected_ && last_detection_time_.nanoseconds() != 0) {
            double elapsed = (this->now() - last_detection_time_).seconds();
            if (elapsed > object_timeout_s_) {
                object_detected_ = false;
                RCLCPP_INFO(this->get_logger(),
                    "Object lost (timeout %.1fs)", elapsed);
            }
        }

        // ── 모드 결정 ─────────────────────────────────────────────
        uint8_t new_mode;
        if (track_enabled_ && object_detected_) {
            new_mode = TRACKING;
        } else {
            new_mode = base_mode_;  // SCAN(0) or MANUAL(1)
        }

        // ── 변경 시만 발행 ────────────────────────────────────────
        if (new_mode != current_mode_) {
            RCLCPP_INFO(this->get_logger(),
                "Mode: %s → %s",
                modeStr(current_mode_), modeStr(new_mode));
            current_mode_ = new_mode;
            std_msgs::msg::UInt8 msg;
            msg.data = new_mode;
            pub_mode_->publish(msg);
        }
    }

    const char* modeStr(uint8_t mode)
    {
        switch (mode) {
            case 0:  return "SCAN";
            case 1:  return "MANUAL";
            case 2:  return "TRACKING";
            default: return "UNKNOWN";
        }
    }

    // ── 구독/발행 ─────────────────────────────────────────────────
    rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr                sub_cmd_mode_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr                 sub_cmd_track_;
    rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr                sub_stream_select_;
    rclcpp::Subscription<sentinel_interfaces::msg::Detection>::SharedPtr sub_detection_;
    rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr                   pub_mode_;
    rclcpp::TimerBase::SharedPtr                                         timer_;

    // ── 내부 상태 ─────────────────────────────────────────────────
    uint8_t      base_mode_       = 0;      // SCAN
    uint8_t      stream_select_   = 0;      // 0=EO, 1=IR
    bool         track_enabled_   = false;
    bool         object_detected_ = false;
    uint8_t      current_mode_    = 0;
    rclcpp::Time last_detection_time_{0};
    double       object_timeout_s_;

    static constexpr uint8_t SCAN     = 0;
    static constexpr uint8_t MANUAL   = 1;
    static constexpr uint8_t TRACKING = 2;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ModeManagerNode>());
    rclcpp::shutdown();
    return 0;
}