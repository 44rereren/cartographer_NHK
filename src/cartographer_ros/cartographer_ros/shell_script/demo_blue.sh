#!/bin/bash
#gnome-terminal -e "roslaunch cartographer_ros pure_localization.launch load_state_filename:=${HOME}/pr_bag/pr_40_2.bag.pbstream"
gnome-terminal -- roslaunch cartographer_ros demo_pure_localization.launch bag_filename:=${HOME}/pr_bag/pr_40.bag load_state_filename:=${HOME}/catkin_ws2/src/cartographer_ros/cartographer_ros/map/pr_40_2.bag.pbstream

sleep 3s
roslaunch carto_pose pose_blue.launch
