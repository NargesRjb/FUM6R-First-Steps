// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from torque_message:srv/TRMsg.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__TRAITS_HPP_
#define TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__TRAITS_HPP_

#include "torque_message/srv/detail/tr_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<torque_message::srv::TRMsg_Request>()
{
  return "torque_message::srv::TRMsg_Request";
}

template<>
inline const char * name<torque_message::srv::TRMsg_Request>()
{
  return "torque_message/srv/TRMsg_Request";
}

template<>
struct has_fixed_size<torque_message::srv::TRMsg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<torque_message::srv::TRMsg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<torque_message::srv::TRMsg_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'r1v'
// Member 'r2v'
// Member 'r3v'
// Member 'r1t'
// Member 'r2t'
// Member 'r3t'
// Member 'r1p'
// Member 'r2p'
// Member 'r3p'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<torque_message::srv::TRMsg_Response>()
{
  return "torque_message::srv::TRMsg_Response";
}

template<>
inline const char * name<torque_message::srv::TRMsg_Response>()
{
  return "torque_message/srv/TRMsg_Response";
}

template<>
struct has_fixed_size<torque_message::srv::TRMsg_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<sensor_msgs::msg::Imu>::value> {};

template<>
struct has_bounded_size<torque_message::srv::TRMsg_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<sensor_msgs::msg::Imu>::value> {};

template<>
struct is_message<torque_message::srv::TRMsg_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<torque_message::srv::TRMsg>()
{
  return "torque_message::srv::TRMsg";
}

template<>
inline const char * name<torque_message::srv::TRMsg>()
{
  return "torque_message/srv/TRMsg";
}

template<>
struct has_fixed_size<torque_message::srv::TRMsg>
  : std::integral_constant<
    bool,
    has_fixed_size<torque_message::srv::TRMsg_Request>::value &&
    has_fixed_size<torque_message::srv::TRMsg_Response>::value
  >
{
};

template<>
struct has_bounded_size<torque_message::srv::TRMsg>
  : std::integral_constant<
    bool,
    has_bounded_size<torque_message::srv::TRMsg_Request>::value &&
    has_bounded_size<torque_message::srv::TRMsg_Response>::value
  >
{
};

template<>
struct is_service<torque_message::srv::TRMsg>
  : std::true_type
{
};

template<>
struct is_service_request<torque_message::srv::TRMsg_Request>
  : std::true_type
{
};

template<>
struct is_service_response<torque_message::srv::TRMsg_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__TRAITS_HPP_
