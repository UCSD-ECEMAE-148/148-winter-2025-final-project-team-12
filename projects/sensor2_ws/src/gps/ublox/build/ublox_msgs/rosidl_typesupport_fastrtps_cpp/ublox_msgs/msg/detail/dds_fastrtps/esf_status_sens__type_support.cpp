// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/EsfSTATUSSens.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/esf_status_sens__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_msgs/msg/detail/esf_status_sens__struct.hpp"

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
  const ublox_msgs::msg::EsfSTATUSSens & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sens_status1
  cdr << ros_message.sens_status1;
  // Member: sens_status2
  cdr << ros_message.sens_status2;
  // Member: freq
  cdr << ros_message.freq;
  // Member: faults
  cdr << ros_message.faults;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs::msg::EsfSTATUSSens & ros_message)
{
  // Member: sens_status1
  cdr >> ros_message.sens_status1;

  // Member: sens_status2
  cdr >> ros_message.sens_status2;

  // Member: freq
  cdr >> ros_message.freq;

  // Member: faults
  cdr >> ros_message.faults;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
get_serialized_size(
  const ublox_msgs::msg::EsfSTATUSSens & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sens_status1
  {
    size_t item_size = sizeof(ros_message.sens_status1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sens_status2
  {
    size_t item_size = sizeof(ros_message.sens_status2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: freq
  {
    size_t item_size = sizeof(ros_message.freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: faults
  {
    size_t item_size = sizeof(ros_message.faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
max_serialized_size_EsfSTATUSSens(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sens_status1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sens_status2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: freq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EsfSTATUSSens__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::EsfSTATUSSens *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsfSTATUSSens__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_msgs::msg::EsfSTATUSSens *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsfSTATUSSens__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::EsfSTATUSSens *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsfSTATUSSens__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsfSTATUSSens(full_bounded, 0);
}

static message_type_support_callbacks_t _EsfSTATUSSens__callbacks = {
  "ublox_msgs::msg",
  "EsfSTATUSSens",
  _EsfSTATUSSens__cdr_serialize,
  _EsfSTATUSSens__cdr_deserialize,
  _EsfSTATUSSens__get_serialized_size,
  _EsfSTATUSSens__max_serialized_size
};

static rosidl_message_type_support_t _EsfSTATUSSens__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsfSTATUSSens__callbacks,
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
get_message_type_support_handle<ublox_msgs::msg::EsfSTATUSSens>()
{
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_EsfSTATUSSens__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_msgs, msg, EsfSTATUSSens)() {
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_EsfSTATUSSens__handle;
}

#ifdef __cplusplus
}
#endif
