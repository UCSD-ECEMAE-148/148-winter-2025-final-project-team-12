// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavSVIN.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_SVIN__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_SVIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLASS_ID'.
enum
{
  ublox_msgs__msg__NavSVIN__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavSVIN__MESSAGE_ID = 59
};

// Struct defined in msg/NavSVIN in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavSVIN
{
  uint8_t version;
  uint8_t reserved0[3];
  uint32_t i_tow;
  uint32_t dur;
  int32_t mean_x;
  int32_t mean_y;
  int32_t mean_z;
  int8_t mean_xhp;
  int8_t mean_yhp;
  int8_t mean_zhp;
  uint8_t reserved1;
  uint32_t mean_acc;
  uint32_t obs;
  uint8_t valid;
  uint8_t active;
  uint8_t reserved3[2];
} ublox_msgs__msg__NavSVIN;

// Struct for a sequence of ublox_msgs__msg__NavSVIN.
typedef struct ublox_msgs__msg__NavSVIN__Sequence
{
  ublox_msgs__msg__NavSVIN * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavSVIN__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_SVIN__STRUCT_H_
