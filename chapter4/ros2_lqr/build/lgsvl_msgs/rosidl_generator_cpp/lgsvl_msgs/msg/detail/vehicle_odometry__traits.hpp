// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lgsvl_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__TRAITS_HPP_
#define LGSVL_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lgsvl_msgs/msg/detail/vehicle_odometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace lgsvl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleOdometry & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: front_wheel_angle
  {
    out << "front_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wheel_angle, out);
    out << ", ";
  }

  // member: rear_wheel_angle
  {
    out << "rear_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_wheel_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleOdometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: front_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wheel_angle, out);
    out << "\n";
  }

  // member: rear_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_wheel_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleOdometry & msg, bool use_flow_style = false)
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
  const lgsvl_msgs::msg::VehicleOdometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  lgsvl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lgsvl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lgsvl_msgs::msg::VehicleOdometry & msg)
{
  return lgsvl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lgsvl_msgs::msg::VehicleOdometry>()
{
  return "lgsvl_msgs::msg::VehicleOdometry";
}

template<>
inline const char * name<lgsvl_msgs::msg::VehicleOdometry>()
{
  return "lgsvl_msgs/msg/VehicleOdometry";
}

template<>
struct has_fixed_size<lgsvl_msgs::msg::VehicleOdometry>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<lgsvl_msgs::msg::VehicleOdometry>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<lgsvl_msgs::msg::VehicleOdometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LGSVL_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__TRAITS_HPP_
