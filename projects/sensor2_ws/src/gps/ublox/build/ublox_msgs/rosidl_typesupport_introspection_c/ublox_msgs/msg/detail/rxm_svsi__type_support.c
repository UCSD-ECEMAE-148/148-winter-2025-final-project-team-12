// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/RxmSVSI.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/rxm_svsi__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/rxm_svsi__functions.h"
#include "ublox_msgs/msg/detail/rxm_svsi__struct.h"


// Include directives for member types
// Member `sv`
#include "ublox_msgs/msg/rxm_svsisv.h"
// Member `sv`
#include "ublox_msgs/msg/detail/rxm_svsisv__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__RxmSVSI__init(message_memory);
}

void RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_fini_function(void * message_memory)
{
  ublox_msgs__msg__RxmSVSI__fini(message_memory);
}

size_t RxmSVSI__rosidl_typesupport_introspection_c__size_function__RxmSVSISV__sv(
  const void * untyped_member)
{
  const ublox_msgs__msg__RxmSVSISV__Sequence * member =
    (const ublox_msgs__msg__RxmSVSISV__Sequence *)(untyped_member);
  return member->size;
}

const void * RxmSVSI__rosidl_typesupport_introspection_c__get_const_function__RxmSVSISV__sv(
  const void * untyped_member, size_t index)
{
  const ublox_msgs__msg__RxmSVSISV__Sequence * member =
    (const ublox_msgs__msg__RxmSVSISV__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RxmSVSI__rosidl_typesupport_introspection_c__get_function__RxmSVSISV__sv(
  void * untyped_member, size_t index)
{
  ublox_msgs__msg__RxmSVSISV__Sequence * member =
    (ublox_msgs__msg__RxmSVSISV__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RxmSVSI__rosidl_typesupport_introspection_c__resize_function__RxmSVSISV__sv(
  void * untyped_member, size_t size)
{
  ublox_msgs__msg__RxmSVSISV__Sequence * member =
    (ublox_msgs__msg__RxmSVSISV__Sequence *)(untyped_member);
  ublox_msgs__msg__RxmSVSISV__Sequence__fini(member);
  return ublox_msgs__msg__RxmSVSISV__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_message_member_array[5] = {
  {
    "i_tow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__RxmSVSI, i_tow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "week",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__RxmSVSI, week),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_vis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__RxmSVSI, num_vis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_sv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__RxmSVSI, num_sv),  // bytes offset in struct
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
    offsetof(ublox_msgs__msg__RxmSVSI, sv),  // bytes offset in struct
    NULL,  // default value
    RxmSVSI__rosidl_typesupport_introspection_c__size_function__RxmSVSISV__sv,  // size() function pointer
    RxmSVSI__rosidl_typesupport_introspection_c__get_const_function__RxmSVSISV__sv,  // get_const(index) function pointer
    RxmSVSI__rosidl_typesupport_introspection_c__get_function__RxmSVSISV__sv,  // get(index) function pointer
    RxmSVSI__rosidl_typesupport_introspection_c__resize_function__RxmSVSISV__sv  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_message_members = {
  "ublox_msgs__msg",  // message namespace
  "RxmSVSI",  // message name
  5,  // number of fields
  sizeof(ublox_msgs__msg__RxmSVSI),
  RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_message_member_array,  // message members
  RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_init_function,  // function to initialize message memory (memory has to be allocated)
  RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_message_type_support_handle = {
  0,
  &RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, RxmSVSI)() {
  RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, RxmSVSISV)();
  if (!RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_message_type_support_handle.typesupport_identifier) {
    RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RxmSVSI__rosidl_typesupport_introspection_c__RxmSVSI_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
