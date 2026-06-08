// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentinel_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/motor_command.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentinel_interfaces/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sentinel_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: tracking
  {
    out << "tracking: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking, out);
    out << ", ";
  }

  // member: btn_mask
  {
    out << "btn_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_mask, out);
    out << ", ";
  }

  // member: pan_pos
  {
    out << "pan_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_pos, out);
    out << ", ";
  }

  // member: tilt_pos
  {
    out << "tilt_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_pos, out);
    out << ", ";
  }

  // member: scan_step
  {
    out << "scan_step: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_step, out);
    out << ", ";
  }

  // member: manual_step
  {
    out << "manual_step: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_step, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: tracking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking, out);
    out << "\n";
  }

  // member: btn_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_mask, out);
    out << "\n";
  }

  // member: pan_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_pos, out);
    out << "\n";
  }

  // member: tilt_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_pos, out);
    out << "\n";
  }

  // member: scan_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_step: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_step, out);
    out << "\n";
  }

  // member: manual_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_step: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_step, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCommand & msg, bool use_flow_style = false)
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
  const sentinel_interfaces::msg::MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentinel_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentinel_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentinel_interfaces::msg::MotorCommand & msg)
{
  return sentinel_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentinel_interfaces::msg::MotorCommand>()
{
  return "sentinel_interfaces::msg::MotorCommand";
}

template<>
inline const char * name<sentinel_interfaces::msg::MotorCommand>()
{
  return "sentinel_interfaces/msg/MotorCommand";
}

template<>
struct has_fixed_size<sentinel_interfaces::msg::MotorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sentinel_interfaces::msg::MotorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sentinel_interfaces::msg::MotorCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
