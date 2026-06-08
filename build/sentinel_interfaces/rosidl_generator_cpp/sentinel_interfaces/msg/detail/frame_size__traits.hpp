// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentinel_interfaces:msg/FrameSize.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/frame_size.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__FRAME_SIZE__TRAITS_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__FRAME_SIZE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentinel_interfaces/msg/detail/frame_size__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sentinel_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FrameSize & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_w
  {
    out << "frame_w: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_w, out);
    out << ", ";
  }

  // member: frame_h
  {
    out << "frame_h: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_h, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FrameSize & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_w: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_w, out);
    out << "\n";
  }

  // member: frame_h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_h: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_h, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FrameSize & msg, bool use_flow_style = false)
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
  const sentinel_interfaces::msg::FrameSize & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentinel_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentinel_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentinel_interfaces::msg::FrameSize & msg)
{
  return sentinel_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentinel_interfaces::msg::FrameSize>()
{
  return "sentinel_interfaces::msg::FrameSize";
}

template<>
inline const char * name<sentinel_interfaces::msg::FrameSize>()
{
  return "sentinel_interfaces/msg/FrameSize";
}

template<>
struct has_fixed_size<sentinel_interfaces::msg::FrameSize>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sentinel_interfaces::msg::FrameSize>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sentinel_interfaces::msg::FrameSize>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__FRAME_SIZE__TRAITS_HPP_
