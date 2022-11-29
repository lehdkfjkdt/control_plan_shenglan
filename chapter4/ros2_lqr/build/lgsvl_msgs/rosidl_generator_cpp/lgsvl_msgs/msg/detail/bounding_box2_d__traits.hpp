// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lgsvl_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_
#define LGSVL_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lgsvl_msgs/msg/detail/bounding_box2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lgsvl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBox2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBox2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBox2D & msg, bool use_flow_style = false)
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
  const lgsvl_msgs::msg::BoundingBox2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  lgsvl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lgsvl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lgsvl_msgs::msg::BoundingBox2D & msg)
{
  return lgsvl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lgsvl_msgs::msg::BoundingBox2D>()
{
  return "lgsvl_msgs::msg::BoundingBox2D";
}

template<>
inline const char * name<lgsvl_msgs::msg::BoundingBox2D>()
{
  return "lgsvl_msgs/msg/BoundingBox2D";
}

template<>
struct has_fixed_size<lgsvl_msgs::msg::BoundingBox2D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lgsvl_msgs::msg::BoundingBox2D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lgsvl_msgs::msg::BoundingBox2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LGSVL_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_
