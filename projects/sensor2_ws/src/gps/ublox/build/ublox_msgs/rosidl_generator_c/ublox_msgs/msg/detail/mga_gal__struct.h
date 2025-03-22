// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/MgaGAL.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__MGA_GAL__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__MGA_GAL__STRUCT_H_

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
  ublox_msgs__msg__MgaGAL__CLASS_ID = 19
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__MgaGAL__MESSAGE_ID = 2
};

// Struct defined in msg/MgaGAL in the package ublox_msgs.
typedef struct ublox_msgs__msg__MgaGAL
{
  uint8_t type;
  uint8_t version;
  uint8_t svid;
  uint8_t reserved0;
  uint16_t iod_nav;
  int16_t delta_n;
  int32_t m0;
  uint32_t e;
  uint32_t sqrt_a;
  int32_t omega0;
  int32_t i0;
  int32_t omega;
  int32_t omega_dot;
  int16_t i_dot;
  int16_t cuc;
  int16_t cus;
  int16_t crc;
  int16_t crs;
  int16_t cic;
  int16_t cis;
  uint16_t toe;
  int32_t af0;
  int32_t af1;
  int8_t af2;
  uint8_t sisaindex_e1_e5b;
  uint16_t toc;
  int16_t bgd_e1_e5b;
  uint8_t reserved1[2];
  uint8_t health_e1b;
  uint8_t data_validity_e1b;
  uint8_t health_e5b;
  uint8_t data_validity_e5b;
  uint8_t reserved2[4];
} ublox_msgs__msg__MgaGAL;

// Struct for a sequence of ublox_msgs__msg__MgaGAL.
typedef struct ublox_msgs__msg__MgaGAL__Sequence
{
  ublox_msgs__msg__MgaGAL * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__MgaGAL__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__MGA_GAL__STRUCT_H_
