// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/CfgSBAS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/cfg_sbas__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/cfg_sbas__functions.h"
#include "ublox_msgs/msg/detail/cfg_sbas__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__CfgSBAS__init(message_memory);
}

void CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_fini_function(void * message_memory)
{
  ublox_msgs__msg__CfgSBAS__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_message_member_array[5] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgSBAS, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgSBAS, usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_sbas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgSBAS, max_sbas),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scanmode2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgSBAS, scanmode2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scanmode1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgSBAS, scanmode1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_message_members = {
  "ublox_msgs__msg",  // message namespace
  "CfgSBAS",  // message name
  5,  // number of fields
  sizeof(ublox_msgs__msg__CfgSBAS),
  CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_message_member_array,  // message members
  CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_init_function,  // function to initialize message memory (memory has to be allocated)
  CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_message_type_support_handle = {
  0,
  &CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, CfgSBAS)() {
  if (!CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_message_type_support_handle.typesupport_identifier) {
    CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CfgSBAS__rosidl_typesupport_introspection_c__CfgSBAS_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
