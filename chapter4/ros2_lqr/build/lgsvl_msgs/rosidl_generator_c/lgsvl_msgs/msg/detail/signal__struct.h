// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lgsvl_msgs:msg/Signal.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__SIGNAL__STRUCT_H_
#define LGSVL_MSGS__MSG__DETAIL__SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'bbox'
#include "lgsvl_msgs/msg/detail/bounding_box3_d__struct.h"

/// Struct defined in msg/Signal in the package lgsvl_msgs.
typedef struct lgsvl_msgs__msg__Signal
{
  std_msgs__msg__Header header;
  /// The numeric ID of the detected signal
  uint32_t id;
  /// green, yellow, red
  rosidl_runtime_c__String label;
  /// The confidence score of the detected signal in the range
  float score;
  /// A 3D bounding box
  lgsvl_msgs__msg__BoundingBox3D bbox;
} lgsvl_msgs__msg__Signal;

// Struct for a sequence of lgsvl_msgs__msg__Signal.
typedef struct lgsvl_msgs__msg__Signal__Sequence
{
  lgsvl_msgs__msg__Signal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lgsvl_msgs__msg__Signal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LGSVL_MSGS__MSG__DETAIL__SIGNAL__STRUCT_H_
