// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgNMEA6.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_NMEA6__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_NMEA6__STRUCT_H_

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
  ublox_msgs__msg__CfgNMEA6__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgNMEA6__MESSAGE_ID = 23
};

/// Constant 'FILTER_POS'.
enum
{
  ublox_msgs__msg__CfgNMEA6__FILTER_POS = 1
};

/// Constant 'FILTER_MSK_POS'.
enum
{
  ublox_msgs__msg__CfgNMEA6__FILTER_MSK_POS = 2
};

/// Constant 'FILTER_TIME'.
enum
{
  ublox_msgs__msg__CfgNMEA6__FILTER_TIME = 4
};

/// Constant 'FILTER_DATE'.
enum
{
  ublox_msgs__msg__CfgNMEA6__FILTER_DATE = 8
};

/// Constant 'FILTER_SBAS_FILT'.
enum
{
  ublox_msgs__msg__CfgNMEA6__FILTER_SBAS_FILT = 16
};

/// Constant 'FILTER_TRACK'.
enum
{
  ublox_msgs__msg__CfgNMEA6__FILTER_TRACK = 32
};

/// Constant 'NMEA_VERSION_2_3'.
enum
{
  ublox_msgs__msg__CfgNMEA6__NMEA_VERSION_2_3 = 35
};

/// Constant 'NMEA_VERSION_2_1'.
enum
{
  ublox_msgs__msg__CfgNMEA6__NMEA_VERSION_2_1 = 33
};

/// Constant 'FLAGS_COMPAT'.
enum
{
  ublox_msgs__msg__CfgNMEA6__FLAGS_COMPAT = 1
};

/// Constant 'FLAGS_CONSIDER'.
enum
{
  ublox_msgs__msg__CfgNMEA6__FLAGS_CONSIDER = 2
};

// Struct defined in msg/CfgNMEA6 in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgNMEA6
{
  uint8_t filter;
  uint8_t version;
  uint8_t num_sv;
  uint8_t flags;
} ublox_msgs__msg__CfgNMEA6;

// Struct for a sequence of ublox_msgs__msg__CfgNMEA6.
typedef struct ublox_msgs__msg__CfgNMEA6__Sequence
{
  ublox_msgs__msg__CfgNMEA6 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgNMEA6__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_NMEA6__STRUCT_H_
