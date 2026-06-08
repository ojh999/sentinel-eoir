// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from sentinel_interfaces:srv/SetThreshold.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sentinel_interfaces/srv/detail/set_threshold__functions.h"
#include "sentinel_interfaces/srv/detail/set_threshold__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sentinel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetThreshold_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetThreshold_Request_type_support_ids_t;

static const _SetThreshold_Request_type_support_ids_t _SetThreshold_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetThreshold_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetThreshold_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetThreshold_Request_type_support_symbol_names_t _SetThreshold_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sentinel_interfaces, srv, SetThreshold_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sentinel_interfaces, srv, SetThreshold_Request)),
  }
};

typedef struct _SetThreshold_Request_type_support_data_t
{
  void * data[2];
} _SetThreshold_Request_type_support_data_t;

static _SetThreshold_Request_type_support_data_t _SetThreshold_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetThreshold_Request_message_typesupport_map = {
  2,
  "sentinel_interfaces",
  &_SetThreshold_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetThreshold_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetThreshold_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetThreshold_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetThreshold_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sentinel_interfaces__srv__SetThreshold_Request__get_type_hash,
  &sentinel_interfaces__srv__SetThreshold_Request__get_type_description,
  &sentinel_interfaces__srv__SetThreshold_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace sentinel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sentinel_interfaces::srv::SetThreshold_Request>()
{
  return &::sentinel_interfaces::srv::rosidl_typesupport_cpp::SetThreshold_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sentinel_interfaces, srv, SetThreshold_Request)() {
  return get_message_type_support_handle<sentinel_interfaces::srv::SetThreshold_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__functions.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sentinel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetThreshold_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetThreshold_Response_type_support_ids_t;

static const _SetThreshold_Response_type_support_ids_t _SetThreshold_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetThreshold_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetThreshold_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetThreshold_Response_type_support_symbol_names_t _SetThreshold_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sentinel_interfaces, srv, SetThreshold_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sentinel_interfaces, srv, SetThreshold_Response)),
  }
};

typedef struct _SetThreshold_Response_type_support_data_t
{
  void * data[2];
} _SetThreshold_Response_type_support_data_t;

static _SetThreshold_Response_type_support_data_t _SetThreshold_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetThreshold_Response_message_typesupport_map = {
  2,
  "sentinel_interfaces",
  &_SetThreshold_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetThreshold_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetThreshold_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetThreshold_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetThreshold_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sentinel_interfaces__srv__SetThreshold_Response__get_type_hash,
  &sentinel_interfaces__srv__SetThreshold_Response__get_type_description,
  &sentinel_interfaces__srv__SetThreshold_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace sentinel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sentinel_interfaces::srv::SetThreshold_Response>()
{
  return &::sentinel_interfaces::srv::rosidl_typesupport_cpp::SetThreshold_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sentinel_interfaces, srv, SetThreshold_Response)() {
  return get_message_type_support_handle<sentinel_interfaces::srv::SetThreshold_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__functions.h"
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sentinel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetThreshold_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetThreshold_Event_type_support_ids_t;

static const _SetThreshold_Event_type_support_ids_t _SetThreshold_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetThreshold_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetThreshold_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetThreshold_Event_type_support_symbol_names_t _SetThreshold_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sentinel_interfaces, srv, SetThreshold_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sentinel_interfaces, srv, SetThreshold_Event)),
  }
};

typedef struct _SetThreshold_Event_type_support_data_t
{
  void * data[2];
} _SetThreshold_Event_type_support_data_t;

static _SetThreshold_Event_type_support_data_t _SetThreshold_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetThreshold_Event_message_typesupport_map = {
  2,
  "sentinel_interfaces",
  &_SetThreshold_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetThreshold_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetThreshold_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetThreshold_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetThreshold_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sentinel_interfaces__srv__SetThreshold_Event__get_type_hash,
  &sentinel_interfaces__srv__SetThreshold_Event__get_type_description,
  &sentinel_interfaces__srv__SetThreshold_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace sentinel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sentinel_interfaces::srv::SetThreshold_Event>()
{
  return &::sentinel_interfaces::srv::rosidl_typesupport_cpp::SetThreshold_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sentinel_interfaces, srv, SetThreshold_Event)() {
  return get_message_type_support_handle<sentinel_interfaces::srv::SetThreshold_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "sentinel_interfaces/srv/detail/set_threshold__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sentinel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetThreshold_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetThreshold_type_support_ids_t;

static const _SetThreshold_type_support_ids_t _SetThreshold_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetThreshold_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetThreshold_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetThreshold_type_support_symbol_names_t _SetThreshold_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sentinel_interfaces, srv, SetThreshold)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sentinel_interfaces, srv, SetThreshold)),
  }
};

typedef struct _SetThreshold_type_support_data_t
{
  void * data[2];
} _SetThreshold_type_support_data_t;

static _SetThreshold_type_support_data_t _SetThreshold_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetThreshold_service_typesupport_map = {
  2,
  "sentinel_interfaces",
  &_SetThreshold_service_typesupport_ids.typesupport_identifier[0],
  &_SetThreshold_service_typesupport_symbol_names.symbol_name[0],
  &_SetThreshold_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetThreshold_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetThreshold_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sentinel_interfaces::srv::SetThreshold_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sentinel_interfaces::srv::SetThreshold_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sentinel_interfaces::srv::SetThreshold_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<sentinel_interfaces::srv::SetThreshold>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<sentinel_interfaces::srv::SetThreshold>,
  &sentinel_interfaces__srv__SetThreshold__get_type_hash,
  &sentinel_interfaces__srv__SetThreshold__get_type_description,
  &sentinel_interfaces__srv__SetThreshold__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace sentinel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<sentinel_interfaces::srv::SetThreshold>()
{
  return &::sentinel_interfaces::srv::rosidl_typesupport_cpp::SetThreshold_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, sentinel_interfaces, srv, SetThreshold)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<sentinel_interfaces::srv::SetThreshold>();
}

#ifdef __cplusplus
}
#endif
