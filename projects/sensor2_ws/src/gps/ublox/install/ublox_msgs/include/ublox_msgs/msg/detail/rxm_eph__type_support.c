// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/RxmEPH.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/rxm_eph__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/rxm_eph__functions.h"
#include "ublox_msgs/msg/detail/rxm_eph__struct.h"


// Include directives for member types
// Member `sf1d`
// Member `sf2d`
// Member `sf3d`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__RxmEPH__init(message_memory);
}

void RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_fini_function(void * message_memory)
{
  ublox_msgs__msg__RxmEPH__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_message_member_array[5] = {
  {
    "svid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__RxmEPH, svid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "how",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__RxmEPH, how),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sf1d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__RxmEPH, sf1d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sf2d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__RxmEPH, sf2d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sf3d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__RxmEPH, sf3d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_message_members = {
  "ublox_msgs__msg",  // message namespace
  "RxmEPH",  // message name
  5,  // number of fields
  sizeof(ublox_msgs__msg__RxmEPH),
  RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_message_member_array,  // message members
  RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_init_function,  // function to initialize message memory (memory has to be allocated)
  RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_message_type_support_handle = {
  0,
  &RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, RxmEPH)() {
  if (!RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_message_type_support_handle.typesupport_identifier) {
    RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RxmEPH__rosidl_typesupport_introspection_c__RxmEPH_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
