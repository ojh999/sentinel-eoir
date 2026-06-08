// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentinel_interfaces:msg/FrameSize.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/frame_size.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__FRAME_SIZE__BUILDER_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__FRAME_SIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentinel_interfaces/msg/detail/frame_size__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentinel_interfaces
{

namespace msg
{

namespace builder
{

class Init_FrameSize_frame_h
{
public:
  explicit Init_FrameSize_frame_h(::sentinel_interfaces::msg::FrameSize & msg)
  : msg_(msg)
  {}
  ::sentinel_interfaces::msg::FrameSize frame_h(::sentinel_interfaces::msg::FrameSize::_frame_h_type arg)
  {
    msg_.frame_h = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentinel_interfaces::msg::FrameSize msg_;
};

class Init_FrameSize_frame_w
{
public:
  Init_FrameSize_frame_w()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FrameSize_frame_h frame_w(::sentinel_interfaces::msg::FrameSize::_frame_w_type arg)
  {
    msg_.frame_w = std::move(arg);
    return Init_FrameSize_frame_h(msg_);
  }

private:
  ::sentinel_interfaces::msg::FrameSize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentinel_interfaces::msg::FrameSize>()
{
  return sentinel_interfaces::msg::builder::Init_FrameSize_frame_w();
}

}  // namespace sentinel_interfaces

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__FRAME_SIZE__BUILDER_HPP_
