// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/EsfRAW.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/esf_raw__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_msgs/msg/detail/esf_raw__struct.hpp"

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
  const ublox_msgs::msg::EsfRAWBlock &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ublox_msgs::msg::EsfRAWBlock &);
size_t get_serialized_size(
  const ublox_msgs::msg::EsfRAWBlock &,
  size_t current_alignment);
size_t
max_serialized_size_EsfRAWBlock(
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
  const ublox_msgs::msg::EsfRAW & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: reserved0
  {
    cdr << ros_message.reserved0;
  }
  // Member: blocks
  {
    size_t size = ros_message.blocks.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ublox_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.blocks[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs::msg::EsfRAW & ros_message)
{
  // Member: reserved0
  {
    cdr >> ros_message.reserved0;
  }

  // Member: blocks
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.blocks.resize(size);
    for (size_t i = 0; i < size; i++) {
      ublox_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.blocks[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
get_serialized_size(
  const ublox_msgs::msg::EsfRAW & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: reserved0
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.reserved0[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blocks
  {
    size_t array_size = ros_message.blocks.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ublox_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.blocks[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
max_serialized_size_EsfRAW(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: reserved0
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: blocks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ublox_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EsfRAWBlock(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _EsfRAW__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::EsfRAW *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsfRAW__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_msgs::msg::EsfRAW *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsfRAW__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::EsfRAW *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsfRAW__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsfRAW(full_bounded, 0);
}

static message_type_support_callbacks_t _EsfRAW__callbacks = {
  "ublox_msgs::msg",
  "EsfRAW",
  _EsfRAW__cdr_serialize,
  _EsfRAW__cdr_deserialize,
  _EsfRAW__get_serialized_size,
  _EsfRAW__max_serialized_size
};

static rosidl_message_type_support_t _EsfRAW__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsfRAW__callbacks,
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
get_message_type_support_handle<ublox_msgs::msg::EsfRAW>()
{
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_EsfRAW__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_msgs, msg, EsfRAW)() {
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_EsfRAW__handle;
}

#ifdef __cplusplus
}
#endif
