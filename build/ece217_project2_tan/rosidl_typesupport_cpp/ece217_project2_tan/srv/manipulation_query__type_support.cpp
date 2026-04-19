// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ece217_project2_tan:srv/ManipulationQuery.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ece217_project2_tan/srv/detail/manipulation_query__functions.h"
#include "ece217_project2_tan/srv/detail/manipulation_query__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ece217_project2_tan
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ManipulationQuery_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ManipulationQuery_Request_type_support_ids_t;

static const _ManipulationQuery_Request_type_support_ids_t _ManipulationQuery_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ece217_project2_tan, srv, ManipulationQuery_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ece217_project2_tan, srv, ManipulationQuery_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ManipulationQuery_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ece217_project2_tan__srv__ManipulationQuery_Request__get_type_hash,
  &ece217_project2_tan__srv__ManipulationQuery_Request__get_type_description,
  &ece217_project2_tan__srv__ManipulationQuery_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ece217_project2_tan

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ece217_project2_tan::srv::ManipulationQuery_Request>()
{
  return &::ece217_project2_tan::srv::rosidl_typesupport_cpp::ManipulationQuery_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ece217_project2_tan, srv, ManipulationQuery_Request)() {
  return get_message_type_support_handle<ece217_project2_tan::srv::ManipulationQuery_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__functions.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ece217_project2_tan
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ManipulationQuery_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ManipulationQuery_Response_type_support_ids_t;

static const _ManipulationQuery_Response_type_support_ids_t _ManipulationQuery_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ece217_project2_tan, srv, ManipulationQuery_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ece217_project2_tan, srv, ManipulationQuery_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ManipulationQuery_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ece217_project2_tan__srv__ManipulationQuery_Response__get_type_hash,
  &ece217_project2_tan__srv__ManipulationQuery_Response__get_type_description,
  &ece217_project2_tan__srv__ManipulationQuery_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ece217_project2_tan

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ece217_project2_tan::srv::ManipulationQuery_Response>()
{
  return &::ece217_project2_tan::srv::rosidl_typesupport_cpp::ManipulationQuery_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ece217_project2_tan, srv, ManipulationQuery_Response)() {
  return get_message_type_support_handle<ece217_project2_tan::srv::ManipulationQuery_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__functions.h"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ece217_project2_tan
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ManipulationQuery_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ManipulationQuery_Event_type_support_ids_t;

static const _ManipulationQuery_Event_type_support_ids_t _ManipulationQuery_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ece217_project2_tan, srv, ManipulationQuery_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ece217_project2_tan, srv, ManipulationQuery_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ManipulationQuery_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ece217_project2_tan__srv__ManipulationQuery_Event__get_type_hash,
  &ece217_project2_tan__srv__ManipulationQuery_Event__get_type_description,
  &ece217_project2_tan__srv__ManipulationQuery_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ece217_project2_tan

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ece217_project2_tan::srv::ManipulationQuery_Event>()
{
  return &::ece217_project2_tan::srv::rosidl_typesupport_cpp::ManipulationQuery_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ece217_project2_tan, srv, ManipulationQuery_Event)() {
  return get_message_type_support_handle<ece217_project2_tan::srv::ManipulationQuery_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ece217_project2_tan/srv/detail/manipulation_query__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ece217_project2_tan
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ManipulationQuery_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ManipulationQuery_type_support_ids_t;

static const _ManipulationQuery_type_support_ids_t _ManipulationQuery_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ece217_project2_tan, srv, ManipulationQuery)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ece217_project2_tan, srv, ManipulationQuery)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ManipulationQuery_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ece217_project2_tan::srv::ManipulationQuery_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ece217_project2_tan::srv::ManipulationQuery_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ece217_project2_tan::srv::ManipulationQuery_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ece217_project2_tan::srv::ManipulationQuery>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ece217_project2_tan::srv::ManipulationQuery>,
  &ece217_project2_tan__srv__ManipulationQuery__get_type_hash,
  &ece217_project2_tan__srv__ManipulationQuery__get_type_description,
  &ece217_project2_tan__srv__ManipulationQuery__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ece217_project2_tan

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ece217_project2_tan::srv::ManipulationQuery>()
{
  return &::ece217_project2_tan::srv::rosidl_typesupport_cpp::ManipulationQuery_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ece217_project2_tan, srv, ManipulationQuery)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ece217_project2_tan::srv::ManipulationQuery>();
}

#ifdef __cplusplus
}
#endif
