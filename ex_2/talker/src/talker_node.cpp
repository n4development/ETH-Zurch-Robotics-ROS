/*
 * talker.cpp
 *
 *  Created on: Sep 30, 2017
 *      Author: indigo
 */
#include <ros/ros.h>
#include "std_msgs/String.h"

int main(int argc, char **argv) {
	ros::init(argc, argv, "talker");
	ros::NodeHandle nh;
	ros::Publisher pubisher = nh.advertise<std_msgs::String>("chatter",10);
	ros::Rate loopRate(10);
	unsigned int counter = 0;
	while(ros::ok()){
		std_msgs::String message;
		message.data = "Hi Nader From Master Msg #no " + std::to_string(counter);
		ROS_INFO_STREAM(message.data);
		pubisher.publish(message);
		ros::spinOnce();
		loopRate.sleep();
		counter++;
	}
	return 0;
}




