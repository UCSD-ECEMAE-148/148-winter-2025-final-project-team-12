// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavDOP.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_DOP__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_DOP__STRUCT_H_

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
  ublox_msgs__msg__NavDOP__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavDOP__MESSAGE_ID = 4
};

// Struct defined in msg/NavDOP in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavDOP
{
  uint32_t i_tow;
  uint16_t g_dop;
  uint16_t p_dop;
  uint16_t t_dop;
  uint16_t v_dop;
  uint16_t h_dop;
  uint16_t n_dop;
  uint16_t e_dop;
} ublox_msgs__msg__NavDOP;

// Struct for a sequence of ublox_msgs__msg__NavDOP.
typedef struct ublox_msgs__msg__NavDOP__Sequence
{
  ublox_msgs__msg__NavDOP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavDOP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_DOP__STRUCT_H_
