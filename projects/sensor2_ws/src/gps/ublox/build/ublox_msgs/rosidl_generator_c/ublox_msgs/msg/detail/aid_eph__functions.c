// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_msgs:msg/AidEPH.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/aid_eph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `sf1d`
// Member `sf2d`
// Member `sf3d`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ublox_msgs__msg__AidEPH__init(ublox_msgs__msg__AidEPH * msg)
{
  if (!msg) {
    return false;
  }
  // svid
  // how
  // sf1d
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->sf1d, 0)) {
    ublox_msgs__msg__AidEPH__fini(msg);
    return false;
  }
  // sf2d
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->sf2d, 0)) {
    ublox_msgs__msg__AidEPH__fini(msg);
    return false;
  }
  // sf3d
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->sf3d, 0)) {
    ublox_msgs__msg__AidEPH__fini(msg);
    return false;
  }
  return true;
}

void
ublox_msgs__msg__AidEPH__fini(ublox_msgs__msg__AidEPH * msg)
{
  if (!msg) {
    return;
  }
  // svid
  // how
  // sf1d
  rosidl_runtime_c__uint32__Sequence__fini(&msg->sf1d);
  // sf2d
  rosidl_runtime_c__uint32__Sequence__fini(&msg->sf2d);
  // sf3d
  rosidl_runtime_c__uint32__Sequence__fini(&msg->sf3d);
}

ublox_msgs__msg__AidEPH *
ublox_msgs__msg__AidEPH__create()
{
  ublox_msgs__msg__AidEPH * msg = (ublox_msgs__msg__AidEPH *)malloc(sizeof(ublox_msgs__msg__AidEPH));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_msgs__msg__AidEPH));
  bool success = ublox_msgs__msg__AidEPH__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ublox_msgs__msg__AidEPH__destroy(ublox_msgs__msg__AidEPH * msg)
{
  if (msg) {
    ublox_msgs__msg__AidEPH__fini(msg);
  }
  free(msg);
}


bool
ublox_msgs__msg__AidEPH__Sequence__init(ublox_msgs__msg__AidEPH__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ublox_msgs__msg__AidEPH * data = NULL;
  if (size) {
    data = (ublox_msgs__msg__AidEPH *)calloc(size, sizeof(ublox_msgs__msg__AidEPH));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_msgs__msg__AidEPH__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_msgs__msg__AidEPH__fini(&data[i - 1]);
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
ublox_msgs__msg__AidEPH__Sequence__fini(ublox_msgs__msg__AidEPH__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ublox_msgs__msg__AidEPH__fini(&array->data[i]);
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

ublox_msgs__msg__AidEPH__Sequence *
ublox_msgs__msg__AidEPH__Sequence__create(size_t size)
{
  ublox_msgs__msg__AidEPH__Sequence * array = (ublox_msgs__msg__AidEPH__Sequence *)malloc(sizeof(ublox_msgs__msg__AidEPH__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ublox_msgs__msg__AidEPH__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ublox_msgs__msg__AidEPH__Sequence__destroy(ublox_msgs__msg__AidEPH__Sequence * array)
{
  if (array) {
    ublox_msgs__msg__AidEPH__Sequence__fini(array);
  }
  free(array);
}
