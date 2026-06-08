#MotorCommand.msg
# GUI → Jetson → 모터
uint8  mode          # 0=scan, 1=manual
uint8  tracking      # 0=off, 1=on
uint8 track_id       # 0~254: object id, 0xff = auto
uint8  btn_mask
uint16 pan_pos       # 0~4095
uint16 tilt_pos      # 0~4095
uint8  scan_step
uint8  manual_step