// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lgsvl_msgs:msg/SignalArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lgsvl_msgs/msg/detail/signal_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lgsvl_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SignalArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lgsvl_msgs::msg::SignalArray(_init);
}

void SignalArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lgsvl_msgs::msg::SignalArray *>(message_memory);
  typed_message->~SignalArray();
}

size_t size_function__SignalArray__signals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<lgsvl_msgs::msg::Signal> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SignalArray__signals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<lgsvl_msgs::msg::Signal> *>(untyped_member);
  return &member[index];
}

void * get_function__SignalArray__signals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<lgsvl_msgs::msg::Signal> *>(untyped_member);
  return &member[index];
}

void fetch_function__SignalArray__signals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const lgsvl_msgs::msg::Signal *>(
    get_const_function__SignalArray__signals(untyped_member, index));
  auto & value = *reinterpret_cast<lgsvl_msgs::msg::Signal *>(untyped_value);
  value = item;
}

void assign_function__SignalArray__signals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<lgsvl_msgs::msg::Signal *>(
    get_function__SignalArray__signals(untyped_member, index));
  const auto & value = *reinterpret_cast<const lgsvl_msgs::msg::Signal *>(untyped_value);
  item = value;
}

void resize_function__SignalArray__signals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<lgsvl_msgs::msg::Signal> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SignalArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lgsvl_msgs::msg::SignalArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "signals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lgsvl_msgs::msg::Signal>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lgsvl_msgs::msg::SignalArray, signals),  // bytes offset in struct
    nullptr,  // default value
    size_function__SignalArray__signals,  // size() function pointer
    get_const_function__SignalArray__signals,  // get_const(index) function pointer
    get_function__SignalArray__signals,  // get(index) function pointer
    fetch_function__SignalArray__signals,  // fetch(index, &value) function pointer
    assign_function__SignalArray__signals,  // assign(index, value) function pointer
    resize_function__SignalArray__signals  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SignalArray_message_members = {
  "lgsvl_msgs::msg",  // message namespace
  "SignalArray",  // message name
  2,  // number of fields
  sizeof(lgsvl_msgs::msg::SignalArray),
  SignalArray_message_member_array,  // message members
  SignalArray_init_function,  // function to initialize message memory (memory has to be allocated)
  SignalArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SignalArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SignalArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lgsvl_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lgsvl_msgs::msg::SignalArray>()
{
  return &::lgsvl_msgs::msg::rosidl_typesupport_introspection_cpp::SignalArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lgsvl_msgs, msg, SignalArray)() {
  return &::lgsvl_msgs::msg::rosidl_typesupport_introspection_cpp::SignalArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
