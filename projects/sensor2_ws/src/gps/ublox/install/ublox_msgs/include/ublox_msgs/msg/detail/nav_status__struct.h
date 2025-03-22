// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavSTATUS.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_STATUS__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_STATUS__STRUCT_H_

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
  ublox_msgs__msg__NavSTATUS__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavSTATUS__MESSAGE_ID = 3
};

/// Constant 'GPS_NO_FIX'.
enum
{
  ublox_msgs__msg__NavSTATUS__GPS_NO_FIX = 0
};

/// Constant 'GPS_DEAD_RECKONING_ONLY'.
enum
{
  ublox_msgs__msg__NavSTATUS__GPS_DEAD_RECKONING_ONLY = 1
};

/// Constant 'GPS_2D_FIX'.
enum
{
  ublox_msgs__msg__NavSTATUS__GPS_2D_FIX = 2
};

/// Constant 'GPS_3D_FIX'.
enum
{
  ublox_msgs__msg__NavSTATUS__GPS_3D_FIX = 3
};

/// Constant 'GPS_GPS_DEAD_RECKONING_COMBINED'.
enum
{
  ublox_msgs__msg__NavSTATUS__GPS_GPS_DEAD_RECKONING_COMBINED = 4
};

/// Constant 'GPS_TIME_ONLY_FIX'.
enum
{
  ublox_msgs__msg__NavSTATUS__GPS_TIME_ONLY_FIX = 5
};

/// Constant 'FLAGS_GPS_FIX_OK'.
enum
{
  ublox_msgs__msg__NavSTATUS__FLAGS_GPS_FIX_OK = 1
};

/// Constant 'FLAGS_DIFF_SOLN'.
enum
{
  ublox_msgs__msg__NavSTATUS__FLAGS_DIFF_SOLN = 2
};

/// Constant 'FLAGS_WKNSET'.
enum
{
  ublox_msgs__msg__NavSTATUS__FLAGS_WKNSET = 4
};

/// Constant 'FLAGS_TOWSET'.
enum
{
  ublox_msgs__msg__NavSTATUS__FLAGS_TOWSET = 8
};

/// Constant 'FIX_STAT_DIFF_CORR_MASK'.
enum
{
  ublox_msgs__msg__NavSTATUS__FIX_STAT_DIFF_CORR_MASK = 1
};

/// Constant 'FIX_STAT_MAP_MATCHING_MASK'.
enum
{
  ublox_msgs__msg__NavSTATUS__FIX_STAT_MAP_MATCHING_MASK = 192
};

/// Constant 'MAP_MATCHING_NONE'.
enum
{
  ublox_msgs__msg__NavSTATUS__MAP_MATCHING_NONE = 0
};

/// Constant 'MAP_MATCHING_VALID'.
enum
{
  ublox_msgs__msg__NavSTATUS__MAP_MATCHING_VALID = 64
};

/// Constant 'MAP_MATCHING_USED'.
enum
{
  ublox_msgs__msg__NavSTATUS__MAP_MATCHING_USED = 128
};

/// Constant 'MAP_MATCHING_DR'.
enum
{
  ublox_msgs__msg__NavSTATUS__MAP_MATCHING_DR = 192
};

/// Constant 'FLAGS2_PSM_STATE_MASK'.
enum
{
  ublox_msgs__msg__NavSTATUS__FLAGS2_PSM_STATE_MASK = 3
};

/// Constant 'PSM_STATE_ACQUISITION'.
enum
{
  ublox_msgs__msg__NavSTATUS__PSM_STATE_ACQUISITION = 0
};

/// Constant 'PSM_STATE_TRACKING'.
enum
{
  ublox_msgs__msg__NavSTATUS__PSM_STATE_TRACKING = 1
};

/// Constant 'PSM_STATE_POWER_OPTIMIZED_TRACKING'.
enum
{
  ublox_msgs__msg__NavSTATUS__PSM_STATE_POWER_OPTIMIZED_TRACKING = 2
};

/// Constant 'PSM_STATE_INACTIVE'.
enum
{
  ublox_msgs__msg__NavSTATUS__PSM_STATE_INACTIVE = 3
};

/// Constant 'FLAGS2_SPOOF_DET_STATE_MASK'.
enum
{
  ublox_msgs__msg__NavSTATUS__FLAGS2_SPOOF_DET_STATE_MASK = 24
};

/// Constant 'SPOOF_DET_STATE_UNKNOWN'.
enum
{
  ublox_msgs__msg__NavSTATUS__SPOOF_DET_STATE_UNKNOWN = 0
};

/// Constant 'SPOOF_DET_STATE_NONE'.
enum
{
  ublox_msgs__msg__NavSTATUS__SPOOF_DET_STATE_NONE = 8
};

/// Constant 'SPOOF_DET_STATE_SPOOFING'.
enum
{
  ublox_msgs__msg__NavSTATUS__SPOOF_DET_STATE_SPOOFING = 16
};

/// Constant 'SPOOF_DET_STATE_MULTIPLE'.
enum
{
  ublox_msgs__msg__NavSTATUS__SPOOF_DET_STATE_MULTIPLE = 24
};

// Struct defined in msg/NavSTATUS in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavSTATUS
{
  uint32_t i_tow;
  uint8_t gps_fix;
  uint8_t flags;
  uint8_t fix_stat;
  uint8_t flags2;
  uint32_t ttff;
  uint32_t msss;
} ublox_msgs__msg__NavSTATUS;

// Struct for a sequence of ublox_msgs__msg__NavSTATUS.
typedef struct ublox_msgs__msg__NavSTATUS__Sequence
{
  ublox_msgs__msg__NavSTATUS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavSTATUS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_STATUS__STRUCT_H_
