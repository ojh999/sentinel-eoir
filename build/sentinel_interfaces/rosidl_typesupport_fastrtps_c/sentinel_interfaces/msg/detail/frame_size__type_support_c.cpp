// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sentinel_interfaces:msg/FrameSize.idl
// generated code does not contain a copyright notice
#include "sentinel_interfaces/msg/detail/frame_size__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sentinel_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sentinel_interfaces/msg/detail/frame_size__struct.h"
#include "sentinel_interfaces/msg/detail/frame_size__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _FrameSize__ros_msg_type = sentinel_interfaces__msg__FrameSize;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
bool cdr_serialize_sentinel_interfaces__msg__FrameSize(
  const sentinel_interfaces__msg__FrameSize * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: frame_w
  {
    cdr << ros_message->frame_w;
  }

  // Field name: frame_h
  {
    cdr << ros_message->frame_h;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
bool cdr_deserialize_sentinel_interfaces__msg__FrameSize(
  eprosima::fastcdr::Cdr & cdr,
  sentinel_interfaces__msg__FrameSize * ros_message)
{
  // Field name: frame_w
  {
    cdr >> ros_message->frame_w;
  }

  // Field name: frame_h
  {
    cdr >> ros_message->frame_h;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
size_t get_serialized_size_sentinel_interfaces__msg__FrameSize(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FrameSize__ros_msg_type * ros_message = static_cast<const _FrameSize__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: frame_w
  {
    size_t item_size = sizeof(ros_message->frame_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frame_h
  {
    size_t item_size = sizeof(ros_message->frame_h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
size_t max_serialized_size_sentinel_interfaces__msg__FrameSize(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: frame_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: frame_h
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sentinel_interfaces__msg__FrameSize;
    is_plain =
      (
      offsetof(DataType, frame_h) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
bool cdr_serialize_key_sentinel_interfaces__msg__FrameSize(
  const sentinel_interfaces__msg__FrameSize * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: frame_w
  {
    cdr << ros_message->frame_w;
  }

  // Field name: frame_h
  {
    cdr << ros_message->frame_h;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
size_t get_serialized_size_key_sentinel_interfaces__msg__FrameSize(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FrameSize__ros_msg_type * ros_message = static_cast<const _FrameSize__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: frame_w
  {
    size_t item_size = sizeof(ros_message->frame_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frame_h
  {
    size_t item_size = sizeof(ros_message->frame_h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentinel_interfaces
size_t max_serialized_size_key_sentinel_interfaces__msg__FrameSize(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: frame_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: frame_h
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sentinel_interfaces__msg__FrameSize;
    is_plain =
      (
      offsetof(DataType, frame_h) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _FrameSize__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const sentinel_interfaces__msg__FrameSize * ros_message = static_cast<const sentinel_interfaces__msg__FrameSize *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_sentinel_interfaces__msg__FrameSize(ros_message, cdr);
}

static bool _FrameSize__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  sentinel_interfaces__msg__FrameSize * ros_message = static_cast<sentinel_interfaces__msg__FrameSize *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_sentinel_interfaces__msg__FrameSize(cdr, ros_message);
}

static uint32_t _FrameSize__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sentinel_interfaces__msg__FrameSize(
      untyped_ros_message, 0));
}

static size_t _FrameSize__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sentinel_interfaces__msg__FrameSize(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FrameSize = {
  "sentinel_interfaces::msg",
  "FrameSize",
  _FrameSize__cdr_serialize,
  _FrameSize__cdr_deserialize,
  _FrameSize__get_serialized_size,
  _FrameSize__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FrameSize__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FrameSize,
  get_message_typesupport_handle_function,
  &sentinel_interfaces__msg__FrameSize__get_type_hash,
  &sentinel_interfaces__msg__FrameSize__get_type_description,
  &sentinel_interfaces__msg__FrameSize__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sentinel_interfaces, msg, FrameSize)() {
  return &_FrameSize__type_support;
}

#if defined(__cplusplus)
}
#endif
