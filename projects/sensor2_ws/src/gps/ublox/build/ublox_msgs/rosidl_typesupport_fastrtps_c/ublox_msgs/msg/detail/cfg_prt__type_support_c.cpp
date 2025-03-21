// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/CfgPRT.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/cfg_prt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/cfg_prt__struct.h"
#include "ublox_msgs/msg/detail/cfg_prt__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CfgPRT__ros_msg_type = ublox_msgs__msg__CfgPRT;

static bool _CfgPRT__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CfgPRT__ros_msg_type * ros_message = static_cast<const _CfgPRT__ros_msg_type *>(untyped_ros_message);
  // Field name: port_id
  {
    cdr << ros_message->port_id;
  }

  // Field name: reserved0
  {
    cdr << ros_message->reserved0;
  }

  // Field name: tx_ready
  {
    cdr << ros_message->tx_ready;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: baud_rate
  {
    cdr << ros_message->baud_rate;
  }

  // Field name: in_proto_mask
  {
    cdr << ros_message->in_proto_mask;
  }

  // Field name: out_proto_mask
  {
    cdr << ros_message->out_proto_mask;
  }

  // Field name: flags
  {
    cdr << ros_message->flags;
  }

  // Field name: reserved1
  {
    cdr << ros_message->reserved1;
  }

  return true;
}

static bool _CfgPRT__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CfgPRT__ros_msg_type * ros_message = static_cast<_CfgPRT__ros_msg_type *>(untyped_ros_message);
  // Field name: port_id
  {
    cdr >> ros_message->port_id;
  }

  // Field name: reserved0
  {
    cdr >> ros_message->reserved0;
  }

  // Field name: tx_ready
  {
    cdr >> ros_message->tx_ready;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: baud_rate
  {
    cdr >> ros_message->baud_rate;
  }

  // Field name: in_proto_mask
  {
    cdr >> ros_message->in_proto_mask;
  }

  // Field name: out_proto_mask
  {
    cdr >> ros_message->out_proto_mask;
  }

  // Field name: flags
  {
    cdr >> ros_message->flags;
  }

  // Field name: reserved1
  {
    cdr >> ros_message->reserved1;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__CfgPRT(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CfgPRT__ros_msg_type * ros_message = static_cast<const _CfgPRT__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name port_id
  {
    size_t item_size = sizeof(ros_message->port_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved0
  {
    size_t item_size = sizeof(ros_message->reserved0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_ready
  {
    size_t item_size = sizeof(ros_message->tx_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baud_rate
  {
    size_t item_size = sizeof(ros_message->baud_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_proto_mask
  {
    size_t item_size = sizeof(ros_message->in_proto_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name out_proto_mask
  {
    size_t item_size = sizeof(ros_message->out_proto_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t item_size = sizeof(ros_message->flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t item_size = sizeof(ros_message->reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CfgPRT__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__CfgPRT(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__CfgPRT(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: port_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tx_ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baud_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: in_proto_mask
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: out_proto_mask
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reserved1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CfgPRT__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__CfgPRT(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CfgPRT = {
  "ublox_msgs::msg",
  "CfgPRT",
  _CfgPRT__cdr_serialize,
  _CfgPRT__cdr_deserialize,
  _CfgPRT__get_serialized_size,
  _CfgPRT__max_serialized_size
};

static rosidl_message_type_support_t _CfgPRT__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CfgPRT,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, CfgPRT)() {
  return &_CfgPRT__type_support;
}

#if defined(__cplusplus)
}
#endif
