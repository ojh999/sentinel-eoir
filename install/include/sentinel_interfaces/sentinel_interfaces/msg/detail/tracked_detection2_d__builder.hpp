// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentinel_interfaces:msg/TrackedDetection2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/tracked_detection2_d.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__TRACKED_DETECTION2_D__BUILDER_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__TRACKED_DETECTION2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentinel_interfaces/msg/detail/tracked_detection2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentinel_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrackedDetection2D_y2
{
public:
  explicit Init_TrackedDetection2D_y2(::sentinel_interfaces::msg::TrackedDetection2D & msg)
  : msg_(msg)
  {}
  ::sentinel_interfaces::msg::TrackedDetection2D y2(::sentinel_interfaces::msg::TrackedDetection2D::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentinel_interfaces::msg::TrackedDetection2D msg_;
};

class Init_TrackedDetection2D_x2
{
public:
  explicit Init_TrackedDetection2D_x2(::sentinel_interfaces::msg::TrackedDetection2D & msg)
  : msg_(msg)
  {}
  Init_TrackedDetection2D_y2 x2(::sentinel_interfaces::msg::TrackedDetection2D::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_TrackedDetection2D_y2(msg_);
  }

private:
  ::sentinel_interfaces::msg::TrackedDetection2D msg_;
};

class Init_TrackedDetection2D_y1
{
public:
  explicit Init_TrackedDetection2D_y1(::sentinel_interfaces::msg::TrackedDetection2D & msg)
  : msg_(msg)
  {}
  Init_TrackedDetection2D_x2 y1(::sentinel_interfaces::msg::TrackedDetection2D::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_TrackedDetection2D_x2(msg_);
  }

private:
  ::sentinel_interfaces::msg::TrackedDetection2D msg_;
};

class Init_TrackedDetection2D_x1
{
public:
  explicit Init_TrackedDetection2D_x1(::sentinel_interfaces::msg::TrackedDetection2D & msg)
  : msg_(msg)
  {}
  Init_TrackedDetection2D_y1 x1(::sentinel_interfaces::msg::TrackedDetection2D::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_TrackedDetection2D_y1(msg_);
  }

private:
  ::sentinel_interfaces::msg::TrackedDetection2D msg_;
};

class Init_TrackedDetection2D_score
{
public:
  explicit Init_TrackedDetection2D_score(::sentinel_interfaces::msg::TrackedDetection2D & msg)
  : msg_(msg)
  {}
  Init_TrackedDetection2D_x1 score(::sentinel_interfaces::msg::TrackedDetection2D::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_TrackedDetection2D_x1(msg_);
  }

private:
  ::sentinel_interfaces::msg::TrackedDetection2D msg_;
};

class Init_TrackedDetection2D_class_name
{
public:
  explicit Init_TrackedDetection2D_class_name(::sentinel_interfaces::msg::TrackedDetection2D & msg)
  : msg_(msg)
  {}
  Init_TrackedDetection2D_score class_name(::sentinel_interfaces::msg::TrackedDetection2D::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_TrackedDetection2D_score(msg_);
  }

private:
  ::sentinel_interfaces::msg::TrackedDetection2D msg_;
};

class Init_TrackedDetection2D_class_id
{
public:
  explicit Init_TrackedDetection2D_class_id(::sentinel_interfaces::msg::TrackedDetection2D & msg)
  : msg_(msg)
  {}
  Init_TrackedDetection2D_class_name class_id(::sentinel_interfaces::msg::TrackedDetection2D::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_TrackedDetection2D_class_name(msg_);
  }

private:
  ::sentinel_interfaces::msg::TrackedDetection2D msg_;
};

class Init_TrackedDetection2D_track_id
{
public:
  Init_TrackedDetection2D_track_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedDetection2D_class_id track_id(::sentinel_interfaces::msg::TrackedDetection2D::_track_id_type arg)
  {
    msg_.track_id = std::move(arg);
    return Init_TrackedDetection2D_class_id(msg_);
  }

private:
  ::sentinel_interfaces::msg::TrackedDetection2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentinel_interfaces::msg::TrackedDetection2D>()
{
  return sentinel_interfaces::msg::builder::Init_TrackedDetection2D_track_id();
}

}  // namespace sentinel_interfaces

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__TRACKED_DETECTION2_D__BUILDER_HPP_
