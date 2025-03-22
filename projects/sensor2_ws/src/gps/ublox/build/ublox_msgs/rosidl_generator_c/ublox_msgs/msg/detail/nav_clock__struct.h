// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavCLOCK.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_CLOCK__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_CLOCK__STRUCT_H_

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
  ublox_msgs__msg__NavCLOCK__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavCLOCK__MESSAGE_ID = 34
};

// Struct defined in msg/NavCLOCK in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavCLOCK
{
  uint32_t i_tow;
  int32_t clk_b;
  int32_t clk_d;
  uint32_t t_acc;
  uint32_t f_acc;
} ublox_msgs__msg__NavCLOCK;

// Struct for a sequence of ublox_msgs__msg__NavCLOCK.
typedef struct ublox_msgs__msg__NavCLOCK__Sequence
{
  ublox_msgs__msg__NavCLOCK * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavCLOCK__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_CLOCK__STRUCT_H_
