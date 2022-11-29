// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lgsvl_msgs:msg/DetectedRadarObject.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__DETECTED_RADAR_OBJECT__TRAITS_HPP_
#define LGSVL_MSGS__MSG__DETAIL__DETECTED_RADAR_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lgsvl_msgs/msg/detail/detected_radar_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sensor_aim'
// Member 'sensor_right'
// Member 'sensor_velocity'
// Member 'object_velocity'
// Member 'object_relative_velocity'
// Member 'object_collider_size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'sensor_position'
// Member 'object_position'
// Member 'object_relative_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace lgsvl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectedRadarObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: sensor_aim
  {
    out << "sensor_aim: ";
    to_flow_style_yaml(msg.sensor_aim, out);
    out << ", ";
  }

  // member: sensor_right
  {
    out << "sensor_right: ";
    to_flow_style_yaml(msg.sensor_right, out);
    out << ", ";
  }

  // member: sensor_position
  {
    out << "sensor_position: ";
    to_flow_style_yaml(msg.sensor_position, out);
    out << ", ";
  }

  // member: sensor_velocity
  {
    out << "sensor_velocity: ";
    to_flow_style_yaml(msg.sensor_velocity, out);
    out << ", ";
  }

  // member: sensor_angle
  {
    out << "sensor_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_angle, out);
    out << ", ";
  }

  // member: object_position
  {
    out << "object_position: ";
    to_flow_style_yaml(msg.object_position, out);
    out << ", ";
  }

  // member: object_velocity
  {
    out << "object_velocity: ";
    to_flow_style_yaml(msg.object_velocity, out);
    out << ", ";
  }

  // member: object_relative_position
  {
    out << "object_relative_position: ";
    to_flow_style_yaml(msg.object_relative_position, out);
    out << ", ";
  }

  // member: object_relative_velocity
  {
    out << "object_relative_velocity: ";
    to_flow_style_yaml(msg.object_relative_velocity, out);
    out << ", ";
  }

  // member: object_collider_size
  {
    out << "object_collider_size: ";
    to_flow_style_yaml(msg.object_collider_size, out);
    out << ", ";
  }

  // member: object_state
  {
    out << "object_state: ";
    rosidl_generator_traits::value_to_yaml(msg.object_state, out);
    out << ", ";
  }

  // member: new_detection
  {
    out << "new_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.new_detection, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectedRadarObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: sensor_aim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_aim:\n";
    to_block_style_yaml(msg.sensor_aim, out, indentation + 2);
  }

  // member: sensor_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_right:\n";
    to_block_style_yaml(msg.sensor_right, out, indentation + 2);
  }

  // member: sensor_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_position:\n";
    to_block_style_yaml(msg.sensor_position, out, indentation + 2);
  }

  // member: sensor_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_velocity:\n";
    to_block_style_yaml(msg.sensor_velocity, out, indentation + 2);
  }

  // member: sensor_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_angle, out);
    out << "\n";
  }

  // member: object_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_position:\n";
    to_block_style_yaml(msg.object_position, out, indentation + 2);
  }

  // member: object_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_velocity:\n";
    to_block_style_yaml(msg.object_velocity, out, indentation + 2);
  }

  // member: object_relative_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_relative_position:\n";
    to_block_style_yaml(msg.object_relative_position, out, indentation + 2);
  }

  // member: object_relative_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_relative_velocity:\n";
    to_block_style_yaml(msg.object_relative_velocity, out, indentation + 2);
  }

  // member: object_collider_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_collider_size:\n";
    to_block_style_yaml(msg.object_collider_size, out, indentation + 2);
  }

  // member: object_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_state: ";
    rosidl_generator_traits::value_to_yaml(msg.object_state, out);
    out << "\n";
  }

  // member: new_detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.new_detection, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectedRadarObject & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lgsvl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lgsvl_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lgsvl_msgs::msg::DetectedRadarObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  lgsvl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lgsvl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lgsvl_msgs::msg::DetectedRadarObject & msg)
{
  return lgsvl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lgsvl_msgs::msg::DetectedRadarObject>()
{
  return "lgsvl_msgs::msg::DetectedRadarObject";
}

template<>
inline const char * name<lgsvl_msgs::msg::DetectedRadarObject>()
{
  return "lgsvl_msgs/msg/DetectedRadarObject";
}

template<>
struct has_fixed_size<lgsvl_msgs::msg::DetectedRadarObject>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<lgsvl_msgs::msg::DetectedRadarObject>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<lgsvl_msgs::msg::DetectedRadarObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LGSVL_MSGS__MSG__DETAIL__DETECTED_RADAR_OBJECT__TRAITS_HPP_
