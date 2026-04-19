// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ece217_project2_tan:srv/ManipulationQuery.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ece217_project2_tan/srv/detail/manipulation_query__struct.h"
#include "ece217_project2_tan/srv/detail/manipulation_query__type_support.h"
#include "ece217_project2_tan/srv/detail/manipulation_query__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ece217_project2_tan
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ManipulationQuery_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ManipulationQuery_Request_type_support_ids_t;

static const _ManipulationQuery_Request_type_support_ids_t _ManipulationQuery_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ManipulationQuery_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ManipulationQuery_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ManipulationQuery_Request_type_support_symbol_names_t _ManipulationQuery_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ece217_project2_tan, srv, ManipulationQuery_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ece217_project2_tan, srv, ManipulationQuery_Request)),
  }
};

typedef struct _ManipulationQuery_Request_type_support_data_t
{
  void * data[2];
} _ManipulationQuery_Request_type_support_data_t;

static _ManipulationQuery_Request_type_support_data_t _ManipulationQuery_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ManipulationQuery_Request_message_typesupport_map = {
  2,
  "ece217_project2_tan",
  &_ManipulationQuery_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ManipulationQuery_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ManipulationQuery_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ManipulationQuery_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ManipulationQuery_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ece217_project2_tan__srv__ManipulationQuery_Request__get_type_hash,
  &ece217_project2_tan__srv__ManipulationQuery_Request__get_type_description,
  &ece217_project2_tan__srv__ManipulationQuery_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ece217_project2_tan

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ece217_project2_tan, srv, ManipulationQuery_Request)() {
  return &::ece217_project2_tan::srv::rosidl_typesupport_c::ManipulationQuery_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__struct.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__type_support.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__functions.h"
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

namespace ece217_project2_tan
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ManipulationQuery_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ManipulationQuery_Response_type_support_ids_t;

static const _ManipulationQuery_Response_type_support_ids_t _ManipulationQuery_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ManipulationQuery_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ManipulationQuery_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ManipulationQuery_Response_type_support_symbol_names_t _ManipulationQuery_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ece217_project2_tan, srv, ManipulationQuery_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ece217_project2_tan, srv, ManipulationQuery_Response)),
  }
};

typedef struct _ManipulationQuery_Response_type_support_data_t
{
  void * data[2];
} _ManipulationQuery_Response_type_support_data_t;

static _ManipulationQuery_Response_type_support_data_t _ManipulationQuery_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ManipulationQuery_Response_message_typesupport_map = {
  2,
  "ece217_project2_tan",
  &_ManipulationQuery_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ManipulationQuery_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ManipulationQuery_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ManipulationQuery_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ManipulationQuery_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ece217_project2_tan__srv__ManipulationQuery_Response__get_type_hash,
  &ece217_project2_tan__srv__ManipulationQuery_Response__get_type_description,
  &ece217_project2_tan__srv__ManipulationQuery_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ece217_project2_tan

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ece217_project2_tan, srv, ManipulationQuery_Response)() {
  return &::ece217_project2_tan::srv::rosidl_typesupport_c::ManipulationQuery_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__struct.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__type_support.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__functions.h"
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

namespace ece217_project2_tan
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ManipulationQuery_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ManipulationQuery_Event_type_support_ids_t;

static const _ManipulationQuery_Event_type_support_ids_t _ManipulationQuery_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ManipulationQuery_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ManipulationQuery_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ManipulationQuery_Event_type_support_symbol_names_t _ManipulationQuery_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ece217_project2_tan, srv, ManipulationQuery_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ece217_project2_tan, srv, ManipulationQuery_Event)),
  }
};

typedef struct _ManipulationQuery_Event_type_support_data_t
{
  void * data[2];
} _ManipulationQuery_Event_type_support_data_t;

static _ManipulationQuery_Event_type_support_data_t _ManipulationQuery_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ManipulationQuery_Event_message_typesupport_map = {
  2,
  "ece217_project2_tan",
  &_ManipulationQuery_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ManipulationQuery_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ManipulationQuery_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ManipulationQuery_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ManipulationQuery_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ece217_project2_tan__srv__ManipulationQuery_Event__get_type_hash,
  &ece217_project2_tan__srv__ManipulationQuery_Event__get_type_description,
  &ece217_project2_tan__srv__ManipulationQuery_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ece217_project2_tan

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ece217_project2_tan, srv, ManipulationQuery_Event)() {
  return &::ece217_project2_tan::srv::rosidl_typesupport_c::ManipulationQuery_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ece217_project2_tan
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ManipulationQuery_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ManipulationQuery_type_support_ids_t;

static const _ManipulationQuery_type_support_ids_t _ManipulationQuery_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ManipulationQuery_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ManipulationQuery_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ManipulationQuery_type_support_symbol_names_t _ManipulationQuery_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ece217_project2_tan, srv, ManipulationQuery)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ece217_project2_tan, srv, ManipulationQuery)),
  }
};

typedef struct _ManipulationQuery_type_support_data_t
{
  void * data[2];
} _ManipulationQuery_type_support_data_t;

static _ManipulationQuery_type_support_data_t _ManipulationQuery_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ManipulationQuery_service_typesupport_map = {
  2,
  "ece217_project2_tan",
  &_ManipulationQuery_service_typesupport_ids.typesupport_identifier[0],
  &_ManipulationQuery_service_typesupport_symbol_names.symbol_name[0],
  &_ManipulationQuery_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ManipulationQuery_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ManipulationQuery_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ManipulationQuery_Request_message_type_support_handle,
  &ManipulationQuery_Response_message_type_support_handle,
  &ManipulationQuery_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ece217_project2_tan,
    srv,
    ManipulationQuery
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ece217_project2_tan,
    srv,
    ManipulationQuery
  ),
  &ece217_project2_tan__srv__ManipulationQuery__get_type_hash,
  &ece217_project2_tan__srv__ManipulationQuery__get_type_description,
  &ece217_project2_tan__srv__ManipulationQuery__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ece217_project2_tan

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ece217_project2_tan, srv, ManipulationQuery)() {
  return &::ece217_project2_tan::srv::rosidl_typesupport_c::ManipulationQuery_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
