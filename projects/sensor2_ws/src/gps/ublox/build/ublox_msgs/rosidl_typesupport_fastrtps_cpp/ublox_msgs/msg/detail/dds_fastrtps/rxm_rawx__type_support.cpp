// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/RxmRAWX.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/rxm_rawx__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_msgs/msg/detail/rxm_rawx__struct.hpp"

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
  const ublox_msgs::msg::RxmRAWXMeas &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ublox_msgs::msg::RxmRAWXMeas &);
size_t get_serialized_size(
  const ublox_msgs::msg::RxmRAWXMeas &,
  size_t current_alignment);
size_t
max_serialized_size_RxmRAWXMeas(
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
  const ublox_msgs::msg::RxmRAWX & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rcv_tow
  cdr << ros_message.rcv_tow;
  // Member: week
  cdr << ros_message.week;
  // Member: leap_s
  cdr << ros_message.leap_s;
  // Member: num_meas
  cdr << ros_message.num_meas;
  // Member: rec_stat
  cdr << ros_message.rec_stat;
  // Member: version
  cdr << ros_message.version;
  // Member: reserved1
  {
    cdr << ros_message.reserved1;
  }
  // Member: meas
  {
    size_t size = ros_message.meas.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ublox_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.meas[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs::msg::RxmRAWX & ros_message)
{
  // Member: rcv_tow
  cdr >> ros_message.rcv_tow;

  // Member: week
  cdr >> ros_message.week;

  // Member: leap_s
  cdr >> ros_message.leap_s;

  // Member: num_meas
  cdr >> ros_message.num_meas;

  // Member: rec_stat
  cdr >> ros_message.rec_stat;

  // Member: version
  cdr >> ros_message.version;

  // Member: reserved1
  {
    cdr >> ros_message.reserved1;
  }

  // Member: meas
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.meas.resize(size);
    for (size_t i = 0; i < size; i++) {
      ublox_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.meas[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
get_serialized_size(
  const ublox_msgs::msg::RxmRAWX & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rcv_tow
  {
    size_t item_size = sizeof(ros_message.rcv_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: week
  {
    size_t item_size = sizeof(ros_message.week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leap_s
  {
    size_t item_size = sizeof(ros_message.leap_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_meas
  {
    size_t item_size = sizeof(ros_message.num_meas);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rec_stat
  {
    size_t item_size = sizeof(ros_message.rec_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: version
  {
    size_t item_size = sizeof(ros_message.version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved1
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.reserved1[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meas
  {
    size_t array_size = ros_message.meas.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ublox_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.meas[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
max_serialized_size_RxmRAWX(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: rcv_tow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: week
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: leap_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_meas
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rec_stat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reserved1
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: meas
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ublox_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RxmRAWXMeas(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RxmRAWX__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::RxmRAWX *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RxmRAWX__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_msgs::msg::RxmRAWX *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RxmRAWX__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::RxmRAWX *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RxmRAWX__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RxmRAWX(full_bounded, 0);
}

static message_type_support_callbacks_t _RxmRAWX__callbacks = {
  "ublox_msgs::msg",
  "RxmRAWX",
  _RxmRAWX__cdr_serialize,
  _RxmRAWX__cdr_deserialize,
  _RxmRAWX__get_serialized_size,
  _RxmRAWX__max_serialized_size
};

static rosidl_message_type_support_t _RxmRAWX__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RxmRAWX__callbacks,
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
get_message_type_support_handle<ublox_msgs::msg::RxmRAWX>()
{
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_RxmRAWX__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_msgs, msg, RxmRAWX)() {
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_RxmRAWX__handle;
}

#ifdef __cplusplus
}
#endif
