// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/UpdSOSAck.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ublox_msgs/msg/detail/upd_sos_ack__struct.hpp"
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

void UpdSOSAck_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ublox_msgs::msg::UpdSOSAck(_init);
}

void UpdSOSAck_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ublox_msgs::msg::UpdSOSAck *>(message_memory);
  typed_message->~UpdSOSAck();
}

size_t size_function__UpdSOSAck__reserved0(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__UpdSOSAck__reserved0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__UpdSOSAck__reserved0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__UpdSOSAck__reserved1(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__UpdSOSAck__reserved1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__UpdSOSAck__reserved1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UpdSOSAck_message_member_array[4] = {
  {
    "cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs::msg::UpdSOSAck, cmd),  // bytes offset in struct
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
    offsetof(ublox_msgs::msg::UpdSOSAck, reserved0),  // bytes offset in struct
    nullptr,  // default value
    size_function__UpdSOSAck__reserved0,  // size() function pointer
    get_const_function__UpdSOSAck__reserved0,  // get_const(index) function pointer
    get_function__UpdSOSAck__reserved0,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs::msg::UpdSOSAck, response),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserved1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs::msg::UpdSOSAck, reserved1),  // bytes offset in struct
    nullptr,  // default value
    size_function__UpdSOSAck__reserved1,  // size() function pointer
    get_const_function__UpdSOSAck__reserved1,  // get_const(index) function pointer
    get_function__UpdSOSAck__reserved1,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UpdSOSAck_message_members = {
  "ublox_msgs::msg",  // message namespace
  "UpdSOSAck",  // message name
  4,  // number of fields
  sizeof(ublox_msgs::msg::UpdSOSAck),
  UpdSOSAck_message_member_array,  // message members
  UpdSOSAck_init_function,  // function to initialize message memory (memory has to be allocated)
  UpdSOSAck_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UpdSOSAck_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UpdSOSAck_message_members,
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
get_message_type_support_handle<ublox_msgs::msg::UpdSOSAck>()
{
  return &::ublox_msgs::msg::rosidl_typesupport_introspection_cpp::UpdSOSAck_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ublox_msgs, msg, UpdSOSAck)() {
  return &::ublox_msgs::msg::rosidl_typesupport_introspection_cpp::UpdSOSAck_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
