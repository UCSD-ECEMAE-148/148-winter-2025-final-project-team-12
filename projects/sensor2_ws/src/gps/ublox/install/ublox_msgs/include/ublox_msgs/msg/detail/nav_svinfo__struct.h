// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavSVINFO.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_SVINFO__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_SVINFO__STRUCT_H_

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
  ublox_msgs__msg__NavSVINFO__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavSVINFO__MESSAGE_ID = 48
};

/// Constant 'CHIPGEN_ANTARIS'.
enum
{
  ublox_msgs__msg__NavSVINFO__CHIPGEN_ANTARIS = 0
};

/// Constant 'CHIPGEN_UBLOX5'.
enum
{
  ublox_msgs__msg__NavSVINFO__CHIPGEN_UBLOX5 = 1
};

/// Constant 'CHIPGEN_UBLOX6'.
enum
{
  ublox_msgs__msg__NavSVINFO__CHIPGEN_UBLOX6 = 2
};

/// Constant 'CHIPGEN_UBLOX7'.
enum
{
  ublox_msgs__msg__NavSVINFO__CHIPGEN_UBLOX7 = 3
};

/// Constant 'CHIPGEN_UBLOX8'.
enum
{
  ublox_msgs__msg__NavSVINFO__CHIPGEN_UBLOX8 = 4
};

// Include directives for member types
// Member 'sv'
#include "ublox_msgs/msg/detail/nav_svinfosv__struct.h"

// Struct defined in msg/NavSVINFO in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavSVINFO
{
  uint32_t i_tow;
  uint8_t num_ch;
  uint8_t global_flags;
  uint16_t reserved2;
  ublox_msgs__msg__NavSVINFOSV__Sequence sv;
} ublox_msgs__msg__NavSVINFO;

// Struct for a sequence of ublox_msgs__msg__NavSVINFO.
typedef struct ublox_msgs__msg__NavSVINFO__Sequence
{
  ublox_msgs__msg__NavSVINFO * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavSVINFO__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_SVINFO__STRUCT_H_
