// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/AidHUI.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__AID_HUI__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__AID_HUI__STRUCT_H_

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
  ublox_msgs__msg__AidHUI__CLASS_ID = 11
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__AidHUI__MESSAGE_ID = 2
};

/// Constant 'FLAGS_HEALTH'.
enum
{
  ublox_msgs__msg__AidHUI__FLAGS_HEALTH = 1ul
};

/// Constant 'FLAGS_UTC'.
enum
{
  ublox_msgs__msg__AidHUI__FLAGS_UTC = 2ul
};

/// Constant 'FLAGS_KLOB'.
enum
{
  ublox_msgs__msg__AidHUI__FLAGS_KLOB = 4ul
};

// Struct defined in msg/AidHUI in the package ublox_msgs.
typedef struct ublox_msgs__msg__AidHUI
{
  uint32_t health;
  double utc_a0;
  double utc_a1;
  int32_t utc_tow;
  int16_t utc_wnt;
  int16_t utc_ls;
  int16_t utc_wnf;
  int16_t utc_dn;
  int16_t utc_lsf;
  int16_t utc_spare;
  float klob_a0;
  float klob_a1;
  float klob_a2;
  float klob_a3;
  float klob_b0;
  float klob_b1;
  float klob_b2;
  float klob_b3;
  uint32_t flags;
} ublox_msgs__msg__AidHUI;

// Struct for a sequence of ublox_msgs__msg__AidHUI.
typedef struct ublox_msgs__msg__AidHUI__Sequence
{
  ublox_msgs__msg__AidHUI * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__AidHUI__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__AID_HUI__STRUCT_H_
