// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/NavSATSV.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_satsv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_msgs/msg/detail/nav_satsv__struct.hpp"

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
  const ublox_msgs::msg::NavSATSV & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gnss_id
  cdr << ros_message.gnss_id;
  // Member: sv_id
  cdr << ros_message.sv_id;
  // Member: cno
  cdr << ros_message.cno;
  // Member: elev
  cdr << ros_message.elev;
  // Member: azim
  cdr << ros_message.azim;
  // Member: pr_res
  cdr << ros_message.pr_res;
  // Member: flags
  cdr << ros_message.flags;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs::msg::NavSATSV & ros_message)
{
  // Member: gnss_id
  cdr >> ros_message.gnss_id;

  // Member: sv_id
  cdr >> ros_message.sv_id;

  // Member: cno
  cdr >> ros_message.cno;

  // Member: elev
  cdr >> ros_message.elev;

  // Member: azim
  cdr >> ros_message.azim;

  // Member: pr_res
  cdr >> ros_message.pr_res;

  // Member: flags
  cdr >> ros_message.flags;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
get_serialized_size(
  const ublox_msgs::msg::NavSATSV & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gnss_id
  {
    size_t item_size = sizeof(ros_message.gnss_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sv_id
  {
    size_t item_size = sizeof(ros_message.sv_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cno
  {
    size_t item_size = sizeof(ros_message.cno);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elev
  {
    size_t item_size = sizeof(ros_message.elev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: azim
  {
    size_t item_size = sizeof(ros_message.azim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pr_res
  {
    size_t item_size = sizeof(ros_message.pr_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flags
  {
    size_t item_size = sizeof(ros_message.flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
max_serialized_size_NavSATSV(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: gnss_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sv_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cno
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: elev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: azim
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pr_res
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _NavSATSV__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::NavSATSV *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavSATSV__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_msgs::msg::NavSATSV *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavSATSV__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::NavSATSV *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavSATSV__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavSATSV(full_bounded, 0);
}

static message_type_support_callbacks_t _NavSATSV__callbacks = {
  "ublox_msgs::msg",
  "NavSATSV",
  _NavSATSV__cdr_serialize,
  _NavSATSV__cdr_deserialize,
  _NavSATSV__get_serialized_size,
  _NavSATSV__max_serialized_size
};

static rosidl_message_type_support_t _NavSATSV__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavSATSV__callbacks,
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
get_message_type_support_handle<ublox_msgs::msg::NavSATSV>()
{
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_NavSATSV__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_msgs, msg, NavSATSV)() {
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_NavSATSV__handle;
}

#ifdef __cplusplus
}
#endif
