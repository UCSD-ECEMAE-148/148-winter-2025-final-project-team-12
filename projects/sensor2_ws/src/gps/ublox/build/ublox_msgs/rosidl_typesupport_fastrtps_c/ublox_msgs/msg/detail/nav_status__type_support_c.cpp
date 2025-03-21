// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/NavSTATUS.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/nav_status__struct.h"
#include "ublox_msgs/msg/detail/nav_status__functions.h"
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


using _NavSTATUS__ros_msg_type = ublox_msgs__msg__NavSTATUS;

static bool _NavSTATUS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavSTATUS__ros_msg_type * ros_message = static_cast<const _NavSTATUS__ros_msg_type *>(untyped_ros_message);
  // Field name: i_tow
  {
    cdr << ros_message->i_tow;
  }

  // Field name: gps_fix
  {
    cdr << ros_message->gps_fix;
  }

  // Field name: flags
  {
    cdr << ros_message->flags;
  }

  // Field name: fix_stat
  {
    cdr << ros_message->fix_stat;
  }

  // Field name: flags2
  {
    cdr << ros_message->flags2;
  }

  // Field name: ttff
  {
    cdr << ros_message->ttff;
  }

  // Field name: msss
  {
    cdr << ros_message->msss;
  }

  return true;
}

static bool _NavSTATUS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavSTATUS__ros_msg_type * ros_message = static_cast<_NavSTATUS__ros_msg_type *>(untyped_ros_message);
  // Field name: i_tow
  {
    cdr >> ros_message->i_tow;
  }

  // Field name: gps_fix
  {
    cdr >> ros_message->gps_fix;
  }

  // Field name: flags
  {
    cdr >> ros_message->flags;
  }

  // Field name: fix_stat
  {
    cdr >> ros_message->fix_stat;
  }

  // Field name: flags2
  {
    cdr >> ros_message->flags2;
  }

  // Field name: ttff
  {
    cdr >> ros_message->ttff;
  }

  // Field name: msss
  {
    cdr >> ros_message->msss;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__NavSTATUS(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavSTATUS__ros_msg_type * ros_message = static_cast<const _NavSTATUS__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name i_tow
  {
    size_t item_size = sizeof(ros_message->i_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_fix
  {
    size_t item_size = sizeof(ros_message->gps_fix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t item_size = sizeof(ros_message->flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fix_stat
  {
    size_t item_size = sizeof(ros_message->fix_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags2
  {
    size_t item_size = sizeof(ros_message->flags2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ttff
  {
    size_t item_size = sizeof(ros_message->ttff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msss
  {
    size_t item_size = sizeof(ros_message->msss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavSTATUS__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__NavSTATUS(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__NavSTATUS(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: i_tow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_fix
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fix_stat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flags2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ttff
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: msss
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NavSTATUS__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__NavSTATUS(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavSTATUS = {
  "ublox_msgs::msg",
  "NavSTATUS",
  _NavSTATUS__cdr_serialize,
  _NavSTATUS__cdr_deserialize,
  _NavSTATUS__get_serialized_size,
  _NavSTATUS__max_serialized_size
};

static rosidl_message_type_support_t _NavSTATUS__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavSTATUS,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, NavSTATUS)() {
  return &_NavSTATUS__type_support;
}

#if defined(__cplusplus)
}
#endif
