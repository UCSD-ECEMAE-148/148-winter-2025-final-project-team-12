// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/CfgANT.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/cfg_ant__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/cfg_ant__functions.h"
#include "ublox_msgs/msg/detail/cfg_ant__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CfgANT__rosidl_typesupport_introspection_c__CfgANT_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__CfgANT__init(message_memory);
}

void CfgANT__rosidl_typesupport_introspection_c__CfgANT_fini_function(void * message_memory)
{
  ublox_msgs__msg__CfgANT__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CfgANT__rosidl_typesupport_introspection_c__CfgANT_message_member_array[2] = {
  {
    "flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgANT, flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgANT, pins),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CfgANT__rosidl_typesupport_introspection_c__CfgANT_message_members = {
  "ublox_msgs__msg",  // message namespace
  "CfgANT",  // message name
  2,  // number of fields
  sizeof(ublox_msgs__msg__CfgANT),
  CfgANT__rosidl_typesupport_introspection_c__CfgANT_message_member_array,  // message members
  CfgANT__rosidl_typesupport_introspection_c__CfgANT_init_function,  // function to initialize message memory (memory has to be allocated)
  CfgANT__rosidl_typesupport_introspection_c__CfgANT_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CfgANT__rosidl_typesupport_introspection_c__CfgANT_message_type_support_handle = {
  0,
  &CfgANT__rosidl_typesupport_introspection_c__CfgANT_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, CfgANT)() {
  if (!CfgANT__rosidl_typesupport_introspection_c__CfgANT_message_type_support_handle.typesupport_identifier) {
    CfgANT__rosidl_typesupport_introspection_c__CfgANT_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CfgANT__rosidl_typesupport_introspection_c__CfgANT_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
