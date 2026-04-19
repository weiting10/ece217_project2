// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ece217_project2_tan:srv/ManipulationQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ece217_project2_tan/srv/manipulation_query.hpp"


#ifndef ECE217_PROJECT2_TAN__SRV__DETAIL__MANIPULATION_QUERY__BUILDER_HPP_
#define ECE217_PROJECT2_TAN__SRV__DETAIL__MANIPULATION_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ece217_project2_tan/srv/detail/manipulation_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ece217_project2_tan
{

namespace srv
{

namespace builder
{

class Init_ManipulationQuery_Request_goal
{
public:
  explicit Init_ManipulationQuery_Request_goal(::ece217_project2_tan::srv::ManipulationQuery_Request & msg)
  : msg_(msg)
  {}
  ::ece217_project2_tan::srv::ManipulationQuery_Request goal(::ece217_project2_tan::srv::ManipulationQuery_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ece217_project2_tan::srv::ManipulationQuery_Request msg_;
};

class Init_ManipulationQuery_Request_joint_angles
{
public:
  Init_ManipulationQuery_Request_joint_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManipulationQuery_Request_goal joint_angles(::ece217_project2_tan::srv::ManipulationQuery_Request::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return Init_ManipulationQuery_Request_goal(msg_);
  }

private:
  ::ece217_project2_tan::srv::ManipulationQuery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ece217_project2_tan::srv::ManipulationQuery_Request>()
{
  return ece217_project2_tan::srv::builder::Init_ManipulationQuery_Request_joint_angles();
}

}  // namespace ece217_project2_tan


namespace ece217_project2_tan
{

namespace srv
{

namespace builder
{

class Init_ManipulationQuery_Response_joint_angles
{
public:
  Init_ManipulationQuery_Response_joint_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ece217_project2_tan::srv::ManipulationQuery_Response joint_angles(::ece217_project2_tan::srv::ManipulationQuery_Response::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ece217_project2_tan::srv::ManipulationQuery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ece217_project2_tan::srv::ManipulationQuery_Response>()
{
  return ece217_project2_tan::srv::builder::Init_ManipulationQuery_Response_joint_angles();
}

}  // namespace ece217_project2_tan


namespace ece217_project2_tan
{

namespace srv
{

namespace builder
{

class Init_ManipulationQuery_Event_response
{
public:
  explicit Init_ManipulationQuery_Event_response(::ece217_project2_tan::srv::ManipulationQuery_Event & msg)
  : msg_(msg)
  {}
  ::ece217_project2_tan::srv::ManipulationQuery_Event response(::ece217_project2_tan::srv::ManipulationQuery_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ece217_project2_tan::srv::ManipulationQuery_Event msg_;
};

class Init_ManipulationQuery_Event_request
{
public:
  explicit Init_ManipulationQuery_Event_request(::ece217_project2_tan::srv::ManipulationQuery_Event & msg)
  : msg_(msg)
  {}
  Init_ManipulationQuery_Event_response request(::ece217_project2_tan::srv::ManipulationQuery_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ManipulationQuery_Event_response(msg_);
  }

private:
  ::ece217_project2_tan::srv::ManipulationQuery_Event msg_;
};

class Init_ManipulationQuery_Event_info
{
public:
  Init_ManipulationQuery_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManipulationQuery_Event_request info(::ece217_project2_tan::srv::ManipulationQuery_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ManipulationQuery_Event_request(msg_);
  }

private:
  ::ece217_project2_tan::srv::ManipulationQuery_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ece217_project2_tan::srv::ManipulationQuery_Event>()
{
  return ece217_project2_tan::srv::builder::Init_ManipulationQuery_Event_info();
}

}  // namespace ece217_project2_tan

#endif  // ECE217_PROJECT2_TAN__SRV__DETAIL__MANIPULATION_QUERY__BUILDER_HPP_
