// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/NavATT.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_att__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/nav_att__struct.h"
#include "ublox_msgs/msg/detail/nav_att__functions.h"
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


using _NavATT__ros_msg_type = ublox_msgs__msg__NavATT;

static bool _NavATT__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavATT__ros_msg_type * ros_message = static_cast<const _NavATT__ros_msg_type *>(untyped_ros_message);
  // Field name: i_tow
  {
    cdr << ros_message->i_tow;
  }

  // Field name: version
  {
    cdr << ros_message->version;
  }

  // Field name: reserved0
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserved0;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: acc_roll
  {
    cdr << ros_message->acc_roll;
  }

  // Field name: acc_pitch
  {
    cdr << ros_message->acc_pitch;
  }

  // Field name: acc_heading
  {
    cdr << ros_message->acc_heading;
  }

  return true;
}

static bool _NavATT__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavATT__ros_msg_type * ros_message = static_cast<_NavATT__ros_msg_type *>(untyped_ros_message);
  // Field name: i_tow
  {
    cdr >> ros_message->i_tow;
  }

  // Field name: version
  {
    cdr >> ros_message->version;
  }

  // Field name: reserved0
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserved0;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: acc_roll
  {
    cdr >> ros_message->acc_roll;
  }

  // Field name: acc_pitch
  {
    cdr >> ros_message->acc_pitch;
  }

  // Field name: acc_heading
  {
    cdr >> ros_message->acc_heading;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__NavATT(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavATT__ros_msg_type * ros_message = static_cast<const _NavATT__ros_msg_type *>(untyped_ros_message);
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
  // field.name version
  {
    size_t item_size = sizeof(ros_message->version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved0
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->reserved0;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_roll
  {
    size_t item_size = sizeof(ros_message->acc_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_pitch
  {
    size_t item_size = sizeof(ros_message->acc_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_heading
  {
    size_t item_size = sizeof(ros_message->acc_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavATT__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__NavATT(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__NavATT(
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
  // member: version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved0
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NavATT__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__NavATT(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavATT = {
  "ublox_msgs::msg",
  "NavATT",
  _NavATT__cdr_serialize,
  _NavATT__cdr_deserialize,
  _NavATT__get_serialized_size,
  _NavATT__max_serialized_size
};

static rosidl_message_type_support_t _NavATT__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavATT,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, NavATT)() {
  return &_NavATT__type_support;
}

#if defined(__cplusplus)
}
#endif
