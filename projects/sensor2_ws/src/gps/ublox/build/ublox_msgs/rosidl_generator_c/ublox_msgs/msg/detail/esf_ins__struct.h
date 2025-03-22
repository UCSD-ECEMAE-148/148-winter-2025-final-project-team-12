// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/EsfINS.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__ESF_INS__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__ESF_INS__STRUCT_H_

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
  ublox_msgs__msg__EsfINS__CLASS_ID = 16
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__EsfINS__MESSAGE_ID = 21
};

/// Constant 'BITFIELD0_VERSION'.
enum
{
  ublox_msgs__msg__EsfINS__BITFIELD0_VERSION = 255ul
};

/// Constant 'BITFIELD0_X_ANG_RATE_VALID'.
enum
{
  ublox_msgs__msg__EsfINS__BITFIELD0_X_ANG_RATE_VALID = 256ul
};

/// Constant 'BITFIELD0_Y_ANG_RATE_VALID'.
enum
{
  ublox_msgs__msg__EsfINS__BITFIELD0_Y_ANG_RATE_VALID = 512ul
};

/// Constant 'BITFIELD0_Z_ANG_RATE_VALID'.
enum
{
  ublox_msgs__msg__EsfINS__BITFIELD0_Z_ANG_RATE_VALID = 1024ul
};

/// Constant 'BITFIELD0_X_ACCEL_VALID'.
enum
{
  ublox_msgs__msg__EsfINS__BITFIELD0_X_ACCEL_VALID = 2048ul
};

/// Constant 'BITFIELD0_Y_ACCEL_VALID'.
enum
{
  ublox_msgs__msg__EsfINS__BITFIELD0_Y_ACCEL_VALID = 4096ul
};

/// Constant 'BITFIELD0_Z_ACCEL_VALID'.
enum
{
  ublox_msgs__msg__EsfINS__BITFIELD0_Z_ACCEL_VALID = 8192ul
};

// Struct defined in msg/EsfINS in the package ublox_msgs.
typedef struct ublox_msgs__msg__EsfINS
{
  uint32_t bitfield0;
  uint8_t reserved1[4];
  uint32_t i_tow;
  int32_t x_ang_rate;
  int32_t y_ang_rate;
  int32_t z_ang_rate;
  int32_t x_accel;
  int32_t y_accel;
  int32_t z_accel;
} ublox_msgs__msg__EsfINS;

// Struct for a sequence of ublox_msgs__msg__EsfINS.
typedef struct ublox_msgs__msg__EsfINS__Sequence
{
  ublox_msgs__msg__EsfINS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__EsfINS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__ESF_INS__STRUCT_H_
