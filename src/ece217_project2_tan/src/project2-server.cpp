#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <Eigen/Dense>
#include <Eigen/Core>
#include <tuple>

#include "ece217_project2_tan/srv/manipulation_query.hpp"
#include "ece217_project2_tan/project2-server.h"

class ManipulationService : public rclcpp::Node {
  public:
    ManipulationService() : rclcpp::Node( "project2_server" ){
      service = this->create_service< ece217_project2_tan::srv::ManipulationQuery >( "manipulation_query", std::bind( &ManipulationService::generate_manipulation, this, std::placeholders::_1, std::placeholders::_2 ) );

      RCLCPP_INFO( rclcpp::get_logger( "rclcpp" ), "Ready to generate plans." );
    }

    void generate_manipulation( const std::shared_ptr< ece217_project2_tan::srv::ManipulationQuery::Request> request,
		    const std::shared_ptr< ece217_project2_tan::srv::ManipulationQuery::Response > response ){
      RCLCPP_INFO( rclcpp::get_logger( "rclcpp" ), "Incoming manipulation request");
      
      // printing out the starting joint angles and goal from client
      std::cout << "Request starting joint thetas: " << std::endl 
	      <<request->joint_angles[0] << " " 
	      <<request->joint_angles[1] << " " 
	      <<request->joint_angles[2] << " " 
	      <<request->joint_angles[3] << " " 
	      <<request->joint_angles[4] << " " 
	      <<request->joint_angles[5]<< std::endl<< std::endl;

     std::cout << "Request goal position: " << "(" << request->goal.position.x <<"," << request->goal.position.y <<","<< request->goal.position.z<<")" << std::endl;
     std::cout << "Request goal orientation: " << "[(" <<request->goal.orientation.x <<"," << request->goal.orientation.y << "," << request->goal.orientation.z << "), " << request->goal.orientation.w << " ]" <<std::endl;


    // call algorithm function "kinematic"
    auto [check,new_joint_angles] = kinematic(request->joint_angles[0],
	   			 request->joint_angles[1],
	      			 request->joint_angles[2],
			         request->joint_angles[3],
	      			 request->joint_angles[4],
	      			 request->joint_angles[5],
  	      			 request->goal.position.x,	
	     			 request->goal.position.y,	
	      			 request->goal.position.z,
	      			 request->goal.orientation.x,
	      			 request->goal.orientation.y, 
	      			 request->goal.orientation.z,
	      			 request->goal.orientation.w); 
		      
    while( check == false ){
	    std::tie(check,new_joint_angles) = kinematic(new_joint_angles[0],
                                 new_joint_angles[1],
                                 new_joint_angles[2],
                                 new_joint_angles[3],
                                 new_joint_angles[4],
                                 new_joint_angles[5],
                                 request->goal.position.x,
                                 request->goal.position.y, 
                                 request->goal.position.z,
                                 request->goal.orientation.x,
                                 request->goal.orientation.y,
                                 request->goal.orientation.z,
                                 request->goal.orientation.w);
	  
      }



      RCLCPP_INFO( rclcpp::get_logger( "rclcpp" ), "Outgoing manipulation response");

    }


    rclcpp::Service< ece217_project2_tan::srv::ManipulationQuery >::SharedPtr service;
    //    std::shared_ptr< rclcpp::Publisher< visualization_msgs::msg::MarkerArray_<std::allocator<void> >, std::allocator<void> > > planner_viz_publisher;
 
};

int main( int argc, char* argv[] ){
  rclcpp::init( argc, argv);
  rclcpp::spin( std::make_shared< ManipulationService >() );
  rclcpp::shutdown();
  return EXIT_SUCCESS;

}
