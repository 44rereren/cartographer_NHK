#!/bin/sh
timeout=10
password="robo"
command="sudo chmod a+rw /dev/ttyACM0"
expect -c "
    set timeout ${timeout}
    spawn ${command}
    expect \"sudo\"
    send \"${password}\n\"
    expect \"$\"
    exit 0
"
roslaunch cartographer_ros setup.launch
exit 0
