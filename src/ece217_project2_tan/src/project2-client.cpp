#include <rclcpp/rclcpp.hpp>
#include <fstream>
#include <chrono>
#include <boost/program_options.hpp>
#include <unistd.h>

#include "ece217_project2_tan/srv/manipulation_query.hpp"

int main( int argc, char* argv[] ){

  //parse the command line input
  // 6 inputs for the joint theta
  // 3 input for the goal position and 4 for goal quaternion
  boost::program_options::options_description desc{"Options"};
  desc.add_options()("help,h", "Help screen")
	  ("joint1theta", boost::program_options::value<double>()->default_value(0.0),"joint 1 theta value")
	  ("joint2theta", boost::program_options::value<double>()->default_value(0.0),"joint 2 theta value")
	  ("joint3theta", boost::program_options::value<double>()->default_value(0.0),"joint 3 theta value")
	  ("joint4theta", boost::program_options::value<double>()->default_value(0.0),"joint 4 theta value")
	  ("joint5theta", boost::program_options::value<double>()->default_value(0.0),"joint 5 theta value")
	  ("joint6theta", boost::program_options::value<double>()->default_value(0.0),"joint 6 theta value") 
	  
	  ("goal-x", boost::program_options::value<double>()->default_value(0.0),"goal x value")
	  ("goal-y", boost::program_options::value<double>()->default_value(0.0),"goal y value")
	  ("goal-z", boost::program_options::value<double>()->default_value(0.0),"goal z value")

	  ("quaternion-x", boost::program_options::value<double>()->default_value(0.0),"quaternion x value")
	  ("quaternion-y", boost::program_options::value<double>()->default_value(0.0),"quaternion y value")
	  ("quaternion-z", boost::program_options::value<double>()->default_value(0.0),"quaternion z value")
	  ("quaternion-w", boost::program_options::value<double>()->default_value(1.0),"quaternion w value")
 
	  ("output", boost::program_options::value<std::string>(), "output file");
  
 
  boost::program_options::variables_map vm;
  boost::program_options::store(
  boost::program_options::parse_command_line(argc, argv, desc), vm);
  boost::program_options::notify(vm);
  if (vm.count("help")) {
    std::cout << desc << std::endl;
    return EXIT_SUCCESS;

  }

  //create node and client
  rclcpp::init( argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("project2_client");

  rclcpp::Client<ece217_project2_tan::srv::ManipulationQuery>::SharedPtr client = node->create_client<ece217_project2_tan::srv::ManipulationQuery>("manipulation_query");

  std::shared_ptr<ece217_project2_tan::srv::ManipulationQuery::Request> request = std::make_shared<ece217_project2_tan::srv::ManipulationQuery::Request >();

  // sending input from client to server
  request->joint_angles.resize(6);
  request->joint_angles[0] = vm["joint1theta"].as<double>();
  request->joint_angles[1] = vm["joint2theta"].as<double>();
  request->joint_angles[2] = vm["joint3theta"].as<double>();
  request->joint_angles[3] = vm["joint4theta"].as<double>();
  request->joint_angles[4] = vm["joint5theta"].as<double>();
  request->joint_angles[5] = vm["joint6theta"].as<double>();
  
  request->goal.position.x = vm["goal-x"].as<double>();
  request->goal.position.y = vm["goal-y"].as<double>();
  request->goal.position.z = vm["goal-z"].as<double>();

  request->goal.orientation.x = vm["quaternion-x"].as<double>();
  request->goal.orientation.y = vm["quaternion-y"].as<double>();
  request->goal.orientation.z = vm["quaternion-z"].as<double>();
  request->goal.orientation.w = vm["quaternion-w"].as<double>();
 
  sleep(1);

  while( !client->wait_for_service(std::chrono_literals::operator""s(1)) ){
    if( !rclcpp::ok() ){
      RCLCPP_ERROR( rclcpp::get_logger("rclcpp"), "Interrupted while waiting for server, exiting");
      return EXIT_FAILURE;	
    }
    RCLCPP_INFO( rclcpp::get_logger("rclcpp"), "service not available, waiting ..." );
  }

  rclcpp::Client<ece217_project2_tan::srv::ManipulationQuery>::FutureAndRequestId result = client->async_send_request( request );
  if(rclcpp::spin_until_future_complete( node, result) == rclcpp::FutureReturnCode::SUCCESS ){
    RCLCPP_INFO( rclcpp::get_logger( "rclcpp" ), "Success in calling service" );
  }else{
    RCLCPP_ERROR( rclcpp::get_logger( "rclcpp" ), "Failed to call service" );
  }

  RCLCPP_INFO( rclcpp::get_logger( "rclcpp" ), "client complete" );

  rclcpp::shutdown();
 
  return EXIT_SUCCESS;

}










