// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/RxmSFRBX.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/rxm_sfrbx__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/rxm_sfrbx__struct.h"
#include "ublox_msgs/msg/detail/rxm_sfrbx__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // dwrd
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // dwrd

// forward declare type support functions


using _RxmSFRBX__ros_msg_type = ublox_msgs__msg__RxmSFRBX;

static bool _RxmSFRBX__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RxmSFRBX__ros_msg_type * ros_message = static_cast<const _RxmSFRBX__ros_msg_type *>(untyped_ros_message);
  // Field name: gnss_id
  {
    cdr << ros_message->gnss_id;
  }

  // Field name: sv_id
  {
    cdr << ros_message->sv_id;
  }

  // Field name: reserved0
  {
    cdr << ros_message->reserved0;
  }

  // Field name: freq_id
  {
    cdr << ros_message->freq_id;
  }

  // Field name: num_words
  {
    cdr << ros_message->num_words;
  }

  // Field name: chn
  {
    cdr << ros_message->chn;
  }

  // Field name: version
  {
    cdr << ros_message->version;
  }

  // Field name: reserved1
  {
    cdr << ros_message->reserved1;
  }

  // Field name: dwrd
  {
    size_t size = ros_message->dwrd.size;
    auto array_ptr = ros_message->dwrd.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RxmSFRBX__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RxmSFRBX__ros_msg_type * ros_message = static_cast<_RxmSFRBX__ros_msg_type *>(untyped_ros_message);
  // Field name: gnss_id
  {
    cdr >> ros_message->gnss_id;
  }

  // Field name: sv_id
  {
    cdr >> ros_message->sv_id;
  }

  // Field name: reserved0
  {
    cdr >> ros_message->reserved0;
  }

  // Field name: freq_id
  {
    cdr >> ros_message->freq_id;
  }

  // Field name: num_words
  {
    cdr >> ros_message->num_words;
  }

  // Field name: chn
  {
    cdr >> ros_message->chn;
  }

  // Field name: version
  {
    cdr >> ros_message->version;
  }

  // Field name: reserved1
  {
    cdr >> ros_message->reserved1;
  }

  // Field name: dwrd
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->dwrd.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->dwrd);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->dwrd, size)) {
      return "failed to create array for field 'dwrd'";
    }
    auto array_ptr = ros_message->dwrd.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__RxmSFRBX(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RxmSFRBX__ros_msg_type * ros_message = static_cast<const _RxmSFRBX__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gnss_id
  {
    size_t item_size = sizeof(ros_message->gnss_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sv_id
  {
    size_t item_size = sizeof(ros_message->sv_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved0
  {
    size_t item_size = sizeof(ros_message->reserved0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name freq_id
  {
    size_t item_size = sizeof(ros_message->freq_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_words
  {
    size_t item_size = sizeof(ros_message->num_words);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chn
  {
    size_t item_size = sizeof(ros_message->chn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name version
  {
    size_t item_size = sizeof(ros_message->version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t item_size = sizeof(ros_message->reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dwrd
  {
    size_t array_size = ros_message->dwrd.size;
    auto array_ptr = ros_message->dwrd.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RxmSFRBX__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__RxmSFRBX(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__RxmSFRBX(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: gnss_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sv_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: freq_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_words
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: chn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dwrd
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

static size_t _RxmSFRBX__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__RxmSFRBX(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RxmSFRBX = {
  "ublox_msgs::msg",
  "RxmSFRBX",
  _RxmSFRBX__cdr_serialize,
  _RxmSFRBX__cdr_deserialize,
  _RxmSFRBX__get_serialized_size,
  _RxmSFRBX__max_serialized_size
};

static rosidl_message_type_support_t _RxmSFRBX__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RxmSFRBX,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, RxmSFRBX)() {
  return &_RxmSFRBX__type_support;
}

#if defined(__cplusplus)
}
#endif
