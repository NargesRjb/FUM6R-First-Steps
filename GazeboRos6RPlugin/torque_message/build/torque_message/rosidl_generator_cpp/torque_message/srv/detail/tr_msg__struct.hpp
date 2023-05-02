// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from torque_message:srv/TRMsg.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__STRUCT_HPP_
#define TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__torque_message__srv__TRMsg_Request __attribute__((deprecated))
#else
# define DEPRECATED__torque_message__srv__TRMsg_Request __declspec(deprecated)
#endif

namespace torque_message
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TRMsg_Request_
{
  using Type = TRMsg_Request_<ContainerAllocator>;

  explicit TRMsg_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t1 = 0.0;
      this->t2 = 0.0;
      this->t3 = 0.0;
      this->t4 = 0.0;
      this->t5 = 0.0;
      this->t6 = 0.0;
    }
  }

  explicit TRMsg_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t1 = 0.0;
      this->t2 = 0.0;
      this->t3 = 0.0;
      this->t4 = 0.0;
      this->t5 = 0.0;
      this->t6 = 0.0;
    }
  }

  // field types and members
  using _t1_type =
    double;
  _t1_type t1;
  using _t2_type =
    double;
  _t2_type t2;
  using _t3_type =
    double;
  _t3_type t3;
  using _t4_type =
    double;
  _t4_type t4;
  using _t5_type =
    double;
  _t5_type t5;
  using _t6_type =
    double;
  _t6_type t6;

  // setters for named parameter idiom
  Type & set__t1(
    const double & _arg)
  {
    this->t1 = _arg;
    return *this;
  }
  Type & set__t2(
    const double & _arg)
  {
    this->t2 = _arg;
    return *this;
  }
  Type & set__t3(
    const double & _arg)
  {
    this->t3 = _arg;
    return *this;
  }
  Type & set__t4(
    const double & _arg)
  {
    this->t4 = _arg;
    return *this;
  }
  Type & set__t5(
    const double & _arg)
  {
    this->t5 = _arg;
    return *this;
  }
  Type & set__t6(
    const double & _arg)
  {
    this->t6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    torque_message::srv::TRMsg_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const torque_message::srv::TRMsg_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<torque_message::srv::TRMsg_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<torque_message::srv::TRMsg_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      torque_message::srv::TRMsg_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<torque_message::srv::TRMsg_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      torque_message::srv::TRMsg_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<torque_message::srv::TRMsg_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<torque_message::srv::TRMsg_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<torque_message::srv::TRMsg_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__torque_message__srv__TRMsg_Request
    std::shared_ptr<torque_message::srv::TRMsg_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__torque_message__srv__TRMsg_Request
    std::shared_ptr<torque_message::srv::TRMsg_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TRMsg_Request_ & other) const
  {
    if (this->t1 != other.t1) {
      return false;
    }
    if (this->t2 != other.t2) {
      return false;
    }
    if (this->t3 != other.t3) {
      return false;
    }
    if (this->t4 != other.t4) {
      return false;
    }
    if (this->t5 != other.t5) {
      return false;
    }
    if (this->t6 != other.t6) {
      return false;
    }
    return true;
  }
  bool operator!=(const TRMsg_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TRMsg_Request_

// alias to use template instance with default allocator
using TRMsg_Request =
  torque_message::srv::TRMsg_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace torque_message


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
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__torque_message__srv__TRMsg_Response __attribute__((deprecated))
#else
# define DEPRECATED__torque_message__srv__TRMsg_Response __declspec(deprecated)
#endif

namespace torque_message
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TRMsg_Response_
{
  using Type = TRMsg_Response_<ContainerAllocator>;

  explicit TRMsg_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : r1v(_init),
    r2v(_init),
    r3v(_init),
    r1t(_init),
    r2t(_init),
    r3t(_init),
    r1p(_init),
    r2p(_init),
    r3p(_init),
    imu(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->status = -1;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->status = 0;
      this->r1 = 0.0;
      this->r2 = 0.0;
      this->r3 = 0.0;
      this->r4 = 0.0;
      this->r5 = 0.0;
      this->r6 = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r1 = 0.0;
      this->r2 = 0.0;
      this->r3 = 0.0;
      this->r4 = 0.0;
      this->r5 = 0.0;
      this->r6 = 0.0;
    }
  }

  explicit TRMsg_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : r1v(_alloc, _init),
    r2v(_alloc, _init),
    r3v(_alloc, _init),
    r1t(_alloc, _init),
    r2t(_alloc, _init),
    r3t(_alloc, _init),
    r1p(_alloc, _init),
    r2p(_alloc, _init),
    r3p(_alloc, _init),
    imu(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->status = -1;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->status = 0;
      this->r1 = 0.0;
      this->r2 = 0.0;
      this->r3 = 0.0;
      this->r4 = 0.0;
      this->r5 = 0.0;
      this->r6 = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r1 = 0.0;
      this->r2 = 0.0;
      this->r3 = 0.0;
      this->r4 = 0.0;
      this->r5 = 0.0;
      this->r6 = 0.0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _r1v_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _r1v_type r1v;
  using _r2v_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _r2v_type r2v;
  using _r3v_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _r3v_type r3v;
  using _r1t_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _r1t_type r1t;
  using _r2t_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _r2t_type r2t;
  using _r3t_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _r3t_type r3t;
  using _r1p_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _r1p_type r1p;
  using _r2p_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _r2p_type r2p;
  using _r3p_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _r3p_type r3p;
  using _r1_type =
    double;
  _r1_type r1;
  using _r2_type =
    double;
  _r2_type r2;
  using _r3_type =
    double;
  _r3_type r3;
  using _r4_type =
    double;
  _r4_type r4;
  using _r5_type =
    double;
  _r5_type r5;
  using _r6_type =
    double;
  _r6_type r6;
  using _imu_type =
    sensor_msgs::msg::Imu_<ContainerAllocator>;
  _imu_type imu;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__r1v(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->r1v = _arg;
    return *this;
  }
  Type & set__r2v(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->r2v = _arg;
    return *this;
  }
  Type & set__r3v(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->r3v = _arg;
    return *this;
  }
  Type & set__r1t(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->r1t = _arg;
    return *this;
  }
  Type & set__r2t(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->r2t = _arg;
    return *this;
  }
  Type & set__r3t(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->r3t = _arg;
    return *this;
  }
  Type & set__r1p(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->r1p = _arg;
    return *this;
  }
  Type & set__r2p(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->r2p = _arg;
    return *this;
  }
  Type & set__r3p(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->r3p = _arg;
    return *this;
  }
  Type & set__r1(
    const double & _arg)
  {
    this->r1 = _arg;
    return *this;
  }
  Type & set__r2(
    const double & _arg)
  {
    this->r2 = _arg;
    return *this;
  }
  Type & set__r3(
    const double & _arg)
  {
    this->r3 = _arg;
    return *this;
  }
  Type & set__r4(
    const double & _arg)
  {
    this->r4 = _arg;
    return *this;
  }
  Type & set__r5(
    const double & _arg)
  {
    this->r5 = _arg;
    return *this;
  }
  Type & set__r6(
    const double & _arg)
  {
    this->r6 = _arg;
    return *this;
  }
  Type & set__imu(
    const sensor_msgs::msg::Imu_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    torque_message::srv::TRMsg_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const torque_message::srv::TRMsg_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<torque_message::srv::TRMsg_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<torque_message::srv::TRMsg_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      torque_message::srv::TRMsg_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<torque_message::srv::TRMsg_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      torque_message::srv::TRMsg_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<torque_message::srv::TRMsg_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<torque_message::srv::TRMsg_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<torque_message::srv::TRMsg_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__torque_message__srv__TRMsg_Response
    std::shared_ptr<torque_message::srv::TRMsg_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__torque_message__srv__TRMsg_Response
    std::shared_ptr<torque_message::srv::TRMsg_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TRMsg_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->r1v != other.r1v) {
      return false;
    }
    if (this->r2v != other.r2v) {
      return false;
    }
    if (this->r3v != other.r3v) {
      return false;
    }
    if (this->r1t != other.r1t) {
      return false;
    }
    if (this->r2t != other.r2t) {
      return false;
    }
    if (this->r3t != other.r3t) {
      return false;
    }
    if (this->r1p != other.r1p) {
      return false;
    }
    if (this->r2p != other.r2p) {
      return false;
    }
    if (this->r3p != other.r3p) {
      return false;
    }
    if (this->r1 != other.r1) {
      return false;
    }
    if (this->r2 != other.r2) {
      return false;
    }
    if (this->r3 != other.r3) {
      return false;
    }
    if (this->r4 != other.r4) {
      return false;
    }
    if (this->r5 != other.r5) {
      return false;
    }
    if (this->r6 != other.r6) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    return true;
  }
  bool operator!=(const TRMsg_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TRMsg_Response_

// alias to use template instance with default allocator
using TRMsg_Response =
  torque_message::srv::TRMsg_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace torque_message

namespace torque_message
{

namespace srv
{

struct TRMsg
{
  using Request = torque_message::srv::TRMsg_Request;
  using Response = torque_message::srv::TRMsg_Response;
};

}  // namespace srv

}  // namespace torque_message

#endif  // TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__STRUCT_HPP_
