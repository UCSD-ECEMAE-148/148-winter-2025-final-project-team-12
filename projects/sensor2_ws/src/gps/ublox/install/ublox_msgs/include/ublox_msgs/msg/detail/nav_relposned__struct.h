// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavRELPOSNED.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_RELPOSNED__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_RELPOSNED__STRUCT_H_

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
  ublox_msgs__msg__NavRELPOSNED__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__MESSAGE_ID = 60
};

/// Constant 'FLAGS_GNSS_FIX_OK'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__FLAGS_GNSS_FIX_OK = 1ul
};

/// Constant 'FLAGS_DIFF_SOLN'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__FLAGS_DIFF_SOLN = 2ul
};

/// Constant 'FLAGS_REL_POS_VALID'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__FLAGS_REL_POS_VALID = 4ul
};

/// Constant 'FLAGS_CARR_SOLN_MASK'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__FLAGS_CARR_SOLN_MASK = 24ul
};

/// Constant 'FLAGS_CARR_SOLN_NONE'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__FLAGS_CARR_SOLN_NONE = 0ul
};

/// Constant 'FLAGS_CARR_SOLN_FLOAT'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__FLAGS_CARR_SOLN_FLOAT = 8ul
};

/// Constant 'FLAGS_CARR_SOLN_FIXED'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__FLAGS_CARR_SOLN_FIXED = 16ul
};

/// Constant 'FLAGS_IS_MOVING'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__FLAGS_IS_MOVING = 32ul
};

/// Constant 'FLAGS_REF_POS_MISS'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__FLAGS_REF_POS_MISS = 64ul
};

/// Constant 'FLAGS_REF_OBS_MISS'.
enum
{
  ublox_msgs__msg__NavRELPOSNED__FLAGS_REF_OBS_MISS = 128ul
};

// Struct defined in msg/NavRELPOSNED in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavRELPOSNED
{
  uint8_t version;
  uint8_t reserved0;
  uint16_t ref_station_id;
  uint32_t i_tow;
  int32_t rel_pos_n;
  int32_t rel_pos_e;
  int32_t rel_pos_d;
  int8_t rel_pos_hpn;
  int8_t rel_pos_hpe;
  int8_t rel_pos_hpd;
  uint8_t reserved1;
  uint32_t acc_n;
  uint32_t acc_e;
  uint32_t acc_d;
  uint32_t flags;
} ublox_msgs__msg__NavRELPOSNED;

// Struct for a sequence of ublox_msgs__msg__NavRELPOSNED.
typedef struct ublox_msgs__msg__NavRELPOSNED__Sequence
{
  ublox_msgs__msg__NavRELPOSNED * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavRELPOSNED__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_RELPOSNED__STRUCT_H_
