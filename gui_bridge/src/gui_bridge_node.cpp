#include <array>
#include <atomic>
#include <cstddef>
#include <cstring>
#include <memory>
#include <string>
#include <thread>
#include <vector>

#include <boost/asio.hpp>
#include "cv_bridge/cv_bridge.hpp"
#include "opencv2/opencv.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "sentinel_interfaces/msg/tracked_detection2_d_array.hpp"
#include "sentinel_interfaces/msg/motor_status.hpp"
#include "sentinel_interfaces/msg/motor_angle.hpp"
#include "sentinel_interfaces/msg/vlm_detection2_d_array.hpp"
#include "std_msgs/msg/u_int8.hpp"
#include "std_msgs/msg/u_int16.hpp"
#include "std_msgs/msg/bool.hpp"

#include "config.hpp"

class GuiBridgeNode : public rclcpp::Node
{
public:
    GuiBridgeNode()
    : Node("gui_bridge_node"),
      eo_socket_(io_ctx_),
      ir_socket_(io_ctx_),
      det_socket_(io_ctx_),
      vlm_socket_(io_ctx_),
      gui_cmd_socket_(io_ctx_),
      motor_tx_socket_(io_ctx_)
    {
        cb_group_ = create_callback_group(
            rclcpp::CallbackGroupType::Reentrant);

        this->declare_parameter<std::string>("gui_host",          config::GUI_HOST);
        this->declare_parameter<int>        ("eo_gui_port",       config::EO_GUI_PORT);
        this->declare_parameter<int>        ("ir_gui_port",       config::IR_GUI_PORT);
        this->declare_parameter<int>        ("det_gui_port",      config::DET_GUI_PORT);
        this->declare_parameter<int>        ("vlm_gui_port",      config::VLM_GUI_PORT);
        this->declare_parameter<int>        ("motor_status_port", config::MOTOR_STATUS_PORT);
        this->declare_parameter<int>        ("gui_cmd_port",      config::MOTOR_RX_PORT);

        gui_host_          = this->get_parameter("gui_host").as_string();
        uint16_t eo_port   = this->get_parameter("eo_gui_port").as_int();
        uint16_t ir_port   = this->get_parameter("ir_gui_port").as_int();
        uint16_t det_port  = this->get_parameter("det_gui_port").as_int();
        uint16_t vlm_port  = this->get_parameter("vlm_gui_port").as_int();
        uint16_t motor_port= this->get_parameter("motor_status_port").as_int();
        uint16_t cmd_port  = this->get_parameter("gui_cmd_port").as_int();

        // ── UDP 소켓 초기화 ──
        try {
            using boost::asio::ip::udp;
            using boost::asio::ip::make_address;

            eo_endpoint_    = udp::endpoint(make_address(gui_host_), eo_port);
            ir_endpoint_    = udp::endpoint(make_address(gui_host_), ir_port);
            det_endpoint_   = udp::endpoint(make_address(gui_host_), det_port);
            vlm_endpoint_   = udp::endpoint(make_address(gui_host_), vlm_port);
            motor_endpoint_ = udp::endpoint(make_address(gui_host_), motor_port);

            eo_socket_.open(udp::v4());
            ir_socket_.open(udp::v4());
            det_socket_.open(udp::v4());
            vlm_socket_.open(udp::v4());
            motor_tx_socket_.open(udp::v4());

            gui_cmd_socket_.open(udp::v4());
            gui_cmd_socket_.bind(udp::endpoint(udp::v4(), cmd_port));

            RCLCPP_INFO(get_logger(), "UDP sockets opened");
            RCLCPP_INFO(get_logger(), "  EO    → %s:%u", gui_host_.c_str(), eo_port);
            RCLCPP_INFO(get_logger(), "  IR    → %s:%u", gui_host_.c_str(), ir_port);
            RCLCPP_INFO(get_logger(), "  Det   → %s:%u", gui_host_.c_str(), det_port);
            RCLCPP_INFO(get_logger(), "  VLM   → %s:%u", gui_host_.c_str(), vlm_port);
            RCLCPP_INFO(get_logger(), "  Motor → %s:%u", gui_host_.c_str(), motor_port);
            RCLCPP_INFO(get_logger(), "  GUI CMD ← :%u", cmd_port);
        }
        catch (const boost::system::system_error & e) {
            RCLCPP_FATAL(get_logger(), "UDP socket init failed: %s", e.what());
            throw;
        }

        // ── Subscriptions ──
        rclcpp::SubscriptionOptions sub_opts;
        sub_opts.callback_group = cb_group_;

        // EO 영상
        eo_image_sub_ = create_subscription<sensor_msgs::msg::Image>(
            config::EO_IMAGE_TOPIC, rclcpp::SensorDataQoS(),
            [this](sensor_msgs::msg::Image::ConstSharedPtr msg) {
                send_image_udp(msg, eo_socket_, eo_endpoint_, 0x01, eo_frame_id_);
            });

        // IR 영상
        ir_image_sub_ = create_subscription<sensor_msgs::msg::Image>(
            config::IR_IMAGE_TOPIC, rclcpp::SensorDataQoS(),
            [this](sensor_msgs::msg::Image::ConstSharedPtr msg) {
                send_image_udp(msg, ir_socket_, ir_endpoint_, 0x02, ir_frame_id_);
            });

        // 모터 상태
        motor_status_sub_ = create_subscription<sentinel_interfaces::msg::MotorStatus>(
            config::MOTOR_STATUS_TOPIC, 10,
            [this](sentinel_interfaces::msg::MotorStatus::ConstSharedPtr msg) {
                auto pkt = serialize_motor_status(*msg);
                boost::system::error_code ec;
                motor_tx_socket_.send_to(boost::asio::buffer(pkt), motor_endpoint_, 0, ec);
                if (ec) {
                    RCLCPP_WARN(get_logger(), "Motor status send failed: %s", ec.message().c_str());
                }
            }, sub_opts);

        // EO 탐지
        eo_tracked_sub_ = create_subscription<sentinel_interfaces::msg::TrackedDetection2DArray>(
            config::EO_TRACK_TOPIC, rclcpp::SensorDataQoS(),
            [this](sentinel_interfaces::msg::TrackedDetection2DArray::ConstSharedPtr msg) {
                auto pkt = build_tracked_detection_packet(msg, 0x10);
                boost::system::error_code ec;
                det_socket_.send_to(boost::asio::buffer(pkt), det_endpoint_, 0, ec);
                if (ec) {
                    RCLCPP_WARN(get_logger(), "EO Detection send failed: %s", ec.message().c_str());
                }
            }, sub_opts);

        // IR 탐지
        ir_tracked_sub_ = create_subscription<sentinel_interfaces::msg::TrackedDetection2DArray>(
            config::IR_TRACK_TOPIC, rclcpp::SensorDataQoS(),
            [this](sentinel_interfaces::msg::TrackedDetection2DArray::ConstSharedPtr msg) {
                auto pkt = build_tracked_detection_packet(msg, 0x11);
                boost::system::error_code ec;
                det_socket_.send_to(boost::asio::buffer(pkt), det_endpoint_, 0, ec);
                if (ec) {
                    RCLCPP_WARN(get_logger(), "IR Detection send failed: %s", ec.message().c_str());
                }
            }, sub_opts);

        // VLM 추론
        vlm_sub_ = create_subscription<sentinel_interfaces::msg::VLMDetection2DArray>(
            "/vlm/eo", rclcpp::SensorDataQoS(),
            [this](sentinel_interfaces::msg::VLMDetection2DArray::ConstSharedPtr msg) {
                auto pkt = build_vlm_packet(msg);
                boost::system::error_code ec;
                vlm_socket_.send_to(boost::asio::buffer(pkt), vlm_endpoint_, 0, ec);
                if (ec) {
                    RCLCPP_WARN(get_logger(), "VLM send failed: %s", ec.message().c_str());
                }
            }, sub_opts);

        // 현재 추적 중인 track_id
        active_track_id_sub_ = create_subscription<std_msgs::msg::UInt8>(
            "/system/active_track_id", 10,
            [this](std_msgs::msg::UInt8::ConstSharedPtr msg) {
                active_track_id_.store(msg->data);
            }, sub_opts);

        // ── Publishers ──
        cmd_mode_pub_      = create_publisher<std_msgs::msg::UInt8>( "/system/cmd_mode",      10);
        cmd_track_pub_     = create_publisher<std_msgs::msg::Bool>(  "/system/cmd_track",     10);
        track_id_pub_      = create_publisher<std_msgs::msg::UInt8>( "/system/track_id",      10);
        stream_select_pub_ = create_publisher<std_msgs::msg::UInt8>( "/system/stream_select", 10);
        manual_btn_pub_    = create_publisher<std_msgs::msg::UInt8>( "/motor/manual_btn",     10);
        manual_angle_pub_  = create_publisher<sentinel_interfaces::msg::MotorAngle>(
            "/motor/angle/manual", 10);
        scan_step_pub_     = create_publisher<std_msgs::msg::UInt16>("/motor/scan_step",      10);
        manual_step_pub_   = create_publisher<std_msgs::msg::UInt16>("/motor/manual_step",    10);

        start_gui_cmd_receive();
        io_thread_ = std::thread([this]() { io_ctx_.run(); });

        RCLCPP_INFO(get_logger(), "GuiBridgeNode started");
        RCLCPP_INFO(get_logger(), "  GUI target: %s  EO:%u  IR:%u  Det:%u  VLM:%u",
            gui_host_.c_str(), eo_port, ir_port, det_port, vlm_port);
    }

    ~GuiBridgeNode()
    {
        io_ctx_.stop();
        if (io_thread_.joinable()) io_thread_.join();
    }

private:
    std::string gui_host_;

    // ────────────────────────────────────────────────
    // 이미지 → JPEG → 청크 분할 → UDP 송신
    // ────────────────────────────────────────────────
    void send_image_udp(
        const sensor_msgs::msg::Image::ConstSharedPtr & msg,
        boost::asio::ip::udp::socket & socket,
        const boost::asio::ip::udp::endpoint & endpoint,
        uint8_t stream_type,
        uint32_t & frame_id)
    {
        cv_bridge::CvImageConstPtr cv_ptr;
        try {
            cv_ptr = cv_bridge::toCvShare(msg, "bgr8");
        } catch (const cv_bridge::Exception & e) {
            RCLCPP_WARN(get_logger(), "cv_bridge failed: %s", e.what());
            return;
        }

        std::vector<uint8_t> jpeg_buf;
        std::vector<int> params = {cv::IMWRITE_JPEG_QUALITY, config::JPEG_QUALITY};
        if (!cv::imencode(".jpg", cv_ptr->image, jpeg_buf, params)) {
            RCLCPP_WARN(get_logger(), "imencode failed");
            return;
        }

        const size_t   total_size   = jpeg_buf.size();
        const uint16_t total_chunks = static_cast<uint16_t>(
            (total_size + config::CHUNK_PAYLOAD - 1) / config::CHUNK_PAYLOAD);

        std::array<uint8_t, 15> header{};
        header[0]='S'; header[1]='N'; header[2]='T'; header[3]='L';
        header[4] = stream_type;
        std::memcpy(&header[5],  &frame_id,     4);
        std::memcpy(&header[11], &total_chunks, 2);

        boost::system::error_code ec;
        for (uint16_t i = 0; i < total_chunks; ++i) {
            const size_t   offset       = i * config::CHUNK_PAYLOAD;
            const uint16_t payload_size = static_cast<uint16_t>(
                std::min(config::CHUNK_PAYLOAD, total_size - offset));

            std::memcpy(&header[9],  &i,           2);
            std::memcpy(&header[13], &payload_size, 2);

            std::array<boost::asio::const_buffer, 2> bufs = {
                boost::asio::buffer(header),
                boost::asio::buffer(jpeg_buf.data() + offset, payload_size)
            };
            socket.send_to(bufs, endpoint, 0, ec);

            if (ec) {
                RCLCPP_WARN(get_logger(), "Image send failed [chunk %u/%u]: %s",
                    i, total_chunks, ec.message().c_str());
                break;
            }
        }
        ++frame_id;
    }

    // ────────────────────────────────────────────────
    // MotorStatus → 36B 직렬화
    // ────────────────────────────────────────────────
    std::array<uint8_t, 36> serialize_motor_status(
        const sentinel_interfaces::msg::MotorStatus & msg)
    {
        std::array<uint8_t, 36> buf{};
        size_t i = 0;

        auto write_u8  = [&](uint8_t v)  { buf[i++] = v; };
        auto write_u16 = [&](uint16_t v) {
            buf[i++] = v & 0xFF;
            buf[i++] = (v >> 8) & 0xFF;
        };
        auto write_u32 = [&](uint32_t v) {
            buf[i++] = v & 0xFF;
            buf[i++] = (v >> 8)  & 0xFF;
            buf[i++] = (v >> 16) & 0xFF;
            buf[i++] = (v >> 24) & 0xFF;
        };

        write_u8 (msg.pan_moving);
        write_u8 (msg.pan_moving_status);
        write_u16(msg.pan_pwm);
        write_u16(msg.pan_current);
        write_u32(msg.pan_velocity);
        write_u32(msg.pan_position);
        write_u16(msg.pan_voltage);
        write_u8 (msg.pan_temperature);
        write_u8 (msg.pan_hw_error);

        write_u8 (msg.tilt_moving);
        write_u8 (msg.tilt_moving_status);
        write_u16(msg.tilt_pwm);
        write_u16(msg.tilt_current);
        write_u32(msg.tilt_velocity);
        write_u32(msg.tilt_position);
        write_u16(msg.tilt_voltage);
        write_u8 (msg.tilt_temperature);
        write_u8 (msg.tilt_hw_error);

        return buf;
    }

    // ────────────────────────────────────────────────
    // TrackedDetection2DArray → UDP 패킷
    // type: 0x10=EO, 0x11=IR
    // ────────────────────────────────────────────────
    void pkt_write_u16(std::vector<uint8_t> & buf, uint16_t v)
    {
        buf.push_back(v & 0xFF);
        buf.push_back((v >> 8) & 0xFF);
    }

    void pkt_write_i32(std::vector<uint8_t> & buf, int32_t v)
    {
        uint8_t tmp[4];
        std::memcpy(tmp, &v, 4);
        buf.insert(buf.end(), tmp, tmp + 4);
    }

    void pkt_write_f32(std::vector<uint8_t> & buf, float v)
    {
        uint8_t tmp[4];
        std::memcpy(tmp, &v, 4);
        buf.insert(buf.end(), tmp, tmp + 4);
    }

    void pkt_write_class_name(std::vector<uint8_t> & buf, const std::string & name)
    {
        std::array<uint8_t, 16> field{};
        size_t copy_len = std::min(name.size(), static_cast<size_t>(15));
        std::memcpy(field.data(), name.c_str(), copy_len);
        buf.insert(buf.end(), field.begin(), field.end());
    }

    std::vector<uint8_t> build_tracked_detection_packet(
        const sentinel_interfaces::msg::TrackedDetection2DArray::ConstSharedPtr & msg,
        uint8_t stream_type)
    {
        std::vector<uint8_t> pkt;
        pkt.reserve(512);

        pkt.push_back('S'); pkt.push_back('N');
        pkt.push_back('T'); pkt.push_back('L');
        pkt.push_back(stream_type);

        uint32_t fid  = msg ? msg->frame_id     : 0;
        uint32_t sec  = msg ? msg->stamp.sec    : 0;
        uint32_t nsec = msg ? msg->stamp.nanosec: 0;

        uint8_t tmp[4];
        std::memcpy(tmp, &fid,  4); pkt.insert(pkt.end(), tmp, tmp + 4);
        std::memcpy(tmp, &sec,  4); pkt.insert(pkt.end(), tmp, tmp + 4);
        std::memcpy(tmp, &nsec, 4); pkt.insert(pkt.end(), tmp, tmp + 4);

        const auto & tracks = msg
            ? msg->tracks
            : std::vector<sentinel_interfaces::msg::TrackedDetection2D>{};

        pkt_write_u16(pkt, static_cast<uint16_t>(tracks.size()));
        pkt.push_back(active_track_id_.load());

        for (const auto & t : tracks) {
            pkt_write_i32(pkt, t.track_id);
            pkt_write_i32(pkt, t.class_id);
            pkt_write_class_name(pkt, t.class_name);
            pkt_write_f32(pkt, t.score);
            pkt_write_f32(pkt, t.x1);
            pkt_write_f32(pkt, t.y1);
            pkt_write_f32(pkt, t.x2);
            pkt_write_f32(pkt, t.y2);
        }

        return pkt;
    }

    // ────────────────────────────────────────────────
    // VLMDetection2DArray → UDP 패킷
    // ────────────────────────────────────────────────
    std::vector<uint8_t> build_vlm_packet(
        const sentinel_interfaces::msg::VLMDetection2DArray::ConstSharedPtr & msg)
    {
        const auto & dets = msg->detections;
        std::vector<uint8_t> pkt;
        pkt.reserve(2 + dets.size() * 16);

        uint16_t count = static_cast<uint16_t>(dets.size());
        pkt.push_back(count & 0xFF);
        pkt.push_back((count >> 8) & 0xFF);

        for (const auto & d : dets) {
            pkt_write_i32(pkt, d.track_id);
            pkt_write_i32(pkt, d.behavior);
            pkt_write_i32(pkt, d.weapon);
            pkt_write_i32(pkt, d.job);
        }

        return pkt;
    }

    // ────────────────────────────────────────────────
    // 비동기 수신 루프 (GUI → Jetson 커맨드)
    // ────────────────────────────────────────────────
    void start_gui_cmd_receive()
    {
        gui_cmd_socket_.async_receive_from(
            boost::asio::buffer(gui_cmd_buf_),
            gui_cmd_sender_,
            [this](boost::system::error_code ec, std::size_t bytes)
            {
                if (!ec && bytes == config::CMD_BYTES) {
                    parse_and_publish_gui_cmd(gui_cmd_buf_);
                } else if (ec) {
                    RCLCPP_WARN(get_logger(), "GUI CMD error: %s", ec.message().c_str());
                } else {
                    RCLCPP_WARN(get_logger(), "GUI CMD unexpected size: %zu (expected %zu)",
                        bytes, config::CMD_BYTES);
                }
                start_gui_cmd_receive();
            });
    }

    void parse_and_publish_gui_cmd(
        const std::array<uint8_t, config::CMD_BYTES> & buf)
    {
        // [0] mode → /system/cmd_mode
        std_msgs::msg::UInt8 mode_msg;
        mode_msg.data = buf[0];
        cmd_mode_pub_->publish(mode_msg);

        // [1] tracking → /system/cmd_track
        std_msgs::msg::Bool track_msg;
        track_msg.data = (buf[1] != 0);
        cmd_track_pub_->publish(track_msg);

        // [2] track_id → /system/track_id (변경 시만 발행)
        uint8_t new_track_id = buf[2];
        if (new_track_id != last_published_track_id_.load()) {
            last_published_track_id_.store(new_track_id);
            std_msgs::msg::UInt8 track_id_msg;
            track_id_msg.data = new_track_id;
            track_id_pub_->publish(track_id_msg);
        }

        // [3] stream_select → /system/stream_select
        std_msgs::msg::UInt8 stream_msg;
        stream_msg.data = buf[3];
        stream_select_pub_->publish(stream_msg);

        // [4] btn_mask → /motor/manual_btn
        std_msgs::msg::UInt8 btn_msg;
        btn_msg.data = buf[4];
        manual_btn_pub_->publish(btn_msg);

        // [5~8] pan/tilt → MANUAL 모드 시 /motor/angle/manual
        if (buf[0] == 1) {
            if (buf[4] == 0x10) {
                // 홈 버튼 → 센터값
                sentinel_interfaces::msg::MotorAngle angle_msg;
                angle_msg.pan  = 2047;
                angle_msg.tilt = 2047;
                manual_angle_pub_->publish(angle_msg);
            } else if (buf[4] == 0) {
                uint16_t pan  = static_cast<uint16_t>(buf[5] | (buf[6] << 8));
                uint16_t tilt = static_cast<uint16_t>(buf[7] | (buf[8] << 8));
                if (pan != 0 || tilt != 0) {
                    sentinel_interfaces::msg::MotorAngle angle_msg;
                    angle_msg.pan  = pan;
                    angle_msg.tilt = tilt;
                    manual_angle_pub_->publish(angle_msg);
                }
            }
        }

        // [9] scan_step → /motor/scan_step
        std_msgs::msg::UInt16 scan_msg;
        scan_msg.data = buf[9];
        scan_step_pub_->publish(scan_msg);

        // [10] manual_step → /motor/manual_step
        std_msgs::msg::UInt16 manual_msg;
        manual_msg.data = buf[10];
        manual_step_pub_->publish(manual_msg);
    }

    // ── Boost.Asio ──
    boost::asio::io_context io_ctx_;
    boost::asio::ip::udp::socket   eo_socket_;
    boost::asio::ip::udp::socket   ir_socket_;
    boost::asio::ip::udp::socket   det_socket_;
    boost::asio::ip::udp::socket   vlm_socket_;
    boost::asio::ip::udp::socket   gui_cmd_socket_;
    boost::asio::ip::udp::socket   motor_tx_socket_;
    boost::asio::ip::udp::endpoint eo_endpoint_;
    boost::asio::ip::udp::endpoint ir_endpoint_;
    boost::asio::ip::udp::endpoint det_endpoint_;
    boost::asio::ip::udp::endpoint vlm_endpoint_;
    boost::asio::ip::udp::endpoint motor_endpoint_;
    boost::asio::ip::udp::endpoint gui_cmd_sender_;
    std::thread io_thread_;

    // ── CallbackGroup ──
    rclcpp::CallbackGroup::SharedPtr cb_group_;

    // ── 상태 ──
    std::atomic<uint8_t> active_track_id_{0xFF};
    std::atomic<uint8_t> last_published_track_id_{0xFF};

    // ── 프레임 카운터 ──
    uint32_t eo_frame_id_{0};
    uint32_t ir_frame_id_{0};

    // ── 수신 버퍼 ──
    std::array<uint8_t, config::CMD_BYTES> gui_cmd_buf_;

    // ── Subscriptions ──
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr                           eo_image_sub_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr                           ir_image_sub_;
    rclcpp::Subscription<sentinel_interfaces::msg::MotorStatus>::SharedPtr             motor_status_sub_;
    rclcpp::Subscription<sentinel_interfaces::msg::TrackedDetection2DArray>::SharedPtr eo_tracked_sub_;
    rclcpp::Subscription<sentinel_interfaces::msg::TrackedDetection2DArray>::SharedPtr ir_tracked_sub_;
    rclcpp::Subscription<sentinel_interfaces::msg::VLMDetection2DArray>::SharedPtr     vlm_sub_;
    rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr                              active_track_id_sub_;

    // ── Publishers ──
    rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr  cmd_mode_pub_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr   cmd_track_pub_;
    rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr  track_id_pub_;
    rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr  stream_select_pub_;
    rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr  manual_btn_pub_;
    rclcpp::Publisher<std_msgs::msg::UInt16>::SharedPtr scan_step_pub_;
    rclcpp::Publisher<std_msgs::msg::UInt16>::SharedPtr manual_step_pub_;
    rclcpp::Publisher<sentinel_interfaces::msg::MotorAngle>::SharedPtr manual_angle_pub_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<GuiBridgeNode>();

    rclcpp::executors::MultiThreadedExecutor executor(
        rclcpp::ExecutorOptions(), 6);
    executor.add_node(node);
    executor.spin();

    rclcpp::shutdown();
    return 0;
}