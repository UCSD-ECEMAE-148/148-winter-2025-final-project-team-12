// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/CfgGNSS.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/cfg_gnss__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/cfg_gnss__struct.h"
#include "ublox_msgs/msg/detail/cfg_gnss__functions.h"
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

#include "ublox_msgs/msg/detail/cfg_gnss_block__functions.h"  // blocks

// forward declare type support functions
size_t get_serialized_size_ublox_msgs__msg__CfgGNSSBlock(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ublox_msgs__msg__CfgGNSSBlock(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, CfgGNSSBlock)();


using _CfgGNSS__ros_msg_type = ublox_msgs__msg__CfgGNSS;

static bool _CfgGNSS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CfgGNSS__ros_msg_type * ros_message = static_cast<const _CfgGNSS__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_ver
  {
    cdr << ros_message->msg_ver;
  }

  // Field name: num_trk_ch_hw
  {
    cdr << ros_message->num_trk_ch_hw;
  }

  // Field name: num_trk_ch_use
  {
    cdr << ros_message->num_trk_ch_use;
  }

  // Field name: num_config_blocks
  {
    cdr << ros_message->num_config_blocks;
  }

  // Field name: blocks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ublox_msgs, msg, CfgGNSSBlock
      )()->data);
    size_t size = ros_message->blocks.size;
    auto array_ptr = ros_message->blocks.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _CfgGNSS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CfgGNSS__ros_msg_type * ros_message = static_cast<_CfgGNSS__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_ver
  {
    cdr >> ros_message->msg_ver;
  }

  // Field name: num_trk_ch_hw
  {
    cdr >> ros_message->num_trk_ch_hw;
  }

  // Field name: num_trk_ch_use
  {
    cdr >> ros_message->num_trk_ch_use;
  }

  // Field name: num_config_blocks
  {
    cdr >> ros_message->num_config_blocks;
  }

  // Field name: blocks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ublox_msgs, msg, CfgGNSSBlock
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->blocks.data) {
      ublox_msgs__msg__CfgGNSSBlock__Sequence__fini(&ros_message->blocks);
    }
    if (!ublox_msgs__msg__CfgGNSSBlock__Sequence__init(&ros_message->blocks, size)) {
      return "failed to create array for field 'blocks'";
    }
    auto array_ptr = ros_message->blocks.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__CfgGNSS(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CfgGNSS__ros_msg_type * ros_message = static_cast<const _CfgGNSS__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name msg_ver
  {
    size_t item_size = sizeof(ros_message->msg_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_trk_ch_hw
  {
    size_t item_size = sizeof(ros_message->num_trk_ch_hw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_trk_ch_use
  {
    size_t item_size = sizeof(ros_message->num_trk_ch_use);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_config_blocks
  {
    size_t item_size = sizeof(ros_message->num_config_blocks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blocks
  {
    size_t array_size = ros_message->blocks.size;
    auto array_ptr = ros_message->blocks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ublox_msgs__msg__CfgGNSSBlock(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CfgGNSS__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__CfgGNSS(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__CfgGNSS(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: msg_ver
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_trk_ch_hw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_trk_ch_use
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_config_blocks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blocks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ublox_msgs__msg__CfgGNSSBlock(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CfgGNSS__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__CfgGNSS(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CfgGNSS = {
  "ublox_msgs::msg",
  "CfgGNSS",
  _CfgGNSS__cdr_serialize,
  _CfgGNSS__cdr_deserialize,
  _CfgGNSS__get_serialized_size,
  _CfgGNSS__max_serialized_size
};

static rosidl_message_type_support_t _CfgGNSS__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CfgGNSS,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, CfgGNSS)() {
  return &_CfgGNSS__type_support;
}

#if defined(__cplusplus)
}
#endif
