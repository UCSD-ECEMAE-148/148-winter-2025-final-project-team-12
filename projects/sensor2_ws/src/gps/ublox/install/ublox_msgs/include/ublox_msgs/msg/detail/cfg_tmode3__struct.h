// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgTMODE3.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_TMODE3__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_TMODE3__STRUCT_H_

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
  ublox_msgs__msg__CfgTMODE3__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgTMODE3__MESSAGE_ID = 113
};

/// Constant 'FLAGS_MODE_MASK'.
enum
{
  ublox_msgs__msg__CfgTMODE3__FLAGS_MODE_MASK = 255
};

/// Constant 'FLAGS_MODE_DISABLED'.
enum
{
  ublox_msgs__msg__CfgTMODE3__FLAGS_MODE_DISABLED = 0
};

/// Constant 'FLAGS_MODE_SURVEY_IN'.
enum
{
  ublox_msgs__msg__CfgTMODE3__FLAGS_MODE_SURVEY_IN = 1
};

/// Constant 'FLAGS_MODE_FIXED'.
enum
{
  ublox_msgs__msg__CfgTMODE3__FLAGS_MODE_FIXED = 2
};

/// Constant 'FLAGS_LLA'.
enum
{
  ublox_msgs__msg__CfgTMODE3__FLAGS_LLA = 256
};

// Struct defined in msg/CfgTMODE3 in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgTMODE3
{
  uint8_t version;
  uint8_t reserved1;
  uint16_t flags;
  int32_t ecef_x_or_lat;
  int32_t ecef_y_or_lon;
  int32_t ecef_z_or_alt;
  int8_t ecef_x_or_lat_hp;
  int8_t ecef_y_or_lon_hp;
  int8_t ecef_z_or_alt_hp;
  uint8_t reserved2;
  uint32_t fixed_pos_acc;
  uint32_t svin_min_dur;
  uint32_t svin_acc_limit;
  uint8_t reserved3[8];
} ublox_msgs__msg__CfgTMODE3;

// Struct for a sequence of ublox_msgs__msg__CfgTMODE3.
typedef struct ublox_msgs__msg__CfgTMODE3__Sequence
{
  ublox_msgs__msg__CfgTMODE3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgTMODE3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_TMODE3__STRUCT_H_
