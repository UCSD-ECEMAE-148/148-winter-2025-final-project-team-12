// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/CfgNMEA.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/cfg_nmea__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/cfg_nmea__struct.h"
#include "ublox_msgs/msg/detail/cfg_nmea__functions.h"
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


using _CfgNMEA__ros_msg_type = ublox_msgs__msg__CfgNMEA;

static bool _CfgNMEA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CfgNMEA__ros_msg_type * ros_message = static_cast<const _CfgNMEA__ros_msg_type *>(untyped_ros_message);
  // Field name: filter
  {
    cdr << ros_message->filter;
  }

  // Field name: nmea_version
  {
    cdr << ros_message->nmea_version;
  }

  // Field name: num_sv
  {
    cdr << ros_message->num_sv;
  }

  // Field name: flags
  {
    cdr << ros_message->flags;
  }

  // Field name: gnss_to_filter
  {
    cdr << ros_message->gnss_to_filter;
  }

  // Field name: sv_numbering
  {
    cdr << ros_message->sv_numbering;
  }

  // Field name: main_talker_id
  {
    cdr << ros_message->main_talker_id;
  }

  // Field name: gsv_talker_id
  {
    cdr << ros_message->gsv_talker_id;
  }

  // Field name: version
  {
    cdr << ros_message->version;
  }

  // Field name: bds_talker_id
  {
    size_t size = 2;
    auto array_ptr = ros_message->bds_talker_id;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: reserved1
  {
    size_t size = 6;
    auto array_ptr = ros_message->reserved1;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CfgNMEA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CfgNMEA__ros_msg_type * ros_message = static_cast<_CfgNMEA__ros_msg_type *>(untyped_ros_message);
  // Field name: filter
  {
    cdr >> ros_message->filter;
  }

  // Field name: nmea_version
  {
    cdr >> ros_message->nmea_version;
  }

  // Field name: num_sv
  {
    cdr >> ros_message->num_sv;
  }

  // Field name: flags
  {
    cdr >> ros_message->flags;
  }

  // Field name: gnss_to_filter
  {
    cdr >> ros_message->gnss_to_filter;
  }

  // Field name: sv_numbering
  {
    cdr >> ros_message->sv_numbering;
  }

  // Field name: main_talker_id
  {
    cdr >> ros_message->main_talker_id;
  }

  // Field name: gsv_talker_id
  {
    cdr >> ros_message->gsv_talker_id;
  }

  // Field name: version
  {
    cdr >> ros_message->version;
  }

  // Field name: bds_talker_id
  {
    size_t size = 2;
    auto array_ptr = ros_message->bds_talker_id;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: reserved1
  {
    size_t size = 6;
    auto array_ptr = ros_message->reserved1;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__CfgNMEA(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CfgNMEA__ros_msg_type * ros_message = static_cast<const _CfgNMEA__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name filter
  {
    size_t item_size = sizeof(ros_message->filter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nmea_version
  {
    size_t item_size = sizeof(ros_message->nmea_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sv
  {
    size_t item_size = sizeof(ros_message->num_sv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t item_size = sizeof(ros_message->flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_to_filter
  {
    size_t item_size = sizeof(ros_message->gnss_to_filter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sv_numbering
  {
    size_t item_size = sizeof(ros_message->sv_numbering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name main_talker_id
  {
    size_t item_size = sizeof(ros_message->main_talker_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gsv_talker_id
  {
    size_t item_size = sizeof(ros_message->gsv_talker_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name version
  {
    size_t item_size = sizeof(ros_message->version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bds_talker_id
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->bds_talker_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->reserved1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CfgNMEA__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__CfgNMEA(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__CfgNMEA(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: filter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nmea_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_sv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_to_filter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sv_numbering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: main_talker_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gsv_talker_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bds_talker_id
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved1
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CfgNMEA__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__CfgNMEA(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CfgNMEA = {
  "ublox_msgs::msg",
  "CfgNMEA",
  _CfgNMEA__cdr_serialize,
  _CfgNMEA__cdr_deserialize,
  _CfgNMEA__get_serialized_size,
  _CfgNMEA__max_serialized_size
};

static rosidl_message_type_support_t _CfgNMEA__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CfgNMEA,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, CfgNMEA)() {
  return &_CfgNMEA__type_support;
}

#if defined(__cplusplus)
}
#endif
