// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/RxmRAWSV.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__RXM_RAWSV__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__RXM_RAWSV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RxmRAWSV in the package ublox_msgs.
typedef struct ublox_msgs__msg__RxmRAWSV
{
  double cp_mes;
  double pr_mes;
  float do_mes;
  uint8_t sv;
  int8_t mes_qi;
  int8_t cno;
  uint8_t lli;
} ublox_msgs__msg__RxmRAWSV;

// Struct for a sequence of ublox_msgs__msg__RxmRAWSV.
typedef struct ublox_msgs__msg__RxmRAWSV__Sequence
{
  ublox_msgs__msg__RxmRAWSV * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__RxmRAWSV__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__RXM_RAWSV__STRUCT_H_
