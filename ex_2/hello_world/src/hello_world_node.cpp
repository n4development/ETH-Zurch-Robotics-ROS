/*
 * hello_world.cpp
 *
 *  Created on: Sep 30, 2017
 *      Author: indigo
 */

#include <ros/ros.h>


int main(int argc, char **argv) {
	/**
	 * 1 - initialize  ROS
	 * 2 - create node handler
	 * 3 - Loop frequency 10hz
	 * 4 - stream out message while ROS is OK
	 * 5 - process income messages via callback
	 */
	ros::init(argc,argv,"hello_world");
	ros::NodeHandle nh;
	ros::Rate loopRate(10);

	unsigned int counter = 0;

	while(ros::ok()){
		ROS_INFO_STREAM("HI NADER FROM ROS MASTER" << counter);
		ros::spinOnce();
		loopRate.sleep();
		counter ++;
	}
	return 0;

}





