// Generated by gencpp from file roborts_msgs/GimbalAngle.msg
// DO NOT EDIT!


#ifndef ROBORTS_MSGS_MESSAGE_GIMBALANGLE_H
#define ROBORTS_MSGS_MESSAGE_GIMBALANGLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roborts_msgs
{
template <class ContainerAllocator>
struct GimbalAngle_
{
  typedef GimbalAngle_<ContainerAllocator> Type;

  GimbalAngle_()
    : yaw_mode(false)
    , pitch_mode(false)
    , yaw_angle(0.0)
    , pitch_angle(0.0)  {
    }
  GimbalAngle_(const ContainerAllocator& _alloc)
    : yaw_mode(false)
    , pitch_mode(false)
    , yaw_angle(0.0)
    , pitch_angle(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _yaw_mode_type;
  _yaw_mode_type yaw_mode;

   typedef uint8_t _pitch_mode_type;
  _pitch_mode_type pitch_mode;

   typedef double _yaw_angle_type;
  _yaw_angle_type yaw_angle;

   typedef double _pitch_angle_type;
  _pitch_angle_type pitch_angle;





  typedef boost::shared_ptr< ::roborts_msgs::GimbalAngle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roborts_msgs::GimbalAngle_<ContainerAllocator> const> ConstPtr;

}; // struct GimbalAngle_

typedef ::roborts_msgs::GimbalAngle_<std::allocator<void> > GimbalAngle;

typedef boost::shared_ptr< ::roborts_msgs::GimbalAngle > GimbalAnglePtr;
typedef boost::shared_ptr< ::roborts_msgs::GimbalAngle const> GimbalAngleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roborts_msgs::GimbalAngle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roborts_msgs::GimbalAngle_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roborts_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'roborts_msgs': ['/home/chaosli/robomaster_ws/devel/share/roborts_msgs/msg', '/home/chaosli/robomaster_ws/src/RoboRTS/roborts_msgs/msg', '/home/chaosli/robomaster_ws/src/RoboRTS/roborts_msgs/msg/referee_system'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roborts_msgs::GimbalAngle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roborts_msgs::GimbalAngle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roborts_msgs::GimbalAngle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roborts_msgs::GimbalAngle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roborts_msgs::GimbalAngle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roborts_msgs::GimbalAngle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roborts_msgs::GimbalAngle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b3949b2683b910b23b0cb34879284a9b";
  }

  static const char* value(const ::roborts_msgs::GimbalAngle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb3949b2683b910b2ULL;
  static const uint64_t static_value2 = 0x3b0cb34879284a9bULL;
};

template<class ContainerAllocator>
struct DataType< ::roborts_msgs::GimbalAngle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roborts_msgs/GimbalAngle";
  }

  static const char* value(const ::roborts_msgs::GimbalAngle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roborts_msgs::GimbalAngle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#gimbal feedback angle data\n\
bool yaw_mode\n\
bool pitch_mode\n\
float64 yaw_angle\n\
float64 pitch_angle\n\
";
  }

  static const char* value(const ::roborts_msgs::GimbalAngle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roborts_msgs::GimbalAngle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.yaw_mode);
      stream.next(m.pitch_mode);
      stream.next(m.yaw_angle);
      stream.next(m.pitch_angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GimbalAngle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roborts_msgs::GimbalAngle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roborts_msgs::GimbalAngle_<ContainerAllocator>& v)
  {
    s << indent << "yaw_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.yaw_mode);
    s << indent << "pitch_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pitch_mode);
    s << indent << "yaw_angle: ";
    Printer<double>::stream(s, indent + "  ", v.yaw_angle);
    s << indent << "pitch_angle: ";
    Printer<double>::stream(s, indent + "  ", v.pitch_angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBORTS_MSGS_MESSAGE_GIMBALANGLE_H
