#include <iostream>
#include <math.h>
#include <vector>
#include <deque>
#include <algorithm>
#include <unistd.h>
#include <Eigen/Dense>
#include <eigen/dense>
#include "ece217_project2_tan/project2-server.h"

int kinematic(double joint1theta=0.0 double joint2theta=0.0, double joint3theta=0.0, double joint4theta=0.0, double joint5theta=0.0, double joint6theta=0.0, 
		double goal_x=0.0, double goal_y=0.0, double goal_z=0.0, double q_x=0.0, double q_y=0.0, double q_z=0.0, double q_w=1.0){

	Eigen::MatrixXd m(2,2);
	m << 1,2,
	     3,4;
        std::cout << result << std::endl;
        return 0;	
  

}
