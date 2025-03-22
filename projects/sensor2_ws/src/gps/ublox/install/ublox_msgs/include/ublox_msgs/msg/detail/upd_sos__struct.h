// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/UpdSOS.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__UPD_SOS__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__UPD_SOS__STRUCT_H_

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
  ublox_msgs__msg__UpdSOS__CLASS_ID = 9
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__UpdSOS__MESSAGE_ID = 20
};

/// Constant 'CMD_FLASH_BACKUP_CREATE'.
enum
{
  ublox_msgs__msg__UpdSOS__CMD_FLASH_BACKUP_CREATE = 0
};

/// Constant 'CMD_FLASH_BACKUP_CLEAR'.
enum
{
  ublox_msgs__msg__UpdSOS__CMD_FLASH_BACKUP_CLEAR = 1
};

// Struct defined in msg/UpdSOS in the package ublox_msgs.
typedef struct ublox_msgs__msg__UpdSOS
{
  uint8_t cmd;
  uint8_t reserved1[3];
} ublox_msgs__msg__UpdSOS;

// Struct for a sequence of ublox_msgs__msg__UpdSOS.
typedef struct ublox_msgs__msg__UpdSOS__Sequence
{
  ublox_msgs__msg__UpdSOS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__UpdSOS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__UPD_SOS__STRUCT_H_
