// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/EsfSTATUS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/esf_status__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/esf_status__functions.h"
#include "ublox_msgs/msg/detail/esf_status__struct.h"


// Include directives for member types
// Member `sens`
#include "ublox_msgs/msg/esf_status_sens.h"
// Member `sens`
#include "ublox_msgs/msg/detail/esf_status_sens__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__EsfSTATUS__init(message_memory);
}

void EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_fini_function(void * message_memory)
{
  ublox_msgs__msg__EsfSTATUS__fini(message_memory);
}

size_t EsfSTATUS__rosidl_typesupport_introspection_c__size_function__EsfSTATUSSens__sens(
  const void * untyped_member)
{
  const ublox_msgs__msg__EsfSTATUSSens__Sequence * member =
    (const ublox_msgs__msg__EsfSTATUSSens__Sequence *)(untyped_member);
  return member->size;
}

const void * EsfSTATUS__rosidl_typesupport_introspection_c__get_const_function__EsfSTATUSSens__sens(
  const void * untyped_member, size_t index)
{
  const ublox_msgs__msg__EsfSTATUSSens__Sequence * member =
    (const ublox_msgs__msg__EsfSTATUSSens__Sequence *)(untyped_member);
  return &member->data[index];
}

void * EsfSTATUS__rosidl_typesupport_introspection_c__get_function__EsfSTATUSSens__sens(
  void * untyped_member, size_t index)
{
  ublox_msgs__msg__EsfSTATUSSens__Sequence * member =
    (ublox_msgs__msg__EsfSTATUSSens__Sequence *)(untyped_member);
  return &member->data[index];
}

bool EsfSTATUS__rosidl_typesupport_introspection_c__resize_function__EsfSTATUSSens__sens(
  void * untyped_member, size_t size)
{
  ublox_msgs__msg__EsfSTATUSSens__Sequence * member =
    (ublox_msgs__msg__EsfSTATUSSens__Sequence *)(untyped_member);
  ublox_msgs__msg__EsfSTATUSSens__Sequence__fini(member);
  return ublox_msgs__msg__EsfSTATUSSens__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_message_member_array[7] = {
  {
    "i_tow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__EsfSTATUS, i_tow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__EsfSTATUS, version),  // bytes offset in struct
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
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__EsfSTATUS, reserved1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fusion_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__EsfSTATUS, fusion_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__EsfSTATUS, reserved2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_sens",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__EsfSTATUS, num_sens),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sens",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__EsfSTATUS, sens),  // bytes offset in struct
    NULL,  // default value
    EsfSTATUS__rosidl_typesupport_introspection_c__size_function__EsfSTATUSSens__sens,  // size() function pointer
    EsfSTATUS__rosidl_typesupport_introspection_c__get_const_function__EsfSTATUSSens__sens,  // get_const(index) function pointer
    EsfSTATUS__rosidl_typesupport_introspection_c__get_function__EsfSTATUSSens__sens,  // get(index) function pointer
    EsfSTATUS__rosidl_typesupport_introspection_c__resize_function__EsfSTATUSSens__sens  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_message_members = {
  "ublox_msgs__msg",  // message namespace
  "EsfSTATUS",  // message name
  7,  // number of fields
  sizeof(ublox_msgs__msg__EsfSTATUS),
  EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_message_member_array,  // message members
  EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_init_function,  // function to initialize message memory (memory has to be allocated)
  EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_message_type_support_handle = {
  0,
  &EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, EsfSTATUS)() {
  EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, EsfSTATUSSens)();
  if (!EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_message_type_support_handle.typesupport_identifier) {
    EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EsfSTATUS__rosidl_typesupport_introspection_c__EsfSTATUS_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
