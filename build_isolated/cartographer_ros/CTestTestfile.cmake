# CMake generated Testfile for 
# Source directory: /home/kuge/catkin_ws2/src/cartographer_ros/cartographer_ros
# Build directory: /home/kuge/catkin_ws2/build_isolated/cartographer_ros
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_cartographer_ros_gtest_configuration_files_test "/home/kuge/catkin_ws2/build_isolated/cartographer_ros/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/kuge/catkin_ws2/build_isolated/cartographer_ros/test_results/cartographer_ros/gtest-configuration_files_test.xml" "--return-code" "/home/kuge/catkin_ws2/devel_isolated/cartographer_ros/lib/cartographer_ros/configuration_files_test --gtest_output=xml:/home/kuge/catkin_ws2/build_isolated/cartographer_ros/test_results/cartographer_ros/gtest-configuration_files_test.xml")
add_test(_ctest_cartographer_ros_gtest_msg_conversion_test "/home/kuge/catkin_ws2/build_isolated/cartographer_ros/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/kuge/catkin_ws2/build_isolated/cartographer_ros/test_results/cartographer_ros/gtest-msg_conversion_test.xml" "--return-code" "/home/kuge/catkin_ws2/devel_isolated/cartographer_ros/lib/cartographer_ros/msg_conversion_test --gtest_output=xml:/home/kuge/catkin_ws2/build_isolated/cartographer_ros/test_results/cartographer_ros/gtest-msg_conversion_test.xml")
add_test(_ctest_cartographer_ros_gtest_time_conversion_test "/home/kuge/catkin_ws2/build_isolated/cartographer_ros/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/kuge/catkin_ws2/build_isolated/cartographer_ros/test_results/cartographer_ros/gtest-time_conversion_test.xml" "--return-code" "/home/kuge/catkin_ws2/devel_isolated/cartographer_ros/lib/cartographer_ros/time_conversion_test --gtest_output=xml:/home/kuge/catkin_ws2/build_isolated/cartographer_ros/test_results/cartographer_ros/gtest-time_conversion_test.xml")
subdirs("gtest")
subdirs("cartographer_ros")
