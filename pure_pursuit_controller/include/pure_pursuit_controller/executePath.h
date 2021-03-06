// Generated by gencpp from file pure_pursuit_controller/executePath.msg
// DO NOT EDIT!


#ifndef PURE_PURSUIT_CONTROLLER_MESSAGE_EXECUTEPATH_H
#define PURE_PURSUIT_CONTROLLER_MESSAGE_EXECUTEPATH_H

#include <ros/service_traits.h>


#include <pure_pursuit_controller/executePathRequest.h>
#include <pure_pursuit_controller/executePathResponse.h>


namespace pure_pursuit_controller
{

struct executePath
{

typedef executePathRequest Request;
typedef executePathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct executePath
} // namespace pure_pursuit_controller


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pure_pursuit_controller::executePath > {
  static const char* value()
  {
    return "15abafffae7b9151d048eed1555673e7";
  }

  static const char* value(const ::pure_pursuit_controller::executePath&) { return value(); }
};

template<>
struct DataType< ::pure_pursuit_controller::executePath > {
  static const char* value()
  {
    return "pure_pursuit_controller/executePath";
  }

  static const char* value(const ::pure_pursuit_controller::executePath&) { return value(); }
};


// service_traits::MD5Sum< ::pure_pursuit_controller::executePathRequest> should match 
// service_traits::MD5Sum< ::pure_pursuit_controller::executePath > 
template<>
struct MD5Sum< ::pure_pursuit_controller::executePathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pure_pursuit_controller::executePath >::value();
  }
  static const char* value(const ::pure_pursuit_controller::executePathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pure_pursuit_controller::executePathRequest> should match 
// service_traits::DataType< ::pure_pursuit_controller::executePath > 
template<>
struct DataType< ::pure_pursuit_controller::executePathRequest>
{
  static const char* value()
  {
    return DataType< ::pure_pursuit_controller::executePath >::value();
  }
  static const char* value(const ::pure_pursuit_controller::executePathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pure_pursuit_controller::executePathResponse> should match 
// service_traits::MD5Sum< ::pure_pursuit_controller::executePath > 
template<>
struct MD5Sum< ::pure_pursuit_controller::executePathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pure_pursuit_controller::executePath >::value();
  }
  static const char* value(const ::pure_pursuit_controller::executePathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pure_pursuit_controller::executePathResponse> should match 
// service_traits::DataType< ::pure_pursuit_controller::executePath > 
template<>
struct DataType< ::pure_pursuit_controller::executePathResponse>
{
  static const char* value()
  {
    return DataType< ::pure_pursuit_controller::executePath >::value();
  }
  static const char* value(const ::pure_pursuit_controller::executePathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PURE_PURSUIT_CONTROLLER_MESSAGE_EXECUTEPATH_H
