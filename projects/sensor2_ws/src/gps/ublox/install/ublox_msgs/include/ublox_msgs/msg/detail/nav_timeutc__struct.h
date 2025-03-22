// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavTIMEUTC.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_TIMEUTC__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_TIMEUTC__STRUCT_H_

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
  ublox_msgs__msg__NavTIMEUTC__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__MESSAGE_ID = 33
};

/// Constant 'VALID_TOW'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__VALID_TOW = 1
};

/// Constant 'VALID_WKN'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__VALID_WKN = 2
};

/// Constant 'VALID_UTC'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__VALID_UTC = 4
};

/// Constant 'VALID_UTC_STANDARD_MASK'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__VALID_UTC_STANDARD_MASK = 240
};

/// Constant 'UTC_STANDARD_NOT_AVAILABLE'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__UTC_STANDARD_NOT_AVAILABLE = 0
};

/// Constant 'UTC_STANDARD_CRL'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__UTC_STANDARD_CRL = 16
};

/// Constant 'UTC_STANDARD_NIST'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__UTC_STANDARD_NIST = 32
};

/// Constant 'UTC_STANDARD_USNO'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__UTC_STANDARD_USNO = 48
};

/// Constant 'UTC_STANDARD_BIPM'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__UTC_STANDARD_BIPM = 64
};

/// Constant 'UTC_STANDARD_EL'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__UTC_STANDARD_EL = 80
};

/// Constant 'UTC_STANDARD_SU'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__UTC_STANDARD_SU = 96
};

/// Constant 'UTC_STANDARD_NTSC'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__UTC_STANDARD_NTSC = 112
};

/// Constant 'UTC_STANDARD_UNKNOWN'.
enum
{
  ublox_msgs__msg__NavTIMEUTC__UTC_STANDARD_UNKNOWN = 240
};

// Struct defined in msg/NavTIMEUTC in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavTIMEUTC
{
  uint32_t i_tow;
  uint32_t t_acc;
  int32_t nano;
  uint16_t year;
  uint8_t month;
  uint8_t day;
  uint8_t hour;
  uint8_t min;
  uint8_t sec;
  uint8_t valid;
} ublox_msgs__msg__NavTIMEUTC;

// Struct for a sequence of ublox_msgs__msg__NavTIMEUTC.
typedef struct ublox_msgs__msg__NavTIMEUTC__Sequence
{
  ublox_msgs__msg__NavTIMEUTC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavTIMEUTC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_TIMEUTC__STRUCT_H_
