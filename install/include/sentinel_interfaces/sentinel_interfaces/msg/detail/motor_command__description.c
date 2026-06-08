// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sentinel_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#include "sentinel_interfaces/msg/detail/motor_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sentinel_interfaces
const rosidl_type_hash_t *
sentinel_interfaces__msg__MotorCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0x09, 0x30, 0xa6, 0x7f, 0xc7, 0x2a, 0xae,
      0x78, 0x76, 0x88, 0x48, 0xcc, 0x31, 0x60, 0x01,
      0xe8, 0xe9, 0x04, 0xc1, 0xb2, 0x59, 0xa7, 0x25,
      0x74, 0xb2, 0x58, 0x57, 0x93, 0x2a, 0xa0, 0x9e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sentinel_interfaces__msg__MotorCommand__TYPE_NAME[] = "sentinel_interfaces/msg/MotorCommand";

// Define type names, field names, and default values
static char sentinel_interfaces__msg__MotorCommand__FIELD_NAME__mode[] = "mode";
static char sentinel_interfaces__msg__MotorCommand__FIELD_NAME__tracking[] = "tracking";
static char sentinel_interfaces__msg__MotorCommand__FIELD_NAME__btn_mask[] = "btn_mask";
static char sentinel_interfaces__msg__MotorCommand__FIELD_NAME__pan_pos[] = "pan_pos";
static char sentinel_interfaces__msg__MotorCommand__FIELD_NAME__tilt_pos[] = "tilt_pos";
static char sentinel_interfaces__msg__MotorCommand__FIELD_NAME__scan_step[] = "scan_step";
static char sentinel_interfaces__msg__MotorCommand__FIELD_NAME__manual_step[] = "manual_step";

static rosidl_runtime_c__type_description__Field sentinel_interfaces__msg__MotorCommand__FIELDS[] = {
  {
    {sentinel_interfaces__msg__MotorCommand__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorCommand__FIELD_NAME__tracking, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorCommand__FIELD_NAME__btn_mask, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorCommand__FIELD_NAME__pan_pos, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorCommand__FIELD_NAME__tilt_pos, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorCommand__FIELD_NAME__scan_step, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorCommand__FIELD_NAME__manual_step, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sentinel_interfaces__msg__MotorCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sentinel_interfaces__msg__MotorCommand__TYPE_NAME, 36, 36},
      {sentinel_interfaces__msg__MotorCommand__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#MotorCommand.msg\n"
  "# GUI \\xe2\\x86\\x92 Jetson \\xe2\\x86\\x92 \\xeb\\xaa\\xa8\\xed\\x84\\xb0\n"
  "uint8  mode          # 0=scan, 1=manual\n"
  "uint8  tracking      # 0=off, 1=on\n"
  "uint8  btn_mask\n"
  "uint16 pan_pos       # 0~4095\n"
  "uint16 tilt_pos      # 0~4095\n"
  "uint8  scan_step\n"
  "uint8  manual_step";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sentinel_interfaces__msg__MotorCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sentinel_interfaces__msg__MotorCommand__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 224, 224},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sentinel_interfaces__msg__MotorCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sentinel_interfaces__msg__MotorCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
