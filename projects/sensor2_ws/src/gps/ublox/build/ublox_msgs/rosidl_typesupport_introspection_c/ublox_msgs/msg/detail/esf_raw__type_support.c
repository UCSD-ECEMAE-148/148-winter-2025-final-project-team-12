// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/EsfRAW.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/esf_raw__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/esf_raw__functions.h"
#include "ublox_msgs/msg/detail/esf_raw__struct.h"


// Include directives for member types
// Member `blocks`
#include "ublox_msgs/msg/esf_raw_block.h"
// Member `blocks`
#include "ublox_msgs/msg/detail/esf_raw_block__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__EsfRAW__init(message_memory);
}

void EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_fini_function(void * message_memory)
{
  ublox_msgs__msg__EsfRAW__fini(message_memory);
}

size_t EsfRAW__rosidl_typesupport_introspection_c__size_function__EsfRAWBlock__blocks(
  const void * untyped_member)
{
  const ublox_msgs__msg__EsfRAWBlock__Sequence * member =
    (const ublox_msgs__msg__EsfRAWBlock__Sequence *)(untyped_member);
  return member->size;
}

const void * EsfRAW__rosidl_typesupport_introspection_c__get_const_function__EsfRAWBlock__blocks(
  const void * untyped_member, size_t index)
{
  const ublox_msgs__msg__EsfRAWBlock__Sequence * member =
    (const ublox_msgs__msg__EsfRAWBlock__Sequence *)(untyped_member);
  return &member->data[index];
}

void * EsfRAW__rosidl_typesupport_introspection_c__get_function__EsfRAWBlock__blocks(
  void * untyped_member, size_t index)
{
  ublox_msgs__msg__EsfRAWBlock__Sequence * member =
    (ublox_msgs__msg__EsfRAWBlock__Sequence *)(untyped_member);
  return &member->data[index];
}

bool EsfRAW__rosidl_typesupport_introspection_c__resize_function__EsfRAWBlock__blocks(
  void * untyped_member, size_t size)
{
  ublox_msgs__msg__EsfRAWBlock__Sequence * member =
    (ublox_msgs__msg__EsfRAWBlock__Sequence *)(untyped_member);
  ublox_msgs__msg__EsfRAWBlock__Sequence__fini(member);
  return ublox_msgs__msg__EsfRAWBlock__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_message_member_array[2] = {
  {
    "reserved0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__EsfRAW, reserved0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blocks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__EsfRAW, blocks),  // bytes offset in struct
    NULL,  // default value
    EsfRAW__rosidl_typesupport_introspection_c__size_function__EsfRAWBlock__blocks,  // size() function pointer
    EsfRAW__rosidl_typesupport_introspection_c__get_const_function__EsfRAWBlock__blocks,  // get_const(index) function pointer
    EsfRAW__rosidl_typesupport_introspection_c__get_function__EsfRAWBlock__blocks,  // get(index) function pointer
    EsfRAW__rosidl_typesupport_introspection_c__resize_function__EsfRAWBlock__blocks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_message_members = {
  "ublox_msgs__msg",  // message namespace
  "EsfRAW",  // message name
  2,  // number of fields
  sizeof(ublox_msgs__msg__EsfRAW),
  EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_message_member_array,  // message members
  EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_init_function,  // function to initialize message memory (memory has to be allocated)
  EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_message_type_support_handle = {
  0,
  &EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, EsfRAW)() {
  EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, EsfRAWBlock)();
  if (!EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_message_type_support_handle.typesupport_identifier) {
    EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EsfRAW__rosidl_typesupport_introspection_c__EsfRAW_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
