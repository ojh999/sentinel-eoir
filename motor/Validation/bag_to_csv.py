import sqlite3
import csv
import struct
import math
import sys
from pathlib import Path

# ── 설정 ──────────────────────────────────────────
CAM_CX = 640.0
CAM_CY = 360.0
TOPIC_DETECTION  = "/driver/detection"
TOPIC_MOTOR      = "/motor/angle/get"

MOTOR_CENTER     = 2047
MOTOR_RESOLUTION = 4096
DEG_PER_STEP     = 360.0 / MOTOR_RESOLUTION   # ≈ 0.0879도
# ──────────────────────────────────────────────────

def parse_detection(data: bytes):
    """
    sentinel_interfaces/msg/Detection
      float32 cx, float32 cy
    CDR 헤더 4바이트 스킵
    """
    offset = 4
    cx = struct.unpack_from('<f', data, offset)[0]
    cy = struct.unpack_from('<f', data, offset + 4)[0]
    return cx, cy

def parse_motor(data: bytes):
    """
    sentinel_interfaces/msg/MotorAngle
      uint16 pan, uint16 tilt
    CDR 헤더 4바이트 스킵
    """
    offset = 4
    pan  = struct.unpack_from('<H', data, offset)[0]
    tilt = struct.unpack_from('<H', data, offset + 2)[0]
    return pan, tilt

def steps_to_deg(steps: int) -> float:
    return (steps - MOTOR_CENTER) * DEG_PER_STEP

def bag_to_csv(bag_path: str, out_detection: str, out_motor: str):
    db_path = Path(bag_path)
    if not db_path.exists():
        print(f"[ERROR] 파일 없음: {db_path}")
        sys.exit(1)

    conn = sqlite3.connect(str(db_path))
    cursor = conn.cursor()

    cursor.execute("SELECT id, name FROM topics")
    topics = {row[1]: row[0] for row in cursor.fetchall()}
    print("녹화된 토픽:", list(topics.keys()))

    # ── Detection CSV ───────────────────────────────
    if TOPIC_DETECTION in topics:
        topic_id = topics[TOPIC_DETECTION]
        cursor.execute(
            "SELECT timestamp, data FROM messages WHERE topic_id=? ORDER BY timestamp",
            (topic_id,)
        )
        messages = cursor.fetchall()
        print(f"[Detection] 메시지 수: {len(messages)}")

        with open(out_detection, "w", newline="") as f:
            writer = csv.writer(f)
            writer.writerow([
                "timestamp_ns", "timestamp_s",
                "cx", "cy",
                "error_x", "error_y", "error_px",
            ])
            for ts, data in messages:
                try:
                    cx, cy = parse_detection(data)
                    ex = cx - CAM_CX
                    ey = cy - CAM_CY
                    ep = math.sqrt(ex**2 + ey**2)
                    writer.writerow([
                        ts, round(ts / 1e9, 6),
                        round(cx, 2), round(cy, 2),
                        round(ex, 2), round(ey, 2), round(ep, 2),
                    ])
                except Exception as e:
                    print(f"  [WARN] 파싱 실패 ts={ts}: {e}")
        print(f"  → 저장: {out_detection}")
    else:
        print(f"[WARN] '{TOPIC_DETECTION}' 토픽 없음, 스킵")

    # ── Motor CSV ───────────────────────────────────
    if TOPIC_MOTOR in topics:
        topic_id = topics[TOPIC_MOTOR]
        cursor.execute(
            "SELECT timestamp, data FROM messages WHERE topic_id=? ORDER BY timestamp",
            (topic_id,)
        )
        messages = cursor.fetchall()
        print(f"[Motor] 메시지 수: {len(messages)}")

        with open(out_motor, "w", newline="") as f:
            writer = csv.writer(f)
            writer.writerow([
                "timestamp_ns", "timestamp_s",
                "pan_step", "tilt_step",
                "pan_deg", "tilt_deg",
            ])
            for ts, data in messages:
                try:
                    pan, tilt = parse_motor(data)
                    writer.writerow([
                        ts, round(ts / 1e9, 6),
                        pan, tilt,
                        round(steps_to_deg(pan),  3),
                        round(steps_to_deg(tilt), 3),
                    ])
                except Exception as e:
                    print(f"  [WARN] 파싱 실패 ts={ts}: {e}")
        print(f"  → 저장: {out_motor}")
    else:
        print(f"[WARN] '{TOPIC_MOTOR}' 토픽 없음, 스킵")

    conn.close()
    print("완료!")


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("사용법: python3 bag_to_csv.py <파일.db3> [detection.csv] [motor.csv]")
        print("예시:   python3 bag_to_csv.py tracking_test/tracking_test_0.db3")
        sys.exit(1)

    bag      = sys.argv[1]
    out_det  = sys.argv[2] if len(sys.argv) > 2 else "detection_result.csv"
    out_mot  = sys.argv[3] if len(sys.argv) > 3 else "motor_result.csv"
    bag_to_csv(bag, out_det, out_mot)