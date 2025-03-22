// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavPVT7.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_PVT7__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_PVT7__STRUCT_H_

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
  ublox_msgs__msg__NavPVT7__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavPVT7__MESSAGE_ID = 7
};

/// Constant 'VALID_DATE'.
enum
{
  ublox_msgs__msg__NavPVT7__VALID_DATE = 1
};

/// Constant 'VALID_TIME'.
enum
{
  ublox_msgs__msg__NavPVT7__VALID_TIME = 2
};

/// Constant 'VALID_FULLY_RESOLVED'.
enum
{
  ublox_msgs__msg__NavPVT7__VALID_FULLY_RESOLVED = 4
};

/// Constant 'VALID_MAG'.
enum
{
  ublox_msgs__msg__NavPVT7__VALID_MAG = 8
};

/// Constant 'FIX_TYPE_NO_FIX'.
enum
{
  ublox_msgs__msg__NavPVT7__FIX_TYPE_NO_FIX = 0
};

/// Constant 'FIX_TYPE_DEAD_RECKONING_ONLY'.
enum
{
  ublox_msgs__msg__NavPVT7__FIX_TYPE_DEAD_RECKONING_ONLY = 1
};

/// Constant 'FIX_TYPE_2D'.
enum
{
  ublox_msgs__msg__NavPVT7__FIX_TYPE_2D = 2
};

/// Constant 'FIX_TYPE_3D'.
enum
{
  ublox_msgs__msg__NavPVT7__FIX_TYPE_3D = 3
};

/// Constant 'FIX_TYPE_GNSS_DEAD_RECKONING_COMBINED'.
enum
{
  ublox_msgs__msg__NavPVT7__FIX_TYPE_GNSS_DEAD_RECKONING_COMBINED = 4
};

/// Constant 'FIX_TYPE_TIME_ONLY'.
enum
{
  ublox_msgs__msg__NavPVT7__FIX_TYPE_TIME_ONLY = 5
};

/// Constant 'FLAGS_GNSS_FIX_OK'.
enum
{
  ublox_msgs__msg__NavPVT7__FLAGS_GNSS_FIX_OK = 1
};

/// Constant 'FLAGS_DIFF_SOLN'.
enum
{
  ublox_msgs__msg__NavPVT7__FLAGS_DIFF_SOLN = 2
};

/// Constant 'FLAGS_PSM_MASK'.
enum
{
  ublox_msgs__msg__NavPVT7__FLAGS_PSM_MASK = 28
};

/// Constant 'PSM_OFF'.
enum
{
  ublox_msgs__msg__NavPVT7__PSM_OFF = 0
};

/// Constant 'PSM_ENABLED'.
enum
{
  ublox_msgs__msg__NavPVT7__PSM_ENABLED = 4
};

/// Constant 'PSM_ACQUIRED'.
enum
{
  ublox_msgs__msg__NavPVT7__PSM_ACQUIRED = 8
};

/// Constant 'PSM_TRACKING'.
enum
{
  ublox_msgs__msg__NavPVT7__PSM_TRACKING = 12
};

/// Constant 'PSM_POWER_OPTIMIZED_TRACKING'.
enum
{
  ublox_msgs__msg__NavPVT7__PSM_POWER_OPTIMIZED_TRACKING = 16
};

/// Constant 'PSM_INACTIVE'.
enum
{
  ublox_msgs__msg__NavPVT7__PSM_INACTIVE = 20
};

/// Constant 'FLAGS_HEAD_VEH_VALID'.
enum
{
  ublox_msgs__msg__NavPVT7__FLAGS_HEAD_VEH_VALID = 32
};

/// Constant 'FLAGS_CARRIER_PHASE_MASK'.
enum
{
  ublox_msgs__msg__NavPVT7__FLAGS_CARRIER_PHASE_MASK = 192
};

/// Constant 'CARRIER_PHASE_NO_SOLUTION'.
enum
{
  ublox_msgs__msg__NavPVT7__CARRIER_PHASE_NO_SOLUTION = 0
};

/// Constant 'CARRIER_PHASE_FLOAT'.
enum
{
  ublox_msgs__msg__NavPVT7__CARRIER_PHASE_FLOAT = 64
};

/// Constant 'CARRIER_PHASE_FIXED'.
enum
{
  ublox_msgs__msg__NavPVT7__CARRIER_PHASE_FIXED = 128
};

/// Constant 'FLAGS2_CONFIRMED_AVAILABLE'.
enum
{
  ublox_msgs__msg__NavPVT7__FLAGS2_CONFIRMED_AVAILABLE = 32
};

/// Constant 'FLAGS2_CONFIRMED_DATE'.
enum
{
  ublox_msgs__msg__NavPVT7__FLAGS2_CONFIRMED_DATE = 64
};

/// Constant 'FLAGS2_CONFIRMED_TIME'.
enum
{
  ublox_msgs__msg__NavPVT7__FLAGS2_CONFIRMED_TIME = 128
};

// Struct defined in msg/NavPVT7 in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavPVT7
{
  uint32_t i_tow;
  uint16_t year;
  uint8_t month;
  uint8_t day;
  uint8_t hour;
  uint8_t min;
  uint8_t sec;
  uint8_t valid;
  uint32_t t_acc;
  int32_t nano;
  uint8_t fix_type;
  uint8_t flags;
  uint8_t flags2;
  uint8_t num_sv;
  int32_t lon;
  int32_t lat;
  int32_t height;
  int32_t h_msl;
  uint32_t h_acc;
  uint32_t v_acc;
  int32_t vel_n;
  int32_t vel_e;
  int32_t vel_d;
  int32_t g_speed;
  int32_t heading;
  uint32_t s_acc;
  uint32_t head_acc;
  uint16_t p_dop;
  uint8_t reserved1[6];
} ublox_msgs__msg__NavPVT7;

// Struct for a sequence of ublox_msgs__msg__NavPVT7.
typedef struct ublox_msgs__msg__NavPVT7__Sequence
{
  ublox_msgs__msg__NavPVT7 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavPVT7__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_PVT7__STRUCT_H_
