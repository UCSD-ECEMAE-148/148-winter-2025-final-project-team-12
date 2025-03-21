// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/NavCLOCK.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/nav_clock__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/nav_clock__functions.h"
#include "ublox_msgs/msg/detail/nav_clock__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__NavCLOCK__init(message_memory);
}

void NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_fini_function(void * message_memory)
{
  ublox_msgs__msg__NavCLOCK__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_message_member_array[5] = {
  {
    "i_tow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavCLOCK, i_tow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clk_b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavCLOCK, clk_b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clk_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavCLOCK, clk_d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavCLOCK, t_acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f_acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__NavCLOCK, f_acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_message_members = {
  "ublox_msgs__msg",  // message namespace
  "NavCLOCK",  // message name
  5,  // number of fields
  sizeof(ublox_msgs__msg__NavCLOCK),
  NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_message_member_array,  // message members
  NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_init_function,  // function to initialize message memory (memory has to be allocated)
  NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_message_type_support_handle = {
  0,
  &NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, NavCLOCK)() {
  if (!NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_message_type_support_handle.typesupport_identifier) {
    NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavCLOCK__rosidl_typesupport_introspection_c__NavCLOCK_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
