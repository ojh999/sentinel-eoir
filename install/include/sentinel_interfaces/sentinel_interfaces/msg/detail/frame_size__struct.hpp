// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentinel_interfaces:msg/FrameSize.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/frame_size.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__FRAME_SIZE__STRUCT_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__FRAME_SIZE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sentinel_interfaces__msg__FrameSize __attribute__((deprecated))
#else
# define DEPRECATED__sentinel_interfaces__msg__FrameSize __declspec(deprecated)
#endif

namespace sentinel_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FrameSize_
{
  using Type = FrameSize_<ContainerAllocator>;

  explicit FrameSize_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_w = 0;
      this->frame_h = 0;
    }
  }

  explicit FrameSize_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_w = 0;
      this->frame_h = 0;
    }
  }

  // field types and members
  using _frame_w_type =
    uint16_t;
  _frame_w_type frame_w;
  using _frame_h_type =
    uint16_t;
  _frame_h_type frame_h;

  // setters for named parameter idiom
  Type & set__frame_w(
    const uint16_t & _arg)
  {
    this->frame_w = _arg;
    return *this;
  }
  Type & set__frame_h(
    const uint16_t & _arg)
  {
    this->frame_h = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentinel_interfaces::msg::FrameSize_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentinel_interfaces::msg::FrameSize_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentinel_interfaces::msg::FrameSize_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentinel_interfaces::msg::FrameSize_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentinel_interfaces::msg::FrameSize_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentinel_interfaces::msg::FrameSize_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentinel_interfaces::msg::FrameSize_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentinel_interfaces::msg::FrameSize_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentinel_interfaces::msg::FrameSize_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentinel_interfaces::msg::FrameSize_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentinel_interfaces__msg__FrameSize
    std::shared_ptr<sentinel_interfaces::msg::FrameSize_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentinel_interfaces__msg__FrameSize
    std::shared_ptr<sentinel_interfaces::msg::FrameSize_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrameSize_ & other) const
  {
    if (this->frame_w != other.frame_w) {
      return false;
    }
    if (this->frame_h != other.frame_h) {
      return false;
    }
    return true;
  }
  bool operator!=(const FrameSize_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrameSize_

// alias to use template instance with default allocator
using FrameSize =
  sentinel_interfaces::msg::FrameSize_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sentinel_interfaces

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__FRAME_SIZE__STRUCT_HPP_
