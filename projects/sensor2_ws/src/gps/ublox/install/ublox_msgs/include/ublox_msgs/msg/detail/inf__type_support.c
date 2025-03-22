// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/Inf.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/inf__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/inf__functions.h"
#include "ublox_msgs/msg/detail/inf__struct.h"


// Include directives for member types
// Member `str`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Inf__rosidl_typesupport_introspection_c__Inf_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__Inf__init(message_memory);
}

void Inf__rosidl_typesupport_introspection_c__Inf_fini_function(void * message_memory)
{
  ublox_msgs__msg__Inf__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Inf__rosidl_typesupport_introspection_c__Inf_message_member_array[1] = {
  {
    "str",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__Inf, str),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Inf__rosidl_typesupport_introspection_c__Inf_message_members = {
  "ublox_msgs__msg",  // message namespace
  "Inf",  // message name
  1,  // number of fields
  sizeof(ublox_msgs__msg__Inf),
  Inf__rosidl_typesupport_introspection_c__Inf_message_member_array,  // message members
  Inf__rosidl_typesupport_introspection_c__Inf_init_function,  // function to initialize message memory (memory has to be allocated)
  Inf__rosidl_typesupport_introspection_c__Inf_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Inf__rosidl_typesupport_introspection_c__Inf_message_type_support_handle = {
  0,
  &Inf__rosidl_typesupport_introspection_c__Inf_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, Inf)() {
  if (!Inf__rosidl_typesupport_introspection_c__Inf_message_type_support_handle.typesupport_identifier) {
    Inf__rosidl_typesupport_introspection_c__Inf_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Inf__rosidl_typesupport_introspection_c__Inf_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
