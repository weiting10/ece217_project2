#include <iostream>
#include <chrono>
#include <rclcpp/rclcpp.hpp>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <sensor_msgs/msg/joint_state.hpp>


// this calss is a ROS2 node
class RobotJointStatePublisher : public rclcpp::Node {
  public:
    RobotJointStatePublisher() : rclcpp::Node( "project2_robot_joint_state_publisher") {
      
      //create a publisher of datatype sensor_mgsg::msg::JointState; this has property of float64[] position
      // create a publisher on topic "joint_state"
      joint_state_publisher = this->create_publisher< sensor_msgs::msg::JointState >( "joint_state",1);
      
      //This class provides an easy way to publish coordinate frame transform information
      broadcaster = std::make_shared<tf2_ros::TransformBroadcaster>(this);

      loop_rate = std::make_shared< rclcpp::Rate >( std::chrono_literals::operator""ms(100) );

      //this line is calling the publish function every 100ms
      timer = this->create_wall_timer( std::chrono_literals::operator""ms(100), std::bind(&RobotJointStatePublisher::publish, this) );

      joint_angles.resize(6);
      joint_angles[0] = 0.0;
      joint_angles[1] = 0.0;
      joint_angles[2] = 0.0;
      joint_angles[3] = 0.0;
      joint_angles[4] = 0.0;
      joint_angles[5] = 0.0;

      RCLCPP_INFO( rclcpp::get_logger( "rclcpp" ), "Ready to publish joint states. " );

    }

    void publish( void ){
      sensor_msgs::msg::JointState joint_state_msg;
      joint_state_msg.header.stamp = this->get_clock()->now();
      joint_state_msg.name = { "joint1theta", "joint2theta", "joint3theta", "joint4theta", "joint5theta", "joint6theta" };
      joint_state_msg.position = {joint_angles[0],joint_angles[1],joint_angles[2],joint_angles[3],joint_angles[4],joint_angles[5] };

      //below is for the base of the robot arm; doesn't need to change      
      // this class has tranform::translation and transform::rotation(in quaternion)
      geometry_msgs::msg::TransformStamped transform_msg;
      transform_msg.header.stamp = this->get_clock()->now();
      transform_msg.header.frame_id = "base";
      transform_msg.child_frame_id = "base_link";
      transform_msg.transform.translation.x = 0.0;
      transform_msg.transform.translation.y = 0.0;
      transform_msg.transform.translation.z = 0.0;
      
      tf2::Quaternion q;
      q.setRPY( 0.0, 0.0, 0.0 );
      transform_msg.transform.rotation.x = q.x();
      transform_msg.transform.rotation.y = q.y();
      transform_msg.transform.rotation.z = q.z();
      transform_msg.transform.rotation.w = q.w();

      broadcaster->sendTransform(transform_msg);
      joint_state_publisher->publish( joint_state_msg );

    }

    //declaring the variables for what is inside the RobotJointStatePublisher()
    std::shared_ptr< rclcpp::Publisher< sensor_msgs::msg::JointState_<std::allocator<void> >, std::allocator<void> > > joint_state_publisher;
    std::shared_ptr< tf2_ros::TransformBroadcaster > broadcaster;
    rclcpp::Rate::SharedPtr loop_rate;
    rclcpp::TimerBase::SharedPtr timer;

    std::vector< double > joint_angles;

};

int main( int argc, char* argv[]){
  rclcpp::init( argc, argv);
  rclcpp::spin( std::make_shared<RobotJointStatePublisher>() );
  rclcpp::shutdown();

  return 0;

}














