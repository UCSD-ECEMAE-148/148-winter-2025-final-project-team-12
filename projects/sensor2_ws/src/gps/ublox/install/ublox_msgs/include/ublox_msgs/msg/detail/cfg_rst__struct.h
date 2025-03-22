// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgRST.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_RST__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_RST__STRUCT_H_

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
  ublox_msgs__msg__CfgRST__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgRST__MESSAGE_ID = 4
};

/// Constant 'NAV_BBR_HOT_START'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_HOT_START = 0
};

/// Constant 'NAV_BBR_WARM_START'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_WARM_START = 1
};

/// Constant 'NAV_BBR_COLD_START'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_COLD_START = 65535
};

/// Constant 'NAV_BBR_EPH'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_EPH = 1
};

/// Constant 'NAV_BBR_ALM'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_ALM = 2
};

/// Constant 'NAV_BBR_HEALTH'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_HEALTH = 4
};

/// Constant 'NAV_BBR_KLOB'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_KLOB = 8
};

/// Constant 'NAV_BBR_POS'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_POS = 16
};

/// Constant 'NAV_BBR_CLKD'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_CLKD = 32
};

/// Constant 'NAV_BBR_OSC'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_OSC = 64
};

/// Constant 'NAV_BBR_UTC'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_UTC = 128
};

/// Constant 'NAV_BBR_RTC'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_RTC = 256
};

/// Constant 'NAV_BBR_AOP'.
enum
{
  ublox_msgs__msg__CfgRST__NAV_BBR_AOP = 32768
};

/// Constant 'RESET_MODE_HW_IMMEDIATE'.
enum
{
  ublox_msgs__msg__CfgRST__RESET_MODE_HW_IMMEDIATE = 0
};

/// Constant 'RESET_MODE_SW'.
enum
{
  ublox_msgs__msg__CfgRST__RESET_MODE_SW = 1
};

/// Constant 'RESET_MODE_GNSS'.
enum
{
  ublox_msgs__msg__CfgRST__RESET_MODE_GNSS = 2
};

/// Constant 'RESET_MODE_HW_AFTER_SHUTDOWN'.
enum
{
  ublox_msgs__msg__CfgRST__RESET_MODE_HW_AFTER_SHUTDOWN = 4
};

/// Constant 'RESET_MODE_GNSS_STOP'.
enum
{
  ublox_msgs__msg__CfgRST__RESET_MODE_GNSS_STOP = 8
};

/// Constant 'RESET_MODE_GNSS_START'.
enum
{
  ublox_msgs__msg__CfgRST__RESET_MODE_GNSS_START = 9
};

// Struct defined in msg/CfgRST in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgRST
{
  uint16_t nav_bbr_mask;
  uint8_t reset_mode;
  uint8_t reserved1;
} ublox_msgs__msg__CfgRST;

// Struct for a sequence of ublox_msgs__msg__CfgRST.
typedef struct ublox_msgs__msg__CfgRST__Sequence
{
  ublox_msgs__msg__CfgRST * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgRST__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_RST__STRUCT_H_
