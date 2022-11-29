// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lgsvl_msgs:msg/Detection3D.idl
// generated code does not contain a copyright notice
#include "lgsvl_msgs/msg/detail/detection3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `bbox`
#include "lgsvl_msgs/msg/detail/bounding_box3_d__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
lgsvl_msgs__msg__Detection3D__init(lgsvl_msgs__msg__Detection3D * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lgsvl_msgs__msg__Detection3D__fini(msg);
    return false;
  }
  // id
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    lgsvl_msgs__msg__Detection3D__fini(msg);
    return false;
  }
  // score
  // bbox
  if (!lgsvl_msgs__msg__BoundingBox3D__init(&msg->bbox)) {
    lgsvl_msgs__msg__Detection3D__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    lgsvl_msgs__msg__Detection3D__fini(msg);
    return false;
  }
  return true;
}

void
lgsvl_msgs__msg__Detection3D__fini(lgsvl_msgs__msg__Detection3D * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // score
  // bbox
  lgsvl_msgs__msg__BoundingBox3D__fini(&msg->bbox);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
}

bool
lgsvl_msgs__msg__Detection3D__are_equal(const lgsvl_msgs__msg__Detection3D * lhs, const lgsvl_msgs__msg__Detection3D * rhs)
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
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // bbox
  if (!lgsvl_msgs__msg__BoundingBox3D__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  return true;
}

bool
lgsvl_msgs__msg__Detection3D__copy(
  const lgsvl_msgs__msg__Detection3D * input,
  lgsvl_msgs__msg__Detection3D * output)
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
  // id
  output->id = input->id;
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // bbox
  if (!lgsvl_msgs__msg__BoundingBox3D__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  return true;
}

lgsvl_msgs__msg__Detection3D *
lgsvl_msgs__msg__Detection3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__Detection3D * msg = (lgsvl_msgs__msg__Detection3D *)allocator.allocate(sizeof(lgsvl_msgs__msg__Detection3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lgsvl_msgs__msg__Detection3D));
  bool success = lgsvl_msgs__msg__Detection3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lgsvl_msgs__msg__Detection3D__destroy(lgsvl_msgs__msg__Detection3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lgsvl_msgs__msg__Detection3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lgsvl_msgs__msg__Detection3D__Sequence__init(lgsvl_msgs__msg__Detection3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__Detection3D * data = NULL;

  if (size) {
    data = (lgsvl_msgs__msg__Detection3D *)allocator.zero_allocate(size, sizeof(lgsvl_msgs__msg__Detection3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lgsvl_msgs__msg__Detection3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lgsvl_msgs__msg__Detection3D__fini(&data[i - 1]);
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
lgsvl_msgs__msg__Detection3D__Sequence__fini(lgsvl_msgs__msg__Detection3D__Sequence * array)
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
      lgsvl_msgs__msg__Detection3D__fini(&array->data[i]);
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

lgsvl_msgs__msg__Detection3D__Sequence *
lgsvl_msgs__msg__Detection3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__Detection3D__Sequence * array = (lgsvl_msgs__msg__Detection3D__Sequence *)allocator.allocate(sizeof(lgsvl_msgs__msg__Detection3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lgsvl_msgs__msg__Detection3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lgsvl_msgs__msg__Detection3D__Sequence__destroy(lgsvl_msgs__msg__Detection3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lgsvl_msgs__msg__Detection3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lgsvl_msgs__msg__Detection3D__Sequence__are_equal(const lgsvl_msgs__msg__Detection3D__Sequence * lhs, const lgsvl_msgs__msg__Detection3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lgsvl_msgs__msg__Detection3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lgsvl_msgs__msg__Detection3D__Sequence__copy(
  const lgsvl_msgs__msg__Detection3D__Sequence * input,
  lgsvl_msgs__msg__Detection3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lgsvl_msgs__msg__Detection3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lgsvl_msgs__msg__Detection3D * data =
      (lgsvl_msgs__msg__Detection3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lgsvl_msgs__msg__Detection3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lgsvl_msgs__msg__Detection3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lgsvl_msgs__msg__Detection3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
