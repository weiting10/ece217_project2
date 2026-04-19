#include <iostream>
#include <rclcpp/rclcpp.hpp>

#include "ece217_project2_tan/srv/manipulation_query.hpp"

class ManipulationService : public rclcpp::Node {
  public:
    ManipulationService() : rclcpp::Node( "project2_server" ){
      service = this->create_service< ece217_project2_tan::srv::ManipulationQuery >( "manipulaiton_query", std::bind( &ManipulationService::generate_manipulation, this, std::placeholders::_1, std::placeholders::_2 ) );

      RCLCPP_INFO( rclcpp::get_logger( "rclcpp" ), "Ready to generate plans." );
    }

    void generate_manipulation( const std::shared_ptr< ece217_project2_tan::srv::ManipulationQuery::Request> request,
		    const std::shared_ptr< ece217_project2_tan::srv::ManipulationQuery::Response > response ){
      RCLCPP_INFO( rclcpp::get_logger( "rclcpp" ), "Incoming manipulation request");

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
