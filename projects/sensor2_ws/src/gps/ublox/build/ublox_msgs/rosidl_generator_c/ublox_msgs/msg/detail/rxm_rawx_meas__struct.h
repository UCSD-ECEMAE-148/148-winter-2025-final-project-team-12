// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/RxmRAWXMeas.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__RXM_RAWX_MEAS__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__RXM_RAWX_MEAS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRK_STAT_PR_VALID'.
enum
{
  ublox_msgs__msg__RxmRAWXMeas__TRK_STAT_PR_VALID = 1
};

/// Constant 'TRK_STAT_CP_VALID'.
enum
{
  ublox_msgs__msg__RxmRAWXMeas__TRK_STAT_CP_VALID = 2
};

/// Constant 'TRK_STAT_HALF_CYC'.
enum
{
  ublox_msgs__msg__RxmRAWXMeas__TRK_STAT_HALF_CYC = 4
};

/// Constant 'TRK_STAT_SUB_HALF_CYC'.
enum
{
  ublox_msgs__msg__RxmRAWXMeas__TRK_STAT_SUB_HALF_CYC = 8
};

// Struct defined in msg/RxmRAWXMeas in the package ublox_msgs.
typedef struct ublox_msgs__msg__RxmRAWXMeas
{
  double pr_mes;
  double cp_mes;
  float do_mes;
  uint8_t gnss_id;
  uint8_t sv_id;
  uint8_t reserved0;
  uint8_t freq_id;
  uint16_t locktime;
  int8_t cno;
  uint8_t pr_stdev;
  uint8_t cp_stdev;
  uint8_t do_stdev;
  uint8_t trk_stat;
  uint8_t reserved1;
} ublox_msgs__msg__RxmRAWXMeas;

// Struct for a sequence of ublox_msgs__msg__RxmRAWXMeas.
typedef struct ublox_msgs__msg__RxmRAWXMeas__Sequence
{
  ublox_msgs__msg__RxmRAWXMeas * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__RxmRAWXMeas__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__RXM_RAWX_MEAS__STRUCT_H_
