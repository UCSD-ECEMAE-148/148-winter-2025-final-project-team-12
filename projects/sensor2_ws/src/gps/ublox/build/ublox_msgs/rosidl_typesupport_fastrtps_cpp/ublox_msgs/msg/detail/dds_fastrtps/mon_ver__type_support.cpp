// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/MonVER.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/mon_ver__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_msgs/msg/detail/mon_ver__struct.hpp"

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
  const ublox_msgs::msg::MonVERExtension &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ublox_msgs::msg::MonVERExtension &);
size_t get_serialized_size(
  const ublox_msgs::msg::MonVERExtension &,
  size_t current_alignment);
size_t
max_serialized_size_MonVERExtension(
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
  const ublox_msgs::msg::MonVER & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sw_version
  {
    cdr << ros_message.sw_version;
  }
  // Member: hw_version
  {
    cdr << ros_message.hw_version;
  }
  // Member: extension
  {
    size_t size = ros_message.extension.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ublox_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.extension[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs::msg::MonVER & ros_message)
{
  // Member: sw_version
  {
    cdr >> ros_message.sw_version;
  }

  // Member: hw_version
  {
    cdr >> ros_message.hw_version;
  }

  // Member: extension
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.extension.resize(size);
    for (size_t i = 0; i < size; i++) {
      ublox_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.extension[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
get_serialized_size(
  const ublox_msgs::msg::MonVER & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sw_version
  {
    size_t array_size = 30;
    size_t item_size = sizeof(ros_message.sw_version[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hw_version
  {
    size_t array_size = 10;
    size_t item_size = sizeof(ros_message.hw_version[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extension
  {
    size_t array_size = ros_message.extension.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ublox_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.extension[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
max_serialized_size_MonVER(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sw_version
  {
    size_t array_size = 30;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hw_version
  {
    size_t array_size = 10;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: extension
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ublox_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MonVERExtension(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _MonVER__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::MonVER *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MonVER__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_msgs::msg::MonVER *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MonVER__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::MonVER *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MonVER__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MonVER(full_bounded, 0);
}

static message_type_support_callbacks_t _MonVER__callbacks = {
  "ublox_msgs::msg",
  "MonVER",
  _MonVER__cdr_serialize,
  _MonVER__cdr_deserialize,
  _MonVER__get_serialized_size,
  _MonVER__max_serialized_size
};

static rosidl_message_type_support_t _MonVER__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MonVER__callbacks,
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
get_message_type_support_handle<ublox_msgs::msg::MonVER>()
{
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_MonVER__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_msgs, msg, MonVER)() {
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_MonVER__handle;
}

#ifdef __cplusplus
}
#endif
