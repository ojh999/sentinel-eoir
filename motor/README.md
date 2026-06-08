## 노드 구성

### pan_tilt_control_node
모터 각도 명령을 수신하여 Zybo FPGA로 UDP 전송합니다. Zybo는 이를 UART로 변환하여 OpenRB → Dynamixel 모터로 전달합니다.

**구독 토픽**
| 토픽 | 타입 | 설명 |
|------|------|------|
| `/motor/angle/set` | `sentinel_interfaces/MotorAngle` | Pan-Tilt 목표 각도 |
| `/system/mode` | `std_msgs/Int32` | 운용 모드 |

**파라미터**
| 파라미터 | 기본값 | 설명 |
|----------|--------|------|
| `target_ip` | `192.168.0.88` | Zybo FPGA IP |
| `target_port` | `6000` | Zybo UDP 수신 포트 |
| `command_resend_ms` | `50` | 명령 재전송 주기 (ms) |
| `home_pan` | `2047` | Pan 홈 포지션 (0~4095) |
| `home_tilt` | `2047` | Tilt 홈 포지션 (0~4095) |
| `pan_min` / `pan_max` | `511` / `3583` | Pan 가동 범위 |
| `tilt_min` / `tilt_max` | `1600` / `2450` | Tilt 가동 범위 |

---

### motor_feedback_node
Zybo FPGA로부터 모터 현재 위치·상태를 UDP로 수신하여 ROS2 토픽으로 퍼블리시합니다.

**퍼블리시 토픽**
| 토픽 | 타입 | 설명 |
|------|------|------|
| `/motor/status` | `sentinel_interfaces/MotorStatus` | 모터 현재 위치 및 상태 |

**파라미터**
| 파라미터 | 기본값 | 설명 |
|----------|--------|------|
| `listen_port` | `6001` | Zybo UDP 피드백 수신 포트 |
| `feedback_poll_ms` | `50` | 피드백 폴링 주기 (ms) |

---

### tracking_control_node
탐지 노드로부터 표적 중심 좌표를 수신하여 PID 제어로 Pan-Tilt 모터를 추적 제어합니다.

화면 중심과 표적 중심 사이의 픽셀 오차를 제어 입력으로 사용하며,
Dead Zone 내에서는 명령을 발행하지 않아 미세 진동을 억제합니다.

**구독 토픽**
| 토픽 | 타입 | 설명 |
|------|------|------|
| `/driver/detection` | `sentinel_interfaces/TrackedDetection2DArray` | 표적 중심 좌표 |
| `/system/mode` | `std_msgs/Int32` | 운용 모드 (TRACKING일 때만 동작) |

**퍼블리시 토픽**
| 토픽 | 타입 | 설명 |
|------|------|------|
| `/motor/angle/set` | `sentinel_interfaces/MotorAngle` | PID 출력 기반 목표 각도 |

**파라미터**
| 파라미터 | 기본값 | 설명 |
|----------|--------|------|
| `kp_pan` / `kp_tilt` | `0.27` / `0.5` | 비례 게인 |
| `ki_pan` / `ki_tilt` | `0.001` / `0.001` | 적분 게인 |
| `kd_pan` / `kd_tilt` | `0.01` / `0.01` | 미분 게인 |
| `deadband_px` | `20` | Dead Zone 반경 (픽셀) |
| `windup_limit` | `500.0` | 적분 와인드업 제한 |
| `cam_cx` / `cam_cy` | `640.0` / `360.0` | 카메라 화면 중심 좌표 |
| `pan_min` / `pan_max` | `511` / `3583` | Pan 출력 범위 |
| `tilt_min` / `tilt_max` | `1706` / `2388` | Tilt 출력 범위 |

---

## Validation

`Validation/` 폴더에는 rosbag으로 수집한 추적 데이터를 CSV로 변환한 결과가 포함되어 있습니다.
칼만 필터 적용 여부 검토를 위한 노이즈 분석에 활용되었습니다.

| 파일 | 설명 |
|------|------|
| `bag_to_csv.py` | rosbag → CSV 변환 스크립트 |
| `human_detection.csv` | 표적 탐지 좌표 로그 |
| `human_motor.csv` | 모터 피드백 로그 |

---

## 실행

```bash
ros2 launch sentinel_motor pan_tilt_control.launch.py
```