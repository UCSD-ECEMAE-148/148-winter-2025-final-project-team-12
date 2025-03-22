// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from livox_interfaces:msg/CustomMsg.idl
// generated code does not contain a copyright notice
#include "livox_interfaces/msg/detail/custom_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `points`
#include "livox_interfaces/msg/detail/custom_point__functions.h"

bool
livox_interfaces__msg__CustomMsg__init(livox_interfaces__msg__CustomMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    livox_interfaces__msg__CustomMsg__fini(msg);
    return false;
  }
  // timebase
  // point_num
  // lidar_id
  // rsvd
  // points
  if (!livox_interfaces__msg__CustomPoint__Sequence__init(&msg->points, 0)) {
    livox_interfaces__msg__CustomMsg__fini(msg);
    return false;
  }
  return true;
}

void
livox_interfaces__msg__CustomMsg__fini(livox_interfaces__msg__CustomMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // timebase
  // point_num
  // lidar_id
  // rsvd
  // points
  livox_interfaces__msg__CustomPoint__Sequence__fini(&msg->points);
}

livox_interfaces__msg__CustomMsg *
livox_interfaces__msg__CustomMsg__create()
{
  livox_interfaces__msg__CustomMsg * msg = (livox_interfaces__msg__CustomMsg *)malloc(sizeof(livox_interfaces__msg__CustomMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(livox_interfaces__msg__CustomMsg));
  bool success = livox_interfaces__msg__CustomMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
livox_interfaces__msg__CustomMsg__destroy(livox_interfaces__msg__CustomMsg * msg)
{
  if (msg) {
    livox_interfaces__msg__CustomMsg__fini(msg);
  }
  free(msg);
}


bool
livox_interfaces__msg__CustomMsg__Sequence__init(livox_interfaces__msg__CustomMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  livox_interfaces__msg__CustomMsg * data = NULL;
  if (size) {
    data = (livox_interfaces__msg__CustomMsg *)calloc(size, sizeof(livox_interfaces__msg__CustomMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = livox_interfaces__msg__CustomMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        livox_interfaces__msg__CustomMsg__fini(&data[i - 1]);
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
livox_interfaces__msg__CustomMsg__Sequence__fini(livox_interfaces__msg__CustomMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      livox_interfaces__msg__CustomMsg__fini(&array->data[i]);
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

livox_interfaces__msg__CustomMsg__Sequence *
livox_interfaces__msg__CustomMsg__Sequence__create(size_t size)
{
  livox_interfaces__msg__CustomMsg__Sequence * array = (livox_interfaces__msg__CustomMsg__Sequence *)malloc(sizeof(livox_interfaces__msg__CustomMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = livox_interfaces__msg__CustomMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
livox_interfaces__msg__CustomMsg__Sequence__destroy(livox_interfaces__msg__CustomMsg__Sequence * array)
{
  if (array) {
    livox_interfaces__msg__CustomMsg__Sequence__fini(array);
  }
  free(array);
}
