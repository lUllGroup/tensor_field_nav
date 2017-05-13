// Generated by gencpp from file pure_pursuit_controller/recoverPathRequest.msg
// DO NOT EDIT!


#ifndef PURE_PURSUIT_CONTROLLER_MESSAGE_RECOVERPATHREQUEST_H
#define PURE_PURSUIT_CONTROLLER_MESSAGE_RECOVERPATHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_msgs/Path.h>

namespace pure_pursuit_controller
{
template <class ContainerAllocator>
struct recoverPathRequest_
{
  typedef recoverPathRequest_<ContainerAllocator> Type;

  recoverPathRequest_()
    : recoverPath()  {
    }
  recoverPathRequest_(const ContainerAllocator& _alloc)
    : recoverPath(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nav_msgs::Path_<ContainerAllocator>  _recoverPath_type;
  _recoverPath_type recoverPath;




  typedef boost::shared_ptr< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> const> ConstPtr;

}; // struct recoverPathRequest_

typedef ::pure_pursuit_controller::recoverPathRequest_<std::allocator<void> > recoverPathRequest;

typedef boost::shared_ptr< ::pure_pursuit_controller::recoverPathRequest > recoverPathRequestPtr;
typedef boost::shared_ptr< ::pure_pursuit_controller::recoverPathRequest const> recoverPathRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pure_pursuit_controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d5472e8194f5ec07bb8666b38a3829b3";
  }

  static const char* value(const ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd5472e8194f5ec07ULL;
  static const uint64_t static_value2 = 0xbb8666b38a3829b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pure_pursuit_controller/recoverPathRequest";
  }

  static const char* value(const ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/Path recoverPath\n\
\n\
\n\
================================================================================\n\
MSG: nav_msgs/Path\n\
#An array of poses that represents a Path for a robot to follow\n\
Header header\n\
geometry_msgs/PoseStamped[] poses\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.recoverPath);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct recoverPathRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pure_pursuit_controller::recoverPathRequest_<ContainerAllocator>& v)
  {
    s << indent << "recoverPath: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.recoverPath);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PURE_PURSUIT_CONTROLLER_MESSAGE_RECOVERPATHREQUEST_H