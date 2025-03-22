// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgNAV5.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_NAV5__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_NAV5__STRUCT_H_

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
  ublox_msgs__msg__CfgNAV5__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgNAV5__MESSAGE_ID = 36
};

/// Constant 'MASK_DYN'.
enum
{
  ublox_msgs__msg__CfgNAV5__MASK_DYN = 1
};

/// Constant 'MASK_MIN_EL'.
enum
{
  ublox_msgs__msg__CfgNAV5__MASK_MIN_EL = 2
};

/// Constant 'MASK_FIX_MODE'.
enum
{
  ublox_msgs__msg__CfgNAV5__MASK_FIX_MODE = 4
};

/// Constant 'MASK_DR_LIM'.
enum
{
  ublox_msgs__msg__CfgNAV5__MASK_DR_LIM = 8
};

/// Constant 'MASK_POS_MASK'.
enum
{
  ublox_msgs__msg__CfgNAV5__MASK_POS_MASK = 16
};

/// Constant 'MASK_TIME_MASK'.
enum
{
  ublox_msgs__msg__CfgNAV5__MASK_TIME_MASK = 32
};

/// Constant 'MASK_STATIC_HOLD_MASK'.
enum
{
  ublox_msgs__msg__CfgNAV5__MASK_STATIC_HOLD_MASK = 64
};

/// Constant 'MASK_DGPS_MASK'.
enum
{
  ublox_msgs__msg__CfgNAV5__MASK_DGPS_MASK = 128
};

/// Constant 'MASK_CNO'.
enum
{
  ublox_msgs__msg__CfgNAV5__MASK_CNO = 256
};

/// Constant 'MASK_UTC'.
enum
{
  ublox_msgs__msg__CfgNAV5__MASK_UTC = 1024
};

/// Constant 'DYN_MODEL_PORTABLE'.
enum
{
  ublox_msgs__msg__CfgNAV5__DYN_MODEL_PORTABLE = 0
};

/// Constant 'DYN_MODEL_STATIONARY'.
enum
{
  ublox_msgs__msg__CfgNAV5__DYN_MODEL_STATIONARY = 2
};

/// Constant 'DYN_MODEL_PEDESTRIAN'.
enum
{
  ublox_msgs__msg__CfgNAV5__DYN_MODEL_PEDESTRIAN = 3
};

/// Constant 'DYN_MODEL_AUTOMOTIVE'.
enum
{
  ublox_msgs__msg__CfgNAV5__DYN_MODEL_AUTOMOTIVE = 4
};

/// Constant 'DYN_MODEL_SEA'.
enum
{
  ublox_msgs__msg__CfgNAV5__DYN_MODEL_SEA = 5
};

/// Constant 'DYN_MODEL_AIRBORNE_1G'.
enum
{
  ublox_msgs__msg__CfgNAV5__DYN_MODEL_AIRBORNE_1G = 6
};

/// Constant 'DYN_MODEL_AIRBORNE_2G'.
enum
{
  ublox_msgs__msg__CfgNAV5__DYN_MODEL_AIRBORNE_2G = 7
};

/// Constant 'DYN_MODEL_AIRBORNE_4G'.
enum
{
  ublox_msgs__msg__CfgNAV5__DYN_MODEL_AIRBORNE_4G = 8
};

/// Constant 'DYN_MODEL_WRIST_WATCH'.
enum
{
  ublox_msgs__msg__CfgNAV5__DYN_MODEL_WRIST_WATCH = 9
};

/// Constant 'FIX_MODE_2D_ONLY'.
enum
{
  ublox_msgs__msg__CfgNAV5__FIX_MODE_2D_ONLY = 1
};

/// Constant 'FIX_MODE_3D_ONLY'.
enum
{
  ublox_msgs__msg__CfgNAV5__FIX_MODE_3D_ONLY = 2
};

/// Constant 'FIX_MODE_AUTO'.
enum
{
  ublox_msgs__msg__CfgNAV5__FIX_MODE_AUTO = 3
};

/// Constant 'UTC_STANDARD_AUTOMATIC'.
enum
{
  ublox_msgs__msg__CfgNAV5__UTC_STANDARD_AUTOMATIC = 0
};

/// Constant 'UTC_STANDARD_GPS'.
enum
{
  ublox_msgs__msg__CfgNAV5__UTC_STANDARD_GPS = 3
};

/// Constant 'UTC_STANDARD_GLONASS'.
enum
{
  ublox_msgs__msg__CfgNAV5__UTC_STANDARD_GLONASS = 6
};

/// Constant 'UTC_STANDARD_BEIDOU'.
enum
{
  ublox_msgs__msg__CfgNAV5__UTC_STANDARD_BEIDOU = 7
};

// Struct defined in msg/CfgNAV5 in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgNAV5
{
  uint16_t mask;
  uint8_t dyn_model;
  uint8_t fix_mode;
  int32_t fixed_alt;
  uint32_t fixed_alt_var;
  int8_t min_elev;
  uint8_t dr_limit;
  uint16_t p_dop;
  uint16_t t_dop;
  uint16_t p_acc;
  uint16_t t_acc;
  uint8_t static_hold_thresh;
  uint8_t dgnss_time_out;
  uint8_t cno_thresh_num_svs;
  uint8_t cno_thresh;
  uint8_t reserved1[2];
  uint16_t static_hold_max_dist;
  uint8_t utc_standard;
  uint8_t reserved2[5];
} ublox_msgs__msg__CfgNAV5;

// Struct for a sequence of ublox_msgs__msg__CfgNAV5.
typedef struct ublox_msgs__msg__CfgNAV5__Sequence
{
  ublox_msgs__msg__CfgNAV5 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgNAV5__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_NAV5__STRUCT_H_
