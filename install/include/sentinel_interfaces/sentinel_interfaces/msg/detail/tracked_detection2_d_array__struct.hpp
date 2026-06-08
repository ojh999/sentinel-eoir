// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentinel_interfaces:msg/TrackedDetection2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/tracked_detection2_d_array.hpp"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__TRACKED_DETECTION2_D_ARRAY__STRUCT_HPP_
#define SENTINEL_INTERFACES__MSG__DETAIL__TRACKED_DETECTION2_D_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'tracks'
#include "sentinel_interfaces/msg/detail/tracked_detection2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sentinel_interfaces__msg__TrackedDetection2DArray __attribute__((deprecated))
#else
# define DEPRECATED__sentinel_interfaces__msg__TrackedDetection2DArray __declspec(deprecated)
#endif

namespace sentinel_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedDetection2DArray_
{
  using Type = TrackedDetection2DArray_<ContainerAllocator>;

  explicit TrackedDetection2DArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0ul;
    }
  }

  explicit TrackedDetection2DArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0ul;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _frame_id_type =
    uint32_t;
  _frame_id_type frame_id;
  using _tracks_type =
    std::vector<sentinel_interfaces::msg::TrackedDetection2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sentinel_interfaces::msg::TrackedDetection2D_<ContainerAllocator>>>;
  _tracks_type tracks;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__frame_id(
    const uint32_t & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__tracks(
    const std::vector<sentinel_interfaces::msg::TrackedDetection2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sentinel_interfaces::msg::TrackedDetection2D_<ContainerAllocator>>> & _arg)
  {
    this->tracks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentinel_interfaces__msg__TrackedDetection2DArray
    std::shared_ptr<sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentinel_interfaces__msg__TrackedDetection2DArray
    std::shared_ptr<sentinel_interfaces::msg::TrackedDetection2DArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedDetection2DArray_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->tracks != other.tracks) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedDetection2DArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedDetection2DArray_

// alias to use template instance with default allocator
using TrackedDetection2DArray =
  sentinel_interfaces::msg::TrackedDetection2DArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sentinel_interfaces

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__TRACKED_DETECTION2_D_ARRAY__STRUCT_HPP_
