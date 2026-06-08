// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentinel_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/motor_command.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentinel_interfaces/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentinel_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_manual_step
{
public:
  explicit Init_MotorCommand_manual_step(::sentinel_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::sentinel_interfaces::msg::MotorCommand manual_step(::sentinel_interfaces::msg::MotorCommand::_manual_step_type arg)
  {
    msg_.manual_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_scan_step
{
public:
  explicit Init_MotorCommand_scan_step(::sentinel_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_manual_step scan_step(::sentinel_interfaces::msg::MotorCommand::_scan_step_type arg)
  {
    msg_.scan_step = std::move(arg);
    return Init_MotorCommand_manual_step(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_tilt_pos
{
public:
  explicit Init_MotorCommand_tilt_pos(::sentinel_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_scan_step tilt_pos(::sentinel_interfaces::msg::MotorCommand::_tilt_pos_type arg)
  {
    msg_.tilt_pos = std::move(arg);
    return Init_MotorCommand_scan_step(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_pan_pos
{
public:
  explicit Init_MotorCommand_pan_pos(::sentinel_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_tilt_pos pan_pos(::sentinel_interfaces::msg::MotorCommand::_pan_pos_type arg)
  {
    msg_.pan_pos = std::move(arg);
    return Init_MotorCommand_tilt_pos(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_btn_mask
{
public:
  explicit Init_MotorCommand_btn_mask(::sentinel_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_pan_pos btn_mask(::sentinel_interfaces::msg::MotorCommand::_btn_mask_type arg)
  {
    msg_.btn_mask = std::move(arg);
    return Init_MotorCommand_pan_pos(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_tracking
{
public:
  explicit Init_MotorCommand_tracking(::sentinel_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_btn_mask tracking(::sentinel_interfaces::msg::MotorCommand::_tracking_type arg)
  {
    msg_.tracking = std::move(arg);
    return Init_MotorCommand_btn_mask(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_mode
{
public:
  Init_MotorCommand_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_tracking mode(::sentinel_interfaces::msg::MotorCommand::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorCommand_tracking(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentinel_interfaces::msg::MotorCommand>()
{
  return sentinel_interfaces::msg::builder::Init_MotorCommand_mode();
}

}  // namespace sentinel_interfaces

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
