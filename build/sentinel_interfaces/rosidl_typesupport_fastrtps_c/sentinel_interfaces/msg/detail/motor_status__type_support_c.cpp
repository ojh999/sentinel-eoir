// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sentinel_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice
#include "sentinel_interfaces/msg/detail/motor_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sentinel_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sentinel_interfaces/msg/detail/motor_status__struct.h"
#include "sentinel_interfaces/msg/detail/motor_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MotorStatus__ros_msg_type = sentinel_interfaces__msg__MotorStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
bool cdr_serialize_sentinel_interfaces__msg__MotorStatus(
  const sentinel_interfaces__msg__MotorStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pan_moving
  {
    cdr << ros_message->pan_moving;
  }

  // Field name: pan_moving_status
  {
    cdr << ros_message->pan_moving_status;
  }

  // Field name: pan_pwm
  {
    cdr << ros_message->pan_pwm;
  }

  // Field name: pan_current
  {
    cdr << ros_message->pan_current;
  }

  // Field name: pan_velocity
  {
    cdr << ros_message->pan_velocity;
  }

  // Field name: pan_position
  {
    cdr << ros_message->pan_position;
  }

  // Field name: pan_voltage
  {
    cdr << ros_message->pan_voltage;
  }

  // Field name: pan_temperature
  {
    cdr << ros_message->pan_temperature;
  }

  // Field name: pan_hw_error
  {
    cdr << ros_message->pan_hw_error;
  }

  // Field name: tilt_moving
  {
    cdr << ros_message->tilt_moving;
  }

  // Field name: tilt_moving_status
  {
    cdr << ros_message->tilt_moving_status;
  }

  // Field name: tilt_pwm
  {
    cdr << ros_message->tilt_pwm;
  }

  // Field name: tilt_current
  {
    cdr << ros_message->tilt_current;
  }

  // Field name: tilt_velocity
  {
    cdr << ros_message->tilt_velocity;
  }

  // Field name: tilt_position
  {
    cdr << ros_message->tilt_position;
  }

  // Field name: tilt_voltage
  {
    cdr << ros_message->tilt_voltage;
  }

  // Field name: tilt_temperature
  {
    cdr << ros_message->tilt_temperature;
  }

  // Field name: tilt_hw_error
  {
    cdr << ros_message->tilt_hw_error;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
bool cdr_deserialize_sentinel_interfaces__msg__MotorStatus(
  eprosima::fastcdr::Cdr & cdr,
  sentinel_interfaces__msg__MotorStatus * ros_message)
{
  // Field name: pan_moving
  {
    cdr >> ros_message->pan_moving;
  }

  // Field name: pan_moving_status
  {
    cdr >> ros_message->pan_moving_status;
  }

  // Field name: pan_pwm
  {
    cdr >> ros_message->pan_pwm;
  }

  // Field name: pan_current
  {
    cdr >> ros_message->pan_current;
  }

  // Field name: pan_velocity
  {
    cdr >> ros_message->pan_velocity;
  }

  // Field name: pan_position
  {
    cdr >> ros_message->pan_position;
  }

  // Field name: pan_voltage
  {
    cdr >> ros_message->pan_voltage;
  }

  // Field name: pan_temperature
  {
    cdr >> ros_message->pan_temperature;
  }

  // Field name: pan_hw_error
  {
    cdr >> ros_message->pan_hw_error;
  }

  // Field name: tilt_moving
  {
    cdr >> ros_message->tilt_moving;
  }

  // Field name: tilt_moving_status
  {
    cdr >> ros_message->tilt_moving_status;
  }

  // Field name: tilt_pwm
  {
    cdr >> ros_message->tilt_pwm;
  }

  // Field name: tilt_current
  {
    cdr >> ros_message->tilt_current;
  }

  // Field name: tilt_velocity
  {
    cdr >> ros_message->tilt_velocity;
  }

  // Field name: tilt_position
  {
    cdr >> ros_message->tilt_position;
  }

  // Field name: tilt_voltage
  {
    cdr >> ros_message->tilt_voltage;
  }

  // Field name: tilt_temperature
  {
    cdr >> ros_message->tilt_temperature;
  }

  // Field name: tilt_hw_error
  {
    cdr >> ros_message->tilt_hw_error;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
size_t get_serialized_size_sentinel_interfaces__msg__MotorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorStatus__ros_msg_type * ros_message = static_cast<const _MotorStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pan_moving
  {
    size_t item_size = sizeof(ros_message->pan_moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_moving_status
  {
    size_t item_size = sizeof(ros_message->pan_moving_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_pwm
  {
    size_t item_size = sizeof(ros_message->pan_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_current
  {
    size_t item_size = sizeof(ros_message->pan_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_velocity
  {
    size_t item_size = sizeof(ros_message->pan_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_position
  {
    size_t item_size = sizeof(ros_message->pan_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_voltage
  {
    size_t item_size = sizeof(ros_message->pan_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_temperature
  {
    size_t item_size = sizeof(ros_message->pan_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_hw_error
  {
    size_t item_size = sizeof(ros_message->pan_hw_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_moving
  {
    size_t item_size = sizeof(ros_message->tilt_moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_moving_status
  {
    size_t item_size = sizeof(ros_message->tilt_moving_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_pwm
  {
    size_t item_size = sizeof(ros_message->tilt_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_current
  {
    size_t item_size = sizeof(ros_message->tilt_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_velocity
  {
    size_t item_size = sizeof(ros_message->tilt_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_position
  {
    size_t item_size = sizeof(ros_message->tilt_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_voltage
  {
    size_t item_size = sizeof(ros_message->tilt_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_temperature
  {
    size_t item_size = sizeof(ros_message->tilt_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_hw_error
  {
    size_t item_size = sizeof(ros_message->tilt_hw_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
size_t max_serialized_size_sentinel_interfaces__msg__MotorStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: pan_moving
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pan_moving_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pan_pwm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: pan_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: pan_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pan_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pan_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: pan_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pan_hw_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tilt_moving
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tilt_moving_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tilt_pwm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: tilt_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: tilt_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tilt_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tilt_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: tilt_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tilt_hw_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sentinel_interfaces__msg__MotorStatus;
    is_plain =
      (
      offsetof(DataType, tilt_hw_error) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
bool cdr_serialize_key_sentinel_interfaces__msg__MotorStatus(
  const sentinel_interfaces__msg__MotorStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pan_moving
  {
    cdr << ros_message->pan_moving;
  }

  // Field name: pan_moving_status
  {
    cdr << ros_message->pan_moving_status;
  }

  // Field name: pan_pwm
  {
    cdr << ros_message->pan_pwm;
  }

  // Field name: pan_current
  {
    cdr << ros_message->pan_current;
  }

  // Field name: pan_velocity
  {
    cdr << ros_message->pan_velocity;
  }

  // Field name: pan_position
  {
    cdr << ros_message->pan_position;
  }

  // Field name: pan_voltage
  {
    cdr << ros_message->pan_voltage;
  }

  // Field name: pan_temperature
  {
    cdr << ros_message->pan_temperature;
  }

  // Field name: pan_hw_error
  {
    cdr << ros_message->pan_hw_error;
  }

  // Field name: tilt_moving
  {
    cdr << ros_message->tilt_moving;
  }

  // Field name: tilt_moving_status
  {
    cdr << ros_message->tilt_moving_status;
  }

  // Field name: tilt_pwm
  {
    cdr << ros_message->tilt_pwm;
  }

  // Field name: tilt_current
  {
    cdr << ros_message->tilt_current;
  }

  // Field name: tilt_velocity
  {
    cdr << ros_message->tilt_velocity;
  }

  // Field name: tilt_position
  {
    cdr << ros_message->tilt_position;
  }

  // Field name: tilt_voltage
  {
    cdr << ros_message->tilt_voltage;
  }

  // Field name: tilt_temperature
  {
    cdr << ros_message->tilt_temperature;
  }

  // Field name: tilt_hw_error
  {
    cdr << ros_message->tilt_hw_error;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
size_t get_serialized_size_key_sentinel_interfaces__msg__MotorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorStatus__ros_msg_type * ros_message = static_cast<const _MotorStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pan_moving
  {
    size_t item_size = sizeof(ros_message->pan_moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_moving_status
  {
    size_t item_size = sizeof(ros_message->pan_moving_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_pwm
  {
    size_t item_size = sizeof(ros_message->pan_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_current
  {
    size_t item_size = sizeof(ros_message->pan_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_velocity
  {
    size_t item_size = sizeof(ros_message->pan_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_position
  {
    size_t item_size = sizeof(ros_message->pan_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_voltage
  {
    size_t item_size = sizeof(ros_message->pan_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_temperature
  {
    size_t item_size = sizeof(ros_message->pan_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pan_hw_error
  {
    size_t item_size = sizeof(ros_message->pan_hw_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_moving
  {
    size_t item_size = sizeof(ros_message->tilt_moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_moving_status
  {
    size_t item_size = sizeof(ros_message->tilt_moving_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_pwm
  {
    size_t item_size = sizeof(ros_message->tilt_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_current
  {
    size_t item_size = sizeof(ros_message->tilt_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_velocity
  {
    size_t item_size = sizeof(ros_message->tilt_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_position
  {
    size_t item_size = sizeof(ros_message->tilt_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_voltage
  {
    size_t item_size = sizeof(ros_message->tilt_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_temperature
  {
    size_t item_size = sizeof(ros_message->tilt_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt_hw_error
  {
    size_t item_size = sizeof(ros_message->tilt_hw_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
size_t max_serialized_size_key_sentinel_interfaces__msg__MotorStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: pan_moving
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pan_moving_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pan_pwm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: pan_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: pan_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pan_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pan_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: pan_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pan_hw_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tilt_moving
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tilt_moving_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tilt_pwm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: tilt_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: tilt_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tilt_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tilt_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: tilt_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tilt_hw_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sentinel_interfaces__msg__MotorStatus;
    is_plain =
      (
      offsetof(DataType, tilt_hw_error) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MotorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const sentinel_interfaces__msg__MotorStatus * ros_message = static_cast<const sentinel_interfaces__msg__MotorStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_sentinel_interfaces__msg__MotorStatus(ros_message, cdr);
}

static bool _MotorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  sentinel_interfaces__msg__MotorStatus * ros_message = static_cast<sentinel_interfaces__msg__MotorStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_sentinel_interfaces__msg__MotorStatus(cdr, ros_message);
}

static uint32_t _MotorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sentinel_interfaces__msg__MotorStatus(
      untyped_ros_message, 0));
}

static size_t _MotorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sentinel_interfaces__msg__MotorStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotorStatus = {
  "sentinel_interfaces::msg",
  "MotorStatus",
  _MotorStatus__cdr_serialize,
  _MotorStatus__cdr_deserialize,
  _MotorStatus__get_serialized_size,
  _MotorStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MotorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorStatus,
  get_message_typesupport_handle_function,
  &sentinel_interfaces__msg__MotorStatus__get_type_hash,
  &sentinel_interfaces__msg__MotorStatus__get_type_description,
  &sentinel_interfaces__msg__MotorStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sentinel_interfaces, msg, MotorStatus)() {
  return &_MotorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
