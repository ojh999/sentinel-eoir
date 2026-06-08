// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sentinel_interfaces:msg/YoloStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sentinel_interfaces/msg/detail/yolo_status__rosidl_typesupport_introspection_c.h"
#include "sentinel_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sentinel_interfaces/msg/detail/yolo_status__functions.h"
#include "sentinel_interfaces/msg/detail/yolo_status__struct.h"


// Include directives for member types
// Member `last_error`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sentinel_interfaces__msg__YoloStatus__init(message_memory);
}

void sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_fini_function(void * message_memory)
{
  sentinel_interfaces__msg__YoloStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_message_member_array[4] = {
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__YoloStatus, enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_loaded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__YoloStatus, model_loaded),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "conf_threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__YoloStatus, conf_threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__msg__YoloStatus, last_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_message_members = {
  "sentinel_interfaces__msg",  // message namespace
  "YoloStatus",  // message name
  4,  // number of fields
  sizeof(sentinel_interfaces__msg__YoloStatus),
  false,  // has_any_key_member_
  sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_message_member_array,  // message members
  sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_message_type_support_handle = {
  0,
  &sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_message_members,
  get_message_typesupport_handle_function,
  &sentinel_interfaces__msg__YoloStatus__get_type_hash,
  &sentinel_interfaces__msg__YoloStatus__get_type_description,
  &sentinel_interfaces__msg__YoloStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentinel_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, msg, YoloStatus)() {
  if (!sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_message_type_support_handle.typesupport_identifier) {
    sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sentinel_interfaces__msg__YoloStatus__rosidl_typesupport_introspection_c__YoloStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
