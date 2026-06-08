cmake_minimum_required(VERSION 3.8)
project(sentinel_interfaces)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Detection.msg"
  "msg/FrameInfo.msg"
  "msg/FrameSize.msg"
  
  "msg/MotorCommand.msg"
  "msg/MotorStatus.msg"
  "msg/MotorAngle.msg"
  "msg/TrackedDetection2D.msg"
  "msg/TrackedDetection2DArray.msg"
  "msg/VLMDetection2D.msg"
  "msg/VLMDetection2DArray.msg"
  "msg/VideoRxStatus.msg"
  "msg/YoloStatus.msg"
  "srv/SetBoolFlag.srv"
  "srv/SetThreshold.srv"
  DEPENDENCIES builtin_interfaces
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
