import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from geometry_msgs.msg import Twist
import math

class FollowTheGapBridge(Node):
    def __init__(self):
        super().__init__('follow_the_gap_bridge')

        # Subscribe to the Follow The Gap heading angle topic
        self.subscription = self.create_subscription(
            Float32,
            '/final_heading_angle',  # Topic published by Follow the Gap
            self.heading_callback,
            10)
        
        # Publisher for the cmd_vel topic to move the car
        self.cmd_vel_publisher = self.create_publisher(Twist, '/cmd_vel', 10)

    def heading_callback(self, msg):
        # Extract the final heading angle (in radians)
        angle = msg.data

        # Normalize angular.z to be in range [-1, 1]
        normalized_angle = max(-1.0, min(1.0, angle / math.pi))  # Scale radians to [-1, 1]

        # Create a Twist message for robot movement
        cmd_vel_msg = Twist()
        cmd_vel_msg.linear.x = 1.0  # Move forward at full speed
        cmd_vel_msg.angular.z = normalized_angle  # Steering angle scaled between -1 and 1

        # Publish velocity command
        self.cmd_vel_publisher.publish(cmd_vel_msg)
        self.get_logger().info(f'Published cmd_vel: linear={cmd_vel_msg.linear.x}, angular={cmd_vel_msg.angular.z}')

def main(args=None):
    rclpy.init(args=args)
    node = FollowTheGapBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

