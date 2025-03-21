// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/NavRELPOSNED.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_relposned__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/nav_relposned__struct.h"
#include "ublox_msgs/msg/detail/nav_relposned__functions.h"
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


using _NavRELPOSNED__ros_msg_type = ublox_msgs__msg__NavRELPOSNED;

static bool _NavRELPOSNED__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavRELPOSNED__ros_msg_type * ros_message = static_cast<const _NavRELPOSNED__ros_msg_type *>(untyped_ros_message);
  // Field name: version
  {
    cdr << ros_message->version;
  }

  // Field name: reserved0
  {
    cdr << ros_message->reserved0;
  }

  // Field name: ref_station_id
  {
    cdr << ros_message->ref_station_id;
  }

  // Field name: i_tow
  {
    cdr << ros_message->i_tow;
  }

  // Field name: rel_pos_n
  {
    cdr << ros_message->rel_pos_n;
  }

  // Field name: rel_pos_e
  {
    cdr << ros_message->rel_pos_e;
  }

  // Field name: rel_pos_d
  {
    cdr << ros_message->rel_pos_d;
  }

  // Field name: rel_pos_hpn
  {
    cdr << ros_message->rel_pos_hpn;
  }

  // Field name: rel_pos_hpe
  {
    cdr << ros_message->rel_pos_hpe;
  }

  // Field name: rel_pos_hpd
  {
    cdr << ros_message->rel_pos_hpd;
  }

  // Field name: reserved1
  {
    cdr << ros_message->reserved1;
  }

  // Field name: acc_n
  {
    cdr << ros_message->acc_n;
  }

  // Field name: acc_e
  {
    cdr << ros_message->acc_e;
  }

  // Field name: acc_d
  {
    cdr << ros_message->acc_d;
  }

  // Field name: flags
  {
    cdr << ros_message->flags;
  }

  return true;
}

static bool _NavRELPOSNED__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavRELPOSNED__ros_msg_type * ros_message = static_cast<_NavRELPOSNED__ros_msg_type *>(untyped_ros_message);
  // Field name: version
  {
    cdr >> ros_message->version;
  }

  // Field name: reserved0
  {
    cdr >> ros_message->reserved0;
  }

  // Field name: ref_station_id
  {
    cdr >> ros_message->ref_station_id;
  }

  // Field name: i_tow
  {
    cdr >> ros_message->i_tow;
  }

  // Field name: rel_pos_n
  {
    cdr >> ros_message->rel_pos_n;
  }

  // Field name: rel_pos_e
  {
    cdr >> ros_message->rel_pos_e;
  }

  // Field name: rel_pos_d
  {
    cdr >> ros_message->rel_pos_d;
  }

  // Field name: rel_pos_hpn
  {
    cdr >> ros_message->rel_pos_hpn;
  }

  // Field name: rel_pos_hpe
  {
    cdr >> ros_message->rel_pos_hpe;
  }

  // Field name: rel_pos_hpd
  {
    cdr >> ros_message->rel_pos_hpd;
  }

  // Field name: reserved1
  {
    cdr >> ros_message->reserved1;
  }

  // Field name: acc_n
  {
    cdr >> ros_message->acc_n;
  }

  // Field name: acc_e
  {
    cdr >> ros_message->acc_e;
  }

  // Field name: acc_d
  {
    cdr >> ros_message->acc_d;
  }

  // Field name: flags
  {
    cdr >> ros_message->flags;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__NavRELPOSNED(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavRELPOSNED__ros_msg_type * ros_message = static_cast<const _NavRELPOSNED__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name version
  {
    size_t item_size = sizeof(ros_message->version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved0
  {
    size_t item_size = sizeof(ros_message->reserved0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_station_id
  {
    size_t item_size = sizeof(ros_message->ref_station_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i_tow
  {
    size_t item_size = sizeof(ros_message->i_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_pos_n
  {
    size_t item_size = sizeof(ros_message->rel_pos_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_pos_e
  {
    size_t item_size = sizeof(ros_message->rel_pos_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_pos_d
  {
    size_t item_size = sizeof(ros_message->rel_pos_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_pos_hpn
  {
    size_t item_size = sizeof(ros_message->rel_pos_hpn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_pos_hpe
  {
    size_t item_size = sizeof(ros_message->rel_pos_hpe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_pos_hpd
  {
    size_t item_size = sizeof(ros_message->rel_pos_hpd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t item_size = sizeof(ros_message->reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_n
  {
    size_t item_size = sizeof(ros_message->acc_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_e
  {
    size_t item_size = sizeof(ros_message->acc_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_d
  {
    size_t item_size = sizeof(ros_message->acc_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t item_size = sizeof(ros_message->flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavRELPOSNED__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__NavRELPOSNED(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__NavRELPOSNED(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ref_station_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: i_tow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rel_pos_n
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rel_pos_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rel_pos_d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rel_pos_hpn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rel_pos_hpe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rel_pos_hpd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acc_n
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NavRELPOSNED__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ublox_msgs__msg__NavRELPOSNED(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavRELPOSNED = {
  "ublox_msgs::msg",
  "NavRELPOSNED",
  _NavRELPOSNED__cdr_serialize,
  _NavRELPOSNED__cdr_deserialize,
  _NavRELPOSNED__get_serialized_size,
  _NavRELPOSNED__max_serialized_size
};

static rosidl_message_type_support_t _NavRELPOSNED__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavRELPOSNED,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, NavRELPOSNED)() {
  return &_NavRELPOSNED__type_support;
}

#if defined(__cplusplus)
}
#endif
