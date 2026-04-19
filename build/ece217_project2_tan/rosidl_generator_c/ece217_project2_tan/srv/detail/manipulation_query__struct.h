// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ece217_project2_tan:srv/ManipulationQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ece217_project2_tan/srv/manipulation_query.h"


#ifndef ECE217_PROJECT2_TAN__SRV__DETAIL__MANIPULATION_QUERY__STRUCT_H_
#define ECE217_PROJECT2_TAN__SRV__DETAIL__MANIPULATION_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_angles'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'goal'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/ManipulationQuery in the package ece217_project2_tan.
typedef struct ece217_project2_tan__srv__ManipulationQuery_Request
{
  rosidl_runtime_c__float__Sequence joint_angles;
  geometry_msgs__msg__Pose goal;
} ece217_project2_tan__srv__ManipulationQuery_Request;

// Struct for a sequence of ece217_project2_tan__srv__ManipulationQuery_Request.
typedef struct ece217_project2_tan__srv__ManipulationQuery_Request__Sequence
{
  ece217_project2_tan__srv__ManipulationQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ece217_project2_tan__srv__ManipulationQuery_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'joint_angles'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ManipulationQuery in the package ece217_project2_tan.
typedef struct ece217_project2_tan__srv__ManipulationQuery_Response
{
  rosidl_runtime_c__float__Sequence joint_angles;
} ece217_project2_tan__srv__ManipulationQuery_Response;

// Struct for a sequence of ece217_project2_tan__srv__ManipulationQuery_Response.
typedef struct ece217_project2_tan__srv__ManipulationQuery_Response__Sequence
{
  ece217_project2_tan__srv__ManipulationQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ece217_project2_tan__srv__ManipulationQuery_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ece217_project2_tan__srv__ManipulationQuery_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ece217_project2_tan__srv__ManipulationQuery_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ManipulationQuery in the package ece217_project2_tan.
typedef struct ece217_project2_tan__srv__ManipulationQuery_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ece217_project2_tan__srv__ManipulationQuery_Request__Sequence request;
  ece217_project2_tan__srv__ManipulationQuery_Response__Sequence response;
} ece217_project2_tan__srv__ManipulationQuery_Event;

// Struct for a sequence of ece217_project2_tan__srv__ManipulationQuery_Event.
typedef struct ece217_project2_tan__srv__ManipulationQuery_Event__Sequence
{
  ece217_project2_tan__srv__ManipulationQuery_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ece217_project2_tan__srv__ManipulationQuery_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ECE217_PROJECT2_TAN__SRV__DETAIL__MANIPULATION_QUERY__STRUCT_H_
