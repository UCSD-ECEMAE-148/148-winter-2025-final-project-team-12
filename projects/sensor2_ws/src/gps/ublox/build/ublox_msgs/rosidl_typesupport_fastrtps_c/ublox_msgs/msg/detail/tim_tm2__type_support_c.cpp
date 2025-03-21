// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/TimTM2.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/tim_tm2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/tim_tm2__struct.h"
#include "ublox_msgs/msg/detail/tim_tm2__functions.h"
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


using _TimTM2__ros_msg_type = ublox_msgs__msg__TimTM2;

static bool _TimTM2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TimTM2__ros_msg_type * ros_message = static_cast<const _TimTM2__ros_msg_type *>(untyped_ros_message);
  // Field name: ch
  {
    cdr << ros_message->ch;
  }

  // Field name: flags
  {
    cdr << ros_message->flags;
  }

  // Field name: rising_edge_count
  {
    cdr << ros_message->rising_edge_count;
  }

  // Field name: wn_r
  {
    cdr << ros_message->wn_r;
  }

  // Field name: wn_f
  {
    cdr << ros_message->wn_f;
  }

  // Field name: tow_ms_r
  {
    cdr << ros_message->tow_ms_r;
  }

  // Field name: tow_sub_ms_r
  {
    cdr << ros_message->tow_sub_ms_r;
  }

  // Field name: tow_ms_f
  {
    cdr << ros_message->tow_ms_f;
  }

  // Field name: tow_sub_ms_f
  {
    cdr << ros_message->tow_sub_ms_f;
  }

  // Field name: acc_est
  {
    cdr << ros_message->acc_est;
  }

  return true;
}

static bool _TimTM2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TimTM2__ros_msg_type * ros_message = static_cast<_TimTM2__ros_msg_type *>(untyped_ros_message);
  // Field name: ch
  {
    cdr >> ros_message->ch;
  }

  // Field name: flags
  {
    cdr >> ros_message->flags;
  }

  // Field name: rising_edge_count
  {
    cdr >> ros_message->rising_edge_count;
  }

  // Field name: wn_r
  {
    cdr >> ros_message->wn_r;
  }

  // Field name: wn_f
  {
    cdr >> ros_message->wn_f;
  }

  // Field name: tow_ms_r
  {
    cdr >> ros_message->tow_ms_r;
  }

  // Field name: tow_sub_ms_r
  {
    cdr >> ros_message->tow_sub_ms_r;
  }

  // Field name: tow_ms_f
  {
    cdr >> ros_message->tow_ms_f;
  }

  // Field name: tow_sub_ms_f
  {
    cdr >> ros_message->tow_sub_ms_f;
  }

  // Field name: acc_est
  {
    cdr >> ros_message->acc_est;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__TimTM2(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TimTM2__ros_msg_type * ros_message = static_cast<const _TimTM2__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ch
  {
    size_t item_size = sizeof(ros_message->ch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t item_size = sizeof(ros_message->flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rising_edge_count
  {
    size_t item_size = sizeof(ros_message->rising_edge_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wn_r
  {
    size_t item_size = sizeof(ros_message->wn_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wn_f
  {
    size_t item_size = sizeof(ros_message->wn_f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tow_ms_r
  {
    size_t item_size = sizeof(ros_message->tow_ms_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tow_sub_ms_r
  {
    size_t item_size = sizeof(ros_message->tow_sub_ms_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tow_ms_f
  {
    size_t item_size = sizeof(ros_message->tow_ms_f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tow_sub_ms_f
  {
    size_t item_size = sizeof(ros_message->tow_sub_ms_f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_est
  {
    size_t item_size = sizeof(ros_message->acc_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TimTM2__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__TimTM2(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__TimTM2(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rising_edge_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wn_r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wn_f
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tow_ms_r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tow_sub_ms_r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tow_ms_f
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tow_sub_ms_f
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_est
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TimTM2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__TimTM2(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TimTM2 = {
  "ublox_msgs::msg",
  "TimTM2",
  _TimTM2__cdr_serialize,
  _TimTM2__cdr_deserialize,
  _TimTM2__get_serialized_size,
  _TimTM2__max_serialized_size
};

static rosidl_message_type_support_t _TimTM2__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TimTM2,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, TimTM2)() {
  return &_TimTM2__type_support;
}

#if defined(__cplusplus)
}
#endif
