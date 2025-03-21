// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/NavSBAS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/nav_sbas__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/nav_sbas__functions.h"
#include "ublox_msgs/msg/detail/nav_sbas__struct.h"


// Include directives for member types
// Member `sv`
#include "ublox_msgs/msg/nav_sbassv.h"
// Member `sv`
#include "ublox_msgs/msg/detail/nav_sbassv__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__NavSBAS__init(message_memory);
}

void NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_fini_function(void * message_memory)
{
  ublox_msgs__msg__NavSBAS__fini(message_memory);
}

size_t NavSBAS__rosidl_typesupport_introspection_c__size_function__NavSBASSV__sv(
  const void * untyped_member)
{
  const ublox_msgs__msg__NavSBASSV__Sequence * member =
    (const ublox_msgs__msg__NavSBASSV__Sequence *)(untyped_member);
  return member->size;
}

const void * NavSBAS__rosidl_typesupport_introspection_c__get_const_function__NavSBASSV__sv(
  const void * untyped_member, size_t index)
{
  const ublox_msgs__msg__NavSBASSV__Sequence * member =
    (const ublox_msgs__msg__NavSBASSV__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NavSBAS__rosidl_typesupport_introspection_c__get_function__NavSBASSV__sv(
  void * untyped_member, size_t index)
{
  ublox_msgs__msg__NavSBASSV__Sequence * member =
    (ublox_msgs__msg__NavSBASSV__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NavSBAS__rosidl_typesupport_introspection_c__resize_function__NavSBASSV__sv(
  void * untyped_member, size_t size)
{
  ublox_msgs__msg__NavSBASSV__Sequence * member =
    (ublox_msgs__msg__NavSBASSV__Sequence *)(untyped_member);
  ublox_msgs__msg__NavSBASSV__Sequence__fini(member);
  return ublox_msgs__msg__NavSBASSV__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_message_member_array[8] = {
  {
    "i_tow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavSBAS, i_tow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geo",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavSBAS, geo),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavSBAS, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavSBAS, sys),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "service",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavSBAS, service),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavSBAS, cnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavSBAS, reserved0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavSBAS, sv),  // bytes offset in struct
    NULL,  // default value
    NavSBAS__rosidl_typesupport_introspection_c__size_function__NavSBASSV__sv,  // size() function pointer
    NavSBAS__rosidl_typesupport_introspection_c__get_const_function__NavSBASSV__sv,  // get_const(index) function pointer
    NavSBAS__rosidl_typesupport_introspection_c__get_function__NavSBASSV__sv,  // get(index) function pointer
    NavSBAS__rosidl_typesupport_introspection_c__resize_function__NavSBASSV__sv  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_message_members = {
  "ublox_msgs__msg",  // message namespace
  "NavSBAS",  // message name
  8,  // number of fields
  sizeof(ublox_msgs__msg__NavSBAS),
  NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_message_member_array,  // message members
  NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_init_function,  // function to initialize message memory (memory has to be allocated)
  NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_message_type_support_handle = {
  0,
  &NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, NavSBAS)() {
  NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, NavSBASSV)();
  if (!NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_message_type_support_handle.typesupport_identifier) {
    NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavSBAS__rosidl_typesupport_introspection_c__NavSBAS_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
