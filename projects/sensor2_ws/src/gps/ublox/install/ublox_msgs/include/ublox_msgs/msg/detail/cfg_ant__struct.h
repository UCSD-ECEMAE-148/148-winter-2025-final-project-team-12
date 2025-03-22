// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgANT.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_ANT__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_ANT__STRUCT_H_

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
  ublox_msgs__msg__CfgANT__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgANT__MESSAGE_ID = 19
};

/// Constant 'FLAGS_SVCS'.
enum
{
  ublox_msgs__msg__CfgANT__FLAGS_SVCS = 1
};

/// Constant 'FLAGS_SCD'.
enum
{
  ublox_msgs__msg__CfgANT__FLAGS_SCD = 2
};

/// Constant 'FLAGS_OCD'.
enum
{
  ublox_msgs__msg__CfgANT__FLAGS_OCD = 4
};

/// Constant 'FLAGS_PDWN_ON_SCD'.
enum
{
  ublox_msgs__msg__CfgANT__FLAGS_PDWN_ON_SCD = 8
};

/// Constant 'FLAGS_RECOVERY'.
enum
{
  ublox_msgs__msg__CfgANT__FLAGS_RECOVERY = 16
};

/// Constant 'PIN_SWITCH_MASK'.
enum
{
  ublox_msgs__msg__CfgANT__PIN_SWITCH_MASK = 31
};

/// Constant 'PIN_SCD_MASK'.
enum
{
  ublox_msgs__msg__CfgANT__PIN_SCD_MASK = 992
};

/// Constant 'PIN_OCD_MASK'.
enum
{
  ublox_msgs__msg__CfgANT__PIN_OCD_MASK = 31744
};

/// Constant 'PIN_RECONFIG'.
enum
{
  ublox_msgs__msg__CfgANT__PIN_RECONFIG = 32678
};

// Struct defined in msg/CfgANT in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgANT
{
  uint16_t flags;
  uint16_t pins;
} ublox_msgs__msg__CfgANT;

// Struct for a sequence of ublox_msgs__msg__CfgANT.
typedef struct ublox_msgs__msg__CfgANT__Sequence
{
  ublox_msgs__msg__CfgANT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgANT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_ANT__STRUCT_H_
