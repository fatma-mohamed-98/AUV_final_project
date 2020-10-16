# useful command to build 
- source ROS 2 (source /opt/ros/eloquent/setup.bash)
- navigate your ws (cd ~/AUV_ws)
- build ws packages (colcon build --packages-select <pkg-name>)or (colcon build)to build all packages at once
- source the workspace (. install/setup.bash)
- launch the launch file (ros2 launch gate_detection gate_detection.launch.py)
# Note
- the defualt client request here is the image path '/home/fatma/AUV_ws/src/frame112.jpg'
- to run the client node with your image path request:\
1-open two terminals then source the workspace (. install/setup.bash)\
2-first terminal run service node (ros2 run gate_detection service)
3-second terminal to run client node (ros2 run gate_detection client <img_path>)
