// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lgsvl_msgs:msg/VehicleStateData.idl
// generated code does not contain a copyright notice
#include "lgsvl_msgs/msg/detail/vehicle_state_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
lgsvl_msgs__msg__VehicleStateData__init(lgsvl_msgs__msg__VehicleStateData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lgsvl_msgs__msg__VehicleStateData__fini(msg);
    return false;
  }
  // blinker_state
  // headlight_state
  // wiper_state
  // current_gear
  // vehicle_mode
  // hand_brake_active
  // horn_active
  // autonomous_mode_active
  return true;
}

void
lgsvl_msgs__msg__VehicleStateData__fini(lgsvl_msgs__msg__VehicleStateData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // blinker_state
  // headlight_state
  // wiper_state
  // current_gear
  // vehicle_mode
  // hand_brake_active
  // horn_active
  // autonomous_mode_active
}

bool
lgsvl_msgs__msg__VehicleStateData__are_equal(const lgsvl_msgs__msg__VehicleStateData * lhs, const lgsvl_msgs__msg__VehicleStateData * rhs)
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
  // blinker_state
  if (lhs->blinker_state != rhs->blinker_state) {
    return false;
  }
  // headlight_state
  if (lhs->headlight_state != rhs->headlight_state) {
    return false;
  }
  // wiper_state
  if (lhs->wiper_state != rhs->wiper_state) {
    return false;
  }
  // current_gear
  if (lhs->current_gear != rhs->current_gear) {
    return false;
  }
  // vehicle_mode
  if (lhs->vehicle_mode != rhs->vehicle_mode) {
    return false;
  }
  // hand_brake_active
  if (lhs->hand_brake_active != rhs->hand_brake_active) {
    return false;
  }
  // horn_active
  if (lhs->horn_active != rhs->horn_active) {
    return false;
  }
  // autonomous_mode_active
  if (lhs->autonomous_mode_active != rhs->autonomous_mode_active) {
    return false;
  }
  return true;
}

bool
lgsvl_msgs__msg__VehicleStateData__copy(
  const lgsvl_msgs__msg__VehicleStateData * input,
  lgsvl_msgs__msg__VehicleStateData * output)
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
  // blinker_state
  output->blinker_state = input->blinker_state;
  // headlight_state
  output->headlight_state = input->headlight_state;
  // wiper_state
  output->wiper_state = input->wiper_state;
  // current_gear
  output->current_gear = input->current_gear;
  // vehicle_mode
  output->vehicle_mode = input->vehicle_mode;
  // hand_brake_active
  output->hand_brake_active = input->hand_brake_active;
  // horn_active
  output->horn_active = input->horn_active;
  // autonomous_mode_active
  output->autonomous_mode_active = input->autonomous_mode_active;
  return true;
}

lgsvl_msgs__msg__VehicleStateData *
lgsvl_msgs__msg__VehicleStateData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__VehicleStateData * msg = (lgsvl_msgs__msg__VehicleStateData *)allocator.allocate(sizeof(lgsvl_msgs__msg__VehicleStateData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lgsvl_msgs__msg__VehicleStateData));
  bool success = lgsvl_msgs__msg__VehicleStateData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lgsvl_msgs__msg__VehicleStateData__destroy(lgsvl_msgs__msg__VehicleStateData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lgsvl_msgs__msg__VehicleStateData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lgsvl_msgs__msg__VehicleStateData__Sequence__init(lgsvl_msgs__msg__VehicleStateData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__VehicleStateData * data = NULL;

  if (size) {
    data = (lgsvl_msgs__msg__VehicleStateData *)allocator.zero_allocate(size, sizeof(lgsvl_msgs__msg__VehicleStateData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lgsvl_msgs__msg__VehicleStateData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lgsvl_msgs__msg__VehicleStateData__fini(&data[i - 1]);
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
lgsvl_msgs__msg__VehicleStateData__Sequence__fini(lgsvl_msgs__msg__VehicleStateData__Sequence * array)
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
      lgsvl_msgs__msg__VehicleStateData__fini(&array->data[i]);
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

lgsvl_msgs__msg__VehicleStateData__Sequence *
lgsvl_msgs__msg__VehicleStateData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__VehicleStateData__Sequence * array = (lgsvl_msgs__msg__VehicleStateData__Sequence *)allocator.allocate(sizeof(lgsvl_msgs__msg__VehicleStateData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lgsvl_msgs__msg__VehicleStateData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lgsvl_msgs__msg__VehicleStateData__Sequence__destroy(lgsvl_msgs__msg__VehicleStateData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lgsvl_msgs__msg__VehicleStateData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lgsvl_msgs__msg__VehicleStateData__Sequence__are_equal(const lgsvl_msgs__msg__VehicleStateData__Sequence * lhs, const lgsvl_msgs__msg__VehicleStateData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lgsvl_msgs__msg__VehicleStateData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lgsvl_msgs__msg__VehicleStateData__Sequence__copy(
  const lgsvl_msgs__msg__VehicleStateData__Sequence * input,
  lgsvl_msgs__msg__VehicleStateData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lgsvl_msgs__msg__VehicleStateData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lgsvl_msgs__msg__VehicleStateData * data =
      (lgsvl_msgs__msg__VehicleStateData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lgsvl_msgs__msg__VehicleStateData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lgsvl_msgs__msg__VehicleStateData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lgsvl_msgs__msg__VehicleStateData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
