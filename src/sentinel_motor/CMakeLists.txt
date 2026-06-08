cmake_minimum_required(VERSION 3.8)
project(sentinel_motor)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(Boost REQUIRED COMPONENTS system)
find_package(rclcpp REQUIRED)
find_package(sentinel_interfaces REQUIRED)
find_package(std_msgs REQUIRED)

# ── pan_tilt_control_node ──
add_executable(pan_tilt_control_node
  src/pan_tilt_control_node.cpp
  src/UdpTransport.cpp
)
target_include_directories(pan_tilt_control_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(pan_tilt_control_node PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(pan_tilt_control_node rclcpp sentinel_interfaces std_msgs)
target_link_libraries(pan_tilt_control_node Boost::system)

# ── motor_feedback_node ──
add_executable(motor_feedback_node
  src/motor_feedback_node.cpp
  src/UdpTransport.cpp
)
target_include_directories(motor_feedback_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(motor_feedback_node PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(motor_feedback_node rclcpp sentinel_interfaces std_msgs)
target_link_libraries(motor_feedback_node Boost::system)

# ── tracking_control_node ──
add_executable(tracking_control_node src/tracking_control_node.cpp)
target_compile_features(tracking_control_node PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(tracking_control_node rclcpp sentinel_interfaces std_msgs)

install(
  TARGETS pan_tilt_control_node motor_feedback_node tracking_control_node
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY config launch
  DESTINATION share/${PROJECT_NAME}
)
install(
  DIRECTORY include/
  DESTINATION include/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()