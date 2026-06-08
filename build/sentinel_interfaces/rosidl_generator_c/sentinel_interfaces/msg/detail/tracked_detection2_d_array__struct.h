// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentinel_interfaces:msg/TrackedDetection2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sentinel_interfaces/msg/tracked_detection2_d_array.h"


#ifndef SENTINEL_INTERFACES__MSG__DETAIL__TRACKED_DETECTION2_D_ARRAY__STRUCT_H_
#define SENTINEL_INTERFACES__MSG__DETAIL__TRACKED_DETECTION2_D_ARRAY__STRUCT_H_

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
// Member 'tracks'
#include "sentinel_interfaces/msg/detail/tracked_detection2_d__struct.h"

/// Struct defined in msg/TrackedDetection2DArray in the package sentinel_interfaces.
/**
  * TrackedDetection2DArray.msg
 */
typedef struct sentinel_interfaces__msg__TrackedDetection2DArray
{
  builtin_interfaces__msg__Time stamp;
  uint32_t frame_id;
  sentinel_interfaces__msg__TrackedDetection2D__Sequence tracks;
} sentinel_interfaces__msg__TrackedDetection2DArray;

// Struct for a sequence of sentinel_interfaces__msg__TrackedDetection2DArray.
typedef struct sentinel_interfaces__msg__TrackedDetection2DArray__Sequence
{
  sentinel_interfaces__msg__TrackedDetection2DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentinel_interfaces__msg__TrackedDetection2DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTINEL_INTERFACES__MSG__DETAIL__TRACKED_DETECTION2_D_ARRAY__STRUCT_H_
