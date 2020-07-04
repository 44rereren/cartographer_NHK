#!/bin/bash
#gnome-terminal -e "roslaunch cartographer_ros pure_localization.launch load_state_filename:=${HOME}/pr_bag/pr_40_2.bag.pbstream"
roslaunch cartographer_ros pure_localization.launch load_state_filename:=${HOME}/pr_bag/pr_40_2.bag.pbstream &
sleep 3s
roslaunch carto_pose pose_blue.launch
