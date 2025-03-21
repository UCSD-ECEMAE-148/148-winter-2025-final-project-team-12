// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/MonVER.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/mon_ver__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/mon_ver__struct.h"
#include "ublox_msgs/msg/detail/mon_ver__functions.h"
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

#include "ublox_msgs/msg/detail/mon_ver_extension__functions.h"  // extension

// forward declare type support functions
size_t get_serialized_size_ublox_msgs__msg__MonVERExtension(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ublox_msgs__msg__MonVERExtension(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, MonVERExtension)();


using _MonVER__ros_msg_type = ublox_msgs__msg__MonVER;

static bool _MonVER__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MonVER__ros_msg_type * ros_message = static_cast<const _MonVER__ros_msg_type *>(untyped_ros_message);
  // Field name: sw_version
  {
    size_t size = 30;
    auto array_ptr = ros_message->sw_version;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: hw_version
  {
    size_t size = 10;
    auto array_ptr = ros_message->hw_version;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: extension
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ublox_msgs, msg, MonVERExtension
      )()->data);
    size_t size = ros_message->extension.size;
    auto array_ptr = ros_message->extension.data;
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

static bool _MonVER__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MonVER__ros_msg_type * ros_message = static_cast<_MonVER__ros_msg_type *>(untyped_ros_message);
  // Field name: sw_version
  {
    size_t size = 30;
    auto array_ptr = ros_message->sw_version;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: hw_version
  {
    size_t size = 10;
    auto array_ptr = ros_message->hw_version;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: extension
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ublox_msgs, msg, MonVERExtension
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->extension.data) {
      ublox_msgs__msg__MonVERExtension__Sequence__fini(&ros_message->extension);
    }
    if (!ublox_msgs__msg__MonVERExtension__Sequence__init(&ros_message->extension, size)) {
      return "failed to create array for field 'extension'";
    }
    auto array_ptr = ros_message->extension.data;
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
size_t get_serialized_size_ublox_msgs__msg__MonVER(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MonVER__ros_msg_type * ros_message = static_cast<const _MonVER__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sw_version
  {
    size_t array_size = 30;
    auto array_ptr = ros_message->sw_version;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hw_version
  {
    size_t array_size = 10;
    auto array_ptr = ros_message->hw_version;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extension
  {
    size_t array_size = ros_message->extension.size;
    auto array_ptr = ros_message->extension.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ublox_msgs__msg__MonVERExtension(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MonVER__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__MonVER(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__MonVER(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sw_version
  {
    size_t array_size = 30;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hw_version
  {
    size_t array_size = 10;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extension
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ublox_msgs__msg__MonVERExtension(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MonVER__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__MonVER(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MonVER = {
  "ublox_msgs::msg",
  "MonVER",
  _MonVER__cdr_serialize,
  _MonVER__cdr_deserialize,
  _MonVER__get_serialized_size,
  _MonVER__max_serialized_size
};

static rosidl_message_type_support_t _MonVER__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MonVER,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, MonVER)() {
  return &_MonVER__type_support;
}

#if defined(__cplusplus)
}
#endif
