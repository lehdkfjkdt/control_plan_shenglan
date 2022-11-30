// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lgsvl_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__TRAITS_HPP_
#define LGSVL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lgsvl_msgs/msg/detail/vehicle_control_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace lgsvl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleControlData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: acceleration_pct
  {
    out << "acceleration_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_pct, out);
    out << ", ";
  }

  // member: braking_pct
  {
    out << "braking_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.braking_pct, out);
    out << ", ";
  }

  // member: target_wheel_angle
  {
    out << "target_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.target_wheel_angle, out);
    out << ", ";
  }

  // member: target_wheel_angular_rate
  {
    out << "target_wheel_angular_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.target_wheel_angular_rate, out);
    out << ", ";
  }

  // member: target_gear
  {
    out << "target_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.target_gear, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleControlData & msg,
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

  // member: acceleration_pct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_pct, out);
    out << "\n";
  }

  // member: braking_pct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "braking_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.braking_pct, out);
    out << "\n";
  }

  // member: target_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.target_wheel_angle, out);
    out << "\n";
  }

  // member: target_wheel_angular_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_wheel_angular_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.target_wheel_angular_rate, out);
    out << "\n";
  }

  // member: target_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.target_gear, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleControlData & msg, bool use_flow_style = false)
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
  const lgsvl_msgs::msg::VehicleControlData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lgsvl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lgsvl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lgsvl_msgs::msg::VehicleControlData & msg)
{
  return lgsvl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lgsvl_msgs::msg::VehicleControlData>()
{
  return "lgsvl_msgs::msg::VehicleControlData";
}

template<>
inline const char * name<lgsvl_msgs::msg::VehicleControlData>()
{
  return "lgsvl_msgs/msg/VehicleControlData";
}

template<>
struct has_fixed_size<lgsvl_msgs::msg::VehicleControlData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<lgsvl_msgs::msg::VehicleControlData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<lgsvl_msgs::msg::VehicleControlData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LGSVL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__TRAITS_HPP_
