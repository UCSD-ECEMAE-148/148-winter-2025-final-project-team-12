// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/EsfINS.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/esf_ins__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_msgs/msg/detail/esf_ins__struct.hpp"

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
  const ublox_msgs::msg::EsfINS & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bitfield0
  cdr << ros_message.bitfield0;
  // Member: reserved1
  {
    cdr << ros_message.reserved1;
  }
  // Member: i_tow
  cdr << ros_message.i_tow;
  // Member: x_ang_rate
  cdr << ros_message.x_ang_rate;
  // Member: y_ang_rate
  cdr << ros_message.y_ang_rate;
  // Member: z_ang_rate
  cdr << ros_message.z_ang_rate;
  // Member: x_accel
  cdr << ros_message.x_accel;
  // Member: y_accel
  cdr << ros_message.y_accel;
  // Member: z_accel
  cdr << ros_message.z_accel;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs::msg::EsfINS & ros_message)
{
  // Member: bitfield0
  cdr >> ros_message.bitfield0;

  // Member: reserved1
  {
    cdr >> ros_message.reserved1;
  }

  // Member: i_tow
  cdr >> ros_message.i_tow;

  // Member: x_ang_rate
  cdr >> ros_message.x_ang_rate;

  // Member: y_ang_rate
  cdr >> ros_message.y_ang_rate;

  // Member: z_ang_rate
  cdr >> ros_message.z_ang_rate;

  // Member: x_accel
  cdr >> ros_message.x_accel;

  // Member: y_accel
  cdr >> ros_message.y_accel;

  // Member: z_accel
  cdr >> ros_message.z_accel;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
get_serialized_size(
  const ublox_msgs::msg::EsfINS & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bitfield0
  {
    size_t item_size = sizeof(ros_message.bitfield0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved1
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.reserved1[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: i_tow
  {
    size_t item_size = sizeof(ros_message.i_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_ang_rate
  {
    size_t item_size = sizeof(ros_message.x_ang_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_ang_rate
  {
    size_t item_size = sizeof(ros_message.y_ang_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_ang_rate
  {
    size_t item_size = sizeof(ros_message.z_ang_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_accel
  {
    size_t item_size = sizeof(ros_message.x_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_accel
  {
    size_t item_size = sizeof(ros_message.y_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_accel
  {
    size_t item_size = sizeof(ros_message.z_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
max_serialized_size_EsfINS(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: bitfield0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reserved1
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: i_tow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_ang_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_ang_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_ang_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EsfINS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::EsfINS *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EsfINS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_msgs::msg::EsfINS *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EsfINS__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::EsfINS *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EsfINS__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EsfINS(full_bounded, 0);
}

static message_type_support_callbacks_t _EsfINS__callbacks = {
  "ublox_msgs::msg",
  "EsfINS",
  _EsfINS__cdr_serialize,
  _EsfINS__cdr_deserialize,
  _EsfINS__get_serialized_size,
  _EsfINS__max_serialized_size
};

static rosidl_message_type_support_t _EsfINS__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EsfINS__callbacks,
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
get_message_type_support_handle<ublox_msgs::msg::EsfINS>()
{
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_EsfINS__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_msgs, msg, EsfINS)() {
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_EsfINS__handle;
}

#ifdef __cplusplus
}
#endif
