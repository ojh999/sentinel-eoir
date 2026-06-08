// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentinel_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/motor_status.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sentinel_interfaces__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__sentinel_interfaces__msg__MotorStatus __declspec(deprecated)
#endif

namespace sentinel_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan_moving = 0;
      this->pan_moving_status = 0;
      this->pan_pwm = 0;
      this->pan_current = 0;
      this->pan_velocity = 0ul;
      this->pan_position = 0ul;
      this->pan_voltage = 0;
      this->pan_temperature = 0;
      this->pan_hw_error = 0;
      this->tilt_moving = 0;
      this->tilt_moving_status = 0;
      this->tilt_pwm = 0;
      this->tilt_current = 0;
      this->tilt_velocity = 0ul;
      this->tilt_position = 0ul;
      this->tilt_voltage = 0;
      this->tilt_temperature = 0;
      this->tilt_hw_error = 0;
    }
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan_moving = 0;
      this->pan_moving_status = 0;
      this->pan_pwm = 0;
      this->pan_current = 0;
      this->pan_velocity = 0ul;
      this->pan_position = 0ul;
      this->pan_voltage = 0;
      this->pan_temperature = 0;
      this->pan_hw_error = 0;
      this->tilt_moving = 0;
      this->tilt_moving_status = 0;
      this->tilt_pwm = 0;
      this->tilt_current = 0;
      this->tilt_velocity = 0ul;
      this->tilt_position = 0ul;
      this->tilt_voltage = 0;
      this->tilt_temperature = 0;
      this->tilt_hw_error = 0;
    }
  }

  // field types and members
  using _pan_moving_type =
    uint8_t;
  _pan_moving_type pan_moving;
  using _pan_moving_status_type =
    uint8_t;
  _pan_moving_status_type pan_moving_status;
  using _pan_pwm_type =
    uint16_t;
  _pan_pwm_type pan_pwm;
  using _pan_current_type =
    uint16_t;
  _pan_current_type pan_current;
  using _pan_velocity_type =
    uint32_t;
  _pan_velocity_type pan_velocity;
  using _pan_position_type =
    uint32_t;
  _pan_position_type pan_position;
  using _pan_voltage_type =
    uint16_t;
  _pan_voltage_type pan_voltage;
  using _pan_temperature_type =
    uint8_t;
  _pan_temperature_type pan_temperature;
  using _pan_hw_error_type =
    uint8_t;
  _pan_hw_error_type pan_hw_error;
  using _tilt_moving_type =
    uint8_t;
  _tilt_moving_type tilt_moving;
  using _tilt_moving_status_type =
    uint8_t;
  _tilt_moving_status_type tilt_moving_status;
  using _tilt_pwm_type =
    uint16_t;
  _tilt_pwm_type tilt_pwm;
  using _tilt_current_type =
    uint16_t;
  _tilt_current_type tilt_current;
  using _tilt_velocity_type =
    uint32_t;
  _tilt_velocity_type tilt_velocity;
  using _tilt_position_type =
    uint32_t;
  _tilt_position_type tilt_position;
  using _tilt_voltage_type =
    uint16_t;
  _tilt_voltage_type tilt_voltage;
  using _tilt_temperature_type =
    uint8_t;
  _tilt_temperature_type tilt_temperature;
  using _tilt_hw_error_type =
    uint8_t;
  _tilt_hw_error_type tilt_hw_error;

  // setters for named parameter idiom
  Type & set__pan_moving(
    const uint8_t & _arg)
  {
    this->pan_moving = _arg;
    return *this;
  }
  Type & set__pan_moving_status(
    const uint8_t & _arg)
  {
    this->pan_moving_status = _arg;
    return *this;
  }
  Type & set__pan_pwm(
    const uint16_t & _arg)
  {
    this->pan_pwm = _arg;
    return *this;
  }
  Type & set__pan_current(
    const uint16_t & _arg)
  {
    this->pan_current = _arg;
    return *this;
  }
  Type & set__pan_velocity(
    const uint32_t & _arg)
  {
    this->pan_velocity = _arg;
    return *this;
  }
  Type & set__pan_position(
    const uint32_t & _arg)
  {
    this->pan_position = _arg;
    return *this;
  }
  Type & set__pan_voltage(
    const uint16_t & _arg)
  {
    this->pan_voltage = _arg;
    return *this;
  }
  Type & set__pan_temperature(
    const uint8_t & _arg)
  {
    this->pan_temperature = _arg;
    return *this;
  }
  Type & set__pan_hw_error(
    const uint8_t & _arg)
  {
    this->pan_hw_error = _arg;
    return *this;
  }
  Type & set__tilt_moving(
    const uint8_t & _arg)
  {
    this->tilt_moving = _arg;
    return *this;
  }
  Type & set__tilt_moving_status(
    const uint8_t & _arg)
  {
    this->tilt_moving_status = _arg;
    return *this;
  }
  Type & set__tilt_pwm(
    const uint16_t & _arg)
  {
    this->tilt_pwm = _arg;
    return *this;
  }
  Type & set__tilt_current(
    const uint16_t & _arg)
  {
    this->tilt_current = _arg;
    return *this;
  }
  Type & set__tilt_velocity(
    const uint32_t & _arg)
  {
    this->tilt_velocity = _arg;
    return *this;
  }
  Type & set__tilt_position(
    const uint32_t & _arg)
  {
    this->tilt_position = _arg;
    return *this;
  }
  Type & set__tilt_voltage(
    const uint16_t & _arg)
  {
    this->tilt_voltage = _arg;
    return *this;
  }
  Type & set__tilt_temperature(
    const uint8_t & _arg)
  {
    this->tilt_temperature = _arg;
    return *this;
  }
  Type & set__tilt_hw_error(
    const uint8_t & _arg)
  {
    this->tilt_hw_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentinel_interfaces::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentinel_interfaces::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentinel_interfaces::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentinel_interfaces::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentinel_interfaces::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentinel_interfaces::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentinel_interfaces::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentinel_interfaces::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentinel_interfaces::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentinel_interfaces::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentinel_interfaces__msg__MotorStatus
    std::shared_ptr<sentinel_interfaces::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentinel_interfaces__msg__MotorStatus
    std::shared_ptr<sentinel_interfaces::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->pan_moving != other.pan_moving) {
      return false;
    }
    if (this->pan_moving_status != other.pan_moving_status) {
      return false;
    }
    if (this->pan_pwm != other.pan_pwm) {
      return false;
    }
    if (this->pan_current != other.pan_current) {
      return false;
    }
    if (this->pan_velocity != other.pan_velocity) {
      return false;
    }
    if (this->pan_position != other.pan_position) {
      return false;
    }
    if (this->pan_voltage != other.pan_voltage) {
      return false;
    }
    if (this->pan_temperature != other.pan_temperature) {
      return false;
    }
    if (this->pan_hw_error != other.pan_hw_error) {
      return false;
    }
    if (this->tilt_moving != other.tilt_moving) {
      return false;
    }
    if (this->tilt_moving_status != other.tilt_moving_status) {
      return false;
    }
    if (this->tilt_pwm != other.tilt_pwm) {
      return false;
    }
    if (this->tilt_current != other.tilt_current) {
      return false;
    }
    if (this->tilt_velocity != other.tilt_velocity) {
      return false;
    }
    if (this->tilt_position != other.tilt_position) {
      return false;
    }
    if (this->tilt_voltage != other.tilt_voltage) {
      return false;
    }
    if (this->tilt_temperature != other.tilt_temperature) {
      return false;
    }
    if (this->tilt_hw_error != other.tilt_hw_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  sentinel_interfaces::msg::MotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sentinel_interfaces

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
