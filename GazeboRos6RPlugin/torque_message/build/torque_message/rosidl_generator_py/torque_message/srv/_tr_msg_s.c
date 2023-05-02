// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from torque_message:srv/TRMsg.idl
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
#include "torque_message/srv/detail/tr_msg__struct.h"
#include "torque_message/srv/detail/tr_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool torque_message__srv__tr_msg__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("torque_message.srv._tr_msg.TRMsg_Request", full_classname_dest, 40) == 0);
  }
  torque_message__srv__TRMsg_Request * ros_message = _ros_message;
  {  // t1
    PyObject * field = PyObject_GetAttrString(_pymsg, "t1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t2
    PyObject * field = PyObject_GetAttrString(_pymsg, "t2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t3
    PyObject * field = PyObject_GetAttrString(_pymsg, "t3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t4
    PyObject * field = PyObject_GetAttrString(_pymsg, "t4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t5
    PyObject * field = PyObject_GetAttrString(_pymsg, "t5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t5 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t6
    PyObject * field = PyObject_GetAttrString(_pymsg, "t6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t6 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * torque_message__srv__tr_msg__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TRMsg_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("torque_message.srv._tr_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TRMsg_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  torque_message__srv__TRMsg_Request * ros_message = (torque_message__srv__TRMsg_Request *)raw_ros_message;
  {  // t1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "torque_message/srv/detail/tr_msg__struct.h"
// already included above
// #include "torque_message/srv/detail/tr_msg__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__imu__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__imu__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool torque_message__srv__tr_msg__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("torque_message.srv._tr_msg.TRMsg_Response", full_classname_dest, 41) == 0);
  }
  torque_message__srv__TRMsg_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // r1v
    PyObject * field = PyObject_GetAttrString(_pymsg, "r1v");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->r1v)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // r2v
    PyObject * field = PyObject_GetAttrString(_pymsg, "r2v");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->r2v)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // r3v
    PyObject * field = PyObject_GetAttrString(_pymsg, "r3v");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->r3v)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // r1t
    PyObject * field = PyObject_GetAttrString(_pymsg, "r1t");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->r1t)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // r2t
    PyObject * field = PyObject_GetAttrString(_pymsg, "r2t");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->r2t)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // r3t
    PyObject * field = PyObject_GetAttrString(_pymsg, "r3t");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->r3t)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // r1p
    PyObject * field = PyObject_GetAttrString(_pymsg, "r1p");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->r1p)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // r2p
    PyObject * field = PyObject_GetAttrString(_pymsg, "r2p");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->r2p)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // r3p
    PyObject * field = PyObject_GetAttrString(_pymsg, "r3p");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->r3p)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // r1
    PyObject * field = PyObject_GetAttrString(_pymsg, "r1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r2
    PyObject * field = PyObject_GetAttrString(_pymsg, "r2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r3
    PyObject * field = PyObject_GetAttrString(_pymsg, "r3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r4
    PyObject * field = PyObject_GetAttrString(_pymsg, "r4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r5
    PyObject * field = PyObject_GetAttrString(_pymsg, "r5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r5 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r6
    PyObject * field = PyObject_GetAttrString(_pymsg, "r6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r6 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__imu__convert_from_py(field, &ros_message->imu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * torque_message__srv__tr_msg__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TRMsg_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("torque_message.srv._tr_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TRMsg_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  torque_message__srv__TRMsg_Response * ros_message = (torque_message__srv__TRMsg_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r1v
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->r1v);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "r1v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r2v
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->r2v);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "r2v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r3v
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->r3v);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "r3v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r1t
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->r1t);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "r1t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r2t
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->r2t);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "r2t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r3t
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->r3t);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "r3t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r1p
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->r1p);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "r1p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r2p
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->r2p);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "r2p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r3p
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->r3p);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "r3p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu
    PyObject * field = NULL;
    field = sensor_msgs__msg__imu__convert_to_py(&ros_message->imu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
