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
        angle = msg.data  # Raw FTG output in radians

        # Treat π (approx. 3.14159) as "straight"
        angle_centered = angle - math.pi  # Now range is roughly [-π, π]

        # Flip if needed to match correct direction (uncomment if still reversed)
        # angle_centered = -angle_centered

        # Normalize angular.z to [-1, 1]
        normalized_angle = max(-1.0, min(1.0, angle_centered / (math.pi / 2)))  # π/2 gives sharper turns

        # Create a Twist message for robot movement
        cmd_vel_msg = Twist()
        cmd_vel_msg.linear.x = 1.0  # Move forward at full speed
        cmd_vel_msg.angular.z = normalized_angle  # Steering angle scaled between -1 and 1

        # Publish velocity command
        self.cmd_vel_publisher.publish(cmd_vel_msg)

        # Debugging output
        self.get_logger().info(
            f'FTG raw: {angle:.2f}, centered: {angle_centered:.2f}, angular.z: {normalized_angle:.2f}'
        )

def main(args=None):
    rclpy.init(args=args)
    node = FollowTheGapBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

