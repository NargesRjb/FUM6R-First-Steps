// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from torque_message:srv/TRMsg.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "torque_message/msg/rosidl_typesupport_c__visibility_control.h"
#include "torque_message/srv/detail/tr_msg__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace torque_message
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TRMsg_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TRMsg_Request_type_support_ids_t;

static const _TRMsg_Request_type_support_ids_t _TRMsg_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TRMsg_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TRMsg_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TRMsg_Request_type_support_symbol_names_t _TRMsg_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, torque_message, srv, TRMsg_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, torque_message, srv, TRMsg_Request)),
  }
};

typedef struct _TRMsg_Request_type_support_data_t
{
  void * data[2];
} _TRMsg_Request_type_support_data_t;

static _TRMsg_Request_type_support_data_t _TRMsg_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TRMsg_Request_message_typesupport_map = {
  2,
  "torque_message",
  &_TRMsg_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TRMsg_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TRMsg_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TRMsg_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TRMsg_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace torque_message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_torque_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, torque_message, srv, TRMsg_Request)() {
  return &::torque_message::srv::rosidl_typesupport_c::TRMsg_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "torque_message/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "torque_message/srv/detail/tr_msg__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace torque_message
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TRMsg_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TRMsg_Response_type_support_ids_t;

static const _TRMsg_Response_type_support_ids_t _TRMsg_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TRMsg_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TRMsg_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TRMsg_Response_type_support_symbol_names_t _TRMsg_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, torque_message, srv, TRMsg_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, torque_message, srv, TRMsg_Response)),
  }
};

typedef struct _TRMsg_Response_type_support_data_t
{
  void * data[2];
} _TRMsg_Response_type_support_data_t;

static _TRMsg_Response_type_support_data_t _TRMsg_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TRMsg_Response_message_typesupport_map = {
  2,
  "torque_message",
  &_TRMsg_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TRMsg_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TRMsg_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TRMsg_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TRMsg_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace torque_message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_torque_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, torque_message, srv, TRMsg_Response)() {
  return &::torque_message::srv::rosidl_typesupport_c::TRMsg_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "torque_message/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace torque_message
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TRMsg_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TRMsg_type_support_ids_t;

static const _TRMsg_type_support_ids_t _TRMsg_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TRMsg_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TRMsg_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TRMsg_type_support_symbol_names_t _TRMsg_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, torque_message, srv, TRMsg)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, torque_message, srv, TRMsg)),
  }
};

typedef struct _TRMsg_type_support_data_t
{
  void * data[2];
} _TRMsg_type_support_data_t;

static _TRMsg_type_support_data_t _TRMsg_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TRMsg_service_typesupport_map = {
  2,
  "torque_message",
  &_TRMsg_service_typesupport_ids.typesupport_identifier[0],
  &_TRMsg_service_typesupport_symbol_names.symbol_name[0],
  &_TRMsg_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TRMsg_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TRMsg_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace torque_message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_torque_message
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, torque_message, srv, TRMsg)() {
  return &::torque_message::srv::rosidl_typesupport_c::TRMsg_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
