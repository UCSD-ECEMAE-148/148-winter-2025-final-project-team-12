// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_msgs:msg/CfgPRT.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_PRT__STRUCT_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_PRT__STRUCT_H_

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
  ublox_msgs__msg__CfgPRT__CLASS_ID = 6
};

/// Constant 'MESSAGE_ID'.
enum
{
  ublox_msgs__msg__CfgPRT__MESSAGE_ID = 0
};

/// Constant 'PORT_ID_DDC'.
enum
{
  ublox_msgs__msg__CfgPRT__PORT_ID_DDC = 0
};

/// Constant 'PORT_ID_UART1'.
enum
{
  ublox_msgs__msg__CfgPRT__PORT_ID_UART1 = 1
};

/// Constant 'PORT_ID_UART2'.
enum
{
  ublox_msgs__msg__CfgPRT__PORT_ID_UART2 = 2
};

/// Constant 'PORT_ID_USB'.
enum
{
  ublox_msgs__msg__CfgPRT__PORT_ID_USB = 3
};

/// Constant 'PORT_ID_SPI'.
enum
{
  ublox_msgs__msg__CfgPRT__PORT_ID_SPI = 4
};

/// Constant 'TX_READY_EN'.
enum
{
  ublox_msgs__msg__CfgPRT__TX_READY_EN = 1
};

/// Constant 'TX_READY_POLARITY_HIGH_ACTIVE'.
enum
{
  ublox_msgs__msg__CfgPRT__TX_READY_POLARITY_HIGH_ACTIVE = 0
};

/// Constant 'TX_READY_POLARITY_LOW_ACTIVE'.
enum
{
  ublox_msgs__msg__CfgPRT__TX_READY_POLARITY_LOW_ACTIVE = 2
};

/// Constant 'TX_READY_PIN_SHIFT'.
enum
{
  ublox_msgs__msg__CfgPRT__TX_READY_PIN_SHIFT = 2
};

/// Constant 'TX_READY_PIN_MASK'.
enum
{
  ublox_msgs__msg__CfgPRT__TX_READY_PIN_MASK = 124
};

/// Constant 'TX_READY_THRES_SHIFT'.
enum
{
  ublox_msgs__msg__CfgPRT__TX_READY_THRES_SHIFT = 7
};

/// Constant 'TX_READY_THRES_MASK'.
enum
{
  ublox_msgs__msg__CfgPRT__TX_READY_THRES_MASK = 65408
};

/// Constant 'MODE_DDC_SLAVE_ADDR_SHIFT'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_DDC_SLAVE_ADDR_SHIFT = 1ul
};

/// Constant 'MODE_DDC_SLAVE_ADDR_MASK'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_DDC_SLAVE_ADDR_MASK = 254ul
};

/// Constant 'MODE_RESERVED1'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_RESERVED1 = 16ul
};

/// Constant 'MODE_CHAR_LEN_MASK'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_CHAR_LEN_MASK = 192ul
};

/// Constant 'MODE_CHAR_LEN_5BIT'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_CHAR_LEN_5BIT = 0ul
};

/// Constant 'MODE_CHAR_LEN_6BIT'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_CHAR_LEN_6BIT = 64ul
};

/// Constant 'MODE_CHAR_LEN_7BIT'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_CHAR_LEN_7BIT = 128ul
};

/// Constant 'MODE_CHAR_LEN_8BIT'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_CHAR_LEN_8BIT = 192ul
};

/// Constant 'MODE_PARITY_MASK'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_PARITY_MASK = 3584ul
};

/// Constant 'MODE_PARITY_EVEN'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_PARITY_EVEN = 0ul
};

/// Constant 'MODE_PARITY_ODD'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_PARITY_ODD = 512ul
};

/// Constant 'MODE_PARITY_NO'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_PARITY_NO = 2048ul
};

/// Constant 'MODE_STOP_BITS_MASK'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_STOP_BITS_MASK = 12288ul
};

/// Constant 'MODE_STOP_BITS_1'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_STOP_BITS_1 = 0ul
};

/// Constant 'MODE_STOP_BITS_15'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_STOP_BITS_15 = 4096ul
};

/// Constant 'MODE_STOP_BITS_2'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_STOP_BITS_2 = 8192ul
};

/// Constant 'MODE_STOP_BITS_05'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_STOP_BITS_05 = 12288ul
};

/// Constant 'MODE_SPI_SPI_MODE_CPOL'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_SPI_SPI_MODE_CPOL = 4ul
};

/// Constant 'MODE_SPI_SPI_MODE_CPHA'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_SPI_SPI_MODE_CPHA = 2ul
};

/// Constant 'MODE_SPI_FLOW_CONTROL'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_SPI_FLOW_CONTROL = 64ul
};

/// Constant 'MODE_SPI_FF_COUNT_SHIFT'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_SPI_FF_COUNT_SHIFT = 8ul
};

/// Constant 'MODE_SPI_FF_COUNT_MASK'.
enum
{
  ublox_msgs__msg__CfgPRT__MODE_SPI_FF_COUNT_MASK = 16128ul
};

/// Constant 'PROTO_UBX'.
enum
{
  ublox_msgs__msg__CfgPRT__PROTO_UBX = 1
};

/// Constant 'PROTO_NMEA'.
enum
{
  ublox_msgs__msg__CfgPRT__PROTO_NMEA = 2
};

/// Constant 'PROTO_RTCM'.
enum
{
  ublox_msgs__msg__CfgPRT__PROTO_RTCM = 4
};

/// Constant 'PROTO_RTCM3'.
enum
{
  ublox_msgs__msg__CfgPRT__PROTO_RTCM3 = 32
};

/// Constant 'FLAGS_EXTENDED_TX_TIMEOUT'.
enum
{
  ublox_msgs__msg__CfgPRT__FLAGS_EXTENDED_TX_TIMEOUT = 2
};

// Struct defined in msg/CfgPRT in the package ublox_msgs.
typedef struct ublox_msgs__msg__CfgPRT
{
  uint8_t port_id;
  uint8_t reserved0;
  uint16_t tx_ready;
  uint32_t mode;
  uint32_t baud_rate;
  uint16_t in_proto_mask;
  uint16_t out_proto_mask;
  uint16_t flags;
  uint16_t reserved1;
} ublox_msgs__msg__CfgPRT;

// Struct for a sequence of ublox_msgs__msg__CfgPRT.
typedef struct ublox_msgs__msg__CfgPRT__Sequence
{
  ublox_msgs__msg__CfgPRT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_msgs__msg__CfgPRT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_PRT__STRUCT_H_
