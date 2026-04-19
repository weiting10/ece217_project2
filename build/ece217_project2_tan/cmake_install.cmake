# Install script for directory: /gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/src/ece217_project2_tan

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/install/ece217_project2_tan")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/ece217_project2_tan")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/srv" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_generator_type_description/ece217_project2_tan/srv/ManipulationQuery.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ece217_project2_tan/ece217_project2_tan" TYPE DIRECTORY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_generator_c/ece217_project2_tan/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/environment" TYPE FILE FILES "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/lib/python3.12/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/environment" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/libece217_project2_tan__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_c.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ece217_project2_tan/ece217_project2_tan" TYPE DIRECTORY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_typesupport_fastrtps_c/ece217_project2_tan/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/libece217_project2_tan__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ece217_project2_tan/ece217_project2_tan" TYPE DIRECTORY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_generator_cpp/ece217_project2_tan/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ece217_project2_tan/ece217_project2_tan" TYPE DIRECTORY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_typesupport_fastrtps_cpp/ece217_project2_tan/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/libece217_project2_tan__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ece217_project2_tan/ece217_project2_tan" TYPE DIRECTORY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_typesupport_introspection_c/ece217_project2_tan/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/libece217_project2_tan__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/libece217_project2_tan__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_c.so"
         OLD_RPATH "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ece217_project2_tan/ece217_project2_tan" TYPE DIRECTORY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_typesupport_introspection_cpp/ece217_project2_tan/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/libece217_project2_tan__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/libece217_project2_tan__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_cpp.so"
         OLD_RPATH "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/environment" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/environment" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan-0.0.0-py3.12.egg-info" TYPE DIRECTORY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_python/ece217_project2_tan/ece217_project2_tan.egg-info/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan" TYPE DIRECTORY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_generator_py/ece217_project2_tan/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/python3" "-m" "compileall"
        "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/install/ece217_project2_tan/lib/python3.12/site-packages/ece217_project2_tan"
      )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan" TYPE MODULE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_generator_py/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/ece217_project2_tan_s__rosidl_typesupport_fastrtps_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan" TYPE MODULE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_generator_py/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/ece217_project2_tan_s__rosidl_typesupport_introspection_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan" TYPE MODULE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_generator_py/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_c.so"
         OLD_RPATH "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/ece217_project2_tan/ece217_project2_tan_s__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/ece217_project2_tan_s__rosidl_typesupport_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/libece217_project2_tan__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_py.so"
         OLD_RPATH "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libece217_project2_tan__rosidl_generator_py.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/srv" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_adapter/ece217_project2_tan/srv/ManipulationQuery.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/srv" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/src/ece217_project2_tan/srv/ManipulationQuery.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ece217_project2_tan")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ece217_project2_tan")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/environment" TYPE FILE FILES "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/environment" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/environment" TYPE FILE FILES "/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/environment" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_index/share/ament_index/resource_index/packages/ece217_project2_tan")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_cExport.cmake"
         "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_generator_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_generator_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cExport.cmake"
         "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_cppExport.cmake"
         "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_generator_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_generator_cppExport.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_introspection_cExport.cmake"
         "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_introspection_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_introspection_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_introspection_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_cExport.cmake"
         "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_introspection_cppExport.cmake"
         "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_introspection_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_introspection_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_cppExport.cmake"
         "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/ece217_project2_tan__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/ece217_project2_tan__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_pyExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_pyExport.cmake"
         "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_generator_pyExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_pyExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake/export_ece217_project2_tan__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_generator_pyExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/CMakeFiles/Export/62bcf6888b4b791f207fef1af74929d7/export_ece217_project2_tan__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan/cmake" TYPE FILE FILES
    "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_core/ece217_project2_tanConfig.cmake"
    "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ament_cmake_core/ece217_project2_tanConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ece217_project2_tan" TYPE FILE FILES "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/src/ece217_project2_tan/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/ece217_project2_tan__py/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/gpfs/fs1/home/wtan10/Desktop/ECE217/project2_ws/build/ece217_project2_tan/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
