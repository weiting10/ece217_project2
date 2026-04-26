#include <iostream>
#include <math.h>
#include <vector>
#include <deque>
#include <algorithm>
#include <unistd.h>
#include <Eigen/Dense>
#include <Eigen/Core>
#include <utility>
#include "ece217_project2_tan/project2-server.h"

Eigen::MatrixXd compute_dh_table(double theta1, double theta2, double theta3, double theta4, double theta5, double theta6);
Eigen::Matrix4d dhTransform(double a, double alpha, double d, double theta);

std::pair<bool, Eigen::VectorXd> kinematic(double joint1theta, double joint2theta, double joint3theta, double joint4theta, double joint5theta, double joint6theta, 
		double goal_x, double goal_y, double goal_z, double q_x, double q_y, double q_z, double q_w){

	// initialize a 6 * 6 matrix
	Eigen::MatrixXd dh_table(6,6);

	// store the input joint angles into a vector
	Eigen::VectorXd original_joint_angles(6);
        original_joint_angles << joint1theta, joint2theta, joint3theta, joint4theta, joint5theta, joint6theta;

	// compute dh table with q
	dh_table = compute_dh_table(joint1theta, joint2theta, joint3theta, joint4theta, joint5theta, joint6theta);
	
	// calculate transform matrix with every line in dh table
	Eigen::Matrix4d t01 = dhTransform(dh_table(0,0),dh_table(0,1),dh_table(0,2),dh_table(0,3));
	Eigen::Matrix4d t12 = dhTransform(dh_table(1,0),dh_table(1,1),dh_table(1,2),dh_table(1,3));
	Eigen::Matrix4d t23 = dhTransform(dh_table(2,0),dh_table(2,1),dh_table(2,2),dh_table(2,3));
	Eigen::Matrix4d t34 = dhTransform(dh_table(3,0),dh_table(3,1),dh_table(3,2),dh_table(3,3));
	Eigen::Matrix4d t45 = dhTransform(dh_table(4,0),dh_table(4,1),dh_table(4,2),dh_table(4,3));
	Eigen::Matrix4d t56 = dhTransform(dh_table(5,0),dh_table(5,1),dh_table(5,2),dh_table(5,3));
        
	// calculate the t02, t03, t04, t05, t06
	Eigen::Matrix4d t02 = t01 * t12;
	Eigen::Matrix4d t03 = t02 * t23;
	Eigen::Matrix4d t04 = t03 * t34;
	Eigen::Matrix4d t05 = t04 * t45;
	Eigen::Matrix4d t06 = t05 * t56;

	// extract the rotation matrix from the tranform matrix
	// .block<rows, columns>(start row, start column)
	Eigen::Matrix3d rotation_matrix = t06.block<3,3>(0,0);
	
	// Calculate the quaternion of the current end-effector
	Eigen::Quaterniond q(rotation_matrix);

	// find the position of the current end-effector position
	Eigen::Vector3d p = t06.block<3,1>(0,3);
	std::cout << "The current end effector position is: (" << p.transpose()<< ")" << std::endl;

	// following is to store the goal quaternion and goal end-effector position
	Eigen::Vector3d goal_p(goal_x,goal_y,goal_z);
	Eigen::Quaterniond goal_q;
	goal_q.x() = q_x;
	goal_q.y() = q_y;
	goal_q.z() = q_z;
	goal_q.w() = q_w;

	std::cout << "The goal quaternion is: [(" << goal_q.x() << " , " << goal_q.y() << " , " << goal_q.z() << "), " << goal_q.w() << "]" << std::endl ;
	std::cout << "The goal end effector position is: (" << goal_p.transpose()<< ")" << std::endl;

	// check if the current pose is the same as goal pose
	// if so, return
	double e = 0.1;

	
	if( (fabs(p(0) - goal_x) < e) && (fabs(p(1) - goal_y) < e) && (fabs(p(2) - goal_z) < e) && (fabs(q.x() - q_x) < e) && (fabs(q.y() - q_y) < e) &&(fabs(q.z() - q_z) < e) &&(fabs(q.w() - q_w) < e) ){
	  return {true, original_joint_angles};
	}
	
	// printing for debuging
	std::cout << "fabs(p(0) - goal_x) = " << fabs(p(0) - goal_x) << std::endl;
	std::cout << "fabs(p(1) - goal_y) = " << fabs(p(1) - goal_y) << std::endl;
	std::cout << "fabs(p(2) - goal_z) = " << fabs(p(2) - goal_z) << std::endl;
	std::cout << "fabs(q.x() - q_x) = " << fabs(q.x() - q_x) << std::endl;
	std::cout << "fabs(q.y() - q_y) = " << fabs(q.y() - q_y) << std::endl;
	std::cout << "fabs(q.z() - q_z) = " << fabs(q.z() - q_z) << std::endl;
	std::cout << "fabs(q.w() - q_w) = " << fabs(q.w() - q_w) << std::endl;

		


	// calculate the position error
	Eigen::Vector3d errorp;
	errorp = goal_p - p;

	// calculate the oritation error
	Eigen::Vector3d erroro;
	Eigen::Vector3d quaternion_vector = q.vec();
	Eigen::Vector3d goal_quaternion_vector = goal_q.vec();

	if (goal_q.dot(q) < 0) {
		q.coeffs() = -q.coeffs();  // negate q to match goal_q's hemisphere
	}

	Eigen::Vector3d cross = goal_q.vec().cross(q.vec());

	erroro = goal_q.vec() * q.w() - q.vec() * goal_q.w() - cross;

	//print out the error for debug
	std::cout << "erroro: " << erroro.transpose()<< std::endl;
	std::cout << "errorp: " << errorp.transpose() << std::endl;



	// to obtain Jacobian matrix, need to get p0-5 and z0-5
	Eigen::Vector3d p0(0,0,0);
	Eigen::Vector3d p1 = t01.block<3,1>(0,3);
	Eigen::Vector3d p2 = t02.block<3,1>(0,3);
	Eigen::Vector3d p3 = t03.block<3,1>(0,3);
	Eigen::Vector3d p4 = t04.block<3,1>(0,3);
	Eigen::Vector3d p5 = t05.block<3,1>(0,3);

	Eigen::Vector3d z0(0,0,1);
	Eigen::Vector3d z1 = t01.block<3,1>(0,2);
	Eigen::Vector3d z2 = t02.block<3,1>(0,2);
	Eigen::Vector3d z3 = t03.block<3,1>(0,2);
	Eigen::Vector3d z4 = t04.block<3,1>(0,2);
	Eigen::Vector3d z5 = t05.block<3,1>(0,2);

	// compute components of the Jacobian
	Eigen::Vector3d jp1 = z0.cross(p - p0);
	Eigen::Vector3d jp2 = z1.cross(p - p1);
	Eigen::Vector3d jp3 = z2.cross(p - p2);
	Eigen::Vector3d jp4 = z3.cross(p - p3);
	Eigen::Vector3d jp5 = z4.cross(p - p4);
	Eigen::Vector3d jp6 = z5.cross(p - p5);

	Eigen::Vector3d jo1 = z0;
	Eigen::Vector3d jo2 = z1;
	Eigen::Vector3d jo3 = z2;
	Eigen::Vector3d jo4 = z3;
	Eigen::Vector3d jo5 = z4;
	Eigen::Vector3d jo6 = z5;

	// put the components together into the Jacobian matrix
	Eigen::MatrixXd Jacobian(6,6);
	Jacobian.block<3,1>(0,0) = jp1;
	Jacobian.block<3,1>(0,1) = jp2;
	Jacobian.block<3,1>(0,2) = jp3;
	Jacobian.block<3,1>(0,3) = jp4;
	Jacobian.block<3,1>(0,4) = jp5;
	Jacobian.block<3,1>(0,5) = jp6;

	Jacobian.block<3,1>(3,0) = jo1;
	Jacobian.block<3,1>(3,1) = jo2;
	Jacobian.block<3,1>(3,2) = jo3;
	Jacobian.block<3,1>(3,3) = jo4;
	Jacobian.block<3,1>(3,4) = jo5;
	Jacobian.block<3,1>(3,5) = jo6;

	//Eigen::MatrixXd inverse_jacobian(6,6);
	//inverse_jacobian = Jacobian.inverse();

	//////////////////////////////////////////////////////////////
	// Eigen::MatrixXd inverse_jacobian(6,6);
	// inverse_jacobian = Jacobian.inverse(); // <-- This is the problem line!

	// --- SOLUTION: Use Damped Least-Squares ---
	Eigen::MatrixXd Jt = Jacobian.transpose();
	Eigen::MatrixXd I(6,6);
	I.setIdentity();
	double damping_factor = 0.01;

	Eigen::MatrixXd inverse_jacobian = Jt * (Jacobian * Jt + damping_factor * I).inverse();
	///////////////////////////////////////////////////////////////////////////////////////////////
	// joint velocity = inverse jacobian * end effector velocity
	
	// calculate end effector position velocity = goal_p_dot + Kp * errorp
	Eigen::Matrix3d kp;
	kp << 1,0,0,
	      0,1,0,
	      0,0,1;
	Eigen::Vector3d ee_position_velocity = kp * errorp;    // assuming goal_p_dot is [0,0,0]^T

	Eigen::Matrix3d ko;
	ko << 1,0,0,
	      0,1,0,
	      0,0,1;
	Eigen::Vector3d ee_orientation_velocity = ko * erroro;	// assuming goal_angular_velocity = [0,0,0]^T
	
	Eigen::VectorXd ee_velocity(6);
	ee_velocity << ee_position_velocity, ee_orientation_velocity;

	// calculate joint angles velocity (q dot)
	Eigen::VectorXd joint_angles_velocity(6);
	joint_angles_velocity = inverse_jacobian * ee_velocity;

	// calcualte new joint angles(q new)
	Eigen::VectorXd new_joint_angles(6);
	new_joint_angles = joint_angles_velocity * 0.01 + original_joint_angles;


        return {false, new_joint_angles};	
  

}

// input q and output the dh matrix
Eigen::MatrixXd compute_dh_table(double theta1, double theta2, double theta3, double theta4, double theta5, double theta6){
  
  Eigen::MatrixXd dh(6,4);

  dh(0,0) = 0;        dh(0,1) = M_PI/2;    dh(0,2) = 1;    dh(0,3) = theta1;
  dh(1,0) = 1;        dh(1,1) = 0;         dh(1,2) = 0;    dh(1,3) = theta2;
  dh(2,0) = 0;        dh(2,1) = M_PI/2;    dh(2,2) = 0;    dh(2,3) = theta3;
  dh(3,0) = 0;        dh(3,1) = -M_PI/2;   dh(3,2) = 0.5;  dh(3,3) = theta4;
  dh(4,0) = 0;        dh(4,1) = M_PI/2;    dh(4,2) = 0;    dh(4,3) = theta5;
  dh(5,0) = 0;        dh(5,1) = 0;         dh(5,2) = 0.5;  dh(5,3) = theta6;

  return dh;
}


// input a, alpha, d, and theta and output the 4 by 4 tranform matrix
Eigen::Matrix4d dhTransform(double a, double alpha, double d, double theta) {
    Eigen::Matrix4d T;

    T << std::cos(theta), -std::sin(theta)*std::cos(alpha),  std::sin(theta)*std::sin(alpha), a*std::cos(theta),
         std::sin(theta),  std::cos(theta)*std::cos(alpha), -std::cos(theta)*std::sin(alpha), a*std::sin(theta),
         0,                std::sin(alpha),                  std::cos(alpha),                 d,
         0,                0,                                0,                               1;

    return T;
}
