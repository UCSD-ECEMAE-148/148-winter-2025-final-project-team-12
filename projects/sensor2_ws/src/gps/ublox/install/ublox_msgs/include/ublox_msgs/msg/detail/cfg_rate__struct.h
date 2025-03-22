// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgRATE.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_RATE__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_RATE__STRUCT_H_

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
  ublox_msgs__msg__CfgRATE__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgRATE__MESSAGE_ID = 8
};

/// Constant 'TIME_REF_UTC'.
enum
{
  ublox_msgs__msg__CfgRATE__TIME_REF_UTC = 0
};

/// Constant 'TIME_REF_GPS'.
enum
{
  ublox_msgs__msg__CfgRATE__TIME_REF_GPS = 1
};

/// Constant 'TIME_REF_GLONASS'.
enum
{
  ublox_msgs__msg__CfgRATE__TIME_REF_GLONASS = 2
};

/// Constant 'TIME_REF_BEIDOU'.
enum
{
  ublox_msgs__msg__CfgRATE__TIME_REF_BEIDOU = 3
};

/// Constant 'TIME_REF_GALILEO'.
enum
{
  ublox_msgs__msg__CfgRATE__TIME_REF_GALILEO = 4
};

// Struct defined in msg/CfgRATE in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgRATE
{
  uint16_t meas_rate;
  uint16_t nav_rate;
  uint16_t time_ref;
} ublox_msgs__msg__CfgRATE;

// Struct for a sequence of ublox_msgs__msg__CfgRATE.
typedef struct ublox_msgs__msg__CfgRATE__Sequence
{
  ublox_msgs__msg__CfgRATE * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgRATE__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_RATE__STRUCT_H_
