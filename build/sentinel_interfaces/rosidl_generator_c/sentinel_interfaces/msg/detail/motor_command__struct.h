// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentinel_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/motor_command.h"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorCommand in the package sentinel_interfaces.
/**
  * MotorCommand.msg
  *  GUI → Jetson → 모터
 */
typedef struct sentinel_interfaces__msg__MotorCommand
{
  /// 0=scan, 1=manual
  uint8_t mode;
  /// 0=off, 1=on
  uint8_t tracking;
  uint8_t btn_mask;
  /// 0~4095
  uint16_t pan_pos;
  /// 0~4095
  uint16_t tilt_pos;
  uint8_t scan_step;
  uint8_t manual_step;
} sentinel_interfaces__msg__MotorCommand;

// Struct for a sequence of sentinel_interfaces__msg__MotorCommand.
typedef struct sentinel_interfaces__msg__MotorCommand__Sequence
{
  sentinel_interfaces__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentinel_interfaces__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
