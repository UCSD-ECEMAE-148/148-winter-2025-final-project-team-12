// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/RxmSFRBX.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__RXM_SFRBX__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__RXM_SFRBX__STRUCT_H_

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
  ublox_msgs__msg__RxmSFRBX__CLASS_ID = 2
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__RxmSFRBX__MESSAGE_ID = 19
};

// Include directives for member types
// Member 'dwrd'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/RxmSFRBX in the package ublox_msgs.
typedef struct ublox_msgs__msg__RxmSFRBX
{
  uint8_t gnss_id;
  uint8_t sv_id;
  uint8_t reserved0;
  uint8_t freq_id;
  uint8_t num_words;
  uint8_t chn;
  uint8_t version;
  uint8_t reserved1;
  rosidl_runtime_c__uint32__Sequence dwrd;
} ublox_msgs__msg__RxmSFRBX;

// Struct for a sequence of ublox_msgs__msg__RxmSFRBX.
typedef struct ublox_msgs__msg__RxmSFRBX__Sequence
{
  ublox_msgs__msg__RxmSFRBX * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__RxmSFRBX__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__RXM_SFRBX__STRUCT_H_
