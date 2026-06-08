// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentinel_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/motor_command.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sentinel_interfaces__msg__MotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__sentinel_interfaces__msg__MotorCommand __declspec(deprecated)
#endif

namespace sentinel_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_
{
  using Type = MotorCommand_<ContainerAllocator>;

  explicit MotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->tracking = 0;
      this->btn_mask = 0;
      this->pan_pos = 0;
      this->tilt_pos = 0;
      this->scan_step = 0;
      this->manual_step = 0;
    }
  }

  explicit MotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->tracking = 0;
      this->btn_mask = 0;
      this->pan_pos = 0;
      this->tilt_pos = 0;
      this->scan_step = 0;
      this->manual_step = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _tracking_type =
    uint8_t;
  _tracking_type tracking;
  using _btn_mask_type =
    uint8_t;
  _btn_mask_type btn_mask;
  using _pan_pos_type =
    uint16_t;
  _pan_pos_type pan_pos;
  using _tilt_pos_type =
    uint16_t;
  _tilt_pos_type tilt_pos;
  using _scan_step_type =
    uint8_t;
  _scan_step_type scan_step;
  using _manual_step_type =
    uint8_t;
  _manual_step_type manual_step;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__tracking(
    const uint8_t & _arg)
  {
    this->tracking = _arg;
    return *this;
  }
  Type & set__btn_mask(
    const uint8_t & _arg)
  {
    this->btn_mask = _arg;
    return *this;
  }
  Type & set__pan_pos(
    const uint16_t & _arg)
  {
    this->pan_pos = _arg;
    return *this;
  }
  Type & set__tilt_pos(
    const uint16_t & _arg)
  {
    this->tilt_pos = _arg;
    return *this;
  }
  Type & set__scan_step(
    const uint8_t & _arg)
  {
    this->scan_step = _arg;
    return *this;
  }
  Type & set__manual_step(
    const uint8_t & _arg)
  {
    this->manual_step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentinel_interfaces::msg::MotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentinel_interfaces::msg::MotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentinel_interfaces::msg::MotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentinel_interfaces::msg::MotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentinel_interfaces::msg::MotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentinel_interfaces::msg::MotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentinel_interfaces::msg::MotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentinel_interfaces::msg::MotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentinel_interfaces::msg::MotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentinel_interfaces::msg::MotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentinel_interfaces__msg__MotorCommand
    std::shared_ptr<sentinel_interfaces::msg::MotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentinel_interfaces__msg__MotorCommand
    std::shared_ptr<sentinel_interfaces::msg::MotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->tracking != other.tracking) {
      return false;
    }
    if (this->btn_mask != other.btn_mask) {
      return false;
    }
    if (this->pan_pos != other.pan_pos) {
      return false;
    }
    if (this->tilt_pos != other.tilt_pos) {
      return false;
    }
    if (this->scan_step != other.scan_step) {
      return false;
    }
    if (this->manual_step != other.manual_step) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_

// alias to use template instance with default allocator
using MotorCommand =
  sentinel_interfaces::msg::MotorCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sentinel_interfaces

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
