// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lgsvl_msgs:msg/Detection2DArray.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETAIL__DETECTION2_D_ARRAY__TRAITS_HPP_
#define LGSVL_MSGS__MSG__DETAIL__DETECTION2_D_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lgsvl_msgs/msg/detail/detection2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "lgsvl_msgs/msg/detail/detection2_d__traits.hpp"

namespace lgsvl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection2DArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection2DArray & msg,
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

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection2DArray & msg, bool use_flow_style = false)
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
  const lgsvl_msgs::msg::Detection2DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  lgsvl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lgsvl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lgsvl_msgs::msg::Detection2DArray & msg)
{
  return lgsvl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lgsvl_msgs::msg::Detection2DArray>()
{
  return "lgsvl_msgs::msg::Detection2DArray";
}

template<>
inline const char * name<lgsvl_msgs::msg::Detection2DArray>()
{
  return "lgsvl_msgs/msg/Detection2DArray";
}

template<>
struct has_fixed_size<lgsvl_msgs::msg::Detection2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lgsvl_msgs::msg::Detection2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lgsvl_msgs::msg::Detection2DArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LGSVL_MSGS__MSG__DETAIL__DETECTION2_D_ARRAY__TRAITS_HPP_
