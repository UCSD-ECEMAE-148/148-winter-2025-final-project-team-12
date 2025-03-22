// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/TimTM2.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__TIM_TM2__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__TIM_TM2__STRUCT_H_

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
  ublox_msgs__msg__TimTM2__CLASS_ID = 13
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__TimTM2__MESSAGE_ID = 3
};

/// Constant 'FLAGS_MODE_RUNNING'.
enum
{
  ublox_msgs__msg__TimTM2__FLAGS_MODE_RUNNING = 1
};

/// Constant 'FLAGS_RUN'.
enum
{
  ublox_msgs__msg__TimTM2__FLAGS_RUN = 2
};

/// Constant 'FLAGS_NEWFALLINGEDGE'.
enum
{
  ublox_msgs__msg__TimTM2__FLAGS_NEWFALLINGEDGE = 4
};

/// Constant 'FLAGS_TIMEBASE_GNSS'.
enum
{
  ublox_msgs__msg__TimTM2__FLAGS_TIMEBASE_GNSS = 8
};

/// Constant 'FLAGS_TIMEBASE_UTC'.
enum
{
  ublox_msgs__msg__TimTM2__FLAGS_TIMEBASE_UTC = 16
};

/// Constant 'FLAGS_UTC_AVAIL'.
enum
{
  ublox_msgs__msg__TimTM2__FLAGS_UTC_AVAIL = 32
};

/// Constant 'FLAGS_TIME_VALID'.
enum
{
  ublox_msgs__msg__TimTM2__FLAGS_TIME_VALID = 64
};

/// Constant 'FLAGS_NEWRISINGEDGE'.
enum
{
  ublox_msgs__msg__TimTM2__FLAGS_NEWRISINGEDGE = 128
};

// Struct defined in msg/TimTM2 in the package ublox_msgs.
typedef struct ublox_msgs__msg__TimTM2
{
  uint8_t ch;
  uint8_t flags;
  uint16_t rising_edge_count;
  uint16_t wn_r;
  uint16_t wn_f;
  uint32_t tow_ms_r;
  uint32_t tow_sub_ms_r;
  uint32_t tow_ms_f;
  uint32_t tow_sub_ms_f;
  uint32_t acc_est;
} ublox_msgs__msg__TimTM2;

// Struct for a sequence of ublox_msgs__msg__TimTM2.
typedef struct ublox_msgs__msg__TimTM2__Sequence
{
  ublox_msgs__msg__TimTM2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__TimTM2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__TIM_TM2__STRUCT_H_
