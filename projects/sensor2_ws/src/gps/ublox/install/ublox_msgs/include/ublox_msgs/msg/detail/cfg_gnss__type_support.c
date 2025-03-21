// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/CfgGNSS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/cfg_gnss__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/cfg_gnss__functions.h"
#include "ublox_msgs/msg/detail/cfg_gnss__struct.h"


// Include directives for member types
// Member `blocks`
#include "ublox_msgs/msg/cfg_gnss_block.h"
// Member `blocks`
#include "ublox_msgs/msg/detail/cfg_gnss_block__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__CfgGNSS__init(message_memory);
}

void CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_fini_function(void * message_memory)
{
  ublox_msgs__msg__CfgGNSS__fini(message_memory);
}

size_t CfgGNSS__rosidl_typesupport_introspection_c__size_function__CfgGNSSBlock__blocks(
  const void * untyped_member)
{
  const ublox_msgs__msg__CfgGNSSBlock__Sequence * member =
    (const ublox_msgs__msg__CfgGNSSBlock__Sequence *)(untyped_member);
  return member->size;
}

const void * CfgGNSS__rosidl_typesupport_introspection_c__get_const_function__CfgGNSSBlock__blocks(
  const void * untyped_member, size_t index)
{
  const ublox_msgs__msg__CfgGNSSBlock__Sequence * member =
    (const ublox_msgs__msg__CfgGNSSBlock__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CfgGNSS__rosidl_typesupport_introspection_c__get_function__CfgGNSSBlock__blocks(
  void * untyped_member, size_t index)
{
  ublox_msgs__msg__CfgGNSSBlock__Sequence * member =
    (ublox_msgs__msg__CfgGNSSBlock__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CfgGNSS__rosidl_typesupport_introspection_c__resize_function__CfgGNSSBlock__blocks(
  void * untyped_member, size_t size)
{
  ublox_msgs__msg__CfgGNSSBlock__Sequence * member =
    (ublox_msgs__msg__CfgGNSSBlock__Sequence *)(untyped_member);
  ublox_msgs__msg__CfgGNSSBlock__Sequence__fini(member);
  return ublox_msgs__msg__CfgGNSSBlock__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_message_member_array[5] = {
  {
    "msg_ver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgGNSS, msg_ver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_trk_ch_hw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgGNSS, num_trk_ch_hw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_trk_ch_use",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgGNSS, num_trk_ch_use),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_config_blocks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__CfgGNSS, num_config_blocks),  // bytes offset in struct
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
    offsetof(ublox_msgs__msg__CfgGNSS, blocks),  // bytes offset in struct
    NULL,  // default value
    CfgGNSS__rosidl_typesupport_introspection_c__size_function__CfgGNSSBlock__blocks,  // size() function pointer
    CfgGNSS__rosidl_typesupport_introspection_c__get_const_function__CfgGNSSBlock__blocks,  // get_const(index) function pointer
    CfgGNSS__rosidl_typesupport_introspection_c__get_function__CfgGNSSBlock__blocks,  // get(index) function pointer
    CfgGNSS__rosidl_typesupport_introspection_c__resize_function__CfgGNSSBlock__blocks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_message_members = {
  "ublox_msgs__msg",  // message namespace
  "CfgGNSS",  // message name
  5,  // number of fields
  sizeof(ublox_msgs__msg__CfgGNSS),
  CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_message_member_array,  // message members
  CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_init_function,  // function to initialize message memory (memory has to be allocated)
  CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_message_type_support_handle = {
  0,
  &CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, CfgGNSS)() {
  CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, CfgGNSSBlock)();
  if (!CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_message_type_support_handle.typesupport_identifier) {
    CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CfgGNSS__rosidl_typesupport_introspection_c__CfgGNSS_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
