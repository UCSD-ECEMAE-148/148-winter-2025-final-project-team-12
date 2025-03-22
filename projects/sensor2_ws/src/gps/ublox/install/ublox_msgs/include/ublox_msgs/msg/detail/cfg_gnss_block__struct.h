// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgGNSSBlock.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_GNSS_BLOCK__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_GNSS_BLOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GNSS_ID_GPS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__GNSS_ID_GPS = 0
};

/// Constant 'GNSS_ID_SBAS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__GNSS_ID_SBAS = 1
};

/// Constant 'GNSS_ID_GALILEO'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__GNSS_ID_GALILEO = 2
};

/// Constant 'GNSS_ID_BEIDOU'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__GNSS_ID_BEIDOU = 3
};

/// Constant 'GNSS_ID_IMES'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__GNSS_ID_IMES = 4
};

/// Constant 'GNSS_ID_QZSS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__GNSS_ID_QZSS = 5
};

/// Constant 'GNSS_ID_GLONASS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__GNSS_ID_GLONASS = 6
};

/// Constant 'RES_TRK_CH_GPS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__RES_TRK_CH_GPS = 8
};

/// Constant 'RES_TRK_CH_QZSS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__RES_TRK_CH_QZSS = 0
};

/// Constant 'RES_TRK_CH_SBAS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__RES_TRK_CH_SBAS = 0
};

/// Constant 'RES_TRK_CH_GLONASS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__RES_TRK_CH_GLONASS = 8
};

/// Constant 'MAX_TRK_CH_MAJOR_MIN'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__MAX_TRK_CH_MAJOR_MIN = 4
};

/// Constant 'MAX_TRK_CH_GPS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__MAX_TRK_CH_GPS = 16
};

/// Constant 'MAX_TRK_CH_GLONASS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__MAX_TRK_CH_GLONASS = 14
};

/// Constant 'MAX_TRK_CH_QZSS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__MAX_TRK_CH_QZSS = 3
};

/// Constant 'MAX_TRK_CH_SBAS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__MAX_TRK_CH_SBAS = 3
};

/// Constant 'FLAGS_ENABLE'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__FLAGS_ENABLE = 1ul
};

/// Constant 'FLAGS_SIG_CFG_MASK'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__FLAGS_SIG_CFG_MASK = 16711680ul
};

/// Constant 'SIG_CFG_GPS_L1CA'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__SIG_CFG_GPS_L1CA = 65536ul
};

/// Constant 'SIG_CFG_SBAS_L1CA'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__SIG_CFG_SBAS_L1CA = 65536ul
};

/// Constant 'SIG_CFG_GALILEO_E1OS'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__SIG_CFG_GALILEO_E1OS = 65536ul
};

/// Constant 'SIG_CFG_BEIDOU_B1I'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__SIG_CFG_BEIDOU_B1I = 65536ul
};

/// Constant 'SIG_CFG_IMES_L1'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__SIG_CFG_IMES_L1 = 65536ul
};

/// Constant 'SIG_CFG_QZSS_L1CA'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__SIG_CFG_QZSS_L1CA = 65536ul
};

/// Constant 'SIG_CFG_QZSS_L1SAIF'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__SIG_CFG_QZSS_L1SAIF = 262144ul
};

/// Constant 'SIG_CFG_GLONASS_L1OF'.
enum
{
  ublox_msgs__msg__CfgGNSSBlock__SIG_CFG_GLONASS_L1OF = 65536ul
};

// Struct defined in msg/CfgGNSSBlock in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgGNSSBlock
{
  uint8_t gnss_id;
  uint8_t res_trk_ch;
  uint8_t max_trk_ch;
  uint8_t reserved1;
  uint32_t flags;
} ublox_msgs__msg__CfgGNSSBlock;

// Struct for a sequence of ublox_msgs__msg__CfgGNSSBlock.
typedef struct ublox_msgs__msg__CfgGNSSBlock__Sequence
{
  ublox_msgs__msg__CfgGNSSBlock * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgGNSSBlock__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_GNSS_BLOCK__STRUCT_H_
