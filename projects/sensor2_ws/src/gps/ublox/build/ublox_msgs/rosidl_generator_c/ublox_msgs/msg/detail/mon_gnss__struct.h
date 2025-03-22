// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/MonGNSS.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__MON_GNSS__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__MON_GNSS__STRUCT_H_

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
  ublox_msgs__msg__MonGNSS__CLASS_ID = 10
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__MonGNSS__MESSAGE_ID = 40
};

/// Constant 'BIT_MASK_GPS'.
enum
{
  ublox_msgs__msg__MonGNSS__BIT_MASK_GPS = 1
};

/// Constant 'BIT_MASK_GLONASS'.
enum
{
  ublox_msgs__msg__MonGNSS__BIT_MASK_GLONASS = 2
};

/// Constant 'BIT_MASK_BEIDOU'.
enum
{
  ublox_msgs__msg__MonGNSS__BIT_MASK_BEIDOU = 4
};

/// Constant 'BIT_MASK_GALILEO'.
enum
{
  ublox_msgs__msg__MonGNSS__BIT_MASK_GALILEO = 8
};

// Struct defined in msg/MonGNSS in the package ublox_msgs.
typedef struct ublox_msgs__msg__MonGNSS
{
  uint8_t version;
  uint8_t supported;
  uint8_t default_gnss;
  uint8_t enabled;
  uint8_t simultaneous;
  uint8_t reserved1[3];
} ublox_msgs__msg__MonGNSS;

// Struct for a sequence of ublox_msgs__msg__MonGNSS.
typedef struct ublox_msgs__msg__MonGNSS__Sequence
{
  ublox_msgs__msg__MonGNSS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__MonGNSS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__MON_GNSS__STRUCT_H_
