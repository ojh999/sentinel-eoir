// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sentinel_interfaces:msg/TrackedDetection2DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sentinel_interfaces/msg/detail/tracked_detection2_d_array__rosidl_typesupport_introspection_c.h"
#include "sentinel_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sentinel_interfaces/msg/detail/tracked_detection2_d_array__functions.h"
#include "sentinel_interfaces/msg/detail/tracked_detection2_d_array__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `tracks`
#include "sentinel_interfaces/msg/tracked_detection2_d.h"
// Member `tracks`
#include "sentinel_interfaces/msg/detail/tracked_detection2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sentinel_interfaces__msg__TrackedDetection2DArray__init(message_memory);
}

void sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_fini_function(void * message_memory)
{
  sentinel_interfaces__msg__TrackedDetection2DArray__fini(message_memory);
}

size_t sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__size_function__TrackedDetection2DArray__tracks(
  const void * untyped_member)
{
  const sentinel_interfaces__msg__TrackedDetection2D__Sequence * member =
    (const sentinel_interfaces__msg__TrackedDetection2D__Sequence *)(untyped_member);
  return member->size;
}

const void * sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__get_const_function__TrackedDetection2DArray__tracks(
  const void * untyped_member, size_t index)
{
  const sentinel_interfaces__msg__TrackedDetection2D__Sequence * member =
    (const sentinel_interfaces__msg__TrackedDetection2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__get_function__TrackedDetection2DArray__tracks(
  void * untyped_member, size_t index)
{
  sentinel_interfaces__msg__TrackedDetection2D__Sequence * member =
    (sentinel_interfaces__msg__TrackedDetection2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__fetch_function__TrackedDetection2DArray__tracks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sentinel_interfaces__msg__TrackedDetection2D * item =
    ((const sentinel_interfaces__msg__TrackedDetection2D *)
    sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__get_const_function__TrackedDetection2DArray__tracks(untyped_member, index));
  sentinel_interfaces__msg__TrackedDetection2D * value =
    (sentinel_interfaces__msg__TrackedDetection2D *)(untyped_value);
  *value = *item;
}

void sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__assign_function__TrackedDetection2DArray__tracks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sentinel_interfaces__msg__TrackedDetection2D * item =
    ((sentinel_interfaces__msg__TrackedDetection2D *)
    sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__get_function__TrackedDetection2DArray__tracks(untyped_member, index));
  const sentinel_interfaces__msg__TrackedDetection2D * value =
    (const sentinel_interfaces__msg__TrackedDetection2D *)(untyped_value);
  *item = *value;
}

bool sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__resize_function__TrackedDetection2DArray__tracks(
  void * untyped_member, size_t size)
{
  sentinel_interfaces__msg__TrackedDetection2D__Sequence * member =
    (sentinel_interfaces__msg__TrackedDetection2D__Sequence *)(untyped_member);
  sentinel_interfaces__msg__TrackedDetection2D__Sequence__fini(member);
  return sentinel_interfaces__msg__TrackedDetection2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__TrackedDetection2DArray, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__TrackedDetection2DArray, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__TrackedDetection2DArray, tracks),  // bytes offset in struct
    NULL,  // default value
    sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__size_function__TrackedDetection2DArray__tracks,  // size() function pointer
    sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__get_const_function__TrackedDetection2DArray__tracks,  // get_const(index) function pointer
    sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__get_function__TrackedDetection2DArray__tracks,  // get(index) function pointer
    sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__fetch_function__TrackedDetection2DArray__tracks,  // fetch(index, &value) function pointer
    sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__assign_function__TrackedDetection2DArray__tracks,  // assign(index, value) function pointer
    sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__resize_function__TrackedDetection2DArray__tracks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_message_members = {
  "sentinel_interfaces__msg",  // message namespace
  "TrackedDetection2DArray",  // message name
  3,  // number of fields
  sizeof(sentinel_interfaces__msg__TrackedDetection2DArray),
  false,  // has_any_key_member_
  sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_message_member_array,  // message members
  sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_message_type_support_handle = {
  0,
  &sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_message_members,
  get_message_typesupport_handle_function,
  &sentinel_interfaces__msg__TrackedDetection2DArray__get_type_hash,
  &sentinel_interfaces__msg__TrackedDetection2DArray__get_type_description,
  &sentinel_interfaces__msg__TrackedDetection2DArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentinel_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, msg, TrackedDetection2DArray)() {
  sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, msg, TrackedDetection2D)();
  if (!sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_message_type_support_handle.typesupport_identifier) {
    sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sentinel_interfaces__msg__TrackedDetection2DArray__rosidl_typesupport_introspection_c__TrackedDetection2DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
