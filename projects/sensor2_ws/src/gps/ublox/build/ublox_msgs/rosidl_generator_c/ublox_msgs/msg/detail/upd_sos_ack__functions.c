// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_msgs:msg/UpdSOSAck.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/upd_sos_ack__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ublox_msgs__msg__UpdSOSAck__init(ublox_msgs__msg__UpdSOSAck * msg)
{
  if (!msg) {
    return false;
  }
  // cmd
  // reserved0
  // response
  // reserved1
  return true;
}

void
ublox_msgs__msg__UpdSOSAck__fini(ublox_msgs__msg__UpdSOSAck * msg)
{
  if (!msg) {
    return;
  }
  // cmd
  // reserved0
  // response
  // reserved1
}

ublox_msgs__msg__UpdSOSAck *
ublox_msgs__msg__UpdSOSAck__create()
{
  ublox_msgs__msg__UpdSOSAck * msg = (ublox_msgs__msg__UpdSOSAck *)malloc(sizeof(ublox_msgs__msg__UpdSOSAck));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_msgs__msg__UpdSOSAck));
  bool success = ublox_msgs__msg__UpdSOSAck__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ublox_msgs__msg__UpdSOSAck__destroy(ublox_msgs__msg__UpdSOSAck * msg)
{
  if (msg) {
    ublox_msgs__msg__UpdSOSAck__fini(msg);
  }
  free(msg);
}


bool
ublox_msgs__msg__UpdSOSAck__Sequence__init(ublox_msgs__msg__UpdSOSAck__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ublox_msgs__msg__UpdSOSAck * data = NULL;
  if (size) {
    data = (ublox_msgs__msg__UpdSOSAck *)calloc(size, sizeof(ublox_msgs__msg__UpdSOSAck));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_msgs__msg__UpdSOSAck__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_msgs__msg__UpdSOSAck__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ublox_msgs__msg__UpdSOSAck__Sequence__fini(ublox_msgs__msg__UpdSOSAck__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ublox_msgs__msg__UpdSOSAck__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ublox_msgs__msg__UpdSOSAck__Sequence *
ublox_msgs__msg__UpdSOSAck__Sequence__create(size_t size)
{
  ublox_msgs__msg__UpdSOSAck__Sequence * array = (ublox_msgs__msg__UpdSOSAck__Sequence *)malloc(sizeof(ublox_msgs__msg__UpdSOSAck__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ublox_msgs__msg__UpdSOSAck__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ublox_msgs__msg__UpdSOSAck__Sequence__destroy(ublox_msgs__msg__UpdSOSAck__Sequence * array)
{
  if (array) {
    ublox_msgs__msg__UpdSOSAck__Sequence__fini(array);
  }
  free(array);
}
