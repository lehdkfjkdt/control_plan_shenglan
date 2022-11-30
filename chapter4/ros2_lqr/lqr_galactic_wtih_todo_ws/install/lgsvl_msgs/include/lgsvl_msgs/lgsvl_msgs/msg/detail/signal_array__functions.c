// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lgsvl_msgs:msg/SignalArray.idl
// generated code does not contain a copyright notice
#include "lgsvl_msgs/msg/detail/signal_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `signals`
#include "lgsvl_msgs/msg/detail/signal__functions.h"

bool
lgsvl_msgs__msg__SignalArray__init(lgsvl_msgs__msg__SignalArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lgsvl_msgs__msg__SignalArray__fini(msg);
    return false;
  }
  // signals
  if (!lgsvl_msgs__msg__Signal__Sequence__init(&msg->signals, 0)) {
    lgsvl_msgs__msg__SignalArray__fini(msg);
    return false;
  }
  return true;
}

void
lgsvl_msgs__msg__SignalArray__fini(lgsvl_msgs__msg__SignalArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // signals
  lgsvl_msgs__msg__Signal__Sequence__fini(&msg->signals);
}

bool
lgsvl_msgs__msg__SignalArray__are_equal(const lgsvl_msgs__msg__SignalArray * lhs, const lgsvl_msgs__msg__SignalArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // signals
  if (!lgsvl_msgs__msg__Signal__Sequence__are_equal(
      &(lhs->signals), &(rhs->signals)))
  {
    return false;
  }
  return true;
}

bool
lgsvl_msgs__msg__SignalArray__copy(
  const lgsvl_msgs__msg__SignalArray * input,
  lgsvl_msgs__msg__SignalArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // signals
  if (!lgsvl_msgs__msg__Signal__Sequence__copy(
      &(input->signals), &(output->signals)))
  {
    return false;
  }
  return true;
}

lgsvl_msgs__msg__SignalArray *
lgsvl_msgs__msg__SignalArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__SignalArray * msg = (lgsvl_msgs__msg__SignalArray *)allocator.allocate(sizeof(lgsvl_msgs__msg__SignalArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lgsvl_msgs__msg__SignalArray));
  bool success = lgsvl_msgs__msg__SignalArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lgsvl_msgs__msg__SignalArray__destroy(lgsvl_msgs__msg__SignalArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lgsvl_msgs__msg__SignalArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lgsvl_msgs__msg__SignalArray__Sequence__init(lgsvl_msgs__msg__SignalArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__SignalArray * data = NULL;

  if (size) {
    data = (lgsvl_msgs__msg__SignalArray *)allocator.zero_allocate(size, sizeof(lgsvl_msgs__msg__SignalArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lgsvl_msgs__msg__SignalArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lgsvl_msgs__msg__SignalArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lgsvl_msgs__msg__SignalArray__Sequence__fini(lgsvl_msgs__msg__SignalArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lgsvl_msgs__msg__SignalArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lgsvl_msgs__msg__SignalArray__Sequence *
lgsvl_msgs__msg__SignalArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__SignalArray__Sequence * array = (lgsvl_msgs__msg__SignalArray__Sequence *)allocator.allocate(sizeof(lgsvl_msgs__msg__SignalArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lgsvl_msgs__msg__SignalArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lgsvl_msgs__msg__SignalArray__Sequence__destroy(lgsvl_msgs__msg__SignalArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lgsvl_msgs__msg__SignalArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lgsvl_msgs__msg__SignalArray__Sequence__are_equal(const lgsvl_msgs__msg__SignalArray__Sequence * lhs, const lgsvl_msgs__msg__SignalArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lgsvl_msgs__msg__SignalArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lgsvl_msgs__msg__SignalArray__Sequence__copy(
  const lgsvl_msgs__msg__SignalArray__Sequence * input,
  lgsvl_msgs__msg__SignalArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lgsvl_msgs__msg__SignalArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lgsvl_msgs__msg__SignalArray * data =
      (lgsvl_msgs__msg__SignalArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lgsvl_msgs__msg__SignalArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lgsvl_msgs__msg__SignalArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lgsvl_msgs__msg__SignalArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
