// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from torque_message:srv/TRMsg.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__BUILDER_HPP_
#define TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__BUILDER_HPP_

#include "torque_message/srv/detail/tr_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace torque_message
{

namespace srv
{

namespace builder
{

class Init_TRMsg_Request_t6
{
public:
  explicit Init_TRMsg_Request_t6(::torque_message::srv::TRMsg_Request & msg)
  : msg_(msg)
  {}
  ::torque_message::srv::TRMsg_Request t6(::torque_message::srv::TRMsg_Request::_t6_type arg)
  {
    msg_.t6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Request msg_;
};

class Init_TRMsg_Request_t5
{
public:
  explicit Init_TRMsg_Request_t5(::torque_message::srv::TRMsg_Request & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Request_t6 t5(::torque_message::srv::TRMsg_Request::_t5_type arg)
  {
    msg_.t5 = std::move(arg);
    return Init_TRMsg_Request_t6(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Request msg_;
};

class Init_TRMsg_Request_t4
{
public:
  explicit Init_TRMsg_Request_t4(::torque_message::srv::TRMsg_Request & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Request_t5 t4(::torque_message::srv::TRMsg_Request::_t4_type arg)
  {
    msg_.t4 = std::move(arg);
    return Init_TRMsg_Request_t5(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Request msg_;
};

class Init_TRMsg_Request_t3
{
public:
  explicit Init_TRMsg_Request_t3(::torque_message::srv::TRMsg_Request & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Request_t4 t3(::torque_message::srv::TRMsg_Request::_t3_type arg)
  {
    msg_.t3 = std::move(arg);
    return Init_TRMsg_Request_t4(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Request msg_;
};

class Init_TRMsg_Request_t2
{
public:
  explicit Init_TRMsg_Request_t2(::torque_message::srv::TRMsg_Request & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Request_t3 t2(::torque_message::srv::TRMsg_Request::_t2_type arg)
  {
    msg_.t2 = std::move(arg);
    return Init_TRMsg_Request_t3(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Request msg_;
};

class Init_TRMsg_Request_t1
{
public:
  Init_TRMsg_Request_t1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TRMsg_Request_t2 t1(::torque_message::srv::TRMsg_Request::_t1_type arg)
  {
    msg_.t1 = std::move(arg);
    return Init_TRMsg_Request_t2(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::torque_message::srv::TRMsg_Request>()
{
  return torque_message::srv::builder::Init_TRMsg_Request_t1();
}

}  // namespace torque_message


namespace torque_message
{

namespace srv
{

namespace builder
{

class Init_TRMsg_Response_imu
{
public:
  explicit Init_TRMsg_Response_imu(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  ::torque_message::srv::TRMsg_Response imu(::torque_message::srv::TRMsg_Response::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r6
{
public:
  explicit Init_TRMsg_Response_r6(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_imu r6(::torque_message::srv::TRMsg_Response::_r6_type arg)
  {
    msg_.r6 = std::move(arg);
    return Init_TRMsg_Response_imu(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r5
{
public:
  explicit Init_TRMsg_Response_r5(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r6 r5(::torque_message::srv::TRMsg_Response::_r5_type arg)
  {
    msg_.r5 = std::move(arg);
    return Init_TRMsg_Response_r6(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r4
{
public:
  explicit Init_TRMsg_Response_r4(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r5 r4(::torque_message::srv::TRMsg_Response::_r4_type arg)
  {
    msg_.r4 = std::move(arg);
    return Init_TRMsg_Response_r5(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r3
{
public:
  explicit Init_TRMsg_Response_r3(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r4 r3(::torque_message::srv::TRMsg_Response::_r3_type arg)
  {
    msg_.r3 = std::move(arg);
    return Init_TRMsg_Response_r4(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r2
{
public:
  explicit Init_TRMsg_Response_r2(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r3 r2(::torque_message::srv::TRMsg_Response::_r2_type arg)
  {
    msg_.r2 = std::move(arg);
    return Init_TRMsg_Response_r3(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r1
{
public:
  explicit Init_TRMsg_Response_r1(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r2 r1(::torque_message::srv::TRMsg_Response::_r1_type arg)
  {
    msg_.r1 = std::move(arg);
    return Init_TRMsg_Response_r2(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r3p
{
public:
  explicit Init_TRMsg_Response_r3p(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r1 r3p(::torque_message::srv::TRMsg_Response::_r3p_type arg)
  {
    msg_.r3p = std::move(arg);
    return Init_TRMsg_Response_r1(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r2p
{
public:
  explicit Init_TRMsg_Response_r2p(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r3p r2p(::torque_message::srv::TRMsg_Response::_r2p_type arg)
  {
    msg_.r2p = std::move(arg);
    return Init_TRMsg_Response_r3p(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r1p
{
public:
  explicit Init_TRMsg_Response_r1p(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r2p r1p(::torque_message::srv::TRMsg_Response::_r1p_type arg)
  {
    msg_.r1p = std::move(arg);
    return Init_TRMsg_Response_r2p(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r3t
{
public:
  explicit Init_TRMsg_Response_r3t(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r1p r3t(::torque_message::srv::TRMsg_Response::_r3t_type arg)
  {
    msg_.r3t = std::move(arg);
    return Init_TRMsg_Response_r1p(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r2t
{
public:
  explicit Init_TRMsg_Response_r2t(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r3t r2t(::torque_message::srv::TRMsg_Response::_r2t_type arg)
  {
    msg_.r2t = std::move(arg);
    return Init_TRMsg_Response_r3t(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r1t
{
public:
  explicit Init_TRMsg_Response_r1t(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r2t r1t(::torque_message::srv::TRMsg_Response::_r1t_type arg)
  {
    msg_.r1t = std::move(arg);
    return Init_TRMsg_Response_r2t(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r3v
{
public:
  explicit Init_TRMsg_Response_r3v(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r1t r3v(::torque_message::srv::TRMsg_Response::_r3v_type arg)
  {
    msg_.r3v = std::move(arg);
    return Init_TRMsg_Response_r1t(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r2v
{
public:
  explicit Init_TRMsg_Response_r2v(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r3v r2v(::torque_message::srv::TRMsg_Response::_r2v_type arg)
  {
    msg_.r2v = std::move(arg);
    return Init_TRMsg_Response_r3v(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_r1v
{
public:
  explicit Init_TRMsg_Response_r1v(::torque_message::srv::TRMsg_Response & msg)
  : msg_(msg)
  {}
  Init_TRMsg_Response_r2v r1v(::torque_message::srv::TRMsg_Response::_r1v_type arg)
  {
    msg_.r1v = std::move(arg);
    return Init_TRMsg_Response_r2v(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

class Init_TRMsg_Response_status
{
public:
  Init_TRMsg_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TRMsg_Response_r1v status(::torque_message::srv::TRMsg_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TRMsg_Response_r1v(msg_);
  }

private:
  ::torque_message::srv::TRMsg_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::torque_message::srv::TRMsg_Response>()
{
  return torque_message::srv::builder::Init_TRMsg_Response_status();
}

}  // namespace torque_message

#endif  // TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__BUILDER_HPP_
