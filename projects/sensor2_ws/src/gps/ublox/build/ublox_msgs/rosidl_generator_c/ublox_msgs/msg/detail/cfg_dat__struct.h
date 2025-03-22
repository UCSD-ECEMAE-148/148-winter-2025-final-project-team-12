// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgDAT.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_DAT__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_DAT__STRUCT_H_

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
  ublox_msgs__msg__CfgDAT__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgDAT__MESSAGE_ID = 6
};

/// Constant 'DATUM_NUM_WGS84'.
enum
{
  ublox_msgs__msg__CfgDAT__DATUM_NUM_WGS84 = 0
};

/// Constant 'DATUM_NUM_USER'.
enum
{
  ublox_msgs__msg__CfgDAT__DATUM_NUM_USER = 65535
};

// Struct defined in msg/CfgDAT in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgDAT
{
  uint16_t datum_num;
  uint8_t datum_name[6];
  double maj_a;
  double flat;
  float d_x;
  float d_y;
  float d_z;
  float rot_x;
  float rot_y;
  float rot_z;
  float scale;
} ublox_msgs__msg__CfgDAT;

// Struct for a sequence of ublox_msgs__msg__CfgDAT.
typedef struct ublox_msgs__msg__CfgDAT__Sequence
{
  ublox_msgs__msg__CfgDAT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgDAT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_DAT__STRUCT_H_
