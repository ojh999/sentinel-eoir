// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from sentinel_interfaces:srv/SetBoolFlag.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sentinel_interfaces/srv/detail/set_bool_flag__struct.h"
#include "sentinel_interfaces/srv/detail/set_bool_flag__type_support.h"
#include "sentinel_interfaces/srv/detail/set_bool_flag__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sentinel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetBoolFlag_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBoolFlag_Request_type_support_ids_t;

static const _SetBoolFlag_Request_type_support_ids_t _SetBoolFlag_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetBoolFlag_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBoolFlag_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBoolFlag_Request_type_support_symbol_names_t _SetBoolFlag_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sentinel_interfaces, srv, SetBoolFlag_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetBoolFlag_Request)),
  }
};

typedef struct _SetBoolFlag_Request_type_support_data_t
{
  void * data[2];
} _SetBoolFlag_Request_type_support_data_t;

static _SetBoolFlag_Request_type_support_data_t _SetBoolFlag_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBoolFlag_Request_message_typesupport_map = {
  2,
  "sentinel_interfaces",
  &_SetBoolFlag_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetBoolFlag_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetBoolFlag_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetBoolFlag_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBoolFlag_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &sentinel_interfaces__srv__SetBoolFlag_Request__get_type_hash,
  &sentinel_interfaces__srv__SetBoolFlag_Request__get_type_description,
  &sentinel_interfaces__srv__SetBoolFlag_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sentinel_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sentinel_interfaces, srv, SetBoolFlag_Request)() {
  return &::sentinel_interfaces::srv::rosidl_typesupport_c::SetBoolFlag_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_bool_flag__struct.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_bool_flag__type_support.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_bool_flag__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sentinel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetBoolFlag_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBoolFlag_Response_type_support_ids_t;

static const _SetBoolFlag_Response_type_support_ids_t _SetBoolFlag_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetBoolFlag_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBoolFlag_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBoolFlag_Response_type_support_symbol_names_t _SetBoolFlag_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sentinel_interfaces, srv, SetBoolFlag_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetBoolFlag_Response)),
  }
};

typedef struct _SetBoolFlag_Response_type_support_data_t
{
  void * data[2];
} _SetBoolFlag_Response_type_support_data_t;

static _SetBoolFlag_Response_type_support_data_t _SetBoolFlag_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBoolFlag_Response_message_typesupport_map = {
  2,
  "sentinel_interfaces",
  &_SetBoolFlag_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetBoolFlag_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetBoolFlag_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetBoolFlag_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBoolFlag_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &sentinel_interfaces__srv__SetBoolFlag_Response__get_type_hash,
  &sentinel_interfaces__srv__SetBoolFlag_Response__get_type_description,
  &sentinel_interfaces__srv__SetBoolFlag_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sentinel_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sentinel_interfaces, srv, SetBoolFlag_Response)() {
  return &::sentinel_interfaces::srv::rosidl_typesupport_c::SetBoolFlag_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_bool_flag__struct.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_bool_flag__type_support.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_bool_flag__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sentinel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetBoolFlag_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBoolFlag_Event_type_support_ids_t;

static const _SetBoolFlag_Event_type_support_ids_t _SetBoolFlag_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetBoolFlag_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBoolFlag_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBoolFlag_Event_type_support_symbol_names_t _SetBoolFlag_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sentinel_interfaces, srv, SetBoolFlag_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetBoolFlag_Event)),
  }
};

typedef struct _SetBoolFlag_Event_type_support_data_t
{
  void * data[2];
} _SetBoolFlag_Event_type_support_data_t;

static _SetBoolFlag_Event_type_support_data_t _SetBoolFlag_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBoolFlag_Event_message_typesupport_map = {
  2,
  "sentinel_interfaces",
  &_SetBoolFlag_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetBoolFlag_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetBoolFlag_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetBoolFlag_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBoolFlag_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &sentinel_interfaces__srv__SetBoolFlag_Event__get_type_hash,
  &sentinel_interfaces__srv__SetBoolFlag_Event__get_type_description,
  &sentinel_interfaces__srv__SetBoolFlag_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sentinel_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sentinel_interfaces, srv, SetBoolFlag_Event)() {
  return &::sentinel_interfaces::srv::rosidl_typesupport_c::SetBoolFlag_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_bool_flag__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace sentinel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetBoolFlag_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBoolFlag_type_support_ids_t;

static const _SetBoolFlag_type_support_ids_t _SetBoolFlag_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetBoolFlag_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBoolFlag_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBoolFlag_type_support_symbol_names_t _SetBoolFlag_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sentinel_interfaces, srv, SetBoolFlag)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentinel_interfaces, srv, SetBoolFlag)),
  }
};

typedef struct _SetBoolFlag_type_support_data_t
{
  void * data[2];
} _SetBoolFlag_type_support_data_t;

static _SetBoolFlag_type_support_data_t _SetBoolFlag_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBoolFlag_service_typesupport_map = {
  2,
  "sentinel_interfaces",
  &_SetBoolFlag_service_typesupport_ids.typesupport_identifier[0],
  &_SetBoolFlag_service_typesupport_symbol_names.symbol_name[0],
  &_SetBoolFlag_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetBoolFlag_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBoolFlag_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetBoolFlag_Request_message_type_support_handle,
  &SetBoolFlag_Response_message_type_support_handle,
  &SetBoolFlag_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sentinel_interfaces,
    srv,
    SetBoolFlag
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sentinel_interfaces,
    srv,
    SetBoolFlag
  ),
  &sentinel_interfaces__srv__SetBoolFlag__get_type_hash,
  &sentinel_interfaces__srv__SetBoolFlag__get_type_description,
  &sentinel_interfaces__srv__SetBoolFlag__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sentinel_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, sentinel_interfaces, srv, SetBoolFlag)() {
  return &::sentinel_interfaces::srv::rosidl_typesupport_c::SetBoolFlag_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
