// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/CfgINFBlock.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/cfg_inf_block__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/cfg_inf_block__struct.h"
#include "ublox_msgs/msg/detail/cfg_inf_block__functions.h"
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


using _CfgINFBlock__ros_msg_type = ublox_msgs__msg__CfgINFBlock;

static bool _CfgINFBlock__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CfgINFBlock__ros_msg_type * ros_message = static_cast<const _CfgINFBlock__ros_msg_type *>(untyped_ros_message);
  // Field name: protocol_id
  {
    cdr << ros_message->protocol_id;
  }

  // Field name: reserved1
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserved1;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: inf_msg_mask
  {
    size_t size = 6;
    auto array_ptr = ros_message->inf_msg_mask;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CfgINFBlock__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CfgINFBlock__ros_msg_type * ros_message = static_cast<_CfgINFBlock__ros_msg_type *>(untyped_ros_message);
  // Field name: protocol_id
  {
    cdr >> ros_message->protocol_id;
  }

  // Field name: reserved1
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserved1;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: inf_msg_mask
  {
    size_t size = 6;
    auto array_ptr = ros_message->inf_msg_mask;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__CfgINFBlock(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CfgINFBlock__ros_msg_type * ros_message = static_cast<const _CfgINFBlock__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name protocol_id
  {
    size_t item_size = sizeof(ros_message->protocol_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->reserved1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inf_msg_mask
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->inf_msg_mask;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CfgINFBlock__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__CfgINFBlock(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__CfgINFBlock(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: protocol_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved1
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: inf_msg_mask
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CfgINFBlock__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__CfgINFBlock(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CfgINFBlock = {
  "ublox_msgs::msg",
  "CfgINFBlock",
  _CfgINFBlock__cdr_serialize,
  _CfgINFBlock__cdr_deserialize,
  _CfgINFBlock__get_serialized_size,
  _CfgINFBlock__max_serialized_size
};

static rosidl_message_type_support_t _CfgINFBlock__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CfgINFBlock,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, CfgINFBlock)() {
  return &_CfgINFBlock__type_support;
}

#if defined(__cplusplus)
}
#endif
