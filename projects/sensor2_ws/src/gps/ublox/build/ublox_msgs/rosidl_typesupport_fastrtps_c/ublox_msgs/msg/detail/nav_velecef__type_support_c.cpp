// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/NavVELECEF.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_velecef__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/nav_velecef__struct.h"
#include "ublox_msgs/msg/detail/nav_velecef__functions.h"
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


using _NavVELECEF__ros_msg_type = ublox_msgs__msg__NavVELECEF;

static bool _NavVELECEF__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavVELECEF__ros_msg_type * ros_message = static_cast<const _NavVELECEF__ros_msg_type *>(untyped_ros_message);
  // Field name: i_tow
  {
    cdr << ros_message->i_tow;
  }

  // Field name: ecef_vx
  {
    cdr << ros_message->ecef_vx;
  }

  // Field name: ecef_vy
  {
    cdr << ros_message->ecef_vy;
  }

  // Field name: ecef_vz
  {
    cdr << ros_message->ecef_vz;
  }

  // Field name: s_acc
  {
    cdr << ros_message->s_acc;
  }

  return true;
}

static bool _NavVELECEF__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavVELECEF__ros_msg_type * ros_message = static_cast<_NavVELECEF__ros_msg_type *>(untyped_ros_message);
  // Field name: i_tow
  {
    cdr >> ros_message->i_tow;
  }

  // Field name: ecef_vx
  {
    cdr >> ros_message->ecef_vx;
  }

  // Field name: ecef_vy
  {
    cdr >> ros_message->ecef_vy;
  }

  // Field name: ecef_vz
  {
    cdr >> ros_message->ecef_vz;
  }

  // Field name: s_acc
  {
    cdr >> ros_message->s_acc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__NavVELECEF(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavVELECEF__ros_msg_type * ros_message = static_cast<const _NavVELECEF__ros_msg_type *>(untyped_ros_message);
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
  // field.name ecef_vx
  {
    size_t item_size = sizeof(ros_message->ecef_vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecef_vy
  {
    size_t item_size = sizeof(ros_message->ecef_vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecef_vz
  {
    size_t item_size = sizeof(ros_message->ecef_vz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s_acc
  {
    size_t item_size = sizeof(ros_message->s_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavVELECEF__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__NavVELECEF(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__NavVELECEF(
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
  // member: ecef_vx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ecef_vy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ecef_vz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: s_acc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NavVELECEF__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__NavVELECEF(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavVELECEF = {
  "ublox_msgs::msg",
  "NavVELECEF",
  _NavVELECEF__cdr_serialize,
  _NavVELECEF__cdr_deserialize,
  _NavVELECEF__get_serialized_size,
  _NavVELECEF__max_serialized_size
};

static rosidl_message_type_support_t _NavVELECEF__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavVELECEF,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, NavVELECEF)() {
  return &_NavVELECEF__type_support;
}

#if defined(__cplusplus)
}
#endif
