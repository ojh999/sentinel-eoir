// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentinel_interfaces:msg/FrameInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/frame_info.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__FRAME_INFO__BUILDER_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__FRAME_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentinel_interfaces/msg/detail/frame_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentinel_interfaces
{

namespace msg
{

namespace builder
{

class Init_FrameInfo_source
{
public:
  explicit Init_FrameInfo_source(::sentinel_interfaces::msg::FrameInfo & msg)
  : msg_(msg)
  {}
  ::sentinel_interfaces::msg::FrameInfo source(::sentinel_interfaces::msg::FrameInfo::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentinel_interfaces::msg::FrameInfo msg_;
};

class Init_FrameInfo_fps
{
public:
  explicit Init_FrameInfo_fps(::sentinel_interfaces::msg::FrameInfo & msg)
  : msg_(msg)
  {}
  Init_FrameInfo_source fps(::sentinel_interfaces::msg::FrameInfo::_fps_type arg)
  {
    msg_.fps = std::move(arg);
    return Init_FrameInfo_source(msg_);
  }

private:
  ::sentinel_interfaces::msg::FrameInfo msg_;
};

class Init_FrameInfo_height
{
public:
  explicit Init_FrameInfo_height(::sentinel_interfaces::msg::FrameInfo & msg)
  : msg_(msg)
  {}
  Init_FrameInfo_fps height(::sentinel_interfaces::msg::FrameInfo::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_FrameInfo_fps(msg_);
  }

private:
  ::sentinel_interfaces::msg::FrameInfo msg_;
};

class Init_FrameInfo_width
{
public:
  explicit Init_FrameInfo_width(::sentinel_interfaces::msg::FrameInfo & msg)
  : msg_(msg)
  {}
  Init_FrameInfo_height width(::sentinel_interfaces::msg::FrameInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_FrameInfo_height(msg_);
  }

private:
  ::sentinel_interfaces::msg::FrameInfo msg_;
};

class Init_FrameInfo_frame_id
{
public:
  explicit Init_FrameInfo_frame_id(::sentinel_interfaces::msg::FrameInfo & msg)
  : msg_(msg)
  {}
  Init_FrameInfo_width frame_id(::sentinel_interfaces::msg::FrameInfo::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_FrameInfo_width(msg_);
  }

private:
  ::sentinel_interfaces::msg::FrameInfo msg_;
};

class Init_FrameInfo_stamp
{
public:
  Init_FrameInfo_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FrameInfo_frame_id stamp(::sentinel_interfaces::msg::FrameInfo::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_FrameInfo_frame_id(msg_);
  }

private:
  ::sentinel_interfaces::msg::FrameInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentinel_interfaces::msg::FrameInfo>()
{
  return sentinel_interfaces::msg::builder::Init_FrameInfo_stamp();
}

}  // namespace sentinel_interfaces

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__FRAME_INFO__BUILDER_HPP_
