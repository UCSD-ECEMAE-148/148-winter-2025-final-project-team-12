// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/EsfMEAS.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ublox_msgs/msg/detail/esf_meas__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ublox_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EsfMEAS_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ublox_msgs::msg::EsfMEAS(_init);
}

void EsfMEAS_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ublox_msgs::msg::EsfMEAS *>(message_memory);
  typed_message->~EsfMEAS();
}

size_t size_function__EsfMEAS__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EsfMEAS__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__EsfMEAS__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__EsfMEAS__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EsfMEAS__calib_t_tag(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EsfMEAS__calib_t_tag(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__EsfMEAS__calib_t_tag(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__EsfMEAS__calib_t_tag(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EsfMEAS_message_member_array[5] = {
  {
    "time_tag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs::msg::EsfMEAS, time_tag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs::msg::EsfMEAS, flags),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs::msg::EsfMEAS, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs::msg::EsfMEAS, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__EsfMEAS__data,  // size() function pointer
    get_const_function__EsfMEAS__data,  // get_const(index) function pointer
    get_function__EsfMEAS__data,  // get(index) function pointer
    resize_function__EsfMEAS__data  // resize(index) function pointer
  },
  {
    "calib_t_tag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs::msg::EsfMEAS, calib_t_tag),  // bytes offset in struct
    nullptr,  // default value
    size_function__EsfMEAS__calib_t_tag,  // size() function pointer
    get_const_function__EsfMEAS__calib_t_tag,  // get_const(index) function pointer
    get_function__EsfMEAS__calib_t_tag,  // get(index) function pointer
    resize_function__EsfMEAS__calib_t_tag  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EsfMEAS_message_members = {
  "ublox_msgs::msg",  // message namespace
  "EsfMEAS",  // message name
  5,  // number of fields
  sizeof(ublox_msgs::msg::EsfMEAS),
  EsfMEAS_message_member_array,  // message members
  EsfMEAS_init_function,  // function to initialize message memory (memory has to be allocated)
  EsfMEAS_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EsfMEAS_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EsfMEAS_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ublox_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ublox_msgs::msg::EsfMEAS>()
{
  return &::ublox_msgs::msg::rosidl_typesupport_introspection_cpp::EsfMEAS_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ublox_msgs, msg, EsfMEAS)() {
  return &::ublox_msgs::msg::rosidl_typesupport_introspection_cpp::EsfMEAS_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
