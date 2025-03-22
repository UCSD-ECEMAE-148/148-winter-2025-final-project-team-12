// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/EsfRAWBlock.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__ESF_RAW_BLOCK__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__ESF_RAW_BLOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DATA_FIELD_MASK'.
enum
{
  ublox_msgs__msg__EsfRAWBlock__DATA_FIELD_MASK = 16777215ul
};

/// Constant 'DATA_TYPE_MASK'.
enum
{
  ublox_msgs__msg__EsfRAWBlock__DATA_TYPE_MASK = 4278190080ul
};

// Struct defined in msg/EsfRAWBlock in the package ublox_msgs.
typedef struct ublox_msgs__msg__EsfRAWBlock
{
  uint32_t data;
  uint32_t s_t_tag;
} ublox_msgs__msg__EsfRAWBlock;

// Struct for a sequence of ublox_msgs__msg__EsfRAWBlock.
typedef struct ublox_msgs__msg__EsfRAWBlock__Sequence
{
  ublox_msgs__msg__EsfRAWBlock * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__EsfRAWBlock__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__ESF_RAW_BLOCK__STRUCT_H_
