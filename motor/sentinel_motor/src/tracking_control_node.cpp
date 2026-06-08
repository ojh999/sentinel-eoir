#include <rclcpp/rclcpp.hpp>
#include <sentinel_interfaces/msg/detection.hpp>
#include <sentinel_interfaces/msg/frame_info.hpp>
#include <sentinel_interfaces/msg/motor_angle.hpp>
#include <std_msgs/msg/u_int8.hpp>

#include <algorithm>
#include <cmath>

class TrackingControlNode : public rclcpp::Node
{
public:
    TrackingControlNode() : Node("tracking_control_node")
    {
        kp_pan_       = this->declare_parameter("kp_pan",       0.25);
        kp_tilt_      = this->declare_parameter("kp_tilt",      0.3);
        ki_pan_       = this->declare_parameter("ki_pan",       0.001);
        ki_tilt_      = this->declare_parameter("ki_tilt",      0.0);
        kd_pan_       = this->declare_parameter("kd_pan",       0.01);
        kd_tilt_      = this->declare_parameter("kd_tilt",      0.0);
        deadband_px_  = this->declare_parameter("deadband_px",  15);
        windup_limit_ = this->declare_parameter("windup_limit", 500.0);
        cam_cx_ = this->declare_parameter("cam_cx", 594.894793);
        cam_cy_ = this->declare_parameter("cam_cy", 301.901165);
        pan_min_  = this->declare_parameter("pan_min",  0);
        pan_max_  = this->declare_parameter("pan_max",  4095);
        tilt_min_ = this->declare_parameter("tilt_min", 0);
        tilt_max_ = this->declare_parameter("tilt_max", 4095);

        auto volatile_qos = rclcpp::QoS(10).durability_volatile();

        sub_mode_ = this->create_subscription<std_msgs::msg::UInt8>(
            "/system/mode", volatile_qos,
            std::bind(&TrackingControlNode::modeCallback, this, std::placeholders::_1)
        );

        sub_stream_select_ = this->create_subscription<std_msgs::msg::UInt8>(
            "/system/stream_select", volatile_qos,
            std::bind(&TrackingControlNode::streamSelectCallback, this, std::placeholders::_1)
        );

        sub_detection_ = this->create_subscription<sentinel_interfaces::msg::Detection>(
            "/driver/detection", 10,
            std::bind(&TrackingControlNode::detectionCallback, this, std::placeholders::_1)
        );

        // FrameSize → FrameInfo, 토픽명 변경
        sub_eo_frame_info_ = this->create_subscription<sentinel_interfaces::msg::FrameInfo>(
            "/camera/eo/frame_info", 10,
            std::bind(&TrackingControlNode::eoFrameInfoCallback, this, std::placeholders::_1)
        );
        sub_ir_frame_info_ = this->create_subscription<sentinel_interfaces::msg::FrameInfo>(
            "/camera/ir/frame_info", 10,
            std::bind(&TrackingControlNode::irFrameInfoCallback, this, std::placeholders::_1)
        );

        sub_angle_ = this->create_subscription<sentinel_interfaces::msg::MotorAngle>(
            "/motor/angle/get", 10,
            std::bind(&TrackingControlNode::angleCallback, this, std::placeholders::_1)
        );

        pub_cmd_ = this->create_publisher<sentinel_interfaces::msg::MotorAngle>(
            "/motor/angle/set", 10
        );

        RCLCPP_INFO(this->get_logger(),
            "TrackingControlNode started | "
            "kp=(%.2f,%.2f) ki=(%.2f,%.2f) kd=(%.2f,%.2f) "
            "deadband=%dpx windup_limit=%.1f | stream=EO(default)",
            kp_pan_, kp_tilt_, ki_pan_, ki_tilt_, kd_pan_, kd_tilt_,
            deadband_px_, windup_limit_);
    }

private:
    void modeCallback(const std_msgs::msg::UInt8::SharedPtr msg)
    {
        if (current_mode_ != msg->data) {
            resetPidState();
            RCLCPP_INFO(this->get_logger(),
                "Mode changed: %d -> %d | PID state reset", current_mode_, msg->data);
        }
        current_mode_ = msg->data;
    }

    void streamSelectCallback(const std_msgs::msg::UInt8::SharedPtr msg)
    {
        if (msg->data != 0 && msg->data != 1) {
            RCLCPP_WARN(this->get_logger(),
                "Unknown stream_select value: %d (0=EO/720p, 1=IR/480p). Ignored.", msg->data);
            return;
        }
        if (active_stream_ != msg->data) {
            RCLCPP_INFO(this->get_logger(),
                "Stream changed: %s -> %s | frame_size & PID reset",
                active_stream_ == 0 ? "EO(720p)" : "IR(480p)",
                msg->data      == 0 ? "EO(720p)" : "IR(480p)");
            active_stream_ = msg->data;
            applyActiveFrameSize();
            resetPidState();
        }
    }

    // FrameSize → FrameInfo, frame_w/frame_h → width/height
    void eoFrameInfoCallback(const sentinel_interfaces::msg::FrameInfo::SharedPtr msg)
    {
        if (eo_frame_w_ == 0 || eo_frame_h_ == 0) {
            eo_frame_w_ = static_cast<int>(msg->width);
            eo_frame_h_ = static_cast<int>(msg->height);
            RCLCPP_INFO(this->get_logger(),
                "EO frame size: %d x %d (fps=%.1f, source=%s)",
                eo_frame_w_, eo_frame_h_, msg->fps, msg->source.c_str());
            if (active_stream_ == 0) applyActiveFrameSize();
        }
    }

    void irFrameInfoCallback(const sentinel_interfaces::msg::FrameInfo::SharedPtr msg)
    {
        if (ir_frame_w_ == 0 || ir_frame_h_ == 0) {
            ir_frame_w_ = static_cast<int>(msg->width);
            ir_frame_h_ = static_cast<int>(msg->height);
            RCLCPP_INFO(this->get_logger(),
                "IR frame size: %d x %d (fps=%.1f, source=%s)",
                ir_frame_w_, ir_frame_h_, msg->fps, msg->source.c_str());
            if (active_stream_ == 1) applyActiveFrameSize();
        }
    }

    void applyActiveFrameSize()
    {
        frame_w_ = (active_stream_ == 0) ? eo_frame_w_ : ir_frame_w_;
        frame_h_ = (active_stream_ == 0) ? eo_frame_h_ : ir_frame_h_;
    }

    void angleCallback(const sentinel_interfaces::msg::MotorAngle::SharedPtr msg)
    {
        current_pan_       = static_cast<double>(msg->pan);
        current_tilt_      = static_cast<double>(msg->tilt);
        angle_initialized_ = true;
    }

    void detectionCallback(const sentinel_interfaces::msg::Detection::SharedPtr msg)
    {
        cx_ = msg->cx;
        cy_ = msg->cy;
        compute();
    }

    void compute()
    {
        if (current_mode_ != TRACKING_MODE) return;
        if (frame_w_ == 0 || frame_h_ == 0) return;
        if (!angle_initialized_) return;

        auto   now = this->now();
        double dt  = 0.033;
        if (last_time_.nanoseconds() != 0) {
            dt = (now - last_time_).seconds();
            if (dt <= 0.005) dt = 0.005;
            if (dt > 1.0)   dt = 0.033;
        }
        last_time_ = now;

        kp_pan_       = this->get_parameter("kp_pan").as_double();
        kp_tilt_      = this->get_parameter("kp_tilt").as_double();
        ki_pan_       = this->get_parameter("ki_pan").as_double();
        ki_tilt_      = this->get_parameter("ki_tilt").as_double();
        kd_pan_       = this->get_parameter("kd_pan").as_double();
        kd_tilt_      = this->get_parameter("kd_tilt").as_double();
        windup_limit_ = this->get_parameter("windup_limit").as_double();
        pan_min_  = this->get_parameter("pan_min").as_int();
        pan_max_  = this->get_parameter("pan_max").as_int();
        tilt_min_ = this->get_parameter("tilt_min").as_int();
        tilt_max_ = this->get_parameter("tilt_max").as_int();
        cam_cx_   = this->get_parameter("cam_cx").as_double();
        cam_cy_   = this->get_parameter("cam_cy").as_double();

        const double error_x = cx_ - cam_cx_;
        const double error_y = cy_ - cam_cy_;

        if (std::abs(error_x) < deadband_px_ && std::abs(error_y) < deadband_px_) {
            integral_pan_  = 0.0;
            integral_tilt_ = 0.0;
            prev_error_x_  = error_x;
            prev_error_y_  = error_y;
            RCLCPP_DEBUG(this->get_logger(),
                "Within deadband (%.1f, %.1f) -- no command", error_x, error_y);
            return;
        }

        integral_pan_  += error_x * dt;
        integral_tilt_ += error_y * dt;
        integral_pan_   = std::clamp(integral_pan_,  -windup_limit_, windup_limit_);
        integral_tilt_  = std::clamp(integral_tilt_, -windup_limit_, windup_limit_);

        const double deriv_pan  = (error_x - prev_error_x_) / dt;
        const double deriv_tilt = (error_y - prev_error_y_) / dt;

        const double delta_pan  = kp_pan_  * error_x + ki_pan_  * integral_pan_  + kd_pan_  * deriv_pan;
        const double delta_tilt = kp_tilt_ * error_y + ki_tilt_ * integral_tilt_ + kd_tilt_ * deriv_tilt;

        prev_error_x_ = error_x;
        prev_error_y_ = error_y;

        const double soft_margin = 150.0;

        double pan_ratio = 1.0;
        if (current_pan_ < pan_min_ + soft_margin)
            pan_ratio = (current_pan_ - pan_min_) / soft_margin;
        else if (current_pan_ > pan_max_ - soft_margin)
            pan_ratio = (pan_max_ - current_pan_) / soft_margin;
        pan_ratio = std::clamp(pan_ratio, 0.0, 1.0);

        double tilt_ratio = 1.0;
        if (current_tilt_ < tilt_min_ + soft_margin)
            tilt_ratio = (current_tilt_ - tilt_min_) / soft_margin;
        else if (current_tilt_ > tilt_max_ - soft_margin)
            tilt_ratio = (tilt_max_ - current_tilt_) / soft_margin;
        tilt_ratio = std::clamp(tilt_ratio, 0.0, 1.0);

        double target_pan  = std::clamp(current_pan_  + PAN_DIR  * delta_pan  * pan_ratio,
                                        (double)pan_min_, (double)pan_max_);
        double target_tilt = std::clamp(current_tilt_ + TILT_DIR * delta_tilt * tilt_ratio,
                                        (double)tilt_min_, (double)tilt_max_);

        sentinel_interfaces::msg::MotorAngle cmd;
        cmd.pan  = static_cast<uint16_t>(target_pan);
        cmd.tilt = static_cast<uint16_t>(target_tilt);
        pub_cmd_->publish(cmd);

        RCLCPP_INFO(this->get_logger(),
            "[TRACKING][%s] err=(%.1f,%.1f) | delta=(%.2f,%.2f) | "
            "motor=(%.1f,%.1f) | cmd=(%d,%d) | dt=%.3f",
            active_stream_ == 0 ? "EO(720p)" : "IR(480p)",
            error_x, error_y, delta_pan, delta_tilt,
            current_pan_, current_tilt_, cmd.pan, cmd.tilt, dt);
    }

    void resetPidState()
    {
        integral_pan_  = 0.0;
        integral_tilt_ = 0.0;
        prev_error_x_  = 0.0;
        prev_error_y_  = 0.0;
        last_time_     = rclcpp::Time(0);
    }

    // ── Subscriptions / Publisher ───────────────────────────────────
    rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr                  sub_mode_;
    rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr                  sub_stream_select_;
    rclcpp::Subscription<sentinel_interfaces::msg::Detection>::SharedPtr   sub_detection_;
    rclcpp::Subscription<sentinel_interfaces::msg::FrameInfo>::SharedPtr   sub_eo_frame_info_;  // 변경
    rclcpp::Subscription<sentinel_interfaces::msg::FrameInfo>::SharedPtr   sub_ir_frame_info_;  // 변경
    rclcpp::Subscription<sentinel_interfaces::msg::MotorAngle>::SharedPtr  sub_angle_;
    rclcpp::Publisher<sentinel_interfaces::msg::MotorAngle>::SharedPtr     pub_cmd_;

    // ── 상태 ────────────────────────────────────────────────────────
    const int PAN_DIR  = -1;
    const int TILT_DIR = 1;
    uint8_t active_stream_     = 0;
    int     eo_frame_w_ = 0,  eo_frame_h_ = 0;
    int     ir_frame_w_ = 0,  ir_frame_h_ = 0;
    int     frame_w_    = 0,  frame_h_    = 0;
    int     current_mode_      = 3;
    bool    angle_initialized_ = false;
    double  current_pan_       = 2047.0;
    double  current_tilt_      = 2047.0;
    double  cx_ = 0.0, cy_    = 0.0;

    // ── PID 상태 ────────────────────────────────────────────────────
    double integral_pan_  = 0.0;
    double integral_tilt_ = 0.0;
    double prev_error_x_  = 0.0;
    double prev_error_y_  = 0.0;
    rclcpp::Time last_time_{0};

    // ── 파라미터 ────────────────────────────────────────────────────
    double kp_pan_, kp_tilt_;
    double ki_pan_, ki_tilt_;
    double kd_pan_, kd_tilt_;
    int    deadband_px_;
    double windup_limit_;
    double cam_cx_ = 640.0;
    double cam_cy_ = 360.0;
    int pan_min_, pan_max_;
    int tilt_min_, tilt_max_;

    // ── 상수 ────────────────────────────────────────────────────────
    const int TRACKING_MODE = 2;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TrackingControlNode>());
    rclcpp::shutdown();
    return 0;
}