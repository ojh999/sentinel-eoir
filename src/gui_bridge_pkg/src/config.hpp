#pragma once
#include <cstdint>
#include <cstddef>

// ============================================================
//  GuiBridgeNode 설정 파일
//  네트워크 주소 / 포트 / 토픽명 / 인코딩 파라미터를 여기서 관리
// ============================================================

namespace config
{

// ── 네트워크 ──────────────────────────────────────────────
inline constexpr const char * GUI_HOST        = "192.168.0.100";

// Jetson → GUI (송신 포트)
inline constexpr uint16_t EO_GUI_PORT         = 6000;   // EO 영상
inline constexpr uint16_t IR_GUI_PORT         = 6001;   // IR 영상
inline constexpr uint16_t DET_GUI_PORT        = 6002;   // 탐지 결과 (EO=0x10 / IR=0x11 type으로 구분)
inline constexpr uint16_t VLM_GUI_PORT        = 7000;   // VLM 추론 결과
inline constexpr uint16_t MOTOR_STATUS_PORT   = 8001;   // 모터 상태 (36B)

// GUI → Jetson (수신 포트)
inline constexpr uint16_t MOTOR_RX_PORT       = 8000;   // GUI 커맨드 패킷 (11B)

// ── ROS2 토픽명 ───────────────────────────────────────────
inline constexpr const char * EO_IMAGE_TOPIC     = "/camera/eo";
inline constexpr const char * IR_IMAGE_TOPIC     = "/camera/ir";
inline constexpr const char * EO_TRACK_TOPIC     = "/tracks/eo";
inline constexpr const char * IR_TRACK_TOPIC     = "/tracks/ir";
inline constexpr const char * MOTOR_STATUS_TOPIC = "/motor/status";

// ── 영상 인코딩 ───────────────────────────────────────────
inline constexpr int    JPEG_QUALITY  = 85;
inline constexpr size_t CHUNK_PAYLOAD = 60000;  // UDP 청크 크기 (bytes)

// ── 프로토콜 상수 ─────────────────────────────────────────
// GUI → Jetson 커맨드 패킷 구조 (11B)
// [0] mode  [1] tracking  [2] track_id  [3] stream_select
// [4] btn_mask  [5~6] pan_pos  [7~8] tilt_pos
// [9] scan_step  [10] manual_step
inline constexpr size_t CMD_BYTES = 11;

} // namespace config