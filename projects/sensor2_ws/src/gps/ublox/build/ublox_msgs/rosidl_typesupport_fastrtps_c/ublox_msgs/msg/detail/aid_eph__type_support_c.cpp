// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/AidEPH.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/aid_eph__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/aid_eph__struct.h"
#include "ublox_msgs/msg/detail/aid_eph__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // sf1d, sf2d, sf3d
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // sf1d, sf2d, sf3d

// forward declare type support functions


using _AidEPH__ros_msg_type = ublox_msgs__msg__AidEPH;

static bool _AidEPH__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AidEPH__ros_msg_type * ros_message = static_cast<const _AidEPH__ros_msg_type *>(untyped_ros_message);
  // Field name: svid
  {
    cdr << ros_message->svid;
  }

  // Field name: how
  {
    cdr << ros_message->how;
  }

  // Field name: sf1d
  {
    size_t size = ros_message->sf1d.size;
    auto array_ptr = ros_message->sf1d.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sf2d
  {
    size_t size = ros_message->sf2d.size;
    auto array_ptr = ros_message->sf2d.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sf3d
  {
    size_t size = ros_message->sf3d.size;
    auto array_ptr = ros_message->sf3d.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _AidEPH__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AidEPH__ros_msg_type * ros_message = static_cast<_AidEPH__ros_msg_type *>(untyped_ros_message);
  // Field name: svid
  {
    cdr >> ros_message->svid;
  }

  // Field name: how
  {
    cdr >> ros_message->how;
  }

  // Field name: sf1d
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sf1d.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->sf1d);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->sf1d, size)) {
      return "failed to create array for field 'sf1d'";
    }
    auto array_ptr = ros_message->sf1d.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sf2d
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sf2d.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->sf2d);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->sf2d, size)) {
      return "failed to create array for field 'sf2d'";
    }
    auto array_ptr = ros_message->sf2d.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sf3d
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sf3d.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->sf3d);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->sf3d, size)) {
      return "failed to create array for field 'sf3d'";
    }
    auto array_ptr = ros_message->sf3d.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__AidEPH(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AidEPH__ros_msg_type * ros_message = static_cast<const _AidEPH__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name svid
  {
    size_t item_size = sizeof(ros_message->svid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name how
  {
    size_t item_size = sizeof(ros_message->how);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sf1d
  {
    size_t array_size = ros_message->sf1d.size;
    auto array_ptr = ros_message->sf1d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sf2d
  {
    size_t array_size = ros_message->sf2d.size;
    auto array_ptr = ros_message->sf2d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sf3d
  {
    size_t array_size = ros_message->sf3d.size;
    auto array_ptr = ros_message->sf3d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AidEPH__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__AidEPH(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__AidEPH(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: svid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: how
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sf1d
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sf2d
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sf3d
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AidEPH__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__AidEPH(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AidEPH = {
  "ublox_msgs::msg",
  "AidEPH",
  _AidEPH__cdr_serialize,
  _AidEPH__cdr_deserialize,
  _AidEPH__get_serialized_size,
  _AidEPH__max_serialized_size
};

static rosidl_message_type_support_t _AidEPH__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AidEPH,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, AidEPH)() {
  return &_AidEPH__type_support;
}

#if defined(__cplusplus)
}
#endif
