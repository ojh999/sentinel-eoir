// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sentinel_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#include "sentinel_interfaces/msg/detail/motor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sentinel_interfaces
const rosidl_type_hash_t *
sentinel_interfaces__msg__MotorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xad, 0xb9, 0x89, 0xd0, 0x01, 0x3c, 0x11, 0xcd,
      0x8a, 0xfd, 0xfb, 0xb0, 0x23, 0xd7, 0x0d, 0x43,
      0x0c, 0x85, 0xa2, 0x6b, 0x00, 0x1a, 0x19, 0x8e,
      0x18, 0x29, 0x94, 0x29, 0x9a, 0x41, 0x9f, 0xfc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sentinel_interfaces__msg__MotorStatus__TYPE_NAME[] = "sentinel_interfaces/msg/MotorStatus";

// Define type names, field names, and default values
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_moving[] = "pan_moving";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_moving_status[] = "pan_moving_status";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_pwm[] = "pan_pwm";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_current[] = "pan_current";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_velocity[] = "pan_velocity";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_position[] = "pan_position";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_voltage[] = "pan_voltage";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_temperature[] = "pan_temperature";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_hw_error[] = "pan_hw_error";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_moving[] = "tilt_moving";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_moving_status[] = "tilt_moving_status";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_pwm[] = "tilt_pwm";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_current[] = "tilt_current";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_velocity[] = "tilt_velocity";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_position[] = "tilt_position";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_voltage[] = "tilt_voltage";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_temperature[] = "tilt_temperature";
static char sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_hw_error[] = "tilt_hw_error";

static rosidl_runtime_c__type_description__Field sentinel_interfaces__msg__MotorStatus__FIELDS[] = {
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_moving, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_moving_status, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_pwm, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_current, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_velocity, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_position, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_voltage, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_temperature, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__pan_hw_error, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_moving, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_moving_status, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_pwm, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_current, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_velocity, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_position, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_voltage, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_temperature, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sentinel_interfaces__msg__MotorStatus__FIELD_NAME__tilt_hw_error, 13, 13},
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
sentinel_interfaces__msg__MotorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sentinel_interfaces__msg__MotorStatus__TYPE_NAME, 35, 35},
      {sentinel_interfaces__msg__MotorStatus__FIELDS, 18, 18},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#MotorStatus.msg\n"
  "# pan\n"
  "uint8  pan_moving\n"
  "uint8  pan_moving_status\n"
  "uint16 pan_pwm\n"
  "uint16 pan_current\n"
  "uint32 pan_velocity\n"
  "uint32 pan_position\n"
  "uint16 pan_voltage\n"
  "uint8  pan_temperature\n"
  "uint8  pan_hw_error\n"
  "\n"
  "# tilt\n"
  "uint8  tilt_moving\n"
  "uint8  tilt_moving_status\n"
  "uint16 tilt_pwm\n"
  "uint16 tilt_current\n"
  "uint32 tilt_velocity\n"
  "uint32 tilt_position\n"
  "uint16 tilt_voltage\n"
  "uint8  tilt_temperature\n"
  "uint8  tilt_hw_error";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sentinel_interfaces__msg__MotorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sentinel_interfaces__msg__MotorStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 397, 397},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sentinel_interfaces__msg__MotorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sentinel_interfaces__msg__MotorStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
