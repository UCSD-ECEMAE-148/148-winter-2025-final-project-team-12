// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/HnrPVT.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__HNR_PVT__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__HNR_PVT__STRUCT_H_

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
  ublox_msgs__msg__HnrPVT__CLASS_ID = 40
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__HnrPVT__MESSAGE_ID = 0
};

/// Constant 'VALID_DATE'.
enum
{
  ublox_msgs__msg__HnrPVT__VALID_DATE = 1
};

/// Constant 'VALID_TIME'.
enum
{
  ublox_msgs__msg__HnrPVT__VALID_TIME = 2
};

/// Constant 'VALID_FULLY_RESOLVED'.
enum
{
  ublox_msgs__msg__HnrPVT__VALID_FULLY_RESOLVED = 4
};

/// Constant 'VALID_MAG'.
enum
{
  ublox_msgs__msg__HnrPVT__VALID_MAG = 8
};

/// Constant 'FIX_TYPE_NO_FIX'.
enum
{
  ublox_msgs__msg__HnrPVT__FIX_TYPE_NO_FIX = 0
};

/// Constant 'FIX_TYPE_DEAD_RECKONING_ONLY'.
enum
{
  ublox_msgs__msg__HnrPVT__FIX_TYPE_DEAD_RECKONING_ONLY = 1
};

/// Constant 'FIX_TYPE_2D'.
enum
{
  ublox_msgs__msg__HnrPVT__FIX_TYPE_2D = 2
};

/// Constant 'FIX_TYPE_3D'.
enum
{
  ublox_msgs__msg__HnrPVT__FIX_TYPE_3D = 3
};

/// Constant 'FIX_TYPE_GPS_DEAD_RECKONING_COMBINED'.
enum
{
  ublox_msgs__msg__HnrPVT__FIX_TYPE_GPS_DEAD_RECKONING_COMBINED = 4
};

/// Constant 'FIX_TYPE_TIME_ONLY'.
enum
{
  ublox_msgs__msg__HnrPVT__FIX_TYPE_TIME_ONLY = 5
};

/// Constant 'FLAGS_GNSS_FIX_OK'.
enum
{
  ublox_msgs__msg__HnrPVT__FLAGS_GNSS_FIX_OK = 1
};

/// Constant 'FLAGS_DIFF_SOLN'.
enum
{
  ublox_msgs__msg__HnrPVT__FLAGS_DIFF_SOLN = 2
};

/// Constant 'FLAGS_WKN_SET'.
enum
{
  ublox_msgs__msg__HnrPVT__FLAGS_WKN_SET = 4
};

/// Constant 'FLAGS_TOW_SET'.
enum
{
  ublox_msgs__msg__HnrPVT__FLAGS_TOW_SET = 8
};

/// Constant 'FLAGS_HEAD_VEH_VALID'.
enum
{
  ublox_msgs__msg__HnrPVT__FLAGS_HEAD_VEH_VALID = 32
};

// Struct defined in msg/HnrPVT in the package ublox_msgs.
typedef struct ublox_msgs__msg__HnrPVT
{
  uint32_t i_tow;
  uint16_t year;
  uint8_t month;
  uint8_t day;
  uint8_t hour;
  uint8_t min;
  uint8_t sec;
  uint8_t valid;
  int32_t nano;
  uint8_t gps_fix;
  uint8_t flags;
  uint8_t reserved0[2];
  int32_t lon;
  int32_t lat;
  int32_t height;
  int32_t h_msl;
  int32_t g_speed;
  int32_t speed;
  int32_t head_mot;
  int32_t head_veh;
  uint32_t h_acc;
  uint32_t v_acc;
  uint32_t s_acc;
  uint32_t head_acc;
  uint8_t reserved1[4];
} ublox_msgs__msg__HnrPVT;

// Struct for a sequence of ublox_msgs__msg__HnrPVT.
typedef struct ublox_msgs__msg__HnrPVT__Sequence
{
  ublox_msgs__msg__HnrPVT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__HnrPVT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__HNR_PVT__STRUCT_H_
