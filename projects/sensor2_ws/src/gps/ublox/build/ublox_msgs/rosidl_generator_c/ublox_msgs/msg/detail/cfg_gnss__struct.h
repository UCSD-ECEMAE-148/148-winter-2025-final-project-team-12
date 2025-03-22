// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgGNSS.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_GNSS__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_GNSS__STRUCT_H_

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
  ublox_msgs__msg__CfgGNSS__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgGNSS__MESSAGE_ID = 62
};

// Include directives for member types
// Member 'blocks'
#include "ublox_msgs/msg/detail/cfg_gnss_block__struct.h"

// Struct defined in msg/CfgGNSS in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgGNSS
{
  uint8_t msg_ver;
  uint8_t num_trk_ch_hw;
  uint8_t num_trk_ch_use;
  uint8_t num_config_blocks;
  ublox_msgs__msg__CfgGNSSBlock__Sequence blocks;
} ublox_msgs__msg__CfgGNSS;

// Struct for a sequence of ublox_msgs__msg__CfgGNSS.
typedef struct ublox_msgs__msg__CfgGNSS__Sequence
{
  ublox_msgs__msg__CfgGNSS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgGNSS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_GNSS__STRUCT_H_
