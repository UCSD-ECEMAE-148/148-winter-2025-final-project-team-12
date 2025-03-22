// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgSBAS.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_SBAS__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_SBAS__STRUCT_H_

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
  ublox_msgs__msg__CfgSBAS__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgSBAS__MESSAGE_ID = 22
};

/// Constant 'MODE_ENABLED'.
enum
{
  ublox_msgs__msg__CfgSBAS__MODE_ENABLED = 1
};

/// Constant 'MODE_TEST'.
enum
{
  ublox_msgs__msg__CfgSBAS__MODE_TEST = 2
};

/// Constant 'USAGE_RANGE'.
enum
{
  ublox_msgs__msg__CfgSBAS__USAGE_RANGE = 1
};

/// Constant 'USAGE_DIFF_CORR'.
enum
{
  ublox_msgs__msg__CfgSBAS__USAGE_DIFF_CORR = 2
};

/// Constant 'USAGE_INTEGRITY'.
enum
{
  ublox_msgs__msg__CfgSBAS__USAGE_INTEGRITY = 4
};

// Struct defined in msg/CfgSBAS in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgSBAS
{
  uint8_t mode;
  uint8_t usage;
  uint8_t max_sbas;
  uint8_t scanmode2;
  uint32_t scanmode1;
} ublox_msgs__msg__CfgSBAS;

// Struct for a sequence of ublox_msgs__msg__CfgSBAS.
typedef struct ublox_msgs__msg__CfgSBAS__Sequence
{
  ublox_msgs__msg__CfgSBAS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgSBAS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_SBAS__STRUCT_H_
