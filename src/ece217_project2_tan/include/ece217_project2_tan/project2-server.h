#ifndef PROJECT2_FUNCTION
#define PROJECT2_FUNCTION

#include <Eigen/Dense>


std::pair<bool,Eigen::VectorXd> kinematic(double joint1theta=0.0, double joint2theta=0.0, double joint3theta=0.0, double joint4theta=0.0, double joint5theta=0.0, double joint6theta=0.0,
                double goal_x=0.0, double goal_y=0.0, double goal_z=0.0, double q_x=0.0, double q_y=0.0, double q_z=0.0, double q_w=1.0);










#endif
