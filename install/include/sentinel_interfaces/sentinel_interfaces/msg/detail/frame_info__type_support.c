// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sentinel_interfaces:msg/FrameInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sentinel_interfaces/msg/detail/frame_info__rosidl_typesupport_introspection_c.h"
#include "sentinel_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sentinel_interfaces/msg/detail/frame_info__functions.h"
#include "sentinel_interfaces/msg/detail/frame_info__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sentinel_interfaces__msg__FrameInfo__init(message_memory);
}

void sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_fini_function(void * message_memory)
{
  sentinel_interfaces__msg__FrameInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_message_member_array[6] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__FrameInfo, stamp),  // bytes offset in struct
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
    offsetof(sentinel_interfaces__msg__FrameInfo, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__FrameInfo, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__FrameInfo, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__FrameInfo, fps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__FrameInfo, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_message_members = {
  "sentinel_interfaces__msg",  // message namespace
  "FrameInfo",  // message name
  6,  // number of fields
  sizeof(sentinel_interfaces__msg__FrameInfo),
  false,  // has_any_key_member_
  sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_message_member_array,  // message members
  sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_message_type_support_handle = {
  0,
  &sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_message_members,
  get_message_typesupport_handle_function,
  &sentinel_interfaces__msg__FrameInfo__get_type_hash,
  &sentinel_interfaces__msg__FrameInfo__get_type_description,
  &sentinel_interfaces__msg__FrameInfo__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentinel_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, msg, FrameInfo)() {
  sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_message_type_support_handle.typesupport_identifier) {
    sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sentinel_interfaces__msg__FrameInfo__rosidl_typesupport_introspection_c__FrameInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
