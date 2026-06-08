// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentinel_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice
#include "sentinel_interfaces/msg/detail/motor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sentinel_interfaces__msg__MotorStatus__init(sentinel_interfaces__msg__MotorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // pan_moving
  // pan_moving_status
  // pan_pwm
  // pan_current
  // pan_velocity
  // pan_position
  // pan_voltage
  // pan_temperature
  // pan_hw_error
  // tilt_moving
  // tilt_moving_status
  // tilt_pwm
  // tilt_current
  // tilt_velocity
  // tilt_position
  // tilt_voltage
  // tilt_temperature
  // tilt_hw_error
  return true;
}

void
sentinel_interfaces__msg__MotorStatus__fini(sentinel_interfaces__msg__MotorStatus * msg)
{
  if (!msg) {
    return;
  }
  // pan_moving
  // pan_moving_status
  // pan_pwm
  // pan_current
  // pan_velocity
  // pan_position
  // pan_voltage
  // pan_temperature
  // pan_hw_error
  // tilt_moving
  // tilt_moving_status
  // tilt_pwm
  // tilt_current
  // tilt_velocity
  // tilt_position
  // tilt_voltage
  // tilt_temperature
  // tilt_hw_error
}

bool
sentinel_interfaces__msg__MotorStatus__are_equal(const sentinel_interfaces__msg__MotorStatus * lhs, const sentinel_interfaces__msg__MotorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pan_moving
  if (lhs->pan_moving != rhs->pan_moving) {
    return false;
  }
  // pan_moving_status
  if (lhs->pan_moving_status != rhs->pan_moving_status) {
    return false;
  }
  // pan_pwm
  if (lhs->pan_pwm != rhs->pan_pwm) {
    return false;
  }
  // pan_current
  if (lhs->pan_current != rhs->pan_current) {
    return false;
  }
  // pan_velocity
  if (lhs->pan_velocity != rhs->pan_velocity) {
    return false;
  }
  // pan_position
  if (lhs->pan_position != rhs->pan_position) {
    return false;
  }
  // pan_voltage
  if (lhs->pan_voltage != rhs->pan_voltage) {
    return false;
  }
  // pan_temperature
  if (lhs->pan_temperature != rhs->pan_temperature) {
    return false;
  }
  // pan_hw_error
  if (lhs->pan_hw_error != rhs->pan_hw_error) {
    return false;
  }
  // tilt_moving
  if (lhs->tilt_moving != rhs->tilt_moving) {
    return false;
  }
  // tilt_moving_status
  if (lhs->tilt_moving_status != rhs->tilt_moving_status) {
    return false;
  }
  // tilt_pwm
  if (lhs->tilt_pwm != rhs->tilt_pwm) {
    return false;
  }
  // tilt_current
  if (lhs->tilt_current != rhs->tilt_current) {
    return false;
  }
  // tilt_velocity
  if (lhs->tilt_velocity != rhs->tilt_velocity) {
    return false;
  }
  // tilt_position
  if (lhs->tilt_position != rhs->tilt_position) {
    return false;
  }
  // tilt_voltage
  if (lhs->tilt_voltage != rhs->tilt_voltage) {
    return false;
  }
  // tilt_temperature
  if (lhs->tilt_temperature != rhs->tilt_temperature) {
    return false;
  }
  // tilt_hw_error
  if (lhs->tilt_hw_error != rhs->tilt_hw_error) {
    return false;
  }
  return true;
}

bool
sentinel_interfaces__msg__MotorStatus__copy(
  const sentinel_interfaces__msg__MotorStatus * input,
  sentinel_interfaces__msg__MotorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // pan_moving
  output->pan_moving = input->pan_moving;
  // pan_moving_status
  output->pan_moving_status = input->pan_moving_status;
  // pan_pwm
  output->pan_pwm = input->pan_pwm;
  // pan_current
  output->pan_current = input->pan_current;
  // pan_velocity
  output->pan_velocity = input->pan_velocity;
  // pan_position
  output->pan_position = input->pan_position;
  // pan_voltage
  output->pan_voltage = input->pan_voltage;
  // pan_temperature
  output->pan_temperature = input->pan_temperature;
  // pan_hw_error
  output->pan_hw_error = input->pan_hw_error;
  // tilt_moving
  output->tilt_moving = input->tilt_moving;
  // tilt_moving_status
  output->tilt_moving_status = input->tilt_moving_status;
  // tilt_pwm
  output->tilt_pwm = input->tilt_pwm;
  // tilt_current
  output->tilt_current = input->tilt_current;
  // tilt_velocity
  output->tilt_velocity = input->tilt_velocity;
  // tilt_position
  output->tilt_position = input->tilt_position;
  // tilt_voltage
  output->tilt_voltage = input->tilt_voltage;
  // tilt_temperature
  output->tilt_temperature = input->tilt_temperature;
  // tilt_hw_error
  output->tilt_hw_error = input->tilt_hw_error;
  return true;
}

sentinel_interfaces__msg__MotorStatus *
sentinel_interfaces__msg__MotorStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentinel_interfaces__msg__MotorStatus * msg = (sentinel_interfaces__msg__MotorStatus *)allocator.allocate(sizeof(sentinel_interfaces__msg__MotorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentinel_interfaces__msg__MotorStatus));
  bool success = sentinel_interfaces__msg__MotorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentinel_interfaces__msg__MotorStatus__destroy(sentinel_interfaces__msg__MotorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentinel_interfaces__msg__MotorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentinel_interfaces__msg__MotorStatus__Sequence__init(sentinel_interfaces__msg__MotorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentinel_interfaces__msg__MotorStatus * data = NULL;

  if (size) {
    data = (sentinel_interfaces__msg__MotorStatus *)allocator.zero_allocate(size, sizeof(sentinel_interfaces__msg__MotorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentinel_interfaces__msg__MotorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentinel_interfaces__msg__MotorStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sentinel_interfaces__msg__MotorStatus__Sequence__fini(sentinel_interfaces__msg__MotorStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sentinel_interfaces__msg__MotorStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sentinel_interfaces__msg__MotorStatus__Sequence *
sentinel_interfaces__msg__MotorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentinel_interfaces__msg__MotorStatus__Sequence * array = (sentinel_interfaces__msg__MotorStatus__Sequence *)allocator.allocate(sizeof(sentinel_interfaces__msg__MotorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentinel_interfaces__msg__MotorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentinel_interfaces__msg__MotorStatus__Sequence__destroy(sentinel_interfaces__msg__MotorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentinel_interfaces__msg__MotorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentinel_interfaces__msg__MotorStatus__Sequence__are_equal(const sentinel_interfaces__msg__MotorStatus__Sequence * lhs, const sentinel_interfaces__msg__MotorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentinel_interfaces__msg__MotorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentinel_interfaces__msg__MotorStatus__Sequence__copy(
  const sentinel_interfaces__msg__MotorStatus__Sequence * input,
  sentinel_interfaces__msg__MotorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentinel_interfaces__msg__MotorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentinel_interfaces__msg__MotorStatus * data =
      (sentinel_interfaces__msg__MotorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentinel_interfaces__msg__MotorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentinel_interfaces__msg__MotorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentinel_interfaces__msg__MotorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
