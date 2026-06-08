// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sentinel_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "sentinel_interfaces/msg/detail/motor_status__struct.h"
#include "sentinel_interfaces/msg/detail/motor_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sentinel_interfaces__msg__motor_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("sentinel_interfaces.msg._motor_status.MotorStatus", full_classname_dest, 49) == 0);
  }
  sentinel_interfaces__msg__MotorStatus * ros_message = _ros_message;
  {  // pan_moving
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_moving");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pan_moving = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pan_moving_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_moving_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pan_moving_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pan_pwm
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_pwm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pan_pwm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pan_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pan_current = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pan_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pan_velocity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pan_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pan_position = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pan_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pan_voltage = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pan_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pan_temperature = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pan_hw_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_hw_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pan_hw_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_moving
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_moving");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tilt_moving = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_moving_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_moving_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tilt_moving_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_pwm
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_pwm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tilt_pwm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tilt_current = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tilt_velocity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tilt_position = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tilt_voltage = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tilt_temperature = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_hw_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_hw_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tilt_hw_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sentinel_interfaces__msg__motor_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sentinel_interfaces.msg._motor_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sentinel_interfaces__msg__MotorStatus * ros_message = (sentinel_interfaces__msg__MotorStatus *)raw_ros_message;
  {  // pan_moving
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pan_moving);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_moving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pan_moving_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pan_moving_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_moving_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pan_pwm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pan_pwm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_pwm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pan_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pan_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pan_velocity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pan_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pan_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pan_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pan_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pan_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pan_temperature
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pan_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pan_hw_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pan_hw_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_hw_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_moving
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tilt_moving);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_moving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_moving_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tilt_moving_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_moving_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_pwm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tilt_pwm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_pwm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tilt_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_velocity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tilt_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tilt_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tilt_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_temperature
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tilt_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_hw_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tilt_hw_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_hw_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
