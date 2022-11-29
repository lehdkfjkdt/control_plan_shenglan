// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lgsvl_msgs:msg/DetectedRadarObject.idl
// generated code does not contain a copyright notice
#include "lgsvl_msgs/msg/detail/detected_radar_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sensor_aim`
// Member `sensor_right`
// Member `sensor_velocity`
// Member `object_velocity`
// Member `object_relative_velocity`
// Member `object_collider_size`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `sensor_position`
// Member `object_position`
// Member `object_relative_position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
lgsvl_msgs__msg__DetectedRadarObject__init(lgsvl_msgs__msg__DetectedRadarObject * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // sensor_aim
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_aim)) {
    lgsvl_msgs__msg__DetectedRadarObject__fini(msg);
    return false;
  }
  // sensor_right
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_right)) {
    lgsvl_msgs__msg__DetectedRadarObject__fini(msg);
    return false;
  }
  // sensor_position
  if (!geometry_msgs__msg__Point__init(&msg->sensor_position)) {
    lgsvl_msgs__msg__DetectedRadarObject__fini(msg);
    return false;
  }
  // sensor_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_velocity)) {
    lgsvl_msgs__msg__DetectedRadarObject__fini(msg);
    return false;
  }
  // sensor_angle
  // object_position
  if (!geometry_msgs__msg__Point__init(&msg->object_position)) {
    lgsvl_msgs__msg__DetectedRadarObject__fini(msg);
    return false;
  }
  // object_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->object_velocity)) {
    lgsvl_msgs__msg__DetectedRadarObject__fini(msg);
    return false;
  }
  // object_relative_position
  if (!geometry_msgs__msg__Point__init(&msg->object_relative_position)) {
    lgsvl_msgs__msg__DetectedRadarObject__fini(msg);
    return false;
  }
  // object_relative_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->object_relative_velocity)) {
    lgsvl_msgs__msg__DetectedRadarObject__fini(msg);
    return false;
  }
  // object_collider_size
  if (!geometry_msgs__msg__Vector3__init(&msg->object_collider_size)) {
    lgsvl_msgs__msg__DetectedRadarObject__fini(msg);
    return false;
  }
  // object_state
  // new_detection
  return true;
}

void
lgsvl_msgs__msg__DetectedRadarObject__fini(lgsvl_msgs__msg__DetectedRadarObject * msg)
{
  if (!msg) {
    return;
  }
  // id
  // sensor_aim
  geometry_msgs__msg__Vector3__fini(&msg->sensor_aim);
  // sensor_right
  geometry_msgs__msg__Vector3__fini(&msg->sensor_right);
  // sensor_position
  geometry_msgs__msg__Point__fini(&msg->sensor_position);
  // sensor_velocity
  geometry_msgs__msg__Vector3__fini(&msg->sensor_velocity);
  // sensor_angle
  // object_position
  geometry_msgs__msg__Point__fini(&msg->object_position);
  // object_velocity
  geometry_msgs__msg__Vector3__fini(&msg->object_velocity);
  // object_relative_position
  geometry_msgs__msg__Point__fini(&msg->object_relative_position);
  // object_relative_velocity
  geometry_msgs__msg__Vector3__fini(&msg->object_relative_velocity);
  // object_collider_size
  geometry_msgs__msg__Vector3__fini(&msg->object_collider_size);
  // object_state
  // new_detection
}

bool
lgsvl_msgs__msg__DetectedRadarObject__are_equal(const lgsvl_msgs__msg__DetectedRadarObject * lhs, const lgsvl_msgs__msg__DetectedRadarObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // sensor_aim
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_aim), &(rhs->sensor_aim)))
  {
    return false;
  }
  // sensor_right
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_right), &(rhs->sensor_right)))
  {
    return false;
  }
  // sensor_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->sensor_position), &(rhs->sensor_position)))
  {
    return false;
  }
  // sensor_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_velocity), &(rhs->sensor_velocity)))
  {
    return false;
  }
  // sensor_angle
  if (lhs->sensor_angle != rhs->sensor_angle) {
    return false;
  }
  // object_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->object_position), &(rhs->object_position)))
  {
    return false;
  }
  // object_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->object_velocity), &(rhs->object_velocity)))
  {
    return false;
  }
  // object_relative_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->object_relative_position), &(rhs->object_relative_position)))
  {
    return false;
  }
  // object_relative_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->object_relative_velocity), &(rhs->object_relative_velocity)))
  {
    return false;
  }
  // object_collider_size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->object_collider_size), &(rhs->object_collider_size)))
  {
    return false;
  }
  // object_state
  if (lhs->object_state != rhs->object_state) {
    return false;
  }
  // new_detection
  if (lhs->new_detection != rhs->new_detection) {
    return false;
  }
  return true;
}

bool
lgsvl_msgs__msg__DetectedRadarObject__copy(
  const lgsvl_msgs__msg__DetectedRadarObject * input,
  lgsvl_msgs__msg__DetectedRadarObject * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // sensor_aim
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_aim), &(output->sensor_aim)))
  {
    return false;
  }
  // sensor_right
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_right), &(output->sensor_right)))
  {
    return false;
  }
  // sensor_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->sensor_position), &(output->sensor_position)))
  {
    return false;
  }
  // sensor_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_velocity), &(output->sensor_velocity)))
  {
    return false;
  }
  // sensor_angle
  output->sensor_angle = input->sensor_angle;
  // object_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->object_position), &(output->object_position)))
  {
    return false;
  }
  // object_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->object_velocity), &(output->object_velocity)))
  {
    return false;
  }
  // object_relative_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->object_relative_position), &(output->object_relative_position)))
  {
    return false;
  }
  // object_relative_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->object_relative_velocity), &(output->object_relative_velocity)))
  {
    return false;
  }
  // object_collider_size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->object_collider_size), &(output->object_collider_size)))
  {
    return false;
  }
  // object_state
  output->object_state = input->object_state;
  // new_detection
  output->new_detection = input->new_detection;
  return true;
}

lgsvl_msgs__msg__DetectedRadarObject *
lgsvl_msgs__msg__DetectedRadarObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__DetectedRadarObject * msg = (lgsvl_msgs__msg__DetectedRadarObject *)allocator.allocate(sizeof(lgsvl_msgs__msg__DetectedRadarObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lgsvl_msgs__msg__DetectedRadarObject));
  bool success = lgsvl_msgs__msg__DetectedRadarObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lgsvl_msgs__msg__DetectedRadarObject__destroy(lgsvl_msgs__msg__DetectedRadarObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lgsvl_msgs__msg__DetectedRadarObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lgsvl_msgs__msg__DetectedRadarObject__Sequence__init(lgsvl_msgs__msg__DetectedRadarObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__DetectedRadarObject * data = NULL;

  if (size) {
    data = (lgsvl_msgs__msg__DetectedRadarObject *)allocator.zero_allocate(size, sizeof(lgsvl_msgs__msg__DetectedRadarObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lgsvl_msgs__msg__DetectedRadarObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lgsvl_msgs__msg__DetectedRadarObject__fini(&data[i - 1]);
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
lgsvl_msgs__msg__DetectedRadarObject__Sequence__fini(lgsvl_msgs__msg__DetectedRadarObject__Sequence * array)
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
      lgsvl_msgs__msg__DetectedRadarObject__fini(&array->data[i]);
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

lgsvl_msgs__msg__DetectedRadarObject__Sequence *
lgsvl_msgs__msg__DetectedRadarObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lgsvl_msgs__msg__DetectedRadarObject__Sequence * array = (lgsvl_msgs__msg__DetectedRadarObject__Sequence *)allocator.allocate(sizeof(lgsvl_msgs__msg__DetectedRadarObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lgsvl_msgs__msg__DetectedRadarObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lgsvl_msgs__msg__DetectedRadarObject__Sequence__destroy(lgsvl_msgs__msg__DetectedRadarObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lgsvl_msgs__msg__DetectedRadarObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lgsvl_msgs__msg__DetectedRadarObject__Sequence__are_equal(const lgsvl_msgs__msg__DetectedRadarObject__Sequence * lhs, const lgsvl_msgs__msg__DetectedRadarObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lgsvl_msgs__msg__DetectedRadarObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lgsvl_msgs__msg__DetectedRadarObject__Sequence__copy(
  const lgsvl_msgs__msg__DetectedRadarObject__Sequence * input,
  lgsvl_msgs__msg__DetectedRadarObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lgsvl_msgs__msg__DetectedRadarObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lgsvl_msgs__msg__DetectedRadarObject * data =
      (lgsvl_msgs__msg__DetectedRadarObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lgsvl_msgs__msg__DetectedRadarObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lgsvl_msgs__msg__DetectedRadarObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lgsvl_msgs__msg__DetectedRadarObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
