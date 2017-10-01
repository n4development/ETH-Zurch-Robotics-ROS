/*
 * husky_highlevel_controller_node.cpp
 *
 *  Created on: Sep 30, 2017
 *      Author: indigo
 */
#include <ros/ros.h>
#include "sensor_msgs/LaserScan.h"

void laserCallback(const sensor_msgs::LaserScanConstPtr& msg ){
	ROS_INFO_STREAM(msg);
}

int main(int argc, char **argv) {
	ros::init(argc, argv,"husky_laser_read");
	ros::NodeHandle nh;
	ros::Subscriber scanReader = nh.subscribe("/scan",10,laserCallback);
	ros::spin();
	return 0;
}




