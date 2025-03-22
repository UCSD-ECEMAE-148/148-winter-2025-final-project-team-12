// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavRELPOSNED9.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_RELPOSNED9__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_RELPOSNED9__STRUCT_H_

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
  ublox_msgs__msg__NavRELPOSNED9__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__MESSAGE_ID = 60
};

/// Constant 'FLAGS_GNSS_FIX_OK'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_GNSS_FIX_OK = 1ul
};

/// Constant 'FLAGS_DIFF_SOLN'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_DIFF_SOLN = 2ul
};

/// Constant 'FLAGS_REL_POS_VALID'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_REL_POS_VALID = 4ul
};

/// Constant 'FLAGS_CARR_SOLN_MASK'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_CARR_SOLN_MASK = 24ul
};

/// Constant 'FLAGS_CARR_SOLN_NONE'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_CARR_SOLN_NONE = 0ul
};

/// Constant 'FLAGS_CARR_SOLN_FLOAT'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_CARR_SOLN_FLOAT = 8ul
};

/// Constant 'FLAGS_CARR_SOLN_FIXED'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_CARR_SOLN_FIXED = 16ul
};

/// Constant 'FLAGS_IS_MOVING'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_IS_MOVING = 32ul
};

/// Constant 'FLAGS_REF_POS_MISS'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_REF_POS_MISS = 64ul
};

/// Constant 'FLAGS_REF_OBS_MISS'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_REF_OBS_MISS = 128ul
};

/// Constant 'FLAGS_REL_POS_HEAD_VALID'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_REL_POS_HEAD_VALID = 256ul
};

/// Constant 'FLAGS_REL_POS_NORM'.
enum
{
  ublox_msgs__msg__NavRELPOSNED9__FLAGS_REL_POS_NORM = 512ul
};

// Struct defined in msg/NavRELPOSNED9 in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavRELPOSNED9
{
  uint8_t version;
  uint8_t reserved1;
  uint16_t ref_station_id;
  uint32_t i_tow;
  int32_t rel_pos_n;
  int32_t rel_pos_e;
  int32_t rel_pos_d;
  int32_t rel_pos_length;
  int32_t rel_pos_heading;
  uint8_t reserved2[4];
  int8_t rel_pos_hpn;
  int8_t rel_pos_hpe;
  int8_t rel_pos_hpd;
  int8_t rel_pos_hp_length;
  uint32_t acc_n;
  uint32_t acc_e;
  uint32_t acc_d;
  uint32_t acc_length;
  uint32_t acc_heading;
  uint8_t reserved3[4];
  uint32_t flags;
} ublox_msgs__msg__NavRELPOSNED9;

// Struct for a sequence of ublox_msgs__msg__NavRELPOSNED9.
typedef struct ublox_msgs__msg__NavRELPOSNED9__Sequence
{
  ublox_msgs__msg__NavRELPOSNED9 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavRELPOSNED9__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_RELPOSNED9__STRUCT_H_
