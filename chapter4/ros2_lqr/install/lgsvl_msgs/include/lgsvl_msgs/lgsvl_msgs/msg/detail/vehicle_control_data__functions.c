// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lgsvl_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice
#include "lgsvl_msgs/msg/detail/vehicle_control_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
lgsvl_msgs__msg__VehicleControlData__init(lgsvl_msgs__msg__VehicleControlData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lgsvl_msgs__msg__VehicleControlData__fini(msg);
    return false;
  }
  // acceleration_pct
  // braking_pct
  // target_wheel_angle
  // target_wheel_angular_rate
  // target_gear
  return true;
}

void
lgsvl_msgs__msg__VehicleControlData__fini(lgsvl_msgs__msg__VehicleControlData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // acceleration_pct
  // braking_pct
  // target_wheel_angle
  // target_wheel_angular_rate
  // target_gear
}

bool
lgsvl_msgs__msg__VehicleControlData__are_equal(const lgsvl_msgs__msg__VehicleControlData * lhs, const lgsvl_msgs__msg__VehicleControlData * rhs)
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
  // acceleration_pct
  if (lhs->acceleration_pct != rhs->acceleration_pct) {
    return false;
  }
  // braking_pct
  if (lhs->braking_pct != rhs->braking_pct) {
    return false;
  }
  // target_wheel_angle
  if (lhs->target_wheel_angle != rhs->target_wheel_angle) {
    return false;
  }
  // target_wheel_angular_rate
  if (lhs->target_wheel_angular_rate != rhs->target_wheel_angular_rate) {
    return false;
  }
  // target_gear
  if (lhs->target_gear != rhs->target_gear) {
    return false;
  }
  return true;
}

bool
lgsvl_msgs__msg__VehicleControlData__copy(
  const lgsvl_msgs__msg__VehicleControlData * input,
  lgsvl_msgs__msg__VehicleControlData * output)
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
  // acceleration_pct
  output->acceleration_pct = input->acceleration_pct;
  // braking_pct
  output->braking_pct = input->braking_pct;
  // target_wheel_angle
  output->target_wheel_angle = input->target_wheel_angle;
  // target_wheel_angular_rate
  output->target_wheel_angular_rate = input->target_wheel_angular_rate;
  // target_gear
  output->target_gear = input->target_gear;
  return true;
}

lgsvl_msgs__msg__VehicleControlData *
lgsvl_msgs__msg__VehicleControlData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__VehicleControlData * msg = (lgsvl_msgs__msg__VehicleControlData *)allocator.allocate(sizeof(lgsvl_msgs__msg__VehicleControlData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lgsvl_msgs__msg__VehicleControlData));
  bool success = lgsvl_msgs__msg__VehicleControlData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lgsvl_msgs__msg__VehicleControlData__destroy(lgsvl_msgs__msg__VehicleControlData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lgsvl_msgs__msg__VehicleControlData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lgsvl_msgs__msg__VehicleControlData__Sequence__init(lgsvl_msgs__msg__VehicleControlData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__VehicleControlData * data = NULL;

  if (size) {
    data = (lgsvl_msgs__msg__VehicleControlData *)allocator.zero_allocate(size, sizeof(lgsvl_msgs__msg__VehicleControlData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lgsvl_msgs__msg__VehicleControlData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lgsvl_msgs__msg__VehicleControlData__fini(&data[i - 1]);
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
lgsvl_msgs__msg__VehicleControlData__Sequence__fini(lgsvl_msgs__msg__VehicleControlData__Sequence * array)
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
      lgsvl_msgs__msg__VehicleControlData__fini(&array->data[i]);
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

lgsvl_msgs__msg__VehicleControlData__Sequence *
lgsvl_msgs__msg__VehicleControlData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__VehicleControlData__Sequence * array = (lgsvl_msgs__msg__VehicleControlData__Sequence *)allocator.allocate(sizeof(lgsvl_msgs__msg__VehicleControlData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lgsvl_msgs__msg__VehicleControlData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lgsvl_msgs__msg__VehicleControlData__Sequence__destroy(lgsvl_msgs__msg__VehicleControlData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lgsvl_msgs__msg__VehicleControlData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lgsvl_msgs__msg__VehicleControlData__Sequence__are_equal(const lgsvl_msgs__msg__VehicleControlData__Sequence * lhs, const lgsvl_msgs__msg__VehicleControlData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lgsvl_msgs__msg__VehicleControlData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lgsvl_msgs__msg__VehicleControlData__Sequence__copy(
  const lgsvl_msgs__msg__VehicleControlData__Sequence * input,
  lgsvl_msgs__msg__VehicleControlData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lgsvl_msgs__msg__VehicleControlData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lgsvl_msgs__msg__VehicleControlData * data =
      (lgsvl_msgs__msg__VehicleControlData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lgsvl_msgs__msg__VehicleControlData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lgsvl_msgs__msg__VehicleControlData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lgsvl_msgs__msg__VehicleControlData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
