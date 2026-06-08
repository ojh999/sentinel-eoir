// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentinel_interfaces:msg/FrameInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/frame_info.h"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__FRAME_INFO__STRUCT_H_
#define SENTINEL_INTERFACES__MSG__DETAIL__FRAME_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FrameInfo in the package sentinel_interfaces.
/**
  * FreameInfo.msg
 */
typedef struct sentinel_interfaces__msg__FrameInfo
{
  builtin_interfaces__msg__Time stamp;
  uint32_t frame_id;
  uint32_t width;
  uint32_t height;
  float fps;
  rosidl_runtime_c__String source;
} sentinel_interfaces__msg__FrameInfo;

// Struct for a sequence of sentinel_interfaces__msg__FrameInfo.
typedef struct sentinel_interfaces__msg__FrameInfo__Sequence
{
  sentinel_interfaces__msg__FrameInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentinel_interfaces__msg__FrameInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__FRAME_INFO__STRUCT_H_
