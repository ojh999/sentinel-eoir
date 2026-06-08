# GUI UDP 인터페이스 명세

## 네트워크 구성

| 장치 | IP |
|---|---|
| Jetson Thor | 192.168.3.143 |
| GUI PC | 192.168.2.3 |

---

## 포트 구성 요약

| 포트 | 방향 | 내용 |
|---|---|---|
| 6000 | Jetson → GUI | EO 영상 (JPEG 청크) + EO 디텍션 |
| 6001 | Jetson → GUI | IR 영상 (JPEG 청크) |
| 8000 | GUI → Jetson | 모터 커맨드 (9B) |
| 8001 | Jetson → GUI | 모터 상태 (36B) |

---

## 1. EO/IR 영상 수신 (포트 6000 / 6001)

### 패킷 헤더 (15B)

| offset | 크기 | 필드 | 값 |
|---|---|---|---|
| 0 | 4B | magic | `S` `N` `T` `L` (0x534E544C) |
| 4 | 1B | type | `0x01`=EO, `0x02`=IR |
| 5 | 4B | frame_id | uint32 LE |
| 7 | 2B | chunk_idx | uint16 LE |
| 9 | 2B | total_chunks | uint16 LE |
| 11 | 2B | payload_size | uint16 LE |
| 13 | 2B | (reserved) | |

### 청크 조립 방법

```
1. frame_id 기준으로 청크 그룹핑
2. total_chunks 개 수신 완료 시 payload 순서대로 concat
3. concat된 바이트열을 JPEG decode → 화면 표시
```

### 수신 예시 (C#)

```csharp
using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Windows.Media.Imaging;
using System.IO;

// 청크 조립용 딕셔너리
var frames = new Dictionary<uint, Dictionary<ushort, byte[]>>();
var frameTotals = new Dictionary<uint, ushort>();

var client = new UdpClient(6000); // EO: 6000, IR: 6001
var ep = new IPEndPoint(IPAddress.Any, 0);

while (true)
{
    byte[] data = client.Receive(ref ep);

    // 헤더 파싱
    byte   pktType    = data[4];
    uint   frameId    = BitConverter.ToUInt32(data, 5);
    ushort chunkIdx   = BitConverter.ToUInt16(data, 7);
    ushort totalChunks= BitConverter.ToUInt16(data, 9);
    ushort payloadSize= BitConverter.ToUInt16(data, 11);

    if (pktType != 0x01 && pktType != 0x02) continue; // 영상 패킷만

    // 청크 저장
    if (!frames.ContainsKey(frameId))
    {
        frames[frameId] = new Dictionary<ushort, byte[]>();
        frameTotals[frameId] = totalChunks;
    }

    byte[] payload = new byte[payloadSize];
    Buffer.BlockCopy(data, 15, payload, 0, payloadSize);
    frames[frameId][chunkIdx] = payload;

    // 모든 청크 수신 완료 시 이미지 조립
    if (frames[frameId].Count == totalChunks)
    {
        var jpeg = new List<byte>();
        for (ushort i = 0; i < totalChunks; i++)
            jpeg.AddRange(frames[frameId][i]);

        // JPEG → BitmapImage 변환
        var bmp = new BitmapImage();
        bmp.BeginInit();
        bmp.StreamSource = new MemoryStream(jpeg.ToArray());
        bmp.CacheOption = BitmapCacheOption.OnLoad;
        bmp.EndInit();
        bmp.Freeze();

        // UI 스레드에서 표시
        // Dispatcher.Invoke(() => ImageControl.Source = bmp);

        frames.Remove(frameId);
        frameTotals.Remove(frameId);
    }
}
```

---

## 2. 모터 상태 수신 (포트 8001, 36B)

### 패킷 구조

| offset | 크기 | 필드 | 타입 |
|---|---|---|---|
| 0 | 1B | pan_moving | uint8 |
| 1 | 1B | pan_moving_status | uint8 |
| 2 | 2B | pan_pwm | uint16 LE |
| 4 | 2B | pan_current | uint16 LE |
| 6 | 4B | pan_velocity | uint32 LE |
| 10 | 4B | pan_position | uint32 LE (0~4095) |
| 14 | 2B | pan_voltage | uint16 LE |
| 16 | 1B | pan_temperature | uint8 |
| 17 | 1B | pan_hw_error | uint8 |
| 18 | 1B | tilt_moving | uint8 |
| 19 | 1B | tilt_moving_status | uint8 |
| 20 | 2B | tilt_pwm | uint16 LE |
| 22 | 2B | tilt_current | uint16 LE |
| 24 | 4B | tilt_velocity | uint32 LE |
| 28 | 4B | tilt_position | uint32 LE (0~4095) |
| 32 | 2B | tilt_voltage | uint16 LE |
| 34 | 1B | tilt_temperature | uint8 |
| 35 | 1B | tilt_hw_error | uint8 |

### 수신 예시 (C#)

```csharp
using System.Net;
using System.Net.Sockets;

var client = new UdpClient(8001);
var ep = new IPEndPoint(IPAddress.Any, 0);

while (true)
{
    byte[] data = client.Receive(ref ep);
    if (data.Length != 36) continue;

    // PAN
    byte   panMoving      = data[0];
    byte   panMovingSt    = data[1];
    ushort panPwm         = BitConverter.ToUInt16(data, 2);
    ushort panCurrent     = BitConverter.ToUInt16(data, 4);
    uint   panVelocity    = BitConverter.ToUInt32(data, 6);
    uint   panPosition    = BitConverter.ToUInt32(data, 10);
    ushort panVoltage     = BitConverter.ToUInt16(data, 14);
    byte   panTemp        = data[16];
    byte   panHwError     = data[17];

    // TILT
    byte   tiltMoving     = data[18];
    byte   tiltMovingSt   = data[19];
    ushort tiltPwm        = BitConverter.ToUInt16(data, 20);
    ushort tiltCurrent    = BitConverter.ToUInt16(data, 22);
    uint   tiltVelocity   = BitConverter.ToUInt32(data, 24);
    uint   tiltPosition   = BitConverter.ToUInt32(data, 28);
    ushort tiltVoltage    = BitConverter.ToUInt16(data, 32);
    byte   tiltTemp       = data[34];
    byte   tiltHwError    = data[35];

    Console.WriteLine($"PAN  pos={panPosition} cur={panCurrent} temp={panTemp}");
    Console.WriteLine($"TILT pos={tiltPosition} cur={tiltCurrent} temp={tiltTemp}");
}
```

---

## 3. 모터 커맨드 송신 (포트 8000, 9B)

GUI → Jetson 방향으로 GUI가 송신해야 해요.

### 패킷 구조

| offset | 크기 | 필드 | 값 |
|---|---|---|---|
| 0 | 1B | mode | `0`=scan, `1`=manual |
| 1 | 1B | tracking | `0`=off, `1`=on |
| 2 | 1B | btn_mask | 비트마스크 |
| 3 | 2B | pan_pos | uint16 LE (0~4095) |
| 5 | 2B | tilt_pos | uint16 LE (0~4095) |
| 7 | 1B | scan_step | uint8 (1~10) |
| 8 | 1B | manual_step | uint8 (1~10) |

### btn_mask 비트 정의

| 비트 | 값 | 의미 |
|---|---|---|
| bit0 | 0x01 | PAN + (우) |
| bit1 | 0x02 | PAN - (좌) |
| bit2 | 0x04 | TILT + (업) |
| bit3 | 0x08 | TILT - (다운) |

### 송신 예시 (C#)

```csharp
using System.Net;
using System.Net.Sockets;

var client = new UdpClient();
var jetsonEp = new IPEndPoint(IPAddress.Parse("192.168.3.143"), 8000);

void SendMotorCommand(byte mode, byte tracking, byte btnMask,
                      ushort panPos, ushort tiltPos,
                      byte scanStep, byte manualStep)
{
    var pkt = new byte[9];
    pkt[0] = mode;
    pkt[1] = tracking;
    pkt[2] = btnMask;
    BitConverter.GetBytes(panPos).CopyTo(pkt, 3);
    BitConverter.GetBytes(tiltPos).CopyTo(pkt, 5);
    pkt[7] = scanStep;
    pkt[8] = manualStep;
    client.Send(pkt, pkt.Length, jetsonEp);
}

// 사용 예시 — manual 모드, pan 우측 이동
SendMotorCommand(
    mode: 1, tracking: 0, btnMask: 0x01,
    panPos: 2047, tiltPos: 2047,
    scanStep: 5, manualStep: 3
);
```

---

## 4. 디텍션 수신 (포트 6000, 가변 길이)

EO 영상과 같은 포트(6000)로 수신되므로 **type 값으로 구분** 필요해요.

| type | 의미 |
|---|---|
| `0x01` | EO 영상 청크 |
| `0x10` | EO 디텍션 패킷 |

### 패킷 구조

```
[공통 헤더 17B]
[det_count 2B] + [Detection2D × N (32B each)]
[tracked_count 2B] + [TrackedDetection2D × M (44B each)]
```

### 공통 헤더 (17B)

| offset | 크기 | 필드 |
|---|---|---|
| 0 | 4B | magic (`SNTL`) |
| 4 | 1B | type (`0x10`) |
| 5 | 4B | frame_id |
| 9 | 4B | stamp_sec |
| 13 | 4B | stamp_nsec |

### Detection2D (32B)

| offset | 크기 | 필드 |
|---|---|---|
| 0 | 16B | class_name (null padding) |
| 16 | 4B | score (float32 LE) |
| 20 | 4B | x1 (float32 LE) |
| 24 | 4B | y1 (float32 LE) |
| 28 | 4B | x2 (float32 LE) |
| 32 | 4B | y2 (float32 LE) |

### TrackedDetection2D (44B)

| offset | 크기 | 필드 |
|---|---|---|
| 0 | 4B | track_id (int32 LE) |
| 4 | 4B | class_id (int32 LE) |
| 8 | 16B | class_name (null padding) |
| 24 | 4B | score (float32 LE) |
| 28 | 4B | x1 (float32 LE) |
| 32 | 4B | y1 (float32 LE) |
| 36 | 4B | x2 (float32 LE) |
| 40 | 4B | y2 (float32 LE) |

### 파싱 예시 (C#)

```csharp
using System.Net;
using System.Net.Sockets;
using System.Text;

var client = new UdpClient(6000);
var ep = new IPEndPoint(IPAddress.Any, 0);

while (true)
{
    byte[] data = client.Receive(ref ep);
    byte pktType = data[4];

    if (pktType == 0x01)
    {
        // EO 영상 청크 처리 (위 1번 참고)
    }
    else if (pktType == 0x10)
    {
        uint frameId = BitConverter.ToUInt32(data, 5);
        int offset = 17;

        // Detection2D 블록
        ushort detCount = BitConverter.ToUInt16(data, offset); offset += 2;
        for (int i = 0; i < detCount; i++)
        {
            string className = Encoding.UTF8.GetString(data, offset, 16).TrimEnd('\0');
            float score = BitConverter.ToSingle(data, offset + 16);
            float x1    = BitConverter.ToSingle(data, offset + 20);
            float y1    = BitConverter.ToSingle(data, offset + 24);
            float x2    = BitConverter.ToSingle(data, offset + 28);
            float y2    = BitConverter.ToSingle(data, offset + 32);
            offset += 32;

            Console.WriteLine($"DET  class={className} score={score:F2} [{x1},{y1},{x2},{y2}]");
        }

        // TrackedDetection2D 블록
        ushort trackedCount = BitConverter.ToUInt16(data, offset); offset += 2;
        for (int i = 0; i < trackedCount; i++)
        {
            int    trackId   = BitConverter.ToInt32(data, offset);
            int    classId   = BitConverter.ToInt32(data, offset + 4);
            string className = Encoding.UTF8.GetString(data, offset + 8, 16).TrimEnd('\0');
            float  score     = BitConverter.ToSingle(data, offset + 24);
            float  x1        = BitConverter.ToSingle(data, offset + 28);
            float  y1        = BitConverter.ToSingle(data, offset + 32);
            float  x2        = BitConverter.ToSingle(data, offset + 36);
            float  y2        = BitConverter.ToSingle(data, offset + 40);
            offset += 44;

            Console.WriteLine($"TRACK id={trackId} class={className} score={score:F2} [{x1},{y1},{x2},{y2}]");
        }
    }
}
```