/* Auto-generated by genmsg_cpp for file /home/spyder/corobot_ws/src/corobots/face_recognition/msg/FaceRecognitionActionResult.msg */
#ifndef FACE_RECOGNITION_MESSAGE_FACERECOGNITIONACTIONRESULT_H
#define FACE_RECOGNITION_MESSAGE_FACERECOGNITIONACTIONRESULT_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "face_recognition/FaceRecognitionResult.h"

namespace face_recognition
{
template <class ContainerAllocator>
struct FaceRecognitionActionResult_ {
  typedef FaceRecognitionActionResult_<ContainerAllocator> Type;

  FaceRecognitionActionResult_()
  : header()
  , status()
  , result()
  {
  }

  FaceRecognitionActionResult_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , status(_alloc)
  , result(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
   ::actionlib_msgs::GoalStatus_<ContainerAllocator>  status;

  typedef  ::face_recognition::FaceRecognitionResult_<ContainerAllocator>  _result_type;
   ::face_recognition::FaceRecognitionResult_<ContainerAllocator>  result;


  typedef boost::shared_ptr< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct FaceRecognitionActionResult
typedef  ::face_recognition::FaceRecognitionActionResult_<std::allocator<void> > FaceRecognitionActionResult;

typedef boost::shared_ptr< ::face_recognition::FaceRecognitionActionResult> FaceRecognitionActionResultPtr;
typedef boost::shared_ptr< ::face_recognition::FaceRecognitionActionResult const> FaceRecognitionActionResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace face_recognition

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0c8a797b269880ab70a8762f40d4f4e2";
  }

  static const char* value(const  ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0c8a797b269880abULL;
  static const uint64_t static_value2 = 0x70a8762f40d4f4e2ULL;
};

template<class ContainerAllocator>
struct DataType< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "face_recognition/FaceRecognitionActionResult";
  }

  static const char* value(const  ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
FaceRecognitionResult result\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: face_recognition/FaceRecognitionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
uint8   order_id\n\
string[]  names\n\
float32[] confidence\n\
\n\
";
  }

  static const char* value(const  ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.status);
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct FaceRecognitionActionResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "result: ";
s << std::endl;
    Printer< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.result);
  }
};


} // namespace message_operations
} // namespace ros

#endif // FACE_RECOGNITION_MESSAGE_FACERECOGNITIONACTIONRESULT_H

