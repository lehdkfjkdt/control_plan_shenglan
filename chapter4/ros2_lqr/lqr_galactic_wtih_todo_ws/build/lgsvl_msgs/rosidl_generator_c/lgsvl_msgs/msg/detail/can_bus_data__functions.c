// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lgsvl_msgs:msg/CanBusData.idl
// generated code does not contain a copyright notice
#include "lgsvl_msgs/msg/detail/can_bus_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `linear_velocities`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
lgsvl_msgs__msg__CanBusData__init(lgsvl_msgs__msg__CanBusData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lgsvl_msgs__msg__CanBusData__fini(msg);
    return false;
  }
  // speed_mps
  // throttle_pct
  // brake_pct
  // steer_pct
  // parking_brake_active
  // high_beams_active
  // low_beams_active
  // hazard_lights_active
  // fog_lights_active
  // left_turn_signal_active
  // right_turn_signal_active
  // wipers_active
  // reverse_gear_active
  // selected_gear
  // engine_active
  // engine_rpm
  // gps_latitude
  // gps_longitude
  // gps_altitude
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    lgsvl_msgs__msg__CanBusData__fini(msg);
    return false;
  }
  // linear_velocities
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_velocities)) {
    lgsvl_msgs__msg__CanBusData__fini(msg);
    return false;
  }
  return true;
}

void
lgsvl_msgs__msg__CanBusData__fini(lgsvl_msgs__msg__CanBusData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // speed_mps
  // throttle_pct
  // brake_pct
  // steer_pct
  // parking_brake_active
  // high_beams_active
  // low_beams_active
  // hazard_lights_active
  // fog_lights_active
  // left_turn_signal_active
  // right_turn_signal_active
  // wipers_active
  // reverse_gear_active
  // selected_gear
  // engine_active
  // engine_rpm
  // gps_latitude
  // gps_longitude
  // gps_altitude
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // linear_velocities
  geometry_msgs__msg__Vector3__fini(&msg->linear_velocities);
}

bool
lgsvl_msgs__msg__CanBusData__are_equal(const lgsvl_msgs__msg__CanBusData * lhs, const lgsvl_msgs__msg__CanBusData * rhs)
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
  // speed_mps
  if (lhs->speed_mps != rhs->speed_mps) {
    return false;
  }
  // throttle_pct
  if (lhs->throttle_pct != rhs->throttle_pct) {
    return false;
  }
  // brake_pct
  if (lhs->brake_pct != rhs->brake_pct) {
    return false;
  }
  // steer_pct
  if (lhs->steer_pct != rhs->steer_pct) {
    return false;
  }
  // parking_brake_active
  if (lhs->parking_brake_active != rhs->parking_brake_active) {
    return false;
  }
  // high_beams_active
  if (lhs->high_beams_active != rhs->high_beams_active) {
    return false;
  }
  // low_beams_active
  if (lhs->low_beams_active != rhs->low_beams_active) {
    return false;
  }
  // hazard_lights_active
  if (lhs->hazard_lights_active != rhs->hazard_lights_active) {
    return false;
  }
  // fog_lights_active
  if (lhs->fog_lights_active != rhs->fog_lights_active) {
    return false;
  }
  // left_turn_signal_active
  if (lhs->left_turn_signal_active != rhs->left_turn_signal_active) {
    return false;
  }
  // right_turn_signal_active
  if (lhs->right_turn_signal_active != rhs->right_turn_signal_active) {
    return false;
  }
  // wipers_active
  if (lhs->wipers_active != rhs->wipers_active) {
    return false;
  }
  // reverse_gear_active
  if (lhs->reverse_gear_active != rhs->reverse_gear_active) {
    return false;
  }
  // selected_gear
  if (lhs->selected_gear != rhs->selected_gear) {
    return false;
  }
  // engine_active
  if (lhs->engine_active != rhs->engine_active) {
    return false;
  }
  // engine_rpm
  if (lhs->engine_rpm != rhs->engine_rpm) {
    return false;
  }
  // gps_latitude
  if (lhs->gps_latitude != rhs->gps_latitude) {
    return false;
  }
  // gps_longitude
  if (lhs->gps_longitude != rhs->gps_longitude) {
    return false;
  }
  // gps_altitude
  if (lhs->gps_altitude != rhs->gps_altitude) {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // linear_velocities
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_velocities), &(rhs->linear_velocities)))
  {
    return false;
  }
  return true;
}

bool
lgsvl_msgs__msg__CanBusData__copy(
  const lgsvl_msgs__msg__CanBusData * input,
  lgsvl_msgs__msg__CanBusData * output)
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
  // speed_mps
  output->speed_mps = input->speed_mps;
  // throttle_pct
  output->throttle_pct = input->throttle_pct;
  // brake_pct
  output->brake_pct = input->brake_pct;
  // steer_pct
  output->steer_pct = input->steer_pct;
  // parking_brake_active
  output->parking_brake_active = input->parking_brake_active;
  // high_beams_active
  output->high_beams_active = input->high_beams_active;
  // low_beams_active
  output->low_beams_active = input->low_beams_active;
  // hazard_lights_active
  output->hazard_lights_active = input->hazard_lights_active;
  // fog_lights_active
  output->fog_lights_active = input->fog_lights_active;
  // left_turn_signal_active
  output->left_turn_signal_active = input->left_turn_signal_active;
  // right_turn_signal_active
  output->right_turn_signal_active = input->right_turn_signal_active;
  // wipers_active
  output->wipers_active = input->wipers_active;
  // reverse_gear_active
  output->reverse_gear_active = input->reverse_gear_active;
  // selected_gear
  output->selected_gear = input->selected_gear;
  // engine_active
  output->engine_active = input->engine_active;
  // engine_rpm
  output->engine_rpm = input->engine_rpm;
  // gps_latitude
  output->gps_latitude = input->gps_latitude;
  // gps_longitude
  output->gps_longitude = input->gps_longitude;
  // gps_altitude
  output->gps_altitude = input->gps_altitude;
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // linear_velocities
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_velocities), &(output->linear_velocities)))
  {
    return false;
  }
  return true;
}

lgsvl_msgs__msg__CanBusData *
lgsvl_msgs__msg__CanBusData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__CanBusData * msg = (lgsvl_msgs__msg__CanBusData *)allocator.allocate(sizeof(lgsvl_msgs__msg__CanBusData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lgsvl_msgs__msg__CanBusData));
  bool success = lgsvl_msgs__msg__CanBusData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lgsvl_msgs__msg__CanBusData__destroy(lgsvl_msgs__msg__CanBusData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lgsvl_msgs__msg__CanBusData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lgsvl_msgs__msg__CanBusData__Sequence__init(lgsvl_msgs__msg__CanBusData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__CanBusData * data = NULL;

  if (size) {
    data = (lgsvl_msgs__msg__CanBusData *)allocator.zero_allocate(size, sizeof(lgsvl_msgs__msg__CanBusData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lgsvl_msgs__msg__CanBusData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lgsvl_msgs__msg__CanBusData__fini(&data[i - 1]);
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
lgsvl_msgs__msg__CanBusData__Sequence__fini(lgsvl_msgs__msg__CanBusData__Sequence * array)
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
      lgsvl_msgs__msg__CanBusData__fini(&array->data[i]);
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

lgsvl_msgs__msg__CanBusData__Sequence *
lgsvl_msgs__msg__CanBusData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__CanBusData__Sequence * array = (lgsvl_msgs__msg__CanBusData__Sequence *)allocator.allocate(sizeof(lgsvl_msgs__msg__CanBusData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lgsvl_msgs__msg__CanBusData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lgsvl_msgs__msg__CanBusData__Sequence__destroy(lgsvl_msgs__msg__CanBusData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lgsvl_msgs__msg__CanBusData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lgsvl_msgs__msg__CanBusData__Sequence__are_equal(const lgsvl_msgs__msg__CanBusData__Sequence * lhs, const lgsvl_msgs__msg__CanBusData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lgsvl_msgs__msg__CanBusData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lgsvl_msgs__msg__CanBusData__Sequence__copy(
  const lgsvl_msgs__msg__CanBusData__Sequence * input,
  lgsvl_msgs__msg__CanBusData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lgsvl_msgs__msg__CanBusData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lgsvl_msgs__msg__CanBusData * data =
      (lgsvl_msgs__msg__CanBusData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lgsvl_msgs__msg__CanBusData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lgsvl_msgs__msg__CanBusData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lgsvl_msgs__msg__CanBusData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
