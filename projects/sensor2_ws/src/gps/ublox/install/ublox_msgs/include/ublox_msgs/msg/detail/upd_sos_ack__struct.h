// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/UpdSOSAck.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__UPD_SOS_ACK__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__UPD_SOS_ACK__STRUCT_H_

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
  ublox_msgs__msg__UpdSOSAck__CLASS_ID = 9
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__UpdSOSAck__MESSAGE_ID = 20
};

/// Constant 'CMD_BACKUP_CREATE_ACK'.
enum
{
  ublox_msgs__msg__UpdSOSAck__CMD_BACKUP_CREATE_ACK = 2
};

/// Constant 'CMD_SYSTEM_RESTORED'.
enum
{
  ublox_msgs__msg__UpdSOSAck__CMD_SYSTEM_RESTORED = 3
};

/// Constant 'BACKUP_CREATE_NACK'.
enum
{
  ublox_msgs__msg__UpdSOSAck__BACKUP_CREATE_NACK = 0
};

/// Constant 'BACKUP_CREATE_ACK'.
enum
{
  ublox_msgs__msg__UpdSOSAck__BACKUP_CREATE_ACK = 1
};

/// Constant 'SYSTEM_RESTORED_RESPONSE_UNKNOWN'.
enum
{
  ublox_msgs__msg__UpdSOSAck__SYSTEM_RESTORED_RESPONSE_UNKNOWN = 0
};

/// Constant 'SYSTEM_RESTORED_RESPONSE_FAILED'.
enum
{
  ublox_msgs__msg__UpdSOSAck__SYSTEM_RESTORED_RESPONSE_FAILED = 1
};

/// Constant 'SYSTEM_RESTORED_RESPONSE_RESTORED'.
enum
{
  ublox_msgs__msg__UpdSOSAck__SYSTEM_RESTORED_RESPONSE_RESTORED = 2
};

/// Constant 'SYSTEM_RESTORED_RESPONSE_NOT_RESTORED'.
enum
{
  ublox_msgs__msg__UpdSOSAck__SYSTEM_RESTORED_RESPONSE_NOT_RESTORED = 3
};

// Struct defined in msg/UpdSOSAck in the package ublox_msgs.
typedef struct ublox_msgs__msg__UpdSOSAck
{
  uint8_t cmd;
  uint8_t reserved0[3];
  uint8_t response;
  uint8_t reserved1[3];
} ublox_msgs__msg__UpdSOSAck;

// Struct for a sequence of ublox_msgs__msg__UpdSOSAck.
typedef struct ublox_msgs__msg__UpdSOSAck__Sequence
{
  ublox_msgs__msg__UpdSOSAck * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__UpdSOSAck__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__UPD_SOS_ACK__STRUCT_H_
