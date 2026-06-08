// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sentinel_interfaces:srv/SetThreshold.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sentinel_interfaces/srv/detail/set_threshold__rosidl_typesupport_introspection_c.h"
#include "sentinel_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sentinel_interfaces/srv/detail/set_threshold__functions.h"
#include "sentinel_interfaces/srv/detail/set_threshold__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sentinel_interfaces__srv__SetThreshold_Request__init(message_memory);
}

void sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_fini_function(void * message_memory)
{
  sentinel_interfaces__srv__SetThreshold_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_member_array[1] = {
  {
    "threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__srv__SetThreshold_Request, threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_members = {
  "sentinel_interfaces__srv",  // message namespace
  "SetThreshold_Request",  // message name
  1,  // number of fields
  sizeof(sentinel_interfaces__srv__SetThreshold_Request),
  false,  // has_any_key_member_
  sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_member_array,  // message members
  sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle = {
  0,
  &sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_members,
  get_message_typesupport_handle_function,
  &sentinel_interfaces__srv__SetThreshold_Request__get_type_hash,
  &sentinel_interfaces__srv__SetThreshold_Request__get_type_description,
  &sentinel_interfaces__srv__SetThreshold_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentinel_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Request)() {
  if (!sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle.typesupport_identifier) {
    sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sentinel_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__functions.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sentinel_interfaces__srv__SetThreshold_Response__init(message_memory);
}

void sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_fini_function(void * message_memory)
{
  sentinel_interfaces__srv__SetThreshold_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__srv__SetThreshold_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__srv__SetThreshold_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_members = {
  "sentinel_interfaces__srv",  // message namespace
  "SetThreshold_Response",  // message name
  2,  // number of fields
  sizeof(sentinel_interfaces__srv__SetThreshold_Response),
  false,  // has_any_key_member_
  sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_member_array,  // message members
  sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle = {
  0,
  &sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_members,
  get_message_typesupport_handle_function,
  &sentinel_interfaces__srv__SetThreshold_Response__get_type_hash,
  &sentinel_interfaces__srv__SetThreshold_Response__get_type_description,
  &sentinel_interfaces__srv__SetThreshold_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentinel_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Response)() {
  if (!sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle.typesupport_identifier) {
    sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sentinel_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__functions.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "sentinel_interfaces/srv/set_threshold.h"
// Member `request`
// Member `response`
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sentinel_interfaces__srv__SetThreshold_Event__init(message_memory);
}

void sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_fini_function(void * message_memory)
{
  sentinel_interfaces__srv__SetThreshold_Event__fini(message_memory);
}

size_t sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__size_function__SetThreshold_Event__request(
  const void * untyped_member)
{
  const sentinel_interfaces__srv__SetThreshold_Request__Sequence * member =
    (const sentinel_interfaces__srv__SetThreshold_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_const_function__SetThreshold_Event__request(
  const void * untyped_member, size_t index)
{
  const sentinel_interfaces__srv__SetThreshold_Request__Sequence * member =
    (const sentinel_interfaces__srv__SetThreshold_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_function__SetThreshold_Event__request(
  void * untyped_member, size_t index)
{
  sentinel_interfaces__srv__SetThreshold_Request__Sequence * member =
    (sentinel_interfaces__srv__SetThreshold_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__fetch_function__SetThreshold_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sentinel_interfaces__srv__SetThreshold_Request * item =
    ((const sentinel_interfaces__srv__SetThreshold_Request *)
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_const_function__SetThreshold_Event__request(untyped_member, index));
  sentinel_interfaces__srv__SetThreshold_Request * value =
    (sentinel_interfaces__srv__SetThreshold_Request *)(untyped_value);
  *value = *item;
}

void sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__assign_function__SetThreshold_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sentinel_interfaces__srv__SetThreshold_Request * item =
    ((sentinel_interfaces__srv__SetThreshold_Request *)
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_function__SetThreshold_Event__request(untyped_member, index));
  const sentinel_interfaces__srv__SetThreshold_Request * value =
    (const sentinel_interfaces__srv__SetThreshold_Request *)(untyped_value);
  *item = *value;
}

bool sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__resize_function__SetThreshold_Event__request(
  void * untyped_member, size_t size)
{
  sentinel_interfaces__srv__SetThreshold_Request__Sequence * member =
    (sentinel_interfaces__srv__SetThreshold_Request__Sequence *)(untyped_member);
  sentinel_interfaces__srv__SetThreshold_Request__Sequence__fini(member);
  return sentinel_interfaces__srv__SetThreshold_Request__Sequence__init(member, size);
}

size_t sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__size_function__SetThreshold_Event__response(
  const void * untyped_member)
{
  const sentinel_interfaces__srv__SetThreshold_Response__Sequence * member =
    (const sentinel_interfaces__srv__SetThreshold_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_const_function__SetThreshold_Event__response(
  const void * untyped_member, size_t index)
{
  const sentinel_interfaces__srv__SetThreshold_Response__Sequence * member =
    (const sentinel_interfaces__srv__SetThreshold_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_function__SetThreshold_Event__response(
  void * untyped_member, size_t index)
{
  sentinel_interfaces__srv__SetThreshold_Response__Sequence * member =
    (sentinel_interfaces__srv__SetThreshold_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__fetch_function__SetThreshold_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sentinel_interfaces__srv__SetThreshold_Response * item =
    ((const sentinel_interfaces__srv__SetThreshold_Response *)
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_const_function__SetThreshold_Event__response(untyped_member, index));
  sentinel_interfaces__srv__SetThreshold_Response * value =
    (sentinel_interfaces__srv__SetThreshold_Response *)(untyped_value);
  *value = *item;
}

void sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__assign_function__SetThreshold_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sentinel_interfaces__srv__SetThreshold_Response * item =
    ((sentinel_interfaces__srv__SetThreshold_Response *)
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_function__SetThreshold_Event__response(untyped_member, index));
  const sentinel_interfaces__srv__SetThreshold_Response * value =
    (const sentinel_interfaces__srv__SetThreshold_Response *)(untyped_value);
  *item = *value;
}

bool sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__resize_function__SetThreshold_Event__response(
  void * untyped_member, size_t size)
{
  sentinel_interfaces__srv__SetThreshold_Response__Sequence * member =
    (sentinel_interfaces__srv__SetThreshold_Response__Sequence *)(untyped_member);
  sentinel_interfaces__srv__SetThreshold_Response__Sequence__fini(member);
  return sentinel_interfaces__srv__SetThreshold_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentinel_interfaces__srv__SetThreshold_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(sentinel_interfaces__srv__SetThreshold_Event, request),  // bytes offset in struct
    NULL,  // default value
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__size_function__SetThreshold_Event__request,  // size() function pointer
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_const_function__SetThreshold_Event__request,  // get_const(index) function pointer
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_function__SetThreshold_Event__request,  // get(index) function pointer
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__fetch_function__SetThreshold_Event__request,  // fetch(index, &value) function pointer
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__assign_function__SetThreshold_Event__request,  // assign(index, value) function pointer
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__resize_function__SetThreshold_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(sentinel_interfaces__srv__SetThreshold_Event, response),  // bytes offset in struct
    NULL,  // default value
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__size_function__SetThreshold_Event__response,  // size() function pointer
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_const_function__SetThreshold_Event__response,  // get_const(index) function pointer
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__get_function__SetThreshold_Event__response,  // get(index) function pointer
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__fetch_function__SetThreshold_Event__response,  // fetch(index, &value) function pointer
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__assign_function__SetThreshold_Event__response,  // assign(index, value) function pointer
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__resize_function__SetThreshold_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_members = {
  "sentinel_interfaces__srv",  // message namespace
  "SetThreshold_Event",  // message name
  3,  // number of fields
  sizeof(sentinel_interfaces__srv__SetThreshold_Event),
  false,  // has_any_key_member_
  sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_member_array,  // message members
  sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_type_support_handle = {
  0,
  &sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_members,
  get_message_typesupport_handle_function,
  &sentinel_interfaces__srv__SetThreshold_Event__get_type_hash,
  &sentinel_interfaces__srv__SetThreshold_Event__get_type_description,
  &sentinel_interfaces__srv__SetThreshold_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentinel_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Event)() {
  sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Request)();
  sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Response)();
  if (!sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_type_support_handle.typesupport_identifier) {
    sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sentinel_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sentinel_interfaces__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_members = {
  "sentinel_interfaces__srv",  // service namespace
  "SetThreshold",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // sentinel_interfaces__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle,
  NULL,  // response message
  // sentinel_interfaces__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle
  NULL  // event_message
  // sentinel_interfaces__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle
};


static rosidl_service_type_support_t sentinel_interfaces__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_type_support_handle = {
  0,
  &sentinel_interfaces__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_members,
  get_service_typesupport_handle_function,
  &sentinel_interfaces__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle,
  &sentinel_interfaces__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle,
  &sentinel_interfaces__srv__SetThreshold_Event__rosidl_typesupport_introspection_c__SetThreshold_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sentinel_interfaces,
    srv,
    SetThreshold
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sentinel_interfaces,
    srv,
    SetThreshold
  ),
  &sentinel_interfaces__srv__SetThreshold__get_type_hash,
  &sentinel_interfaces__srv__SetThreshold__get_type_description,
  &sentinel_interfaces__srv__SetThreshold__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentinel_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold)(void) {
  if (!sentinel_interfaces__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_type_support_handle.typesupport_identifier) {
    sentinel_interfaces__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sentinel_interfaces__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetThreshold_Event)()->data;
  }

  return &sentinel_interfaces__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_type_support_handle;
}
