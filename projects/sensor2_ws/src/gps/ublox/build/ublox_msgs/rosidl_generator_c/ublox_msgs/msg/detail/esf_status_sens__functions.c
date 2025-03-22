// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_msgs:msg/EsfSTATUSSens.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/esf_status_sens__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ublox_msgs__msg__EsfSTATUSSens__init(ublox_msgs__msg__EsfSTATUSSens * msg)
{
  if (!msg) {
    return false;
  }
  // sens_status1
  // sens_status2
  // freq
  // faults
  return true;
}

void
ublox_msgs__msg__EsfSTATUSSens__fini(ublox_msgs__msg__EsfSTATUSSens * msg)
{
  if (!msg) {
    return;
  }
  // sens_status1
  // sens_status2
  // freq
  // faults
}

ublox_msgs__msg__EsfSTATUSSens *
ublox_msgs__msg__EsfSTATUSSens__create()
{
  ublox_msgs__msg__EsfSTATUSSens * msg = (ublox_msgs__msg__EsfSTATUSSens *)malloc(sizeof(ublox_msgs__msg__EsfSTATUSSens));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_msgs__msg__EsfSTATUSSens));
  bool success = ublox_msgs__msg__EsfSTATUSSens__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ublox_msgs__msg__EsfSTATUSSens__destroy(ublox_msgs__msg__EsfSTATUSSens * msg)
{
  if (msg) {
    ublox_msgs__msg__EsfSTATUSSens__fini(msg);
  }
  free(msg);
}


bool
ublox_msgs__msg__EsfSTATUSSens__Sequence__init(ublox_msgs__msg__EsfSTATUSSens__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ublox_msgs__msg__EsfSTATUSSens * data = NULL;
  if (size) {
    data = (ublox_msgs__msg__EsfSTATUSSens *)calloc(size, sizeof(ublox_msgs__msg__EsfSTATUSSens));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_msgs__msg__EsfSTATUSSens__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_msgs__msg__EsfSTATUSSens__fini(&data[i - 1]);
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
ublox_msgs__msg__EsfSTATUSSens__Sequence__fini(ublox_msgs__msg__EsfSTATUSSens__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ublox_msgs__msg__EsfSTATUSSens__fini(&array->data[i]);
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

ublox_msgs__msg__EsfSTATUSSens__Sequence *
ublox_msgs__msg__EsfSTATUSSens__Sequence__create(size_t size)
{
  ublox_msgs__msg__EsfSTATUSSens__Sequence * array = (ublox_msgs__msg__EsfSTATUSSens__Sequence *)malloc(sizeof(ublox_msgs__msg__EsfSTATUSSens__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ublox_msgs__msg__EsfSTATUSSens__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ublox_msgs__msg__EsfSTATUSSens__Sequence__destroy(ublox_msgs__msg__EsfSTATUSSens__Sequence * array)
{
  if (array) {
    ublox_msgs__msg__EsfSTATUSSens__Sequence__fini(array);
  }
  free(array);
}
