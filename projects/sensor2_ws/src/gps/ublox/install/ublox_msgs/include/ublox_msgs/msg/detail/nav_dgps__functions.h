// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ublox_msgs:msg/NavDGPS.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_DGPS__FUNCTIONS_H_
#define UBLOX_MSGS__MSG__DETAIL__NAV_DGPS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ublox_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ublox_msgs/msg/detail/nav_dgps__struct.h"

/// Initialize msg/NavDGPS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ublox_msgs__msg__NavDGPS
 * )) before or use
 * ublox_msgs__msg__NavDGPS__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
bool
ublox_msgs__msg__NavDGPS__init(ublox_msgs__msg__NavDGPS * msg);

/// Finalize msg/NavDGPS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
void
ublox_msgs__msg__NavDGPS__fini(ublox_msgs__msg__NavDGPS * msg);

/// Create msg/NavDGPS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ublox_msgs__msg__NavDGPS__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
ublox_msgs__msg__NavDGPS *
ublox_msgs__msg__NavDGPS__create();

/// Destroy msg/NavDGPS message.
/**
 * It calls
 * ublox_msgs__msg__NavDGPS__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
void
ublox_msgs__msg__NavDGPS__destroy(ublox_msgs__msg__NavDGPS * msg);


/// Initialize array of msg/NavDGPS messages.
/**
 * It allocates the memory for the number of elements and calls
 * ublox_msgs__msg__NavDGPS__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
bool
ublox_msgs__msg__NavDGPS__Sequence__init(ublox_msgs__msg__NavDGPS__Sequence * array, size_t size);

/// Finalize array of msg/NavDGPS messages.
/**
 * It calls
 * ublox_msgs__msg__NavDGPS__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
void
ublox_msgs__msg__NavDGPS__Sequence__fini(ublox_msgs__msg__NavDGPS__Sequence * array);

/// Create array of msg/NavDGPS messages.
/**
 * It allocates the memory for the array and calls
 * ublox_msgs__msg__NavDGPS__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
ublox_msgs__msg__NavDGPS__Sequence *
ublox_msgs__msg__NavDGPS__Sequence__create(size_t size);

/// Destroy array of msg/NavDGPS messages.
/**
 * It calls
 * ublox_msgs__msg__NavDGPS__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
void
ublox_msgs__msg__NavDGPS__Sequence__destroy(ublox_msgs__msg__NavDGPS__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_DGPS__FUNCTIONS_H_
