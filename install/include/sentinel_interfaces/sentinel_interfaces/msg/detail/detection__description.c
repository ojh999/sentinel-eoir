// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sentinel_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#include "sentinel_interfaces/msg/detail/detection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sentinel_interfaces
const rosidl_type_hash_t *
sentinel_interfaces__msg__Detection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x69, 0xb2, 0xb2, 0xbe, 0xc6, 0x0a, 0xee, 0x93,
      0x27, 0xcf, 0xb9, 0xfd, 0x00, 0xd7, 0xe2, 0x1f,
      0xc4, 0x1e, 0x82, 0x5e, 0x96, 0x5a, 0xfb, 0x19,
      0x5b, 0x02, 0xda, 0x00, 0xb8, 0x1b, 0xa0, 0x62,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sentinel_interfaces__msg__Detection__TYPE_NAME[] = "sentinel_interfaces/msg/Detection";

// Define type names, field names, and default values
static char sentinel_interfaces__msg__Detection__FIELD_NAME__cx[] = "cx";
static char sentinel_interfaces__msg__Detection__FIELD_NAME__cy[] = "cy";

static rosidl_runtime_c__type_description__Field sentinel_interfaces__msg__Detection__FIELDS[] = {
  {
    {sentinel_interfaces__msg__Detection__FIELD_NAME__cx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__Detection__FIELD_NAME__cy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sentinel_interfaces__msg__Detection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sentinel_interfaces__msg__Detection__TYPE_NAME, 33, 33},
      {sentinel_interfaces__msg__Detection__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Detection.msg\n"
  "float32 cx\n"
  "float32 cy";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sentinel_interfaces__msg__Detection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sentinel_interfaces__msg__Detection__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sentinel_interfaces__msg__Detection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sentinel_interfaces__msg__Detection__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
