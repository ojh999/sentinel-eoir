// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sentinel_interfaces:msg/FrameSize.idl
// generated code does not contain a copyright notice

#include "sentinel_interfaces/msg/detail/frame_size__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sentinel_interfaces
const rosidl_type_hash_t *
sentinel_interfaces__msg__FrameSize__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0xa2, 0x3a, 0xa7, 0xef, 0xfa, 0x94, 0xb4,
      0x3a, 0x0e, 0xe7, 0x93, 0xa5, 0xfd, 0x58, 0x3e,
      0x3b, 0x71, 0x95, 0xe5, 0x49, 0xc8, 0x0c, 0xe9,
      0x0c, 0x7c, 0xbc, 0x39, 0x47, 0x2b, 0x23, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sentinel_interfaces__msg__FrameSize__TYPE_NAME[] = "sentinel_interfaces/msg/FrameSize";

// Define type names, field names, and default values
static char sentinel_interfaces__msg__FrameSize__FIELD_NAME__frame_w[] = "frame_w";
static char sentinel_interfaces__msg__FrameSize__FIELD_NAME__frame_h[] = "frame_h";

static rosidl_runtime_c__type_description__Field sentinel_interfaces__msg__FrameSize__FIELDS[] = {
  {
    {sentinel_interfaces__msg__FrameSize__FIELD_NAME__frame_w, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__FrameSize__FIELD_NAME__frame_h, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sentinel_interfaces__msg__FrameSize__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sentinel_interfaces__msg__FrameSize__TYPE_NAME, 33, 33},
      {sentinel_interfaces__msg__FrameSize__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#FrameSize.msg\n"
  "uint16 frame_w\n"
  "uint16 frame_h";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sentinel_interfaces__msg__FrameSize__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sentinel_interfaces__msg__FrameSize__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sentinel_interfaces__msg__FrameSize__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sentinel_interfaces__msg__FrameSize__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
