// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from livox_interfaces:msg/CustomPoint.idl
// generated code does not contain a copyright notice
#include "livox_interfaces/msg/detail/custom_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
livox_interfaces__msg__CustomPoint__init(livox_interfaces__msg__CustomPoint * msg)
{
  if (!msg) {
    return false;
  }
  // offset_time
  // x
  // y
  // z
  // reflectivity
  // tag
  // line
  return true;
}

void
livox_interfaces__msg__CustomPoint__fini(livox_interfaces__msg__CustomPoint * msg)
{
  if (!msg) {
    return;
  }
  // offset_time
  // x
  // y
  // z
  // reflectivity
  // tag
  // line
}

livox_interfaces__msg__CustomPoint *
livox_interfaces__msg__CustomPoint__create()
{
  livox_interfaces__msg__CustomPoint * msg = (livox_interfaces__msg__CustomPoint *)malloc(sizeof(livox_interfaces__msg__CustomPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(livox_interfaces__msg__CustomPoint));
  bool success = livox_interfaces__msg__CustomPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
livox_interfaces__msg__CustomPoint__destroy(livox_interfaces__msg__CustomPoint * msg)
{
  if (msg) {
    livox_interfaces__msg__CustomPoint__fini(msg);
  }
  free(msg);
}


bool
livox_interfaces__msg__CustomPoint__Sequence__init(livox_interfaces__msg__CustomPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  livox_interfaces__msg__CustomPoint * data = NULL;
  if (size) {
    data = (livox_interfaces__msg__CustomPoint *)calloc(size, sizeof(livox_interfaces__msg__CustomPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = livox_interfaces__msg__CustomPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        livox_interfaces__msg__CustomPoint__fini(&data[i - 1]);
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
livox_interfaces__msg__CustomPoint__Sequence__fini(livox_interfaces__msg__CustomPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      livox_interfaces__msg__CustomPoint__fini(&array->data[i]);
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

livox_interfaces__msg__CustomPoint__Sequence *
livox_interfaces__msg__CustomPoint__Sequence__create(size_t size)
{
  livox_interfaces__msg__CustomPoint__Sequence * array = (livox_interfaces__msg__CustomPoint__Sequence *)malloc(sizeof(livox_interfaces__msg__CustomPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = livox_interfaces__msg__CustomPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
livox_interfaces__msg__CustomPoint__Sequence__destroy(livox_interfaces__msg__CustomPoint__Sequence * array)
{
  if (array) {
    livox_interfaces__msg__CustomPoint__Sequence__fini(array);
  }
  free(array);
}
