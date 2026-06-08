// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentinel_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/motor_status.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentinel_interfaces/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentinel_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_tilt_hw_error
{
public:
  explicit Init_MotorStatus_tilt_hw_error(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::sentinel_interfaces::msg::MotorStatus tilt_hw_error(::sentinel_interfaces::msg::MotorStatus::_tilt_hw_error_type arg)
  {
    msg_.tilt_hw_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_tilt_temperature
{
public:
  explicit Init_MotorStatus_tilt_temperature(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_tilt_hw_error tilt_temperature(::sentinel_interfaces::msg::MotorStatus::_tilt_temperature_type arg)
  {
    msg_.tilt_temperature = std::move(arg);
    return Init_MotorStatus_tilt_hw_error(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_tilt_voltage
{
public:
  explicit Init_MotorStatus_tilt_voltage(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_tilt_temperature tilt_voltage(::sentinel_interfaces::msg::MotorStatus::_tilt_voltage_type arg)
  {
    msg_.tilt_voltage = std::move(arg);
    return Init_MotorStatus_tilt_temperature(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_tilt_position
{
public:
  explicit Init_MotorStatus_tilt_position(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_tilt_voltage tilt_position(::sentinel_interfaces::msg::MotorStatus::_tilt_position_type arg)
  {
    msg_.tilt_position = std::move(arg);
    return Init_MotorStatus_tilt_voltage(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_tilt_velocity
{
public:
  explicit Init_MotorStatus_tilt_velocity(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_tilt_position tilt_velocity(::sentinel_interfaces::msg::MotorStatus::_tilt_velocity_type arg)
  {
    msg_.tilt_velocity = std::move(arg);
    return Init_MotorStatus_tilt_position(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_tilt_current
{
public:
  explicit Init_MotorStatus_tilt_current(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_tilt_velocity tilt_current(::sentinel_interfaces::msg::MotorStatus::_tilt_current_type arg)
  {
    msg_.tilt_current = std::move(arg);
    return Init_MotorStatus_tilt_velocity(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_tilt_pwm
{
public:
  explicit Init_MotorStatus_tilt_pwm(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_tilt_current tilt_pwm(::sentinel_interfaces::msg::MotorStatus::_tilt_pwm_type arg)
  {
    msg_.tilt_pwm = std::move(arg);
    return Init_MotorStatus_tilt_current(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_tilt_moving_status
{
public:
  explicit Init_MotorStatus_tilt_moving_status(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_tilt_pwm tilt_moving_status(::sentinel_interfaces::msg::MotorStatus::_tilt_moving_status_type arg)
  {
    msg_.tilt_moving_status = std::move(arg);
    return Init_MotorStatus_tilt_pwm(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_tilt_moving
{
public:
  explicit Init_MotorStatus_tilt_moving(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_tilt_moving_status tilt_moving(::sentinel_interfaces::msg::MotorStatus::_tilt_moving_type arg)
  {
    msg_.tilt_moving = std::move(arg);
    return Init_MotorStatus_tilt_moving_status(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_pan_hw_error
{
public:
  explicit Init_MotorStatus_pan_hw_error(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_tilt_moving pan_hw_error(::sentinel_interfaces::msg::MotorStatus::_pan_hw_error_type arg)
  {
    msg_.pan_hw_error = std::move(arg);
    return Init_MotorStatus_tilt_moving(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_pan_temperature
{
public:
  explicit Init_MotorStatus_pan_temperature(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_pan_hw_error pan_temperature(::sentinel_interfaces::msg::MotorStatus::_pan_temperature_type arg)
  {
    msg_.pan_temperature = std::move(arg);
    return Init_MotorStatus_pan_hw_error(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_pan_voltage
{
public:
  explicit Init_MotorStatus_pan_voltage(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_pan_temperature pan_voltage(::sentinel_interfaces::msg::MotorStatus::_pan_voltage_type arg)
  {
    msg_.pan_voltage = std::move(arg);
    return Init_MotorStatus_pan_temperature(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_pan_position
{
public:
  explicit Init_MotorStatus_pan_position(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_pan_voltage pan_position(::sentinel_interfaces::msg::MotorStatus::_pan_position_type arg)
  {
    msg_.pan_position = std::move(arg);
    return Init_MotorStatus_pan_voltage(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_pan_velocity
{
public:
  explicit Init_MotorStatus_pan_velocity(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_pan_position pan_velocity(::sentinel_interfaces::msg::MotorStatus::_pan_velocity_type arg)
  {
    msg_.pan_velocity = std::move(arg);
    return Init_MotorStatus_pan_position(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_pan_current
{
public:
  explicit Init_MotorStatus_pan_current(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_pan_velocity pan_current(::sentinel_interfaces::msg::MotorStatus::_pan_current_type arg)
  {
    msg_.pan_current = std::move(arg);
    return Init_MotorStatus_pan_velocity(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_pan_pwm
{
public:
  explicit Init_MotorStatus_pan_pwm(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_pan_current pan_pwm(::sentinel_interfaces::msg::MotorStatus::_pan_pwm_type arg)
  {
    msg_.pan_pwm = std::move(arg);
    return Init_MotorStatus_pan_current(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_pan_moving_status
{
public:
  explicit Init_MotorStatus_pan_moving_status(::sentinel_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_pan_pwm pan_moving_status(::sentinel_interfaces::msg::MotorStatus::_pan_moving_status_type arg)
  {
    msg_.pan_moving_status = std::move(arg);
    return Init_MotorStatus_pan_pwm(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_pan_moving
{
public:
  Init_MotorStatus_pan_moving()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_pan_moving_status pan_moving(::sentinel_interfaces::msg::MotorStatus::_pan_moving_type arg)
  {
    msg_.pan_moving = std::move(arg);
    return Init_MotorStatus_pan_moving_status(msg_);
  }

private:
  ::sentinel_interfaces::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentinel_interfaces::msg::MotorStatus>()
{
  return sentinel_interfaces::msg::builder::Init_MotorStatus_pan_moving();
}

}  // namespace sentinel_interfaces

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
