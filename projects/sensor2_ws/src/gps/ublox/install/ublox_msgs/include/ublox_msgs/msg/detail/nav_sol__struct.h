// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavSOL.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_SOL__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_SOL__STRUCT_H_

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
  ublox_msgs__msg__NavSOL__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavSOL__MESSAGE_ID = 6
};

/// Constant 'GPS_NO_FIX'.
enum
{
  ublox_msgs__msg__NavSOL__GPS_NO_FIX = 0
};

/// Constant 'GPS_DEAD_RECKONING_ONLY'.
enum
{
  ublox_msgs__msg__NavSOL__GPS_DEAD_RECKONING_ONLY = 1
};

/// Constant 'GPS_2D_FIX'.
enum
{
  ublox_msgs__msg__NavSOL__GPS_2D_FIX = 2
};

/// Constant 'GPS_3D_FIX'.
enum
{
  ublox_msgs__msg__NavSOL__GPS_3D_FIX = 3
};

/// Constant 'GPS_GPS_DEAD_RECKONING_COMBINED'.
enum
{
  ublox_msgs__msg__NavSOL__GPS_GPS_DEAD_RECKONING_COMBINED = 4
};

/// Constant 'GPS_TIME_ONLY_FIX'.
enum
{
  ublox_msgs__msg__NavSOL__GPS_TIME_ONLY_FIX = 5
};

/// Constant 'FLAGS_GPS_FIX_OK'.
enum
{
  ublox_msgs__msg__NavSOL__FLAGS_GPS_FIX_OK = 1
};

/// Constant 'FLAGS_DIFF_SOLN'.
enum
{
  ublox_msgs__msg__NavSOL__FLAGS_DIFF_SOLN = 2
};

/// Constant 'FLAGS_WKNSET'.
enum
{
  ublox_msgs__msg__NavSOL__FLAGS_WKNSET = 4
};

/// Constant 'FLAGS_TOWSET'.
enum
{
  ublox_msgs__msg__NavSOL__FLAGS_TOWSET = 8
};

// Struct defined in msg/NavSOL in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavSOL
{
  uint32_t i_tow;
  int32_t f_tow;
  int16_t week;
  uint8_t gps_fix;
  uint8_t flags;
  int32_t ecef_x;
  int32_t ecef_y;
  int32_t ecef_z;
  uint32_t p_acc;
  int32_t ecef_vx;
  int32_t ecef_vy;
  int32_t ecef_vz;
  uint32_t s_acc;
  uint16_t p_dop;
  uint8_t reserved1;
  uint8_t num_sv;
  uint32_t reserved2;
} ublox_msgs__msg__NavSOL;

// Struct for a sequence of ublox_msgs__msg__NavSOL.
typedef struct ublox_msgs__msg__NavSOL__Sequence
{
  ublox_msgs__msg__NavSOL * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavSOL__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_SOL__STRUCT_H_
