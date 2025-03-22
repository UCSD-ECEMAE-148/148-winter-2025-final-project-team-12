// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgUSB.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_USB__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_USB__STRUCT_H_

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
  ublox_msgs__msg__CfgUSB__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgUSB__MESSAGE_ID = 27
};

/// Constant 'FLAGS_RE_ENUM'.
enum
{
  ublox_msgs__msg__CfgUSB__FLAGS_RE_ENUM = 0
};

/// Constant 'FLAGS_POWER_MODE'.
enum
{
  ublox_msgs__msg__CfgUSB__FLAGS_POWER_MODE = 2
};

// Struct defined in msg/CfgUSB in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgUSB
{
  uint16_t vendor_id;
  uint16_t product_id;
  uint8_t reserved1[2];
  uint8_t reserved2[2];
  uint16_t power_consumption;
  uint16_t flags;
  int8_t vendor_string[32];
  int8_t product_string[32];
  int8_t serial_number[32];
} ublox_msgs__msg__CfgUSB;

// Struct for a sequence of ublox_msgs__msg__CfgUSB.
typedef struct ublox_msgs__msg__CfgUSB__Sequence
{
  ublox_msgs__msg__CfgUSB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgUSB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_USB__STRUCT_H_
