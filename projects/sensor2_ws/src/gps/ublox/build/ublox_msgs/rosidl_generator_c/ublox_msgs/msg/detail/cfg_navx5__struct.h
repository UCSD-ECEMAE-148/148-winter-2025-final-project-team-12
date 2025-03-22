// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgNAVX5.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_NAVX5__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_NAVX5__STRUCT_H_

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
  ublox_msgs__msg__CfgNAVX5__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgNAVX5__MESSAGE_ID = 35
};

/// Constant 'MASK1_MIN_MAX'.
enum
{
  ublox_msgs__msg__CfgNAVX5__MASK1_MIN_MAX = 4
};

/// Constant 'MASK1_MIN_CNO'.
enum
{
  ublox_msgs__msg__CfgNAVX5__MASK1_MIN_CNO = 8
};

/// Constant 'MASK1_INITIAL_FIX_3D'.
enum
{
  ublox_msgs__msg__CfgNAVX5__MASK1_INITIAL_FIX_3D = 64
};

/// Constant 'MASK1_WKN_ROLL'.
enum
{
  ublox_msgs__msg__CfgNAVX5__MASK1_WKN_ROLL = 512
};

/// Constant 'MASK1_ACK_AID'.
enum
{
  ublox_msgs__msg__CfgNAVX5__MASK1_ACK_AID = 1024
};

/// Constant 'MASK1_PPP'.
enum
{
  ublox_msgs__msg__CfgNAVX5__MASK1_PPP = 8192
};

/// Constant 'MASK1_AOP'.
enum
{
  ublox_msgs__msg__CfgNAVX5__MASK1_AOP = 16384
};

/// Constant 'MASK2_ADR'.
enum
{
  ublox_msgs__msg__CfgNAVX5__MASK2_ADR = 64ul
};

/// Constant 'MASK2_SIG_ATTEN_COMP_MODE'.
enum
{
  ublox_msgs__msg__CfgNAVX5__MASK2_SIG_ATTEN_COMP_MODE = 128ul
};

// Struct defined in msg/CfgNAVX5 in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgNAVX5
{
  uint16_t version;
  uint16_t mask1;
  uint32_t mask2;
  uint8_t reserved1[2];
  uint8_t min_svs;
  uint8_t max_svs;
  uint8_t min_cno;
  uint8_t reserved2;
  uint8_t ini_fix3d;
  uint8_t reserved3[2];
  uint8_t ack_aiding;
  uint16_t wkn_rollover;
  uint8_t sig_atten_comp_mode;
  uint8_t reserved4[5];
  uint8_t use_ppp;
  uint8_t aop_cfg;
  uint8_t reserved5[2];
  uint16_t aop_orb_max_err;
  uint8_t reserved6[7];
  uint8_t use_adr;
} ublox_msgs__msg__CfgNAVX5;

// Struct for a sequence of ublox_msgs__msg__CfgNAVX5.
typedef struct ublox_msgs__msg__CfgNAVX5__Sequence
{
  ublox_msgs__msg__CfgNAVX5 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgNAVX5__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_NAVX5__STRUCT_H_
