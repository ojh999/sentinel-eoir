// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sentinel_interfaces:msg/TrackedDetection2D.idl
// generated code does not contain a copyright notice

#include "sentinel_interfaces/msg/detail/tracked_detection2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sentinel_interfaces
const rosidl_type_hash_t *
sentinel_interfaces__msg__TrackedDetection2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0xbb, 0xdb, 0xde, 0x99, 0xea, 0xa8, 0x82,
      0xdb, 0x06, 0xa9, 0xbe, 0x17, 0xe7, 0xef, 0x40,
      0x53, 0x99, 0x62, 0x09, 0x4d, 0x76, 0x94, 0x56,
      0x77, 0xc0, 0x37, 0xba, 0x2e, 0x0f, 0x3c, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sentinel_interfaces__msg__TrackedDetection2D__TYPE_NAME[] = "sentinel_interfaces/msg/TrackedDetection2D";

// Define type names, field names, and default values
static char sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__track_id[] = "track_id";
static char sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__class_id[] = "class_id";
static char sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__class_name[] = "class_name";
static char sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__score[] = "score";
static char sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__x1[] = "x1";
static char sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__y1[] = "y1";
static char sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__x2[] = "x2";
static char sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__y2[] = "y2";

static rosidl_runtime_c__type_description__Field sentinel_interfaces__msg__TrackedDetection2D__FIELDS[] = {
  {
    {sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__track_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__class_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__class_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__score, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__x1, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__y1, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__x2, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__TrackedDetection2D__FIELD_NAME__y2, 2, 2},
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
sentinel_interfaces__msg__TrackedDetection2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sentinel_interfaces__msg__TrackedDetection2D__TYPE_NAME, 42, 42},
      {sentinel_interfaces__msg__TrackedDetection2D__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#TrackedDetection2D.msg\n"
  "int32 track_id\n"
  "int32 class_id\n"
  "string class_name\n"
  "float32 score\n"
  "float32 x1\n"
  "float32 y1\n"
  "float32 x2\n"
  "float32 y2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sentinel_interfaces__msg__TrackedDetection2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sentinel_interfaces__msg__TrackedDetection2D__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 129, 129},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sentinel_interfaces__msg__TrackedDetection2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sentinel_interfaces__msg__TrackedDetection2D__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
