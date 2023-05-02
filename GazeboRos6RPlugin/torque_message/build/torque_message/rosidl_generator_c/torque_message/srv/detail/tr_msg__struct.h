// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from torque_message:srv/TRMsg.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__STRUCT_H_
#define TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TRMsg in the package torque_message.
typedef struct torque_message__srv__TRMsg_Request
{
  double t1;
  double t2;
  double t3;
  double t4;
  double t5;
  double t6;
} torque_message__srv__TRMsg_Request;

// Struct for a sequence of torque_message__srv__TRMsg_Request.
typedef struct torque_message__srv__TRMsg_Request__Sequence
{
  torque_message__srv__TRMsg_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} torque_message__srv__TRMsg_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'r1v'
// Member 'r2v'
// Member 'r3v'
// Member 'r1t'
// Member 'r2t'
// Member 'r3t'
// Member 'r1p'
// Member 'r2p'
// Member 'r3p'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.h"

// Struct defined in srv/TRMsg in the package torque_message.
typedef struct torque_message__srv__TRMsg_Response
{
  int8_t status;
  geometry_msgs__msg__Vector3 r1v;
  geometry_msgs__msg__Vector3 r2v;
  geometry_msgs__msg__Vector3 r3v;
  geometry_msgs__msg__Vector3 r1t;
  geometry_msgs__msg__Vector3 r2t;
  geometry_msgs__msg__Vector3 r3t;
  geometry_msgs__msg__Vector3 r1p;
  geometry_msgs__msg__Vector3 r2p;
  geometry_msgs__msg__Vector3 r3p;
  double r1;
  double r2;
  double r3;
  double r4;
  double r5;
  double r6;
  sensor_msgs__msg__Imu imu;
} torque_message__srv__TRMsg_Response;

// Struct for a sequence of torque_message__srv__TRMsg_Response.
typedef struct torque_message__srv__TRMsg_Response__Sequence
{
  torque_message__srv__TRMsg_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} torque_message__srv__TRMsg_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__STRUCT_H_
