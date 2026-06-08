import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess


def generate_launch_description():
    return LaunchDescription([
        # ── gui_bridge_node ──
        Node(
            package='gui_bridge_pkg',
            executable='gui_bridge_node',
            name='gui_bridge_node',
            output='screen',
            parameters=[{
                'gui_host':           os.getenv('GUI_HOST',              '192.168.0.100'),
                'motor_rx_port':      int(os.getenv('MOTOR_RX_PORT',     '8000')),
                'motor_status_port':  int(os.getenv('MOTOR_STATUS_PORT', '8001')),
                'eo_detection_topic': os.getenv('EO_DETECTION_TOPIC',    '/detections/eo'),
                'ir_detection_topic': os.getenv('IR_DETECTION_TOPIC',    '/detections/ir'),
            }],
        ),

        # ── mode_manager_node ──
        Node(
            package='gui_bridge_pkg',
            executable='mode_manager_node',
            name='mode_manager_node',
            output='screen',
        ),

        # ── recording_video_server.py (HTTP 8090) ──
        ExecuteProcess(
            cmd=['python3', '/ros2_ws/src/recording_video_server.py'],
            additional_env={
                'RECORDING_DIR':       os.getenv('RECORDING_DIR',       '/home/lig/Desktop/video'),
                'RECORDING_HTTP_PORT': os.getenv('RECORDING_HTTP_PORT', '8090'),
            },
            output='screen',
        ),
    ])