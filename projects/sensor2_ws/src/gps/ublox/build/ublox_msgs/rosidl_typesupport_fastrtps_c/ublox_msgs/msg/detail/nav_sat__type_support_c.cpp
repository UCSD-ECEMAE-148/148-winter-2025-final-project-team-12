// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/NavSAT.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_sat__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/nav_sat__struct.h"
#include "ublox_msgs/msg/detail/nav_sat__functions.h"
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

#include "ublox_msgs/msg/detail/nav_satsv__functions.h"  // sv

// forward declare type support functions
size_t get_serialized_size_ublox_msgs__msg__NavSATSV(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ublox_msgs__msg__NavSATSV(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, NavSATSV)();


using _NavSAT__ros_msg_type = ublox_msgs__msg__NavSAT;

static bool _NavSAT__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavSAT__ros_msg_type * ros_message = static_cast<const _NavSAT__ros_msg_type *>(untyped_ros_message);
  // Field name: i_tow
  {
    cdr << ros_message->i_tow;
  }

  // Field name: version
  {
    cdr << ros_message->version;
  }

  // Field name: num_svs
  {
    cdr << ros_message->num_svs;
  }

  // Field name: reserved0
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved0;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sv
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ublox_msgs, msg, NavSATSV
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

static bool _NavSAT__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavSAT__ros_msg_type * ros_message = static_cast<_NavSAT__ros_msg_type *>(untyped_ros_message);
  // Field name: i_tow
  {
    cdr >> ros_message->i_tow;
  }

  // Field name: version
  {
    cdr >> ros_message->version;
  }

  // Field name: num_svs
  {
    cdr >> ros_message->num_svs;
  }

  // Field name: reserved0
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved0;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sv
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ublox_msgs, msg, NavSATSV
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sv.data) {
      ublox_msgs__msg__NavSATSV__Sequence__fini(&ros_message->sv);
    }
    if (!ublox_msgs__msg__NavSATSV__Sequence__init(&ros_message->sv, size)) {
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
size_t get_serialized_size_ublox_msgs__msg__NavSAT(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavSAT__ros_msg_type * ros_message = static_cast<const _NavSAT__ros_msg_type *>(untyped_ros_message);
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
  // field.name num_svs
  {
    size_t item_size = sizeof(ros_message->num_svs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved0
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->reserved0;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sv
  {
    size_t array_size = ros_message->sv.size;
    auto array_ptr = ros_message->sv.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ublox_msgs__msg__NavSATSV(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavSAT__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__NavSAT(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__NavSAT(
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
  // member: num_svs
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved0
  {
    size_t array_size = 2;

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
        max_serialized_size_ublox_msgs__msg__NavSATSV(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NavSAT__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__NavSAT(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavSAT = {
  "ublox_msgs::msg",
  "NavSAT",
  _NavSAT__cdr_serialize,
  _NavSAT__cdr_deserialize,
  _NavSAT__get_serialized_size,
  _NavSAT__max_serialized_size
};

static rosidl_message_type_support_t _NavSAT__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavSAT,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, NavSAT)() {
  return &_NavSAT__type_support;
}

#if defined(__cplusplus)
}
#endif
