// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavPOSLLH.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_POSLLH__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_POSLLH__STRUCT_H_

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
  ublox_msgs__msg__NavPOSLLH__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__NavPOSLLH__MESSAGE_ID = 2
};

// Struct defined in msg/NavPOSLLH in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavPOSLLH
{
  uint32_t i_tow;
  int32_t lon;
  int32_t lat;
  int32_t height;
  int32_t h_msl;
  uint32_t h_acc;
  uint32_t v_acc;
} ublox_msgs__msg__NavPOSLLH;

// Struct for a sequence of ublox_msgs__msg__NavPOSLLH.
typedef struct ublox_msgs__msg__NavPOSLLH__Sequence
{
  ublox_msgs__msg__NavPOSLLH * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavPOSLLH__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_POSLLH__STRUCT_H_
