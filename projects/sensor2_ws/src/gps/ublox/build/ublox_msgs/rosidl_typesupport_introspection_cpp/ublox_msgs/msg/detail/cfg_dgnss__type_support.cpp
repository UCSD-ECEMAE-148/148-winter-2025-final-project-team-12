// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/CfgDGNSS.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ublox_msgs/msg/detail/cfg_dgnss__struct.hpp"
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

void CfgDGNSS_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ublox_msgs::msg::CfgDGNSS(_init);
}

void CfgDGNSS_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ublox_msgs::msg::CfgDGNSS *>(message_memory);
  typed_message->~CfgDGNSS();
}

size_t size_function__CfgDGNSS__reserved0(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__CfgDGNSS__reserved0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__CfgDGNSS__reserved0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CfgDGNSS_message_member_array[2] = {
  {
    "dgnss_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs::msg::CfgDGNSS, dgnss_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserved0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs::msg::CfgDGNSS, reserved0),  // bytes offset in struct
    nullptr,  // default value
    size_function__CfgDGNSS__reserved0,  // size() function pointer
    get_const_function__CfgDGNSS__reserved0,  // get_const(index) function pointer
    get_function__CfgDGNSS__reserved0,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CfgDGNSS_message_members = {
  "ublox_msgs::msg",  // message namespace
  "CfgDGNSS",  // message name
  2,  // number of fields
  sizeof(ublox_msgs::msg::CfgDGNSS),
  CfgDGNSS_message_member_array,  // message members
  CfgDGNSS_init_function,  // function to initialize message memory (memory has to be allocated)
  CfgDGNSS_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CfgDGNSS_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CfgDGNSS_message_members,
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
get_message_type_support_handle<ublox_msgs::msg::CfgDGNSS>()
{
  return &::ublox_msgs::msg::rosidl_typesupport_introspection_cpp::CfgDGNSS_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ublox_msgs, msg, CfgDGNSS)() {
  return &::ublox_msgs::msg::rosidl_typesupport_introspection_cpp::CfgDGNSS_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
