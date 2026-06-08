// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentinel_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/motor_status.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentinel_interfaces/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sentinel_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: pan_moving
  {
    out << "pan_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_moving, out);
    out << ", ";
  }

  // member: pan_moving_status
  {
    out << "pan_moving_status: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_moving_status, out);
    out << ", ";
  }

  // member: pan_pwm
  {
    out << "pan_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_pwm, out);
    out << ", ";
  }

  // member: pan_current
  {
    out << "pan_current: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_current, out);
    out << ", ";
  }

  // member: pan_velocity
  {
    out << "pan_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_velocity, out);
    out << ", ";
  }

  // member: pan_position
  {
    out << "pan_position: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_position, out);
    out << ", ";
  }

  // member: pan_voltage
  {
    out << "pan_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_voltage, out);
    out << ", ";
  }

  // member: pan_temperature
  {
    out << "pan_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_temperature, out);
    out << ", ";
  }

  // member: pan_hw_error
  {
    out << "pan_hw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_hw_error, out);
    out << ", ";
  }

  // member: tilt_moving
  {
    out << "tilt_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_moving, out);
    out << ", ";
  }

  // member: tilt_moving_status
  {
    out << "tilt_moving_status: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_moving_status, out);
    out << ", ";
  }

  // member: tilt_pwm
  {
    out << "tilt_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_pwm, out);
    out << ", ";
  }

  // member: tilt_current
  {
    out << "tilt_current: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_current, out);
    out << ", ";
  }

  // member: tilt_velocity
  {
    out << "tilt_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_velocity, out);
    out << ", ";
  }

  // member: tilt_position
  {
    out << "tilt_position: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_position, out);
    out << ", ";
  }

  // member: tilt_voltage
  {
    out << "tilt_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_voltage, out);
    out << ", ";
  }

  // member: tilt_temperature
  {
    out << "tilt_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_temperature, out);
    out << ", ";
  }

  // member: tilt_hw_error
  {
    out << "tilt_hw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_hw_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pan_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_moving, out);
    out << "\n";
  }

  // member: pan_moving_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_moving_status: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_moving_status, out);
    out << "\n";
  }

  // member: pan_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_pwm, out);
    out << "\n";
  }

  // member: pan_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_current: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_current, out);
    out << "\n";
  }

  // member: pan_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_velocity, out);
    out << "\n";
  }

  // member: pan_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_position: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_position, out);
    out << "\n";
  }

  // member: pan_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_voltage, out);
    out << "\n";
  }

  // member: pan_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_temperature, out);
    out << "\n";
  }

  // member: pan_hw_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_hw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_hw_error, out);
    out << "\n";
  }

  // member: tilt_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_moving, out);
    out << "\n";
  }

  // member: tilt_moving_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_moving_status: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_moving_status, out);
    out << "\n";
  }

  // member: tilt_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_pwm, out);
    out << "\n";
  }

  // member: tilt_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_current: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_current, out);
    out << "\n";
  }

  // member: tilt_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_velocity, out);
    out << "\n";
  }

  // member: tilt_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_position: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_position, out);
    out << "\n";
  }

  // member: tilt_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_voltage, out);
    out << "\n";
  }

  // member: tilt_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_temperature, out);
    out << "\n";
  }

  // member: tilt_hw_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_hw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_hw_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sentinel_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sentinel_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentinel_interfaces::msg::MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentinel_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentinel_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentinel_interfaces::msg::MotorStatus & msg)
{
  return sentinel_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentinel_interfaces::msg::MotorStatus>()
{
  return "sentinel_interfaces::msg::MotorStatus";
}

template<>
inline const char * name<sentinel_interfaces::msg::MotorStatus>()
{
  return "sentinel_interfaces/msg/MotorStatus";
}

template<>
struct has_fixed_size<sentinel_interfaces::msg::MotorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sentinel_interfaces::msg::MotorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sentinel_interfaces::msg::MotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
