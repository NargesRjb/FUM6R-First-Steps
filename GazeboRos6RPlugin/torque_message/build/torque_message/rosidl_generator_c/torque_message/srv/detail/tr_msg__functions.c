// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from torque_message:srv/TRMsg.idl
// generated code does not contain a copyright notice
#include "torque_message/srv/detail/tr_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
torque_message__srv__TRMsg_Request__init(torque_message__srv__TRMsg_Request * msg)
{
  if (!msg) {
    return false;
  }
  // t1
  // t2
  // t3
  // t4
  // t5
  // t6
  return true;
}

void
torque_message__srv__TRMsg_Request__fini(torque_message__srv__TRMsg_Request * msg)
{
  if (!msg) {
    return;
  }
  // t1
  // t2
  // t3
  // t4
  // t5
  // t6
}

bool
torque_message__srv__TRMsg_Request__are_equal(const torque_message__srv__TRMsg_Request * lhs, const torque_message__srv__TRMsg_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t1
  if (lhs->t1 != rhs->t1) {
    return false;
  }
  // t2
  if (lhs->t2 != rhs->t2) {
    return false;
  }
  // t3
  if (lhs->t3 != rhs->t3) {
    return false;
  }
  // t4
  if (lhs->t4 != rhs->t4) {
    return false;
  }
  // t5
  if (lhs->t5 != rhs->t5) {
    return false;
  }
  // t6
  if (lhs->t6 != rhs->t6) {
    return false;
  }
  return true;
}

bool
torque_message__srv__TRMsg_Request__copy(
  const torque_message__srv__TRMsg_Request * input,
  torque_message__srv__TRMsg_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // t1
  output->t1 = input->t1;
  // t2
  output->t2 = input->t2;
  // t3
  output->t3 = input->t3;
  // t4
  output->t4 = input->t4;
  // t5
  output->t5 = input->t5;
  // t6
  output->t6 = input->t6;
  return true;
}

torque_message__srv__TRMsg_Request *
torque_message__srv__TRMsg_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torque_message__srv__TRMsg_Request * msg = (torque_message__srv__TRMsg_Request *)allocator.allocate(sizeof(torque_message__srv__TRMsg_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(torque_message__srv__TRMsg_Request));
  bool success = torque_message__srv__TRMsg_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
torque_message__srv__TRMsg_Request__destroy(torque_message__srv__TRMsg_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    torque_message__srv__TRMsg_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
torque_message__srv__TRMsg_Request__Sequence__init(torque_message__srv__TRMsg_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torque_message__srv__TRMsg_Request * data = NULL;

  if (size) {
    data = (torque_message__srv__TRMsg_Request *)allocator.zero_allocate(size, sizeof(torque_message__srv__TRMsg_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = torque_message__srv__TRMsg_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        torque_message__srv__TRMsg_Request__fini(&data[i - 1]);
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
torque_message__srv__TRMsg_Request__Sequence__fini(torque_message__srv__TRMsg_Request__Sequence * array)
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
      torque_message__srv__TRMsg_Request__fini(&array->data[i]);
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

torque_message__srv__TRMsg_Request__Sequence *
torque_message__srv__TRMsg_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torque_message__srv__TRMsg_Request__Sequence * array = (torque_message__srv__TRMsg_Request__Sequence *)allocator.allocate(sizeof(torque_message__srv__TRMsg_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = torque_message__srv__TRMsg_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
torque_message__srv__TRMsg_Request__Sequence__destroy(torque_message__srv__TRMsg_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    torque_message__srv__TRMsg_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
torque_message__srv__TRMsg_Request__Sequence__are_equal(const torque_message__srv__TRMsg_Request__Sequence * lhs, const torque_message__srv__TRMsg_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!torque_message__srv__TRMsg_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
torque_message__srv__TRMsg_Request__Sequence__copy(
  const torque_message__srv__TRMsg_Request__Sequence * input,
  torque_message__srv__TRMsg_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(torque_message__srv__TRMsg_Request);
    torque_message__srv__TRMsg_Request * data =
      (torque_message__srv__TRMsg_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!torque_message__srv__TRMsg_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          torque_message__srv__TRMsg_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!torque_message__srv__TRMsg_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `r1v`
// Member `r2v`
// Member `r3v`
// Member `r1t`
// Member `r2t`
// Member `r3t`
// Member `r1p`
// Member `r2p`
// Member `r3p`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__functions.h"

bool
torque_message__srv__TRMsg_Response__init(torque_message__srv__TRMsg_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  msg->status = -1;
  // r1v
  if (!geometry_msgs__msg__Vector3__init(&msg->r1v)) {
    torque_message__srv__TRMsg_Response__fini(msg);
    return false;
  }
  // r2v
  if (!geometry_msgs__msg__Vector3__init(&msg->r2v)) {
    torque_message__srv__TRMsg_Response__fini(msg);
    return false;
  }
  // r3v
  if (!geometry_msgs__msg__Vector3__init(&msg->r3v)) {
    torque_message__srv__TRMsg_Response__fini(msg);
    return false;
  }
  // r1t
  if (!geometry_msgs__msg__Vector3__init(&msg->r1t)) {
    torque_message__srv__TRMsg_Response__fini(msg);
    return false;
  }
  // r2t
  if (!geometry_msgs__msg__Vector3__init(&msg->r2t)) {
    torque_message__srv__TRMsg_Response__fini(msg);
    return false;
  }
  // r3t
  if (!geometry_msgs__msg__Vector3__init(&msg->r3t)) {
    torque_message__srv__TRMsg_Response__fini(msg);
    return false;
  }
  // r1p
  if (!geometry_msgs__msg__Vector3__init(&msg->r1p)) {
    torque_message__srv__TRMsg_Response__fini(msg);
    return false;
  }
  // r2p
  if (!geometry_msgs__msg__Vector3__init(&msg->r2p)) {
    torque_message__srv__TRMsg_Response__fini(msg);
    return false;
  }
  // r3p
  if (!geometry_msgs__msg__Vector3__init(&msg->r3p)) {
    torque_message__srv__TRMsg_Response__fini(msg);
    return false;
  }
  // r1
  // r2
  // r3
  // r4
  // r5
  // r6
  // imu
  if (!sensor_msgs__msg__Imu__init(&msg->imu)) {
    torque_message__srv__TRMsg_Response__fini(msg);
    return false;
  }
  return true;
}

void
torque_message__srv__TRMsg_Response__fini(torque_message__srv__TRMsg_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // r1v
  geometry_msgs__msg__Vector3__fini(&msg->r1v);
  // r2v
  geometry_msgs__msg__Vector3__fini(&msg->r2v);
  // r3v
  geometry_msgs__msg__Vector3__fini(&msg->r3v);
  // r1t
  geometry_msgs__msg__Vector3__fini(&msg->r1t);
  // r2t
  geometry_msgs__msg__Vector3__fini(&msg->r2t);
  // r3t
  geometry_msgs__msg__Vector3__fini(&msg->r3t);
  // r1p
  geometry_msgs__msg__Vector3__fini(&msg->r1p);
  // r2p
  geometry_msgs__msg__Vector3__fini(&msg->r2p);
  // r3p
  geometry_msgs__msg__Vector3__fini(&msg->r3p);
  // r1
  // r2
  // r3
  // r4
  // r5
  // r6
  // imu
  sensor_msgs__msg__Imu__fini(&msg->imu);
}

bool
torque_message__srv__TRMsg_Response__are_equal(const torque_message__srv__TRMsg_Response * lhs, const torque_message__srv__TRMsg_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // r1v
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->r1v), &(rhs->r1v)))
  {
    return false;
  }
  // r2v
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->r2v), &(rhs->r2v)))
  {
    return false;
  }
  // r3v
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->r3v), &(rhs->r3v)))
  {
    return false;
  }
  // r1t
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->r1t), &(rhs->r1t)))
  {
    return false;
  }
  // r2t
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->r2t), &(rhs->r2t)))
  {
    return false;
  }
  // r3t
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->r3t), &(rhs->r3t)))
  {
    return false;
  }
  // r1p
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->r1p), &(rhs->r1p)))
  {
    return false;
  }
  // r2p
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->r2p), &(rhs->r2p)))
  {
    return false;
  }
  // r3p
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->r3p), &(rhs->r3p)))
  {
    return false;
  }
  // r1
  if (lhs->r1 != rhs->r1) {
    return false;
  }
  // r2
  if (lhs->r2 != rhs->r2) {
    return false;
  }
  // r3
  if (lhs->r3 != rhs->r3) {
    return false;
  }
  // r4
  if (lhs->r4 != rhs->r4) {
    return false;
  }
  // r5
  if (lhs->r5 != rhs->r5) {
    return false;
  }
  // r6
  if (lhs->r6 != rhs->r6) {
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__are_equal(
      &(lhs->imu), &(rhs->imu)))
  {
    return false;
  }
  return true;
}

bool
torque_message__srv__TRMsg_Response__copy(
  const torque_message__srv__TRMsg_Response * input,
  torque_message__srv__TRMsg_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // r1v
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->r1v), &(output->r1v)))
  {
    return false;
  }
  // r2v
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->r2v), &(output->r2v)))
  {
    return false;
  }
  // r3v
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->r3v), &(output->r3v)))
  {
    return false;
  }
  // r1t
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->r1t), &(output->r1t)))
  {
    return false;
  }
  // r2t
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->r2t), &(output->r2t)))
  {
    return false;
  }
  // r3t
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->r3t), &(output->r3t)))
  {
    return false;
  }
  // r1p
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->r1p), &(output->r1p)))
  {
    return false;
  }
  // r2p
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->r2p), &(output->r2p)))
  {
    return false;
  }
  // r3p
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->r3p), &(output->r3p)))
  {
    return false;
  }
  // r1
  output->r1 = input->r1;
  // r2
  output->r2 = input->r2;
  // r3
  output->r3 = input->r3;
  // r4
  output->r4 = input->r4;
  // r5
  output->r5 = input->r5;
  // r6
  output->r6 = input->r6;
  // imu
  if (!sensor_msgs__msg__Imu__copy(
      &(input->imu), &(output->imu)))
  {
    return false;
  }
  return true;
}

torque_message__srv__TRMsg_Response *
torque_message__srv__TRMsg_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torque_message__srv__TRMsg_Response * msg = (torque_message__srv__TRMsg_Response *)allocator.allocate(sizeof(torque_message__srv__TRMsg_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(torque_message__srv__TRMsg_Response));
  bool success = torque_message__srv__TRMsg_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
torque_message__srv__TRMsg_Response__destroy(torque_message__srv__TRMsg_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    torque_message__srv__TRMsg_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
torque_message__srv__TRMsg_Response__Sequence__init(torque_message__srv__TRMsg_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torque_message__srv__TRMsg_Response * data = NULL;

  if (size) {
    data = (torque_message__srv__TRMsg_Response *)allocator.zero_allocate(size, sizeof(torque_message__srv__TRMsg_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = torque_message__srv__TRMsg_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        torque_message__srv__TRMsg_Response__fini(&data[i - 1]);
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
torque_message__srv__TRMsg_Response__Sequence__fini(torque_message__srv__TRMsg_Response__Sequence * array)
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
      torque_message__srv__TRMsg_Response__fini(&array->data[i]);
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

torque_message__srv__TRMsg_Response__Sequence *
torque_message__srv__TRMsg_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torque_message__srv__TRMsg_Response__Sequence * array = (torque_message__srv__TRMsg_Response__Sequence *)allocator.allocate(sizeof(torque_message__srv__TRMsg_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = torque_message__srv__TRMsg_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
torque_message__srv__TRMsg_Response__Sequence__destroy(torque_message__srv__TRMsg_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    torque_message__srv__TRMsg_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
torque_message__srv__TRMsg_Response__Sequence__are_equal(const torque_message__srv__TRMsg_Response__Sequence * lhs, const torque_message__srv__TRMsg_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!torque_message__srv__TRMsg_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
torque_message__srv__TRMsg_Response__Sequence__copy(
  const torque_message__srv__TRMsg_Response__Sequence * input,
  torque_message__srv__TRMsg_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(torque_message__srv__TRMsg_Response);
    torque_message__srv__TRMsg_Response * data =
      (torque_message__srv__TRMsg_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!torque_message__srv__TRMsg_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          torque_message__srv__TRMsg_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!torque_message__srv__TRMsg_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
