// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lgsvl_msgs:msg/VehicleStateData.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__VEHICLE_STATE_DATA__TRAITS_HPP_
#define LGSVL_MSGS__MSG__DETAIL__VEHICLE_STATE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lgsvl_msgs/msg/detail/vehicle_state_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace lgsvl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleStateData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: blinker_state
  {
    out << "blinker_state: ";
    rosidl_generator_traits::value_to_yaml(msg.blinker_state, out);
    out << ", ";
  }

  // member: headlight_state
  {
    out << "headlight_state: ";
    rosidl_generator_traits::value_to_yaml(msg.headlight_state, out);
    out << ", ";
  }

  // member: wiper_state
  {
    out << "wiper_state: ";
    rosidl_generator_traits::value_to_yaml(msg.wiper_state, out);
    out << ", ";
  }

  // member: current_gear
  {
    out << "current_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.current_gear, out);
    out << ", ";
  }

  // member: vehicle_mode
  {
    out << "vehicle_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_mode, out);
    out << ", ";
  }

  // member: hand_brake_active
  {
    out << "hand_brake_active: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_brake_active, out);
    out << ", ";
  }

  // member: horn_active
  {
    out << "horn_active: ";
    rosidl_generator_traits::value_to_yaml(msg.horn_active, out);
    out << ", ";
  }

  // member: autonomous_mode_active
  {
    out << "autonomous_mode_active: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_mode_active, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleStateData & msg,
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

  // member: blinker_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blinker_state: ";
    rosidl_generator_traits::value_to_yaml(msg.blinker_state, out);
    out << "\n";
  }

  // member: headlight_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "headlight_state: ";
    rosidl_generator_traits::value_to_yaml(msg.headlight_state, out);
    out << "\n";
  }

  // member: wiper_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wiper_state: ";
    rosidl_generator_traits::value_to_yaml(msg.wiper_state, out);
    out << "\n";
  }

  // member: current_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.current_gear, out);
    out << "\n";
  }

  // member: vehicle_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_mode, out);
    out << "\n";
  }

  // member: hand_brake_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_brake_active: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_brake_active, out);
    out << "\n";
  }

  // member: horn_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn_active: ";
    rosidl_generator_traits::value_to_yaml(msg.horn_active, out);
    out << "\n";
  }

  // member: autonomous_mode_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_mode_active: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_mode_active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleStateData & msg, bool use_flow_style = false)
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
  const lgsvl_msgs::msg::VehicleStateData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lgsvl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lgsvl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lgsvl_msgs::msg::VehicleStateData & msg)
{
  return lgsvl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lgsvl_msgs::msg::VehicleStateData>()
{
  return "lgsvl_msgs::msg::VehicleStateData";
}

template<>
inline const char * name<lgsvl_msgs::msg::VehicleStateData>()
{
  return "lgsvl_msgs/msg/VehicleStateData";
}

template<>
struct has_fixed_size<lgsvl_msgs::msg::VehicleStateData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<lgsvl_msgs::msg::VehicleStateData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<lgsvl_msgs::msg::VehicleStateData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LGSVL_MSGS__MSG__DETAIL__VEHICLE_STATE_DATA__TRAITS_HPP_
