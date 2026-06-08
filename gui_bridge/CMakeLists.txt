cmake_minimum_required(VERSION 3.8)
project(gui_bridge_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(sentinel_interfaces REQUIRED)
find_package(Boost REQUIRED COMPONENTS system)
find_package(OpenCV REQUIRED)


# ── gui_bridge_node ───────────────────────────────────────
add_executable(gui_bridge_node
  src/gui_bridge_node.cpp
)

target_include_directories(gui_bridge_node PRIVATE
  ${Boost_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(gui_bridge_node
  ${Boost_LIBRARIES}
  ${OpenCV_LIBS}
)

ament_target_dependencies(gui_bridge_node
  rclcpp
  sensor_msgs
  std_msgs
  cv_bridge
  sentinel_interfaces
)

# ── mode_manager_node ─────────────────────────────────────
add_executable(mode_manager_node
  src/mode_manager_node.cpp
)

ament_target_dependencies(mode_manager_node
  rclcpp
  std_msgs
  sentinel_interfaces
)

# ── install ───────────────────────────────────────────────
install(TARGETS
  gui_bridge_node
  mode_manager_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

ament_package()