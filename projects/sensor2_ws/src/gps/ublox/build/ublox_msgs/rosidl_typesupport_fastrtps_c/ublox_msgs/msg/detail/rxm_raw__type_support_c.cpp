// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/RxmRAW.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/rxm_raw__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/rxm_raw__struct.h"
#include "ublox_msgs/msg/detail/rxm_raw__functions.h"
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

#include "ublox_msgs/msg/detail/rxm_rawsv__functions.h"  // sv

// forward declare type support functions
size_t get_serialized_size_ublox_msgs__msg__RxmRAWSV(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ublox_msgs__msg__RxmRAWSV(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, RxmRAWSV)();


using _RxmRAW__ros_msg_type = ublox_msgs__msg__RxmRAW;

static bool _RxmRAW__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RxmRAW__ros_msg_type * ros_message = static_cast<const _RxmRAW__ros_msg_type *>(untyped_ros_message);
  // Field name: rcv_tow
  {
    cdr << ros_message->rcv_tow;
  }

  // Field name: week
  {
    cdr << ros_message->week;
  }

  // Field name: num_sv
  {
    cdr << ros_message->num_sv;
  }

  // Field name: reserved1
  {
    cdr << ros_message->reserved1;
  }

  // Field name: sv
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ublox_msgs, msg, RxmRAWSV
      )()->data);
    size_t size = ros_message->sv.size;
    auto array_ptr = ros_message->sv.data;
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

static bool _RxmRAW__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RxmRAW__ros_msg_type * ros_message = static_cast<_RxmRAW__ros_msg_type *>(untyped_ros_message);
  // Field name: rcv_tow
  {
    cdr >> ros_message->rcv_tow;
  }

  // Field name: week
  {
    cdr >> ros_message->week;
  }

  // Field name: num_sv
  {
    cdr >> ros_message->num_sv;
  }

  // Field name: reserved1
  {
    cdr >> ros_message->reserved1;
  }

  // Field name: sv
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ublox_msgs, msg, RxmRAWSV
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sv.data) {
      ublox_msgs__msg__RxmRAWSV__Sequence__fini(&ros_message->sv);
    }
    if (!ublox_msgs__msg__RxmRAWSV__Sequence__init(&ros_message->sv, size)) {
      return "failed to create array for field 'sv'";
    }
    auto array_ptr = ros_message->sv.data;
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
size_t get_serialized_size_ublox_msgs__msg__RxmRAW(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RxmRAW__ros_msg_type * ros_message = static_cast<const _RxmRAW__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rcv_tow
  {
    size_t item_size = sizeof(ros_message->rcv_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name week
  {
    size_t item_size = sizeof(ros_message->week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sv
  {
    size_t item_size = sizeof(ros_message->num_sv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t item_size = sizeof(ros_message->reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sv
  {
    size_t array_size = ros_message->sv.size;
    auto array_ptr = ros_message->sv.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ublox_msgs__msg__RxmRAWSV(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RxmRAW__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__RxmRAW(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__RxmRAW(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rcv_tow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: week
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: num_sv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sv
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ublox_msgs__msg__RxmRAWSV(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RxmRAW__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__RxmRAW(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RxmRAW = {
  "ublox_msgs::msg",
  "RxmRAW",
  _RxmRAW__cdr_serialize,
  _RxmRAW__cdr_deserialize,
  _RxmRAW__get_serialized_size,
  _RxmRAW__max_serialized_size
};

static rosidl_message_type_support_t _RxmRAW__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RxmRAW,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, RxmRAW)() {
  return &_RxmRAW__type_support;
}

#if defined(__cplusplus)
}
#endif
