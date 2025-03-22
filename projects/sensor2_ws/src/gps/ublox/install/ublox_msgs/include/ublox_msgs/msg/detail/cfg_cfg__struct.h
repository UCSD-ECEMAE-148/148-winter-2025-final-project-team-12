// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgCFG.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_CFG__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_CFG__STRUCT_H_

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
  ublox_msgs__msg__CfgCFG__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgCFG__MESSAGE_ID = 9
};

/// Constant 'MASK_IO_PORT'.
enum
{
  ublox_msgs__msg__CfgCFG__MASK_IO_PORT = 1ul
};

/// Constant 'MASK_MSG_CONF'.
enum
{
  ublox_msgs__msg__CfgCFG__MASK_MSG_CONF = 2ul
};

/// Constant 'MASK_INF_MSG'.
enum
{
  ublox_msgs__msg__CfgCFG__MASK_INF_MSG = 4ul
};

/// Constant 'MASK_NAV_CONF'.
enum
{
  ublox_msgs__msg__CfgCFG__MASK_NAV_CONF = 8ul
};

/// Constant 'MASK_RXM_CONF'.
enum
{
  ublox_msgs__msg__CfgCFG__MASK_RXM_CONF = 16ul
};

/// Constant 'MASK_SEN_CONF'.
enum
{
  ublox_msgs__msg__CfgCFG__MASK_SEN_CONF = 256ul
};

/// Constant 'MASK_RINV_CONF'.
enum
{
  ublox_msgs__msg__CfgCFG__MASK_RINV_CONF = 512ul
};

/// Constant 'MASK_ANT_CONF'.
enum
{
  ublox_msgs__msg__CfgCFG__MASK_ANT_CONF = 1024ul
};

/// Constant 'MASK_LOG_CONF'.
enum
{
  ublox_msgs__msg__CfgCFG__MASK_LOG_CONF = 2048ul
};

/// Constant 'MASK_FTS_CONF'.
enum
{
  ublox_msgs__msg__CfgCFG__MASK_FTS_CONF = 4096ul
};

/// Constant 'DEV_BBR'.
enum
{
  ublox_msgs__msg__CfgCFG__DEV_BBR = 1
};

/// Constant 'DEV_FLASH'.
enum
{
  ublox_msgs__msg__CfgCFG__DEV_FLASH = 2
};

/// Constant 'DEV_EEPROM'.
enum
{
  ublox_msgs__msg__CfgCFG__DEV_EEPROM = 4
};

/// Constant 'DEV_SPI_FLASH'.
enum
{
  ublox_msgs__msg__CfgCFG__DEV_SPI_FLASH = 16
};

// Struct defined in msg/CfgCFG in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgCFG
{
  uint32_t clear_mask;
  uint32_t save_mask;
  uint32_t load_mask;
  uint8_t device_mask;
} ublox_msgs__msg__CfgCFG;

// Struct for a sequence of ublox_msgs__msg__CfgCFG.
typedef struct ublox_msgs__msg__CfgCFG__Sequence
{
  ublox_msgs__msg__CfgCFG * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgCFG__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_CFG__STRUCT_H_
