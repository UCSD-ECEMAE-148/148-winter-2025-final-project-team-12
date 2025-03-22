// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/EsfMEAS.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__ESF_MEAS__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__ESF_MEAS__STRUCT_H_

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
  ublox_msgs__msg__EsfMEAS__CLASS_ID = 16
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__EsfMEAS__MESSAGE_ID = 2
};

/// Constant 'FLAGS_TIME_MARK_SENT_MASK'.
enum
{
  ublox_msgs__msg__EsfMEAS__FLAGS_TIME_MARK_SENT_MASK = 3
};

/// Constant 'TIME_MARK_NONE'.
enum
{
  ublox_msgs__msg__EsfMEAS__TIME_MARK_NONE = 0
};

/// Constant 'TIME_MARK_EXT0'.
enum
{
  ublox_msgs__msg__EsfMEAS__TIME_MARK_EXT0 = 1
};

/// Constant 'TIME_MARK_EXT'.
enum
{
  ublox_msgs__msg__EsfMEAS__TIME_MARK_EXT = 2
};

/// Constant 'FLAGS_TIME_MARK_EDGE'.
enum
{
  ublox_msgs__msg__EsfMEAS__FLAGS_TIME_MARK_EDGE = 4
};

/// Constant 'FLAGS_CALIB_T_TAG_VALID'.
enum
{
  ublox_msgs__msg__EsfMEAS__FLAGS_CALIB_T_TAG_VALID = 8
};

/// Constant 'DATA_FIELD_MASK'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_FIELD_MASK = 16777215ul
};

/// Constant 'DATA_TYPE_MASK'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_MASK = 1056964608ul
};

/// Constant 'DATA_TYPE_SHIFT'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_SHIFT = 24ul
};

/// Constant 'DATA_TYPE_NONE'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_NONE = 0ul
};

/// Constant 'DATA_TYPE_Z_AXIS_GYRO'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_Z_AXIS_GYRO = 5ul
};

/// Constant 'DATA_TYPE_WHEEL_TICKS_FRONT_LEFT'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_WHEEL_TICKS_FRONT_LEFT = 6ul
};

/// Constant 'DATA_TYPE_WHEEL_TICKS_FRONT_RIGHT'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_WHEEL_TICKS_FRONT_RIGHT = 7ul
};

/// Constant 'DATA_TYPE_WHEEL_TICKS_REAR_LEFT'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_WHEEL_TICKS_REAR_LEFT = 8ul
};

/// Constant 'DATA_TYPE_WHEEL_TICKS_REAR_RIGHT'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_WHEEL_TICKS_REAR_RIGHT = 9ul
};

/// Constant 'DATA_TYPE_SINGLE_TICK'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_SINGLE_TICK = 10ul
};

/// Constant 'DATA_TYPE_SPEED'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_SPEED = 11ul
};

/// Constant 'DATA_TYPE_GYRO_TEMPERATURE'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_GYRO_TEMPERATURE = 12ul
};

/// Constant 'DATA_TYPE_GYRO_ANG_RATE_Y'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_GYRO_ANG_RATE_Y = 13ul
};

/// Constant 'DATA_TYPE_GYRO_ANG_RATE_X'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_GYRO_ANG_RATE_X = 14ul
};

/// Constant 'DATA_TYPE_ACCELEROMETER_X'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_ACCELEROMETER_X = 16ul
};

/// Constant 'DATA_TYPE_ACCELEROMETER_Y'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_ACCELEROMETER_Y = 17ul
};

/// Constant 'DATA_TYPE_ACCELEROMETER_Z'.
enum
{
  ublox_msgs__msg__EsfMEAS__DATA_TYPE_ACCELEROMETER_Z = 18ul
};

// Include directives for member types
// Member 'data'
// Member 'calib_t_tag'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/EsfMEAS in the package ublox_msgs.
typedef struct ublox_msgs__msg__EsfMEAS
{
  uint32_t time_tag;
  uint16_t flags;
  uint16_t id;
  rosidl_runtime_c__uint32__Sequence data;
  rosidl_runtime_c__uint32__Sequence calib_t_tag;
} ublox_msgs__msg__EsfMEAS;

// Struct for a sequence of ublox_msgs__msg__EsfMEAS.
typedef struct ublox_msgs__msg__EsfMEAS__Sequence
{
  ublox_msgs__msg__EsfMEAS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__EsfMEAS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__ESF_MEAS__STRUCT_H_
