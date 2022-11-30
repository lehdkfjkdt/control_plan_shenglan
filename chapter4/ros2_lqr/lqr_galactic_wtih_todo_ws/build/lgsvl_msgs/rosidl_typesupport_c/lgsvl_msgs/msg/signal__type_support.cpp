// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from lgsvl_msgs:msg/Signal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "lgsvl_msgs/msg/detail/signal__struct.h"
#include "lgsvl_msgs/msg/detail/signal__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace lgsvl_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Signal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Signal_type_support_ids_t;

static const _Signal_type_support_ids_t _Signal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Signal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Signal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Signal_type_support_symbol_names_t _Signal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lgsvl_msgs, msg, Signal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lgsvl_msgs, msg, Signal)),
  }
};

typedef struct _Signal_type_support_data_t
{
  void * data[2];
} _Signal_type_support_data_t;

static _Signal_type_support_data_t _Signal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Signal_message_typesupport_map = {
  2,
  "lgsvl_msgs",
  &_Signal_message_typesupport_ids.typesupport_identifier[0],
  &_Signal_message_typesupport_symbol_names.symbol_name[0],
  &_Signal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Signal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Signal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace lgsvl_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lgsvl_msgs, msg, Signal)() {
  return &::lgsvl_msgs::msg::rosidl_typesupport_c::Signal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
