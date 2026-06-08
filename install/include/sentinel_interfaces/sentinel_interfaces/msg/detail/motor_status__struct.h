// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentinel_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/motor_status.h"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorStatus in the package sentinel_interfaces.
/**
  * MotorStatus.msg
  *  pan
 */
typedef struct sentinel_interfaces__msg__MotorStatus
{
  uint8_t pan_moving;
  uint8_t pan_moving_status;
  uint16_t pan_pwm;
  uint16_t pan_current;
  uint32_t pan_velocity;
  uint32_t pan_position;
  uint16_t pan_voltage;
  uint8_t pan_temperature;
  uint8_t pan_hw_error;
  /// tilt
  uint8_t tilt_moving;
  uint8_t tilt_moving_status;
  uint16_t tilt_pwm;
  uint16_t tilt_current;
  uint32_t tilt_velocity;
  uint32_t tilt_position;
  uint16_t tilt_voltage;
  uint8_t tilt_temperature;
  uint8_t tilt_hw_error;
} sentinel_interfaces__msg__MotorStatus;

// Struct for a sequence of sentinel_interfaces__msg__MotorStatus.
typedef struct sentinel_interfaces__msg__MotorStatus__Sequence
{
  sentinel_interfaces__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentinel_interfaces__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
