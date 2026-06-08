# Sentinel EO/IR System

EO/IR 카메라 기반 실시간 표적 탐지 및 추적 시스템의 일부로,
ROS2 Jazzy 환경에서 동작하는 모터 제어 및 GUI 인터페이스 모듈입니다.

## 프로젝트 개요

- **플랫폼**: Jetson Thor (ROS2 Jazzy)
- **통신**: UDP (영상·명령·피드백) + ROS2 Topic
- **카메라**: EO / IR 듀얼 스트림
- **운용 모드**: SCAN / MANUAL / TRACKING

## 구조

| 폴더 | 설명 |
|------|------|
| `motor/` | Pan-Tilt 모터 제어 및 표적 추적 알고리즘 |
| `gui_bridge/` | GUI 통신 인터페이스 및 운용 모드 관리 |

## 담당 파트

### 모터 제어 및 표적 추적 (`motor/`)

| 노드 | 설명 |
|------|------|
| `pan_tilt_control_node` | GUI 명령을 수신하여 Dynamixel 모터 Pan-Tilt 제어 |
| `motor_feedback_node` | 모터 현재 위치·상태를 ROS2 토픽으로 퍼블리시 |
| `tracking_control_node` | 표적 중심 좌표와 화면 중심 간 픽셀 오차를 PID 제어로 추적 |

- Dynamixel 모터 (4096 스텝 해상도, 실시간 위치 피드백)
- Dead Zone 설정으로 미세 진동 억제
- rosbag 기반 데이터 수집 및 CSV 변환으로 노이즈 분석 (`Validation/`)
- 커스텀 ROS2 인터페이스 정의 (`sentinel_interfaces/`)

### GUI 인터페이스 및 모드 관리 (`gui_bridge/`)

| 노드 | 설명 |
|------|------|
| `gui_bridge_node` | UDP 기반 GUI ↔ ROS2 패킷 파싱 및 토픽 변환 |
| `mode_manager_node` | SCAN / MANUAL / TRACKING 운용 모드 상태 머신 관리 |

- GUI 명령 수신 및 시스템 상태 송신
- 표적 미감지 10초 경과 시 자동 SCAN 모드 복귀
- EO/IR 스트림 전환 시 감지 상태 초기화

## 기술 스택

- ROS2 Jazzy / C++
- Dynamixel SDK
- UDP 소켓 통신
- rosbag2