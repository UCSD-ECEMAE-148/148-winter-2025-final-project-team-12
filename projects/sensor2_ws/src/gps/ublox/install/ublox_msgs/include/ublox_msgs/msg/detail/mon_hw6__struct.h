// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/MonHW6.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__MON_HW6__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__MON_HW6__STRUCT_H_

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
  ublox_msgs__msg__MonHW6__CLASS_ID = 10
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__MonHW6__MESSAGE_ID = 9
};

/// Constant 'A_STATUS_INIT'.
enum
{
  ublox_msgs__msg__MonHW6__A_STATUS_INIT = 0
};

/// Constant 'A_STATUS_UNKNOWN'.
enum
{
  ublox_msgs__msg__MonHW6__A_STATUS_UNKNOWN = 1
};

/// Constant 'A_STATUS_OK'.
enum
{
  ublox_msgs__msg__MonHW6__A_STATUS_OK = 2
};

/// Constant 'A_STATUS_SHORT'.
enum
{
  ublox_msgs__msg__MonHW6__A_STATUS_SHORT = 3
};

/// Constant 'A_STATUS_OPEN'.
enum
{
  ublox_msgs__msg__MonHW6__A_STATUS_OPEN = 4
};

/// Constant 'A_POWER_OFF'.
enum
{
  ublox_msgs__msg__MonHW6__A_POWER_OFF = 0
};

/// Constant 'A_POWER_ON'.
enum
{
  ublox_msgs__msg__MonHW6__A_POWER_ON = 1
};

/// Constant 'A_POWER_UNKNOWN'.
enum
{
  ublox_msgs__msg__MonHW6__A_POWER_UNKNOWN = 2
};

/// Constant 'FLAGS_RTC_CALIB'.
enum
{
  ublox_msgs__msg__MonHW6__FLAGS_RTC_CALIB = 1
};

/// Constant 'FLAGS_SAFE_BOOT'.
enum
{
  ublox_msgs__msg__MonHW6__FLAGS_SAFE_BOOT = 2
};

/// Constant 'FLAGS_JAMMING_STATE_MASK'.
enum
{
  ublox_msgs__msg__MonHW6__FLAGS_JAMMING_STATE_MASK = 12
};

/// Constant 'JAMMING_STATE_UNKNOWN_OR_DISABLED'.
enum
{
  ublox_msgs__msg__MonHW6__JAMMING_STATE_UNKNOWN_OR_DISABLED = 0
};

/// Constant 'JAMMING_STATE_OK'.
enum
{
  ublox_msgs__msg__MonHW6__JAMMING_STATE_OK = 4
};

/// Constant 'JAMMING_STATE_WARNING'.
enum
{
  ublox_msgs__msg__MonHW6__JAMMING_STATE_WARNING = 8
};

/// Constant 'JAMMING_STATE_CRITICAL'.
enum
{
  ublox_msgs__msg__MonHW6__JAMMING_STATE_CRITICAL = 12
};

/// Constant 'FLAGS_XTAL_ABSENT'.
enum
{
  ublox_msgs__msg__MonHW6__FLAGS_XTAL_ABSENT = 16
};

/// Constant 'JAM_IND_NONE'.
enum
{
  ublox_msgs__msg__MonHW6__JAM_IND_NONE = 0
};

/// Constant 'JAM_IND_STRONG'.
enum
{
  ublox_msgs__msg__MonHW6__JAM_IND_STRONG = 255
};

// Struct defined in msg/MonHW6 in the package ublox_msgs.
typedef struct ublox_msgs__msg__MonHW6
{
  uint32_t pin_sel;
  uint32_t pin_bank;
  uint32_t pin_dir;
  uint32_t pin_val;
  uint16_t noise_per_ms;
  uint16_t agc_cnt;
  uint8_t a_status;
  uint8_t a_power;
  uint8_t flags;
  uint8_t reserved0;
  uint32_t used_mask;
  uint8_t vp[25];
  uint8_t jam_ind;
  uint8_t reserved1[2];
  uint32_t pin_irq;
  uint32_t pull_h;
  uint32_t pull_l;
} ublox_msgs__msg__MonHW6;

// Struct for a sequence of ublox_msgs__msg__MonHW6.
typedef struct ublox_msgs__msg__MonHW6__Sequence
{
  ublox_msgs__msg__MonHW6 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__MonHW6__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__MON_HW6__STRUCT_H_
