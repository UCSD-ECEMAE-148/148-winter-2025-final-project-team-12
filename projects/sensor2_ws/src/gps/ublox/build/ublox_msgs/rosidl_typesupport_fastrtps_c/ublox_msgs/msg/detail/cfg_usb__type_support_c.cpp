// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/CfgUSB.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/cfg_usb__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/cfg_usb__struct.h"
#include "ublox_msgs/msg/detail/cfg_usb__functions.h"
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


using _CfgUSB__ros_msg_type = ublox_msgs__msg__CfgUSB;

static bool _CfgUSB__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CfgUSB__ros_msg_type * ros_message = static_cast<const _CfgUSB__ros_msg_type *>(untyped_ros_message);
  // Field name: vendor_id
  {
    cdr << ros_message->vendor_id;
  }

  // Field name: product_id
  {
    cdr << ros_message->product_id;
  }

  // Field name: reserved1
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved1;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: reserved2
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved2;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: power_consumption
  {
    cdr << ros_message->power_consumption;
  }

  // Field name: flags
  {
    cdr << ros_message->flags;
  }

  // Field name: vendor_string
  {
    size_t size = 32;
    auto array_ptr = ros_message->vendor_string;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: product_string
  {
    size_t size = 32;
    auto array_ptr = ros_message->product_string;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: serial_number
  {
    size_t size = 32;
    auto array_ptr = ros_message->serial_number;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CfgUSB__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CfgUSB__ros_msg_type * ros_message = static_cast<_CfgUSB__ros_msg_type *>(untyped_ros_message);
  // Field name: vendor_id
  {
    cdr >> ros_message->vendor_id;
  }

  // Field name: product_id
  {
    cdr >> ros_message->product_id;
  }

  // Field name: reserved1
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved1;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: reserved2
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved2;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: power_consumption
  {
    cdr >> ros_message->power_consumption;
  }

  // Field name: flags
  {
    cdr >> ros_message->flags;
  }

  // Field name: vendor_string
  {
    size_t size = 32;
    auto array_ptr = ros_message->vendor_string;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: product_string
  {
    size_t size = 32;
    auto array_ptr = ros_message->product_string;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: serial_number
  {
    size_t size = 32;
    auto array_ptr = ros_message->serial_number;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__CfgUSB(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CfgUSB__ros_msg_type * ros_message = static_cast<const _CfgUSB__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vendor_id
  {
    size_t item_size = sizeof(ros_message->vendor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name product_id
  {
    size_t item_size = sizeof(ros_message->product_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->reserved1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved2
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->reserved2;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_consumption
  {
    size_t item_size = sizeof(ros_message->power_consumption);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t item_size = sizeof(ros_message->flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vendor_string
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->vendor_string;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name product_string
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->product_string;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name serial_number
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->serial_number;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CfgUSB__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__CfgUSB(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__CfgUSB(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: vendor_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: product_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reserved1
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved2
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_consumption
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
  // member: vendor_string
  {
    size_t array_size = 32;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: product_string
  {
    size_t array_size = 32;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: serial_number
  {
    size_t array_size = 32;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CfgUSB__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__CfgUSB(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CfgUSB = {
  "ublox_msgs::msg",
  "CfgUSB",
  _CfgUSB__cdr_serialize,
  _CfgUSB__cdr_deserialize,
  _CfgUSB__get_serialized_size,
  _CfgUSB__max_serialized_size
};

static rosidl_message_type_support_t _CfgUSB__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CfgUSB,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, CfgUSB)() {
  return &_CfgUSB__type_support;
}

#if defined(__cplusplus)
}
#endif
