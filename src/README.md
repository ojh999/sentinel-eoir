# VLM Package

`vlm_node`는 카메라 이미지와 추적 detection을 구독하고, 사람 객체에 대해서만 VLM 추론을 반복 실행한 뒤 결과를 `/vlm/eo`로 발행합니다.

## 토픽

구독 토픽:

- `/camera/eo/raw` (`sensor_msgs/msg/Image`)
- `/tracks/eo` (기본 detection 토픽, 메시지 타입은 자동 감지)

발행 토픽:

- `/vlm/eo` (`sentinel_interfaces/msg/VLMDetection2DArray`)

## 출력 메시지

`/vlm/eo`는 `sentinel_interfaces/msg/VLMDetection2DArray` 타입으로 발행됩니다.

```text
builtin_interfaces/Time stamp
uint32 frame_id
VLMDetection2D[] detections
```

각 `VLMDetection2D`는 원본 detection 정보와 VLM 분류 결과를 함께 담습니다.

```text
int32 track_id
int32 class_id
string class_name
float32 score
float32 x1
float32 y1
float32 x2
float32 y2
int32 behavior
int32 weapon
int32 job
string result_json
float32 inference_time_ms
float32 image_sync_delta_sec
```

`x1`, `y1`, `x2`, `y2`는 padded crop 좌표가 아니라 원본 detection bbox 좌표입니다. `result_json`은 디버깅을 위해 VLM이 반환한 정규화 JSON 문자열을 그대로 보관합니다.

## Enum 값

`behavior` 값:

| 값 | 이름 | 의미 |
| --- | --- | --- |
| 0 | `BEHAVIOR_UNKNOWN` | 알 수 없음 / 매핑 실패 |
| 1 | `BEHAVIOR_STANDING` | 서있음 |
| 2 | `BEHAVIOR_APPROACHING` | 접근중 |
| 3 | `BEHAVIOR_SHOOTING` | 사격중 |
| 4 | `BEHAVIOR_AIMING` | 조준중 |

`weapon` 값:

| 값 | 이름 | 의미 |
| --- | --- | --- |
| 0 | `WEAPON_UNKNOWN` | 알 수 없음 / 매핑 실패 |
| 1 | `WEAPON_NONE` | 무기 없음 |
| 2 | `WEAPON_GUN` | 총 |
| 3 | `WEAPON_KNIFE` | 칼 |

`job` 값:

| 값 | 이름 | 의미 |
| --- | --- | --- |
| 0 | `J2일반인 |
| 2 | `JOB_SOLDIER` | 군인 |

## 사람 객체 필터링

VLM 추론은 사람 detection에 대해서만 실행됩니다. 기본값은 다음과 같습니다.

```text
person_class_ids: [0]
person_class_names: [person, 사람]
```

즉 YOLO COCO 기준 `class_id == 0`이거나 `class_name`이 `person` 또는 `사람`이면 VLM 대상입니다.

## 이미지 동기화와 저장 이미지

노드는 이미지 버퍼를 유지하고, detection timestamp와 가장 가까운 이미지를 선택해서 crop합니다.

저장되는 결과 이미지는 crop 이미지가 아니라 원본 프레임 전체에 bbox를 그린 이미지입니다.

- 초록색 박스: 원본 detection bbox
- 노란색 박스: VLM 입력에 사용한 padded crop 영역

## 주요 파라미터

| 파라미터 | 기본값 | 설명 |
| --- | --- | --- |
| `image_topic` | `/camera/eo/raw` | 이미지 구독 토픽 |
| `detection_topic` | `/tracks/eo` | detection 구독 토픽 |
| `vlm_topic` | `/vlm/eo` | VLM 결과 발행 토픽 |
| `person_class_ids` | `[0]` | 사람으로 볼 class id 목록 |
| `person_class_names` | `[person, 사람]` | 사람으로 볼 class name 목록 |
| `crop_padding_ratio` | `0.10` | bbox 크기 대비 crop padding 비율 |
| `crop_padding_pixels` | `0` | 최소 crop padding 픽셀 |
| `image_buffer_size` | `30` | timestamp 동기화용 이미지 버퍼 크기 |
| `max_image_sync_delta_sec` | `0.20` | 허용할 image-detection 최대 시간 차이 |
| `save_result_images` | `True` | 결과 이미지 저장 여부 |
| `result_image_dir` | `./vlm_results` | 결과 이미지 저장 경로 |

## Record Node

`record_node`는 `/tracks/eo`에 등장하는 track ID를 기준으로 원본 카메라 영상을 저장합니다. 저장되는 영상은 crop 이미지가 아니라 `/camera/eo/raw` 원본 프레임 전체입니다.

동작 방식:

- `/camera/eo/raw`를 구독해서 최신 원본 프레임을 받습니다.
- `/tracks/eo`에 새 `track_id`가 나타나면 해당 ID의 영상 파일을 엽니다.
- track이 유지되는 동안 원본 프레임 전체를 계속 저장합니다.
- 해당 ID가 `track_timeout_sec` 동안 다시 보이지 않으면 파일을 닫습니다.

기본 저장 파일 이름:

```text
track_<track_id>_<YYYYMMDD_HHMMSS>.mp4
```

주요 파라미터:

| 파라미터 | 기본값 | 설명 |
| --- | --- | --- |
| `image_topic` | `/camera/eo/raw` | 저장할 원본 이미지 토픽 |
| `track_topic` | `/tracks/eo` | track ID를 읽을 토픽 |
| `track_msg_type` | 빈 문자열 | track 메시지 타입 수동 지정. 비워두면 자동 감지 |
| `output_dir` | `./track_recordings` | 영상 저장 경로 |
| `fps` | `30.0` | 저장 영상 FPS |
| `codec` | `mp4v` | OpenCV VideoWriter codec |
| `file_extension` | `.mp4` | 저장 파일 확장자 |
| `track_timeout_sec` | `1.0` | ID가 사라졌다고 판단하고 파일을 닫는 시간 |
| `write_latest_image_on_track` | `False` | track 메시지를 받을 때 최신 프레임을 즉시 한 번 더 쓸지 여부 |

실행 예시:

```bash
ros2 run vlm_package record_node --ros-args \
  -p image_topic:=/camera/eo/raw \
  -p track_topic:=/tracks/eo \
  -p output_dir:=./track_recordings \
  -p fps:=30.0
```

`/track/eo`처럼 다른 토픽을 쓰고 있다면 `track_topic`만 바꾸면 됩니다.

```bash
ros2 run vlm_package record_node --ros-args -p track_topic:=/track/eo
```

## 빌드

인터페이스 메시지를 변경했으므로 `sentinel_interfaces`와 `vlm_package`를 같이 빌드해야 합니다.

```bash
colcon build --packages-select sentinel_interfaces vlm_package
source install/setup.bash
```

## 실행 예시

```bash
ros2 run vlm_package vlm_node --ros-args \
  -p image_topic:=/camera/eo/raw \
  -p detection_topic:=/tracks/eo \
  -p vlm_topic:=/vlm/eo \
  -p crop_padding_ratio:=0.2
```

## 출력 확인

```bash
ros2 interface show sentinel_interfaces/msg/VLMDetection2DArray
ros2 interface show sentinel_interfaces/msg/VLMDetection2D
ros2 topic echo /vlm/eo
```
