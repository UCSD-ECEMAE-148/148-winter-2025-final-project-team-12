// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/NavTIMEUTC.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_timeutc__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_msgs/msg/detail/nav_timeutc__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ublox_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_serialize(
  const ublox_msgs::msg::NavTIMEUTC & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: i_tow
  cdr << ros_message.i_tow;
  // Member: t_acc
  cdr << ros_message.t_acc;
  // Member: nano
  cdr << ros_message.nano;
  // Member: year
  cdr << ros_message.year;
  // Member: month
  cdr << ros_message.month;
  // Member: day
  cdr << ros_message.day;
  // Member: hour
  cdr << ros_message.hour;
  // Member: min
  cdr << ros_message.min;
  // Member: sec
  cdr << ros_message.sec;
  // Member: valid
  cdr << ros_message.valid;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs::msg::NavTIMEUTC & ros_message)
{
  // Member: i_tow
  cdr >> ros_message.i_tow;

  // Member: t_acc
  cdr >> ros_message.t_acc;

  // Member: nano
  cdr >> ros_message.nano;

  // Member: year
  cdr >> ros_message.year;

  // Member: month
  cdr >> ros_message.month;

  // Member: day
  cdr >> ros_message.day;

  // Member: hour
  cdr >> ros_message.hour;

  // Member: min
  cdr >> ros_message.min;

  // Member: sec
  cdr >> ros_message.sec;

  // Member: valid
  cdr >> ros_message.valid;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
get_serialized_size(
  const ublox_msgs::msg::NavTIMEUTC & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: i_tow
  {
    size_t item_size = sizeof(ros_message.i_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_acc
  {
    size_t item_size = sizeof(ros_message.t_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nano
  {
    size_t item_size = sizeof(ros_message.nano);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: year
  {
    size_t item_size = sizeof(ros_message.year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: month
  {
    size_t item_size = sizeof(ros_message.month);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: day
  {
    size_t item_size = sizeof(ros_message.day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hour
  {
    size_t item_size = sizeof(ros_message.hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min
  {
    size_t item_size = sizeof(ros_message.min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sec
  {
    size_t item_size = sizeof(ros_message.sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: valid
  {
    size_t item_size = sizeof(ros_message.valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
max_serialized_size_NavTIMEUTC(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: i_tow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_acc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: nano
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: year
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: month
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: day
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hour
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _NavTIMEUTC__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::NavTIMEUTC *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavTIMEUTC__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_msgs::msg::NavTIMEUTC *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavTIMEUTC__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::NavTIMEUTC *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavTIMEUTC__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavTIMEUTC(full_bounded, 0);
}

static message_type_support_callbacks_t _NavTIMEUTC__callbacks = {
  "ublox_msgs::msg",
  "NavTIMEUTC",
  _NavTIMEUTC__cdr_serialize,
  _NavTIMEUTC__cdr_deserialize,
  _NavTIMEUTC__get_serialized_size,
  _NavTIMEUTC__max_serialized_size
};

static rosidl_message_type_support_t _NavTIMEUTC__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavTIMEUTC__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ublox_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ublox_msgs::msg::NavTIMEUTC>()
{
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_NavTIMEUTC__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_msgs, msg, NavTIMEUTC)() {
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_NavTIMEUTC__handle;
}

#ifdef __cplusplus
}
#endif
