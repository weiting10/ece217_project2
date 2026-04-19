// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ece217_project2_tan:srv/ManipulationQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ece217_project2_tan/srv/manipulation_query.hpp"


#ifndef ECE217_PROJECT2_TAN__SRV__DETAIL__MANIPULATION_QUERY__TRAITS_HPP_
#define ECE217_PROJECT2_TAN__SRV__DETAIL__MANIPULATION_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ece217_project2_tan/srv/detail/manipulation_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace ece217_project2_tan
{

namespace srv
{

inline void to_flow_style_yaml(
  const ManipulationQuery_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_angles
  {
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []";
    } else {
      out << "joint_angles: [";
      size_t pending_items = msg.joint_angles.size();
      for (auto item : msg.joint_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManipulationQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []\n";
    } else {
      out << "joint_angles:\n";
      for (auto item : msg.joint_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManipulationQuery_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ece217_project2_tan

namespace rosidl_generator_traits
{

[[deprecated("use ece217_project2_tan::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ece217_project2_tan::srv::ManipulationQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ece217_project2_tan::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ece217_project2_tan::srv::to_yaml() instead")]]
inline std::string to_yaml(const ece217_project2_tan::srv::ManipulationQuery_Request & msg)
{
  return ece217_project2_tan::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ece217_project2_tan::srv::ManipulationQuery_Request>()
{
  return "ece217_project2_tan::srv::ManipulationQuery_Request";
}

template<>
inline const char * name<ece217_project2_tan::srv::ManipulationQuery_Request>()
{
  return "ece217_project2_tan/srv/ManipulationQuery_Request";
}

template<>
struct has_fixed_size<ece217_project2_tan::srv::ManipulationQuery_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ece217_project2_tan::srv::ManipulationQuery_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ece217_project2_tan::srv::ManipulationQuery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ece217_project2_tan
{

namespace srv
{

inline void to_flow_style_yaml(
  const ManipulationQuery_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_anlges
  {
    if (msg.joint_anlges.size() == 0) {
      out << "joint_anlges: []";
    } else {
      out << "joint_anlges: [";
      size_t pending_items = msg.joint_anlges.size();
      for (auto item : msg.joint_anlges) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const ManipulationQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_anlges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_anlges.size() == 0) {
      out << "joint_anlges: []\n";
    } else {
      out << "joint_anlges:\n";
      for (auto item : msg.joint_anlges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManipulationQuery_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ece217_project2_tan

namespace rosidl_generator_traits
{

[[deprecated("use ece217_project2_tan::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ece217_project2_tan::srv::ManipulationQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ece217_project2_tan::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ece217_project2_tan::srv::to_yaml() instead")]]
inline std::string to_yaml(const ece217_project2_tan::srv::ManipulationQuery_Response & msg)
{
  return ece217_project2_tan::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ece217_project2_tan::srv::ManipulationQuery_Response>()
{
  return "ece217_project2_tan::srv::ManipulationQuery_Response";
}

template<>
inline const char * name<ece217_project2_tan::srv::ManipulationQuery_Response>()
{
  return "ece217_project2_tan/srv/ManipulationQuery_Response";
}

template<>
struct has_fixed_size<ece217_project2_tan::srv::ManipulationQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ece217_project2_tan::srv::ManipulationQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ece217_project2_tan::srv::ManipulationQuery_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ece217_project2_tan
{

namespace srv
{

inline void to_flow_style_yaml(
  const ManipulationQuery_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const ManipulationQuery_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManipulationQuery_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ece217_project2_tan

namespace rosidl_generator_traits
{

[[deprecated("use ece217_project2_tan::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ece217_project2_tan::srv::ManipulationQuery_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ece217_project2_tan::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ece217_project2_tan::srv::to_yaml() instead")]]
inline std::string to_yaml(const ece217_project2_tan::srv::ManipulationQuery_Event & msg)
{
  return ece217_project2_tan::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ece217_project2_tan::srv::ManipulationQuery_Event>()
{
  return "ece217_project2_tan::srv::ManipulationQuery_Event";
}

template<>
inline const char * name<ece217_project2_tan::srv::ManipulationQuery_Event>()
{
  return "ece217_project2_tan/srv/ManipulationQuery_Event";
}

template<>
struct has_fixed_size<ece217_project2_tan::srv::ManipulationQuery_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ece217_project2_tan::srv::ManipulationQuery_Event>
  : std::integral_constant<bool, has_bounded_size<ece217_project2_tan::srv::ManipulationQuery_Request>::value && has_bounded_size<ece217_project2_tan::srv::ManipulationQuery_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ece217_project2_tan::srv::ManipulationQuery_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ece217_project2_tan::srv::ManipulationQuery>()
{
  return "ece217_project2_tan::srv::ManipulationQuery";
}

template<>
inline const char * name<ece217_project2_tan::srv::ManipulationQuery>()
{
  return "ece217_project2_tan/srv/ManipulationQuery";
}

template<>
struct has_fixed_size<ece217_project2_tan::srv::ManipulationQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<ece217_project2_tan::srv::ManipulationQuery_Request>::value &&
    has_fixed_size<ece217_project2_tan::srv::ManipulationQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<ece217_project2_tan::srv::ManipulationQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<ece217_project2_tan::srv::ManipulationQuery_Request>::value &&
    has_bounded_size<ece217_project2_tan::srv::ManipulationQuery_Response>::value
  >
{
};

template<>
struct is_service<ece217_project2_tan::srv::ManipulationQuery>
  : std::true_type
{
};

template<>
struct is_service_request<ece217_project2_tan::srv::ManipulationQuery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ece217_project2_tan::srv::ManipulationQuery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ECE217_PROJECT2_TAN__SRV__DETAIL__MANIPULATION_QUERY__TRAITS_HPP_
