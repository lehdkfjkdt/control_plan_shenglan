// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lgsvl_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__FUNCTIONS_H_
#define LGSVL_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lgsvl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lgsvl_msgs/msg/detail/vehicle_odometry__struct.h"

/// Initialize msg/VehicleOdometry message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lgsvl_msgs__msg__VehicleOdometry
 * )) before or use
 * lgsvl_msgs__msg__VehicleOdometry__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
bool
lgsvl_msgs__msg__VehicleOdometry__init(lgsvl_msgs__msg__VehicleOdometry * msg);

/// Finalize msg/VehicleOdometry message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
void
lgsvl_msgs__msg__VehicleOdometry__fini(lgsvl_msgs__msg__VehicleOdometry * msg);

/// Create msg/VehicleOdometry message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lgsvl_msgs__msg__VehicleOdometry__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
lgsvl_msgs__msg__VehicleOdometry *
lgsvl_msgs__msg__VehicleOdometry__create();

/// Destroy msg/VehicleOdometry message.
/**
 * It calls
 * lgsvl_msgs__msg__VehicleOdometry__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
void
lgsvl_msgs__msg__VehicleOdometry__destroy(lgsvl_msgs__msg__VehicleOdometry * msg);

/// Check for msg/VehicleOdometry message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
bool
lgsvl_msgs__msg__VehicleOdometry__are_equal(const lgsvl_msgs__msg__VehicleOdometry * lhs, const lgsvl_msgs__msg__VehicleOdometry * rhs);

/// Copy a msg/VehicleOdometry message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
bool
lgsvl_msgs__msg__VehicleOdometry__copy(
  const lgsvl_msgs__msg__VehicleOdometry * input,
  lgsvl_msgs__msg__VehicleOdometry * output);

/// Initialize array of msg/VehicleOdometry messages.
/**
 * It allocates the memory for the number of elements and calls
 * lgsvl_msgs__msg__VehicleOdometry__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
bool
lgsvl_msgs__msg__VehicleOdometry__Sequence__init(lgsvl_msgs__msg__VehicleOdometry__Sequence * array, size_t size);

/// Finalize array of msg/VehicleOdometry messages.
/**
 * It calls
 * lgsvl_msgs__msg__VehicleOdometry__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
void
lgsvl_msgs__msg__VehicleOdometry__Sequence__fini(lgsvl_msgs__msg__VehicleOdometry__Sequence * array);

/// Create array of msg/VehicleOdometry messages.
/**
 * It allocates the memory for the array and calls
 * lgsvl_msgs__msg__VehicleOdometry__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
lgsvl_msgs__msg__VehicleOdometry__Sequence *
lgsvl_msgs__msg__VehicleOdometry__Sequence__create(size_t size);

/// Destroy array of msg/VehicleOdometry messages.
/**
 * It calls
 * lgsvl_msgs__msg__VehicleOdometry__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
void
lgsvl_msgs__msg__VehicleOdometry__Sequence__destroy(lgsvl_msgs__msg__VehicleOdometry__Sequence * array);

/// Check for msg/VehicleOdometry message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
bool
lgsvl_msgs__msg__VehicleOdometry__Sequence__are_equal(const lgsvl_msgs__msg__VehicleOdometry__Sequence * lhs, const lgsvl_msgs__msg__VehicleOdometry__Sequence * rhs);

/// Copy an array of msg/VehicleOdometry messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
bool
lgsvl_msgs__msg__VehicleOdometry__Sequence__copy(
  const lgsvl_msgs__msg__VehicleOdometry__Sequence * input,
  lgsvl_msgs__msg__VehicleOdometry__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LGSVL_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__FUNCTIONS_H_
