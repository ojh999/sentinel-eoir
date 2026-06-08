// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sentinel_interfaces:msg/MotorCommand.idl
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
#include "sentinel_interfaces/msg/detail/motor_command__struct.h"
#include "sentinel_interfaces/msg/detail/motor_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sentinel_interfaces__msg__motor_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("sentinel_interfaces.msg._motor_command.MotorCommand", full_classname_dest, 51) == 0);
  }
  sentinel_interfaces__msg__MotorCommand * ros_message = _ros_message;
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tracking
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tracking = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // btn_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_mask = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pan_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pan_pos = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tilt_pos = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scan_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_step");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scan_step = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // manual_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_step");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->manual_step = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sentinel_interfaces__msg__motor_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sentinel_interfaces.msg._motor_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sentinel_interfaces__msg__MotorCommand * ros_message = (sentinel_interfaces__msg__MotorCommand *)raw_ros_message;
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tracking);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->btn_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pan_pos
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pan_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_pos
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tilt_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_step
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scan_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_step
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->manual_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
