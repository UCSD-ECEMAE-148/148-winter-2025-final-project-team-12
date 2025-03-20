<sup>148-winter-2025-final-project-team-12</sup>

# **We Are MapsAI**
***Search and Rescue: Tennis Ball Edition***

<img src="https://github.com/UCSD-ECEMAE-148/148-winter-2025-final-project-team-12/blob/main/media/car.jpeg" alt="robocar on track" width="300" />

We are using OpenCV plus YOLO for camera vision and SLAM on Lidar to map a room, identify a tennis ball and notate it on the room map. 

<img src="https://github.com/UCSD-ECEMAE-148/148-winter-2025-final-project-team-12/blob/main/media/group%20pic.jpg" alt="robocar on track" width="400" />

## Team Members

**M**atthew Tan |
 *ECE: Computer Engineering* 

**A**licia Baker |
 *MAE: Mechanical Engineering: Controls & Robotics*

**P**ranav Sakhuja |
 *MAE: Mechanical Engineering: Controls & Robotics* 
 
**S**idharth Mundra |
 *CSE: Computer Science*

## Abstract
Our idea was to create a robot that can successfully complete a rescue mission through the use of SLAM and object detection. The robot drives around, mapping a room using lidar as it goes. While it drives, its camera searches for a green ball. Once the green ball is detected, the robot car will use the A* shortest path algorithm to locate the room's nearest exit.

The robot utilizes the ROS2 topics for sensor fusion along with LiDAR for SLAM (Simultaneous Localization and Mapping). We also have Python scripts for real-time object detection on the OAK-D Lite camera, for implementing "follow the gap" navigation for object avoidance, and to manage the robot's movement.

## Goals
1) Use OpenCV plus YOLO for camera vision to identify a tennis ball
2) Use SLAM on Lidar to map that room
3) Pin the location of the tennis ball on the room map
4) Run a script to find the shortest path out of the room

## Deliverables
**Our Minimum Viable Product (MVP)**
- Camera Vision Identifying Tennis Ball
  (video of tennis ball identification)
- Room Map
  (video of map building)
- Place Ball on Map
  (video of tennis ball ping on map)

**Future Goals**
- Find the shortest path out of the room

```mermaid
graph TD;
    A-->B;
    A-->C;
    B-->D;
    C-->D;
```

## Contact

**M**atthew Tan |
mztan@ucsd.edu | [LinkedIn](https://www.linkedin.com/in/matthewztan)

**A**licia Baker |
arbaker@ucsd.edu | [LinkedIn](https://www.linkedin.com/in/alicia-r-baker)

**P**ranav Sakhuja |
psakhuja@ucsd.edu | [LinkedIn](https://www.linkedin.com/in/pranavsakhuja)

 
**S**idharth Mundra |
smundra@ucsd.edu
