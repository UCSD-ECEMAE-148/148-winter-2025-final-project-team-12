// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/RxmSVSISV.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__RXM_SVSISV__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__RXM_SVSISV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FLAG_URA_MASK'.
enum
{
  ublox_msgs__msg__RxmSVSISV__FLAG_URA_MASK = 15
};

/// Constant 'FLAG_HEALTHY'.
enum
{
  ublox_msgs__msg__RxmSVSISV__FLAG_HEALTHY = 16
};

/// Constant 'FLAG_EPH_VAL'.
enum
{
  ublox_msgs__msg__RxmSVSISV__FLAG_EPH_VAL = 32
};

/// Constant 'FLAG_ALM_VAL'.
enum
{
  ublox_msgs__msg__RxmSVSISV__FLAG_ALM_VAL = 64
};

/// Constant 'FLAG_NOT_AVAIL'.
enum
{
  ublox_msgs__msg__RxmSVSISV__FLAG_NOT_AVAIL = 128
};

/// Constant 'AGE_ALM_MASK'.
enum
{
  ublox_msgs__msg__RxmSVSISV__AGE_ALM_MASK = 15
};

/// Constant 'AGE_EPH_MASK'.
enum
{
  ublox_msgs__msg__RxmSVSISV__AGE_EPH_MASK = 240
};

// Struct defined in msg/RxmSVSISV in the package ublox_msgs.
typedef struct ublox_msgs__msg__RxmSVSISV
{
  uint8_t svid;
  uint8_t sv_flag;
  int16_t azim;
  int8_t elev;
  uint8_t age;
} ublox_msgs__msg__RxmSVSISV;

// Struct for a sequence of ublox_msgs__msg__RxmSVSISV.
typedef struct ublox_msgs__msg__RxmSVSISV__Sequence
{
  ublox_msgs__msg__RxmSVSISV * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__RxmSVSISV__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__RXM_SVSISV__STRUCT_H_
