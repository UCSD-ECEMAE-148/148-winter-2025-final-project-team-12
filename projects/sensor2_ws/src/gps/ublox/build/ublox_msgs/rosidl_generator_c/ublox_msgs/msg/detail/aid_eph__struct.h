// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/AidEPH.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__AID_EPH__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__AID_EPH__STRUCT_H_

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
  ublox_msgs__msg__AidEPH__CLASS_ID = 11
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__AidEPH__MESSAGE_ID = 49
};

// Include directives for member types
// Member 'sf1d'
// Member 'sf2d'
// Member 'sf3d'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/AidEPH in the package ublox_msgs.
typedef struct ublox_msgs__msg__AidEPH
{
  uint32_t svid;
  uint32_t how;
  rosidl_runtime_c__uint32__Sequence sf1d;
  rosidl_runtime_c__uint32__Sequence sf2d;
  rosidl_runtime_c__uint32__Sequence sf3d;
} ublox_msgs__msg__AidEPH;

// Struct for a sequence of ublox_msgs__msg__AidEPH.
typedef struct ublox_msgs__msg__AidEPH__Sequence
{
  ublox_msgs__msg__AidEPH * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__AidEPH__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__AID_EPH__STRUCT_H_
