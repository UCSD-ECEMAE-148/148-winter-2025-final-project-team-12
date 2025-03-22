// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/NavSVINFOSV.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_SVINFOSV__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_SVINFOSV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FLAGS_SV_USED'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__FLAGS_SV_USED = 1
};

/// Constant 'FLAGS_DIFF_CORR'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__FLAGS_DIFF_CORR = 2
};

/// Constant 'FLAGS_ORBIT_AVAIL'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__FLAGS_ORBIT_AVAIL = 4
};

/// Constant 'FLAGS_ORBIT_EPH'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__FLAGS_ORBIT_EPH = 8
};

/// Constant 'FLAGS_UNHEALTHY'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__FLAGS_UNHEALTHY = 16
};

/// Constant 'FLAGS_ORBIT_ALM'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__FLAGS_ORBIT_ALM = 32
};

/// Constant 'FLAGS_ORBIT_AOP'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__FLAGS_ORBIT_AOP = 64
};

/// Constant 'FLAGS_SMOOTHED'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__FLAGS_SMOOTHED = 128
};

/// Constant 'QUALITY_IDLE'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__QUALITY_IDLE = 0
};

/// Constant 'QUALITY_SEARCHING'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__QUALITY_SEARCHING = 1
};

/// Constant 'QUALITY_ACQUIRED'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__QUALITY_ACQUIRED = 2
};

/// Constant 'QUALITY_DETECTED'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__QUALITY_DETECTED = 3
};

/// Constant 'QUALITY_CODE_LOCK'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__QUALITY_CODE_LOCK = 4
};

/// Constant 'QUALITY_CODE_AND_CARRIER_LOCKED1'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__QUALITY_CODE_AND_CARRIER_LOCKED1 = 5
};

/// Constant 'QUALITY_CODE_AND_CARRIER_LOCKED2'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__QUALITY_CODE_AND_CARRIER_LOCKED2 = 6
};

/// Constant 'QUALITY_CODE_AND_CARRIER_LOCKED3'.
enum
{
  ublox_msgs__msg__NavSVINFOSV__QUALITY_CODE_AND_CARRIER_LOCKED3 = 7
};

// Struct defined in msg/NavSVINFOSV in the package ublox_msgs.
typedef struct ublox_msgs__msg__NavSVINFOSV
{
  uint8_t chn;
  uint8_t svid;
  uint8_t flags;
  uint8_t quality;
  uint8_t cno;
  int8_t elev;
  int16_t azim;
  int32_t pr_res;
} ublox_msgs__msg__NavSVINFOSV;

// Struct for a sequence of ublox_msgs__msg__NavSVINFOSV.
typedef struct ublox_msgs__msg__NavSVINFOSV__Sequence
{
  ublox_msgs__msg__NavSVINFOSV * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__NavSVINFOSV__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_SVINFOSV__STRUCT_H_
