// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from livox_interfaces:msg/CustomPoint.idl
// generated code does not contain a copyright notice

#ifndef LIVOX_INTERFACES__MSG__DETAIL__CUSTOM_POINT__FUNCTIONS_H_
#define LIVOX_INTERFACES__MSG__DETAIL__CUSTOM_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "livox_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "livox_interfaces/msg/detail/custom_point__struct.h"

/// Initialize msg/CustomPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * livox_interfaces__msg__CustomPoint
 * )) before or use
 * livox_interfaces__msg__CustomPoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_livox_interfaces
bool
livox_interfaces__msg__CustomPoint__init(livox_interfaces__msg__CustomPoint * msg);

/// Finalize msg/CustomPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_livox_interfaces
void
livox_interfaces__msg__CustomPoint__fini(livox_interfaces__msg__CustomPoint * msg);

/// Create msg/CustomPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * livox_interfaces__msg__CustomPoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_livox_interfaces
livox_interfaces__msg__CustomPoint *
livox_interfaces__msg__CustomPoint__create();

/// Destroy msg/CustomPoint message.
/**
 * It calls
 * livox_interfaces__msg__CustomPoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_livox_interfaces
void
livox_interfaces__msg__CustomPoint__destroy(livox_interfaces__msg__CustomPoint * msg);


/// Initialize array of msg/CustomPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * livox_interfaces__msg__CustomPoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_livox_interfaces
bool
livox_interfaces__msg__CustomPoint__Sequence__init(livox_interfaces__msg__CustomPoint__Sequence * array, size_t size);

/// Finalize array of msg/CustomPoint messages.
/**
 * It calls
 * livox_interfaces__msg__CustomPoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_livox_interfaces
void
livox_interfaces__msg__CustomPoint__Sequence__fini(livox_interfaces__msg__CustomPoint__Sequence * array);

/// Create array of msg/CustomPoint messages.
/**
 * It allocates the memory for the array and calls
 * livox_interfaces__msg__CustomPoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_livox_interfaces
livox_interfaces__msg__CustomPoint__Sequence *
livox_interfaces__msg__CustomPoint__Sequence__create(size_t size);

/// Destroy array of msg/CustomPoint messages.
/**
 * It calls
 * livox_interfaces__msg__CustomPoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_livox_interfaces
void
livox_interfaces__msg__CustomPoint__Sequence__destroy(livox_interfaces__msg__CustomPoint__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LIVOX_INTERFACES__MSG__DETAIL__CUSTOM_POINT__FUNCTIONS_H_
