// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_msgs:msg/NavSBAS.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_sbas__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `sv`
#include "ublox_msgs/msg/detail/nav_sbassv__functions.h"

bool
ublox_msgs__msg__NavSBAS__init(ublox_msgs__msg__NavSBAS * msg)
{
  if (!msg) {
    return false;
  }
  // i_tow
  // geo
  // mode
  // sys
  // service
  // cnt
  // reserved0
  // sv
  if (!ublox_msgs__msg__NavSBASSV__Sequence__init(&msg->sv, 0)) {
    ublox_msgs__msg__NavSBAS__fini(msg);
    return false;
  }
  return true;
}

void
ublox_msgs__msg__NavSBAS__fini(ublox_msgs__msg__NavSBAS * msg)
{
  if (!msg) {
    return;
  }
  // i_tow
  // geo
  // mode
  // sys
  // service
  // cnt
  // reserved0
  // sv
  ublox_msgs__msg__NavSBASSV__Sequence__fini(&msg->sv);
}

ublox_msgs__msg__NavSBAS *
ublox_msgs__msg__NavSBAS__create()
{
  ublox_msgs__msg__NavSBAS * msg = (ublox_msgs__msg__NavSBAS *)malloc(sizeof(ublox_msgs__msg__NavSBAS));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_msgs__msg__NavSBAS));
  bool success = ublox_msgs__msg__NavSBAS__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ublox_msgs__msg__NavSBAS__destroy(ublox_msgs__msg__NavSBAS * msg)
{
  if (msg) {
    ublox_msgs__msg__NavSBAS__fini(msg);
  }
  free(msg);
}


bool
ublox_msgs__msg__NavSBAS__Sequence__init(ublox_msgs__msg__NavSBAS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ublox_msgs__msg__NavSBAS * data = NULL;
  if (size) {
    data = (ublox_msgs__msg__NavSBAS *)calloc(size, sizeof(ublox_msgs__msg__NavSBAS));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_msgs__msg__NavSBAS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_msgs__msg__NavSBAS__fini(&data[i - 1]);
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
ublox_msgs__msg__NavSBAS__Sequence__fini(ublox_msgs__msg__NavSBAS__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ublox_msgs__msg__NavSBAS__fini(&array->data[i]);
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

ublox_msgs__msg__NavSBAS__Sequence *
ublox_msgs__msg__NavSBAS__Sequence__create(size_t size)
{
  ublox_msgs__msg__NavSBAS__Sequence * array = (ublox_msgs__msg__NavSBAS__Sequence *)malloc(sizeof(ublox_msgs__msg__NavSBAS__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ublox_msgs__msg__NavSBAS__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ublox_msgs__msg__NavSBAS__Sequence__destroy(ublox_msgs__msg__NavSBAS__Sequence * array)
{
  if (array) {
    ublox_msgs__msg__NavSBAS__Sequence__fini(array);
  }
  free(array);
}
