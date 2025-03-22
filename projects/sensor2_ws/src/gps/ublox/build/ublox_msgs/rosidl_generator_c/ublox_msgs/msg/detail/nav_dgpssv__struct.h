// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavDGPSSV.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_DGPSSV__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_DGPSSV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FLAGS_CHANNEL_MASK'.
enum
{
  ublox_msgs__msg__NavDGPSSV__FLAGS_CHANNEL_MASK = 15
};

/// Constant 'FLAGS_DGPS'.
enum
{
  ublox_msgs__msg__NavDGPSSV__FLAGS_DGPS = 16
};

// Struct defined in msg/NavDGPSSV in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavDGPSSV
{
  uint8_t svid;
  uint8_t flags;
  uint16_t age_c;
  float prc;
  float prrc;
} ublox_msgs__msg__NavDGPSSV;

// Struct for a sequence of ublox_msgs__msg__NavDGPSSV.
typedef struct ublox_msgs__msg__NavDGPSSV__Sequence
{
  ublox_msgs__msg__NavDGPSSV * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavDGPSSV__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_DGPSSV__STRUCT_H_
