/*
 * listener.cpp
 *
 *  Created on: Sep 30, 2017
 *      Author: indigo
 */
#include <ros/ros.h>
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr& msg ){
	ROS_INFO("I heard: [%s] ", msg->data.c_str());
}

int main(int argc, char **argv) {
	/**
	 * 1 - initialize  ROS
	 * 2 - create node handler
	 * 3 - create subscriber to chatter topic queue size  = 10
	 * 4 - create the callback function
	 * 5 - spin
	 */
	ros::init(argc,argv,"listener");
	ros::NodeHandle nh;
	ros::Subscriber subscribe = nh.subscribe("chatter", 10, chatterCallback);
	ros::spin();
	return 0;
}




