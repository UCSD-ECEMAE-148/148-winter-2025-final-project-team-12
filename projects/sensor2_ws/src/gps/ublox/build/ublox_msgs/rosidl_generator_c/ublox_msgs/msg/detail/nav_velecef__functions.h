// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ublox_msgs:msg/NavVELECEF.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_VELECEF__FUNCTIONS_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_VELECEF__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ublox_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ublox_msgs/msg/detail/nav_velecef__struct.h"

/// Initialize msg/NavVELECEF message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ublox_msgs__msg__NavVELECEF
 * )) before or use
 * ublox_msgs__msg__NavVELECEF__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
bool
ublox_msgs__msg__NavVELECEF__init(ublox_msgs__msg__NavVELECEF * msg);

/// Finalize msg/NavVELECEF message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
void
ublox_msgs__msg__NavVELECEF__fini(ublox_msgs__msg__NavVELECEF * msg);

/// Create msg/NavVELECEF message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ublox_msgs__msg__NavVELECEF__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
ublox_msgs__msg__NavVELECEF *
ublox_msgs__msg__NavVELECEF__create();

/// Destroy msg/NavVELECEF message.
/**
 * It calls
 * ublox_msgs__msg__NavVELECEF__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
void
ublox_msgs__msg__NavVELECEF__destroy(ublox_msgs__msg__NavVELECEF * msg);


/// Initialize array of msg/NavVELECEF messages.
/**
 * It allocates the memory for the number of elements and calls
 * ublox_msgs__msg__NavVELECEF__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
bool
ublox_msgs__msg__NavVELECEF__Sequence__init(ublox_msgs__msg__NavVELECEF__Sequence * array, size_t size);

/// Finalize array of msg/NavVELECEF messages.
/**
 * It calls
 * ublox_msgs__msg__NavVELECEF__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
void
ublox_msgs__msg__NavVELECEF__Sequence__fini(ublox_msgs__msg__NavVELECEF__Sequence * array);

/// Create array of msg/NavVELECEF messages.
/**
 * It allocates the memory for the array and calls
 * ublox_msgs__msg__NavVELECEF__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
ublox_msgs__msg__NavVELECEF__Sequence *
ublox_msgs__msg__NavVELECEF__Sequence__create(size_t size);

/// Destroy array of msg/NavVELECEF messages.
/**
 * It calls
 * ublox_msgs__msg__NavVELECEF__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
void
ublox_msgs__msg__NavVELECEF__Sequence__destroy(ublox_msgs__msg__NavVELECEF__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_VELECEF__FUNCTIONS_H_
