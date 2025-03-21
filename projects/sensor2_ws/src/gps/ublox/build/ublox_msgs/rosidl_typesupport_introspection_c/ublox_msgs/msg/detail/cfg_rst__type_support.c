// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/CfgRST.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/cfg_rst__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/cfg_rst__functions.h"
#include "ublox_msgs/msg/detail/cfg_rst__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CfgRST__rosidl_typesupport_introspection_c__CfgRST_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__CfgRST__init(message_memory);
}

void CfgRST__rosidl_typesupport_introspection_c__CfgRST_fini_function(void * message_memory)
{
  ublox_msgs__msg__CfgRST__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CfgRST__rosidl_typesupport_introspection_c__CfgRST_message_member_array[3] = {
  {
    "nav_bbr_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgRST, nav_bbr_mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reset_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgRST, reset_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgRST, reserved1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CfgRST__rosidl_typesupport_introspection_c__CfgRST_message_members = {
  "ublox_msgs__msg",  // message namespace
  "CfgRST",  // message name
  3,  // number of fields
  sizeof(ublox_msgs__msg__CfgRST),
  CfgRST__rosidl_typesupport_introspection_c__CfgRST_message_member_array,  // message members
  CfgRST__rosidl_typesupport_introspection_c__CfgRST_init_function,  // function to initialize message memory (memory has to be allocated)
  CfgRST__rosidl_typesupport_introspection_c__CfgRST_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CfgRST__rosidl_typesupport_introspection_c__CfgRST_message_type_support_handle = {
  0,
  &CfgRST__rosidl_typesupport_introspection_c__CfgRST_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, CfgRST)() {
  if (!CfgRST__rosidl_typesupport_introspection_c__CfgRST_message_type_support_handle.typesupport_identifier) {
    CfgRST__rosidl_typesupport_introspection_c__CfgRST_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CfgRST__rosidl_typesupport_introspection_c__CfgRST_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
