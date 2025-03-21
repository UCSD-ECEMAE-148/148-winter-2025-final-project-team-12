// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/CfgNMEA.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/cfg_nmea__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_msgs/msg/detail/cfg_nmea__struct.hpp"

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
  const ublox_msgs::msg::CfgNMEA & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: filter
  cdr << ros_message.filter;
  // Member: nmea_version
  cdr << ros_message.nmea_version;
  // Member: num_sv
  cdr << ros_message.num_sv;
  // Member: flags
  cdr << ros_message.flags;
  // Member: gnss_to_filter
  cdr << ros_message.gnss_to_filter;
  // Member: sv_numbering
  cdr << ros_message.sv_numbering;
  // Member: main_talker_id
  cdr << ros_message.main_talker_id;
  // Member: gsv_talker_id
  cdr << ros_message.gsv_talker_id;
  // Member: version
  cdr << ros_message.version;
  // Member: bds_talker_id
  {
    cdr << ros_message.bds_talker_id;
  }
  // Member: reserved1
  {
    cdr << ros_message.reserved1;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs::msg::CfgNMEA & ros_message)
{
  // Member: filter
  cdr >> ros_message.filter;

  // Member: nmea_version
  cdr >> ros_message.nmea_version;

  // Member: num_sv
  cdr >> ros_message.num_sv;

  // Member: flags
  cdr >> ros_message.flags;

  // Member: gnss_to_filter
  cdr >> ros_message.gnss_to_filter;

  // Member: sv_numbering
  cdr >> ros_message.sv_numbering;

  // Member: main_talker_id
  cdr >> ros_message.main_talker_id;

  // Member: gsv_talker_id
  cdr >> ros_message.gsv_talker_id;

  // Member: version
  cdr >> ros_message.version;

  // Member: bds_talker_id
  {
    cdr >> ros_message.bds_talker_id;
  }

  // Member: reserved1
  {
    cdr >> ros_message.reserved1;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
get_serialized_size(
  const ublox_msgs::msg::CfgNMEA & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: filter
  {
    size_t item_size = sizeof(ros_message.filter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nmea_version
  {
    size_t item_size = sizeof(ros_message.nmea_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_sv
  {
    size_t item_size = sizeof(ros_message.num_sv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flags
  {
    size_t item_size = sizeof(ros_message.flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_to_filter
  {
    size_t item_size = sizeof(ros_message.gnss_to_filter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sv_numbering
  {
    size_t item_size = sizeof(ros_message.sv_numbering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: main_talker_id
  {
    size_t item_size = sizeof(ros_message.main_talker_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gsv_talker_id
  {
    size_t item_size = sizeof(ros_message.gsv_talker_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: version
  {
    size_t item_size = sizeof(ros_message.version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bds_talker_id
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.bds_talker_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved1
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.reserved1[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
max_serialized_size_CfgNMEA(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: filter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nmea_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_sv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_to_filter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sv_numbering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: main_talker_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gsv_talker_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bds_talker_id
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reserved1
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CfgNMEA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::CfgNMEA *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CfgNMEA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_msgs::msg::CfgNMEA *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CfgNMEA__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::CfgNMEA *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CfgNMEA__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CfgNMEA(full_bounded, 0);
}

static message_type_support_callbacks_t _CfgNMEA__callbacks = {
  "ublox_msgs::msg",
  "CfgNMEA",
  _CfgNMEA__cdr_serialize,
  _CfgNMEA__cdr_deserialize,
  _CfgNMEA__get_serialized_size,
  _CfgNMEA__max_serialized_size
};

static rosidl_message_type_support_t _CfgNMEA__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CfgNMEA__callbacks,
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
get_message_type_support_handle<ublox_msgs::msg::CfgNMEA>()
{
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_CfgNMEA__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_msgs, msg, CfgNMEA)() {
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_CfgNMEA__handle;
}

#ifdef __cplusplus
}
#endif
