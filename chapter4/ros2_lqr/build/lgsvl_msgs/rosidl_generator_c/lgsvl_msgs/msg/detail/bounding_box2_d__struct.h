// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lgsvl_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
#define LGSVL_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BoundingBox2D in the package lgsvl_msgs.
typedef struct lgsvl_msgs__msg__BoundingBox2D
{
  /// x position of the bounding box center in camera image space, in pixels
  float x;
  /// y position of the bounding box center in camera image space, in pixels
  float y;
  /// width of the bounding box, in pixels
  float width;
  /// height of the bounding box, in pixels
  float height;
} lgsvl_msgs__msg__BoundingBox2D;

// Struct for a sequence of lgsvl_msgs__msg__BoundingBox2D.
typedef struct lgsvl_msgs__msg__BoundingBox2D__Sequence
{
  lgsvl_msgs__msg__BoundingBox2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lgsvl_msgs__msg__BoundingBox2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LGSVL_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
