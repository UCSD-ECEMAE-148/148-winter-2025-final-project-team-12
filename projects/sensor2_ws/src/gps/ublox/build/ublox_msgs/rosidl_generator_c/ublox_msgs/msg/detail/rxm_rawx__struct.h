// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/RxmRAWX.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__RXM_RAWX__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__RXM_RAWX__STRUCT_H_

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
  ublox_msgs__msg__RxmRAWX__CLASS_ID = 2
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__RxmRAWX__MESSAGE_ID = 21
};

/// Constant 'REC_STAT_LEAP_SEC'.
enum
{
  ublox_msgs__msg__RxmRAWX__REC_STAT_LEAP_SEC = 1
};

/// Constant 'REC_STAT_CLK_RESET'.
enum
{
  ublox_msgs__msg__RxmRAWX__REC_STAT_CLK_RESET = 2
};

// Include directives for member types
// Member 'meas'
#include "ublox_msgs/msg/detail/rxm_rawx_meas__struct.h"

// Struct defined in msg/RxmRAWX in the package ublox_msgs.
typedef struct ublox_msgs__msg__RxmRAWX
{
  double rcv_tow;
  uint16_t week;
  int8_t leap_s;
  uint8_t num_meas;
  uint8_t rec_stat;
  uint8_t version;
  uint8_t reserved1[2];
  ublox_msgs__msg__RxmRAWXMeas__Sequence meas;
} ublox_msgs__msg__RxmRAWX;

// Struct for a sequence of ublox_msgs__msg__RxmRAWX.
typedef struct ublox_msgs__msg__RxmRAWX__Sequence
{
  ublox_msgs__msg__RxmRAWX * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__RxmRAWX__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__RXM_RAWX__STRUCT_H_
