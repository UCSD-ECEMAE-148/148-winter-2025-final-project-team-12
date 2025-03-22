// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavTIMEGPS.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_TIMEGPS__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_TIMEGPS__STRUCT_H_

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
  ublox_msgs__msg__NavTIMEGPS__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavTIMEGPS__MESSAGE_ID = 32
};

/// Constant 'VALID_TOW'.
enum
{
  ublox_msgs__msg__NavTIMEGPS__VALID_TOW = 1
};

/// Constant 'VALID_WEEK'.
enum
{
  ublox_msgs__msg__NavTIMEGPS__VALID_WEEK = 2
};

/// Constant 'VALID_LEAP_S'.
enum
{
  ublox_msgs__msg__NavTIMEGPS__VALID_LEAP_S = 4
};

// Struct defined in msg/NavTIMEGPS in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavTIMEGPS
{
  uint32_t i_tow;
  int32_t f_tow;
  int16_t week;
  int8_t leap_s;
  uint8_t valid;
  uint32_t t_acc;
} ublox_msgs__msg__NavTIMEGPS;

// Struct for a sequence of ublox_msgs__msg__NavTIMEGPS.
typedef struct ublox_msgs__msg__NavTIMEGPS__Sequence
{
  ublox_msgs__msg__NavTIMEGPS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavTIMEGPS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_TIMEGPS__STRUCT_H_
