// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lgsvl_msgs:msg/CanBusData.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__CAN_BUS_DATA__TRAITS_HPP_
#define LGSVL_MSGS__MSG__DETAIL__CAN_BUS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lgsvl_msgs/msg/detail/can_bus_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'linear_velocities'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace lgsvl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanBusData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: speed_mps
  {
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << ", ";
  }

  // member: throttle_pct
  {
    out << "throttle_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_pct, out);
    out << ", ";
  }

  // member: brake_pct
  {
    out << "brake_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_pct, out);
    out << ", ";
  }

  // member: steer_pct
  {
    out << "steer_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_pct, out);
    out << ", ";
  }

  // member: parking_brake_active
  {
    out << "parking_brake_active: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_brake_active, out);
    out << ", ";
  }

  // member: high_beams_active
  {
    out << "high_beams_active: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beams_active, out);
    out << ", ";
  }

  // member: low_beams_active
  {
    out << "low_beams_active: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beams_active, out);
    out << ", ";
  }

  // member: hazard_lights_active
  {
    out << "hazard_lights_active: ";
    rosidl_generator_traits::value_to_yaml(msg.hazard_lights_active, out);
    out << ", ";
  }

  // member: fog_lights_active
  {
    out << "fog_lights_active: ";
    rosidl_generator_traits::value_to_yaml(msg.fog_lights_active, out);
    out << ", ";
  }

  // member: left_turn_signal_active
  {
    out << "left_turn_signal_active: ";
    rosidl_generator_traits::value_to_yaml(msg.left_turn_signal_active, out);
    out << ", ";
  }

  // member: right_turn_signal_active
  {
    out << "right_turn_signal_active: ";
    rosidl_generator_traits::value_to_yaml(msg.right_turn_signal_active, out);
    out << ", ";
  }

  // member: wipers_active
  {
    out << "wipers_active: ";
    rosidl_generator_traits::value_to_yaml(msg.wipers_active, out);
    out << ", ";
  }

  // member: reverse_gear_active
  {
    out << "reverse_gear_active: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse_gear_active, out);
    out << ", ";
  }

  // member: selected_gear
  {
    out << "selected_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_gear, out);
    out << ", ";
  }

  // member: engine_active
  {
    out << "engine_active: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_active, out);
    out << ", ";
  }

  // member: engine_rpm
  {
    out << "engine_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_rpm, out);
    out << ", ";
  }

  // member: gps_latitude
  {
    out << "gps_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_latitude, out);
    out << ", ";
  }

  // member: gps_longitude
  {
    out << "gps_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_longitude, out);
    out << ", ";
  }

  // member: gps_altitude
  {
    out << "gps_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_altitude, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: linear_velocities
  {
    out << "linear_velocities: ";
    to_flow_style_yaml(msg.linear_velocities, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CanBusData & msg,
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

  // member: speed_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << "\n";
  }

  // member: throttle_pct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_pct, out);
    out << "\n";
  }

  // member: brake_pct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_pct, out);
    out << "\n";
  }

  // member: steer_pct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_pct, out);
    out << "\n";
  }

  // member: parking_brake_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_brake_active: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_brake_active, out);
    out << "\n";
  }

  // member: high_beams_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_beams_active: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beams_active, out);
    out << "\n";
  }

  // member: low_beams_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_beams_active: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beams_active, out);
    out << "\n";
  }

  // member: hazard_lights_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hazard_lights_active: ";
    rosidl_generator_traits::value_to_yaml(msg.hazard_lights_active, out);
    out << "\n";
  }

  // member: fog_lights_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fog_lights_active: ";
    rosidl_generator_traits::value_to_yaml(msg.fog_lights_active, out);
    out << "\n";
  }

  // member: left_turn_signal_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_turn_signal_active: ";
    rosidl_generator_traits::value_to_yaml(msg.left_turn_signal_active, out);
    out << "\n";
  }

  // member: right_turn_signal_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_turn_signal_active: ";
    rosidl_generator_traits::value_to_yaml(msg.right_turn_signal_active, out);
    out << "\n";
  }

  // member: wipers_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wipers_active: ";
    rosidl_generator_traits::value_to_yaml(msg.wipers_active, out);
    out << "\n";
  }

  // member: reverse_gear_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse_gear_active: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse_gear_active, out);
    out << "\n";
  }

  // member: selected_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selected_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_gear, out);
    out << "\n";
  }

  // member: engine_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_active: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_active, out);
    out << "\n";
  }

  // member: engine_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_rpm, out);
    out << "\n";
  }

  // member: gps_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_latitude, out);
    out << "\n";
  }

  // member: gps_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_longitude, out);
    out << "\n";
  }

  // member: gps_altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_altitude, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: linear_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocities:\n";
    to_block_style_yaml(msg.linear_velocities, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanBusData & msg, bool use_flow_style = false)
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
  const lgsvl_msgs::msg::CanBusData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lgsvl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lgsvl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lgsvl_msgs::msg::CanBusData & msg)
{
  return lgsvl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lgsvl_msgs::msg::CanBusData>()
{
  return "lgsvl_msgs::msg::CanBusData";
}

template<>
inline const char * name<lgsvl_msgs::msg::CanBusData>()
{
  return "lgsvl_msgs/msg/CanBusData";
}

template<>
struct has_fixed_size<lgsvl_msgs::msg::CanBusData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<lgsvl_msgs::msg::CanBusData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<lgsvl_msgs::msg::CanBusData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LGSVL_MSGS__MSG__DETAIL__CAN_BUS_DATA__TRAITS_HPP_
