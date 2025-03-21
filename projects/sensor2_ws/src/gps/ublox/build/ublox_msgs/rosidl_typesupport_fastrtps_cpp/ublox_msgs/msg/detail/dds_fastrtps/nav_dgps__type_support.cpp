// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/NavDGPS.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_dgps__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_msgs/msg/detail/nav_dgps__struct.hpp"

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
bool cdr_serialize(
  const ublox_msgs::msg::NavDGPSSV &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ublox_msgs::msg::NavDGPSSV &);
size_t get_serialized_size(
  const ublox_msgs::msg::NavDGPSSV &,
  size_t current_alignment);
size_t
max_serialized_size_NavDGPSSV(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ublox_msgs


namespace ublox_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_serialize(
  const ublox_msgs::msg::NavDGPS & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: i_tow
  cdr << ros_message.i_tow;
  // Member: age
  cdr << ros_message.age;
  // Member: base_id
  cdr << ros_message.base_id;
  // Member: base_health
  cdr << ros_message.base_health;
  // Member: num_ch
  cdr << ros_message.num_ch;
  // Member: status
  cdr << ros_message.status;
  // Member: reserved1
  cdr << ros_message.reserved1;
  // Member: sv
  {
    size_t size = ros_message.sv.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ublox_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.sv[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs::msg::NavDGPS & ros_message)
{
  // Member: i_tow
  cdr >> ros_message.i_tow;

  // Member: age
  cdr >> ros_message.age;

  // Member: base_id
  cdr >> ros_message.base_id;

  // Member: base_health
  cdr >> ros_message.base_health;

  // Member: num_ch
  cdr >> ros_message.num_ch;

  // Member: status
  cdr >> ros_message.status;

  // Member: reserved1
  cdr >> ros_message.reserved1;

  // Member: sv
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.sv.resize(size);
    for (size_t i = 0; i < size; i++) {
      ublox_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.sv[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
get_serialized_size(
  const ublox_msgs::msg::NavDGPS & ros_message,
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
  // Member: age
  {
    size_t item_size = sizeof(ros_message.age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_id
  {
    size_t item_size = sizeof(ros_message.base_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_health
  {
    size_t item_size = sizeof(ros_message.base_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_ch
  {
    size_t item_size = sizeof(ros_message.num_ch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved1
  {
    size_t item_size = sizeof(ros_message.reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sv
  {
    size_t array_size = ros_message.sv.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ublox_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.sv[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
max_serialized_size_NavDGPS(
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

  // Member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: base_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: base_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: num_ch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reserved1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sv
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ublox_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NavDGPSSV(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _NavDGPS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::NavDGPS *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavDGPS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_msgs::msg::NavDGPS *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavDGPS__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::NavDGPS *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavDGPS__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavDGPS(full_bounded, 0);
}

static message_type_support_callbacks_t _NavDGPS__callbacks = {
  "ublox_msgs::msg",
  "NavDGPS",
  _NavDGPS__cdr_serialize,
  _NavDGPS__cdr_deserialize,
  _NavDGPS__get_serialized_size,
  _NavDGPS__max_serialized_size
};

static rosidl_message_type_support_t _NavDGPS__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavDGPS__callbacks,
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
get_message_type_support_handle<ublox_msgs::msg::NavDGPS>()
{
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_NavDGPS__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_msgs, msg, NavDGPS)() {
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_NavDGPS__handle;
}

#ifdef __cplusplus
}
#endif
