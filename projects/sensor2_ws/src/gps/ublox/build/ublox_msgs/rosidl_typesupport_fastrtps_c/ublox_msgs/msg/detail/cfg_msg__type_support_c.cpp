// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/CfgMSG.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/cfg_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/cfg_msg__struct.h"
#include "ublox_msgs/msg/detail/cfg_msg__functions.h"
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


using _CfgMSG__ros_msg_type = ublox_msgs__msg__CfgMSG;

static bool _CfgMSG__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CfgMSG__ros_msg_type * ros_message = static_cast<const _CfgMSG__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_class
  {
    cdr << ros_message->msg_class;
  }

  // Field name: msg_id
  {
    cdr << ros_message->msg_id;
  }

  // Field name: rate
  {
    cdr << ros_message->rate;
  }

  return true;
}

static bool _CfgMSG__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CfgMSG__ros_msg_type * ros_message = static_cast<_CfgMSG__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_class
  {
    cdr >> ros_message->msg_class;
  }

  // Field name: msg_id
  {
    cdr >> ros_message->msg_id;
  }

  // Field name: rate
  {
    cdr >> ros_message->rate;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__CfgMSG(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CfgMSG__ros_msg_type * ros_message = static_cast<const _CfgMSG__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name msg_class
  {
    size_t item_size = sizeof(ros_message->msg_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msg_id
  {
    size_t item_size = sizeof(ros_message->msg_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rate
  {
    size_t item_size = sizeof(ros_message->rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CfgMSG__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__CfgMSG(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__CfgMSG(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: msg_class
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: msg_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CfgMSG__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__CfgMSG(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CfgMSG = {
  "ublox_msgs::msg",
  "CfgMSG",
  _CfgMSG__cdr_serialize,
  _CfgMSG__cdr_deserialize,
  _CfgMSG__get_serialized_size,
  _CfgMSG__max_serialized_size
};

static rosidl_message_type_support_t _CfgMSG__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CfgMSG,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, CfgMSG)() {
  return &_CfgMSG__type_support;
}

#if defined(__cplusplus)
}
#endif
