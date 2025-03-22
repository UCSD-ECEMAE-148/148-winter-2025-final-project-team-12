// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/RxmSVSI.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__RXM_SVSI__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__RXM_SVSI__STRUCT_H_

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
  ublox_msgs__msg__RxmSVSI__CLASS_ID = 2
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__RxmSVSI__MESSAGE_ID = 32
};

// Include directives for member types
// Member 'sv'
#include "ublox_msgs/msg/detail/rxm_svsisv__struct.h"

// Struct defined in msg/RxmSVSI in the package ublox_msgs.
typedef struct ublox_msgs__msg__RxmSVSI
{
  int32_t i_tow;
  int16_t week;
  uint8_t num_vis;
  uint8_t num_sv;
  ublox_msgs__msg__RxmSVSISV__Sequence sv;
} ublox_msgs__msg__RxmSVSI;

// Struct for a sequence of ublox_msgs__msg__RxmSVSI.
typedef struct ublox_msgs__msg__RxmSVSI__Sequence
{
  ublox_msgs__msg__RxmSVSI * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__RxmSVSI__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__RXM_SVSI__STRUCT_H_
