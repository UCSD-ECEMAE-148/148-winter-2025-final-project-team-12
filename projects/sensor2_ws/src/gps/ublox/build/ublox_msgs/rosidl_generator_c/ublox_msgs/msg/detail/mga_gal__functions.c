// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_msgs:msg/MgaGAL.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/mga_gal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ublox_msgs__msg__MgaGAL__init(ublox_msgs__msg__MgaGAL * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // version
  // svid
  // reserved0
  // iod_nav
  // delta_n
  // m0
  // e
  // sqrt_a
  // omega0
  // i0
  // omega
  // omega_dot
  // i_dot
  // cuc
  // cus
  // crc
  // crs
  // cic
  // cis
  // toe
  // af0
  // af1
  // af2
  // sisaindex_e1_e5b
  // toc
  // bgd_e1_e5b
  // reserved1
  // health_e1b
  // data_validity_e1b
  // health_e5b
  // data_validity_e5b
  // reserved2
  return true;
}

void
ublox_msgs__msg__MgaGAL__fini(ublox_msgs__msg__MgaGAL * msg)
{
  if (!msg) {
    return;
  }
  // type
  // version
  // svid
  // reserved0
  // iod_nav
  // delta_n
  // m0
  // e
  // sqrt_a
  // omega0
  // i0
  // omega
  // omega_dot
  // i_dot
  // cuc
  // cus
  // crc
  // crs
  // cic
  // cis
  // toe
  // af0
  // af1
  // af2
  // sisaindex_e1_e5b
  // toc
  // bgd_e1_e5b
  // reserved1
  // health_e1b
  // data_validity_e1b
  // health_e5b
  // data_validity_e5b
  // reserved2
}

ublox_msgs__msg__MgaGAL *
ublox_msgs__msg__MgaGAL__create()
{
  ublox_msgs__msg__MgaGAL * msg = (ublox_msgs__msg__MgaGAL *)malloc(sizeof(ublox_msgs__msg__MgaGAL));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_msgs__msg__MgaGAL));
  bool success = ublox_msgs__msg__MgaGAL__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ublox_msgs__msg__MgaGAL__destroy(ublox_msgs__msg__MgaGAL * msg)
{
  if (msg) {
    ublox_msgs__msg__MgaGAL__fini(msg);
  }
  free(msg);
}


bool
ublox_msgs__msg__MgaGAL__Sequence__init(ublox_msgs__msg__MgaGAL__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ublox_msgs__msg__MgaGAL * data = NULL;
  if (size) {
    data = (ublox_msgs__msg__MgaGAL *)calloc(size, sizeof(ublox_msgs__msg__MgaGAL));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_msgs__msg__MgaGAL__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_msgs__msg__MgaGAL__fini(&data[i - 1]);
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
ublox_msgs__msg__MgaGAL__Sequence__fini(ublox_msgs__msg__MgaGAL__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ublox_msgs__msg__MgaGAL__fini(&array->data[i]);
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

ublox_msgs__msg__MgaGAL__Sequence *
ublox_msgs__msg__MgaGAL__Sequence__create(size_t size)
{
  ublox_msgs__msg__MgaGAL__Sequence * array = (ublox_msgs__msg__MgaGAL__Sequence *)malloc(sizeof(ublox_msgs__msg__MgaGAL__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ublox_msgs__msg__MgaGAL__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ublox_msgs__msg__MgaGAL__Sequence__destroy(ublox_msgs__msg__MgaGAL__Sequence * array)
{
  if (array) {
    ublox_msgs__msg__MgaGAL__Sequence__fini(array);
  }
  free(array);
}
