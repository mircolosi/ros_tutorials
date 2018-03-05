#include <ros/ros.h>
#include <turtlesim/Pose.h>
#include <turtlesim/Color.h>
#include <turtlesim/GetCircles.h>
#include <turtlesim/RemoveCircle.h>

void poseCallback(const turtlesim::PoseConstPtr& pose) {
  //check if pose is close to a circle and if the color is red
  //then remove it
}


void colorCallback(const turtlesim::ColorConstPtr& color) {
  //save the current color seen by the turtle
}

int main(int argc, char** argv) {

  ros::init(argc, argv, "tutorial_delete_circle_node");
  ros::NodeHandle nh;

  //run service clients for getting and removing circles

  //subscribe to the topics needed
  

  ros::spin();              //loop over the callbacks
}
