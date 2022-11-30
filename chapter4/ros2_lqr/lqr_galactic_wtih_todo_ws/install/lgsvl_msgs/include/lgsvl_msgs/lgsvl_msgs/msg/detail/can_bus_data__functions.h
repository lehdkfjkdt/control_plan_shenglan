// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lgsvl_msgs:msg/CanBusData.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__CAN_BUS_DATA__FUNCTIONS_H_
#define LGSVL_MSGS__MSG__DETAIL__CAN_BUS_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lgsvl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lgsvl_msgs/msg/detail/can_bus_data__struct.h"

/// Initialize msg/CanBusData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lgsvl_msgs__msg__CanBusData
 * )) before or use
 * lgsvl_msgs__msg__CanBusData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
bool
lgsvl_msgs__msg__CanBusData__init(lgsvl_msgs__msg__CanBusData * msg);

/// Finalize msg/CanBusData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
void
lgsvl_msgs__msg__CanBusData__fini(lgsvl_msgs__msg__CanBusData * msg);

/// Create msg/CanBusData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lgsvl_msgs__msg__CanBusData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
lgsvl_msgs__msg__CanBusData *
lgsvl_msgs__msg__CanBusData__create();

/// Destroy msg/CanBusData message.
/**
 * It calls
 * lgsvl_msgs__msg__CanBusData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
void
lgsvl_msgs__msg__CanBusData__destroy(lgsvl_msgs__msg__CanBusData * msg);

/// Check for msg/CanBusData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
bool
lgsvl_msgs__msg__CanBusData__are_equal(const lgsvl_msgs__msg__CanBusData * lhs, const lgsvl_msgs__msg__CanBusData * rhs);

/// Copy a msg/CanBusData message.
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
lgsvl_msgs__msg__CanBusData__copy(
  const lgsvl_msgs__msg__CanBusData * input,
  lgsvl_msgs__msg__CanBusData * output);

/// Initialize array of msg/CanBusData messages.
/**
 * It allocates the memory for the number of elements and calls
 * lgsvl_msgs__msg__CanBusData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
bool
lgsvl_msgs__msg__CanBusData__Sequence__init(lgsvl_msgs__msg__CanBusData__Sequence * array, size_t size);

/// Finalize array of msg/CanBusData messages.
/**
 * It calls
 * lgsvl_msgs__msg__CanBusData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
void
lgsvl_msgs__msg__CanBusData__Sequence__fini(lgsvl_msgs__msg__CanBusData__Sequence * array);

/// Create array of msg/CanBusData messages.
/**
 * It allocates the memory for the array and calls
 * lgsvl_msgs__msg__CanBusData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
lgsvl_msgs__msg__CanBusData__Sequence *
lgsvl_msgs__msg__CanBusData__Sequence__create(size_t size);

/// Destroy array of msg/CanBusData messages.
/**
 * It calls
 * lgsvl_msgs__msg__CanBusData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
void
lgsvl_msgs__msg__CanBusData__Sequence__destroy(lgsvl_msgs__msg__CanBusData__Sequence * array);

/// Check for msg/CanBusData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lgsvl_msgs
bool
lgsvl_msgs__msg__CanBusData__Sequence__are_equal(const lgsvl_msgs__msg__CanBusData__Sequence * lhs, const lgsvl_msgs__msg__CanBusData__Sequence * rhs);

/// Copy an array of msg/CanBusData messages.
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
lgsvl_msgs__msg__CanBusData__Sequence__copy(
  const lgsvl_msgs__msg__CanBusData__Sequence * input,
  lgsvl_msgs__msg__CanBusData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LGSVL_MSGS__MSG__DETAIL__CAN_BUS_DATA__FUNCTIONS_H_
