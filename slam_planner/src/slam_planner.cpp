
#include <slam_planner/slam_planner.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "slam_planner_node");
  tf::TransformListener tf(ros::Duration(10));

  move_base::MoveBase planner( tf );

  ros::spin();

  return(0);
}
