// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgNMEA7.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_NMEA7__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_NMEA7__STRUCT_H_

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
  ublox_msgs__msg__CfgNMEA7__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgNMEA7__MESSAGE_ID = 23
};

/// Constant 'FILTER_POS'.
enum
{
  ublox_msgs__msg__CfgNMEA7__FILTER_POS = 1
};

/// Constant 'FILTER_MSK_POS'.
enum
{
  ublox_msgs__msg__CfgNMEA7__FILTER_MSK_POS = 2
};

/// Constant 'FILTER_TIME'.
enum
{
  ublox_msgs__msg__CfgNMEA7__FILTER_TIME = 4
};

/// Constant 'FILTER_DATE'.
enum
{
  ublox_msgs__msg__CfgNMEA7__FILTER_DATE = 8
};

/// Constant 'FILTER_GPS_ONLY'.
enum
{
  ublox_msgs__msg__CfgNMEA7__FILTER_GPS_ONLY = 16
};

/// Constant 'FILTER_TRACK'.
enum
{
  ublox_msgs__msg__CfgNMEA7__FILTER_TRACK = 32
};

/// Constant 'NMEA_VERSION_2_3'.
enum
{
  ublox_msgs__msg__CfgNMEA7__NMEA_VERSION_2_3 = 35
};

/// Constant 'NMEA_VERSION_2_1'.
enum
{
  ublox_msgs__msg__CfgNMEA7__NMEA_VERSION_2_1 = 33
};

/// Constant 'NUM_SV_UNLIMITED'.
enum
{
  ublox_msgs__msg__CfgNMEA7__NUM_SV_UNLIMITED = 0
};

/// Constant 'FLAGS_COMPAT'.
enum
{
  ublox_msgs__msg__CfgNMEA7__FLAGS_COMPAT = 1
};

/// Constant 'FLAGS_CONSIDER'.
enum
{
  ublox_msgs__msg__CfgNMEA7__FLAGS_CONSIDER = 2
};

/// Constant 'GNSS_TO_FILTER_GPS'.
enum
{
  ublox_msgs__msg__CfgNMEA7__GNSS_TO_FILTER_GPS = 1ul
};

/// Constant 'GNSS_TO_FILTER_SBAS'.
enum
{
  ublox_msgs__msg__CfgNMEA7__GNSS_TO_FILTER_SBAS = 2ul
};

/// Constant 'GNSS_TO_FILTER_QZSS'.
enum
{
  ublox_msgs__msg__CfgNMEA7__GNSS_TO_FILTER_QZSS = 16ul
};

/// Constant 'GNSS_TO_FILTER_GLONASS'.
enum
{
  ublox_msgs__msg__CfgNMEA7__GNSS_TO_FILTER_GLONASS = 32ul
};

/// Constant 'SV_NUMBERING_STRICT'.
enum
{
  ublox_msgs__msg__CfgNMEA7__SV_NUMBERING_STRICT = 0
};

/// Constant 'SV_NUMBERING_EXTENDED'.
enum
{
  ublox_msgs__msg__CfgNMEA7__SV_NUMBERING_EXTENDED = 1
};

/// Constant 'MAIN_TALKER_ID_NOT_OVERRIDDEN'.
enum
{
  ublox_msgs__msg__CfgNMEA7__MAIN_TALKER_ID_NOT_OVERRIDDEN = 0
};

/// Constant 'MAIN_TALKER_ID_GP'.
enum
{
  ublox_msgs__msg__CfgNMEA7__MAIN_TALKER_ID_GP = 1
};

/// Constant 'MAIN_TALKER_ID_GL'.
enum
{
  ublox_msgs__msg__CfgNMEA7__MAIN_TALKER_ID_GL = 2
};

/// Constant 'MAIN_TALKER_ID_GN'.
enum
{
  ublox_msgs__msg__CfgNMEA7__MAIN_TALKER_ID_GN = 3
};

/// Constant 'GSV_TALKER_ID_GNSS_SPECIFIC'.
enum
{
  ublox_msgs__msg__CfgNMEA7__GSV_TALKER_ID_GNSS_SPECIFIC = 0
};

/// Constant 'GSV_TALKER_ID_MAIN'.
enum
{
  ublox_msgs__msg__CfgNMEA7__GSV_TALKER_ID_MAIN = 1
};

// Struct defined in msg/CfgNMEA7 in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgNMEA7
{
  uint8_t filter;
  uint8_t nmea_version;
  uint8_t num_sv;
  uint8_t flags;
  uint32_t gnss_to_filter;
  uint8_t sv_numbering;
  uint8_t main_talker_id;
  uint8_t gsv_talker_id;
  uint8_t reserved;
} ublox_msgs__msg__CfgNMEA7;

// Struct for a sequence of ublox_msgs__msg__CfgNMEA7.
typedef struct ublox_msgs__msg__CfgNMEA7__Sequence
{
  ublox_msgs__msg__CfgNMEA7 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgNMEA7__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_NMEA7__STRUCT_H_
