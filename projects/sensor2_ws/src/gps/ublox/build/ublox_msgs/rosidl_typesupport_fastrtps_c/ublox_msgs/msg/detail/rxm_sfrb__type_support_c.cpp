// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/RxmSFRB.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/rxm_sfrb__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/rxm_sfrb__struct.h"
#include "ublox_msgs/msg/detail/rxm_sfrb__functions.h"
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


using _RxmSFRB__ros_msg_type = ublox_msgs__msg__RxmSFRB;

static bool _RxmSFRB__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RxmSFRB__ros_msg_type * ros_message = static_cast<const _RxmSFRB__ros_msg_type *>(untyped_ros_message);
  // Field name: chn
  {
    cdr << ros_message->chn;
  }

  // Field name: svid
  {
    cdr << ros_message->svid;
  }

  // Field name: dwrd
  {
    size_t size = 10;
    auto array_ptr = ros_message->dwrd;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RxmSFRB__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RxmSFRB__ros_msg_type * ros_message = static_cast<_RxmSFRB__ros_msg_type *>(untyped_ros_message);
  // Field name: chn
  {
    cdr >> ros_message->chn;
  }

  // Field name: svid
  {
    cdr >> ros_message->svid;
  }

  // Field name: dwrd
  {
    size_t size = 10;
    auto array_ptr = ros_message->dwrd;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__RxmSFRB(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RxmSFRB__ros_msg_type * ros_message = static_cast<const _RxmSFRB__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name chn
  {
    size_t item_size = sizeof(ros_message->chn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name svid
  {
    size_t item_size = sizeof(ros_message->svid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dwrd
  {
    size_t array_size = 10;
    auto array_ptr = ros_message->dwrd;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RxmSFRB__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__RxmSFRB(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__RxmSFRB(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: chn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: svid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dwrd
  {
    size_t array_size = 10;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RxmSFRB__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__RxmSFRB(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RxmSFRB = {
  "ublox_msgs::msg",
  "RxmSFRB",
  _RxmSFRB__cdr_serialize,
  _RxmSFRB__cdr_deserialize,
  _RxmSFRB__get_serialized_size,
  _RxmSFRB__max_serialized_size
};

static rosidl_message_type_support_t _RxmSFRB__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RxmSFRB,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, RxmSFRB)() {
  return &_RxmSFRB__type_support;
}

#if defined(__cplusplus)
}
#endif
