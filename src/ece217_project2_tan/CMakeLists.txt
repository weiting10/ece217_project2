cmake_minimum_required(VERSION 3.8)
project(ece217_project2_tan)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(Boost COMPONENTS program_options REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(pluginlib REQUIRED)
find_package(std_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(Eigen3 REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/ManipulationQuery.srv"
  DEPENDENCIES geometry_msgs  
)

rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} rosidl_typesupport_cpp
)

include_directories(
  include 
  ${Boost_INCLUDE_DIR}
  ${EIGEN3_INCLUDE_DIR}
)

set(dependencies "rclcpp" "pluginlib" "builtin_interfaces" "std_msgs" "geometry_msgs" "nav_msgs" "visualization_msgs" "Eigen3")

set(libraries "${Boost_PROGRAM_OPTIONS_LIBRARY}" "${Boost_SYSTEM_LIBRARY}" "${Boost_FILESYSTEM_LIBRARY}" "${ament_LIBRARIES}" "${cpp_typesupport_target}")

add_executable(project2-client src/project2-client.cpp)
target_include_directories(project2-client PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(project2-client PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(project2-client rclcpp geometry_msgs nav_msgs visualization_msgs Eigen3)
target_link_libraries(project2-client ${Boost_PROGRAM_OPTIONS_LIBRARY} ${cpp_typesupport_target})

add_executable(project2-server src/project2-server.cpp src/kinematic_control.cpp)
target_include_directories(project2-server PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(project2-server PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(project2-server rclcpp geometry_msgs nav_msgs visualization_msgs Eigen3)
target_link_libraries(project2-server ${Boost_PROGRAM_OPTIONS_LIBRARY} ${cpp_typesupport_target})

install(TARGETS
	project2-client
	project2-server
	DESTINATION lib/${PROJECT_NAME}
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(${dependencies} Boost rosidl_default_runtime)
ament_export_include_directories(include)

ament_package()
