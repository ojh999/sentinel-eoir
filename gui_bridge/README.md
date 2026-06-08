## 노드 구성

### gui_bridge_node

GUI PC와 Jetson 간 모든 UDP 통신을 담당합니다.
영상·탐지결과·모터상태를 GUI로 송신하고, GUI 커맨드를 수신하여 ROS2 토픽으로 변환합니다.

#### Jetson → GUI 송신

| 데이터 | 포트 | 설명 |
|--------|------|------|
| EO 영상 | `6000` | JPEG 인코딩 후 청크 분할 송신 (60KB/청크) |
| IR 영상 | `6001` | JPEG 인코딩 후 청크 분할 송신 |
| 탐지 결과 | `6002` | EO(0x10) / IR(0x11) 타입 구분 |
| VLM 추론 결과 | `7000` | track_id / behavior / weapon / job |
| 모터 상태 | `8001` | 36B 직렬화 패킷 |

#### GUI → Jetson 수신

GUI 커맨드는 **11B 고정 패킷**으로 수신됩니다.

| 바이트 | 필드 | 설명 |
|--------|------|------|
| `[0]` | mode | 0=SCAN, 1=MANUAL |
| `[1]` | tracking | 추적 ON/OFF |
| `[2]` | track_id | 추적할 객체 ID |
| `[3]` | stream_select | 0=EO, 1=IR |
| `[4]` | btn_mask | 버튼 입력 (0x10=홈) |
| `[5~6]` | pan_pos | Pan 목표 각도 (uint16 LE) |
| `[7~8]` | tilt_pos | Tilt 목표 각도 (uint16 LE) |
| `[9]` | scan_step | 스캔 스텝 크기 |
| `[10]` | manual_step | 수동 조작 스텝 크기 |

**구독 토픽**
| 토픽 | 타입 | 설명 |
|------|------|------|
| `/camera/eo` | `sensor_msgs/Image` | EO 카메라 영상 |
| `/camera/ir` | `sensor_msgs/Image` | IR 카메라 영상 |
| `/tracks/eo` | `sentinel_interfaces/TrackedDetection2DArray` | EO 추적 결과 |
| `/tracks/ir` | `sentinel_interfaces/TrackedDetection2DArray` | IR 추적 결과 |
| `/motor/status` | `sentinel_interfaces/MotorStatus` | 모터 현재 상태 |
| `/system/active_track_id` | `std_msgs/UInt8` | 현재 추적 중인 객체 ID |
| `/vlm/eo` | `sentinel_interfaces/VLMDetection2DArray` | VLM 추론 결과 |

**퍼블리시 토픽**
| 토픽 | 타입 | 설명 |
|------|------|------|
| `/system/cmd_mode` | `std_msgs/UInt8` | 운용 모드 명령 |
| `/system/cmd_track` | `std_msgs/Bool` | 추적 ON/OFF 명령 |
| `/system/track_id` | `std_msgs/UInt8` | 추적 대상 ID (변경 시만 발행) |
| `/system/stream_select` | `std_msgs/UInt8` | EO/IR 스트림 선택 |
| `/motor/manual_btn` | `std_msgs/UInt8` | 수동 버튼 입력 |
| `/motor/angle/manual` | `sentinel_interfaces/MotorAngle` | 수동 모터 각도 |
| `/motor/scan_step` | `std_msgs/UInt16` | 스캔 스텝 크기 |
| `/motor/manual_step` | `std_msgs/UInt16` | 수동 스텝 크기 |

**파라미터**
| 파라미터 | 기본값 | 설명 |
|----------|--------|------|
| `gui_host` | `192.168.0.100` | GUI PC IP |
| `eo_gui_port` | `6000` | EO 영상 송신 포트 |
| `ir_gui_port` | `6001` | IR 영상 송신 포트 |
| `det_gui_port` | `6002` | 탐지 결과 송신 포트 |
| `vlm_gui_port` | `7000` | VLM 결과 송신 포트 |
| `motor_status_port` | `8001` | 모터 상태 송신 포트 |
| `gui_cmd_port` | `8000` | GUI 커맨드 수신 포트 |

---

### mode_manager_node

SCAN / MANUAL / TRACKING 3가지 운용 모드를 상태 머신으로 관리합니다.
100ms 주기로 모드를 평가하며, 변경 시에만 `/system/mode`를 발행합니다.

#### 모드 전환 조건

| 모드 | 값 | 진입 조건 |
|------|----|-----------|
| SCAN | 0 | 기본 상태, GUI에서 cmd_mode=0 선택 |
| MANUAL | 1 | GUI에서 cmd_mode=1 선택 |
| TRACKING | 2 | track_enabled=ON + 객체 감지됨 |

- 객체 미감지 **10초** 경과 시 자동으로 base_mode(SCAN/MANUAL)로 복귀
- EO/IR 스트림 전환 시 객체 감지 상태 초기화

**구독 토픽**
| 토픽 | 타입 | 설명 |
|------|------|------|
| `/system/cmd_mode` | `std_msgs/UInt8` | 0=SCAN, 1=MANUAL |
| `/system/cmd_track` | `std_msgs/Bool` | 추적 ON/OFF |
| `/system/stream_select` | `std_msgs/UInt8` | 0=EO, 1=IR |
| `/driver/detection` | `sentinel_interfaces/Detection` | 객체 감지 여부 |

**퍼블리시 토픽**
| 토픽 | 타입 | 설명 |
|------|------|------|
| `/system/mode` | `std_msgs/UInt8` | 현재 운용 모드 |

**파라미터**
| 파라미터 | 기본값 | 설명 |
|----------|--------|------|
| `object_timeout_s` | `10.0` | 객체 소실 판단 타임아웃 (초) |

---

## 실행

```bash
ros2 launch gui_bridge_pkg gui_bridge.launch.py
```

환경변수로 설정 변경 가능합니다.

```bash
GUI_HOST=192.168.0.200 MOTOR_RX_PORT=9000 ros2 launch gui_bridge_pkg gui_bridge.launch.py
```