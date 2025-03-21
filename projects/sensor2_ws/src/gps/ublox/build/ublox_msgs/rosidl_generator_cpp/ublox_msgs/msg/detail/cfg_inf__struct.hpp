// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ublox_msgs:msg/CfgINF.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_INF__STRUCT_HPP_
#define UBLOX_MSGS__MSG__DETAIL__CFG_INF__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'blocks'
#include "ublox_msgs/msg/detail/cfg_inf_block__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ublox_msgs__msg__CfgINF __attribute__((deprecated))
#else
# define DEPRECATED__ublox_msgs__msg__CfgINF __declspec(deprecated)
#endif

namespace ublox_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CfgINF_
{
  using Type = CfgINF_<ContainerAllocator>;

  explicit CfgINF_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CfgINF_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _blocks_type =
    std::vector<ublox_msgs::msg::CfgINFBlock_<ContainerAllocator>, typename ContainerAllocator::template rebind<ublox_msgs::msg::CfgINFBlock_<ContainerAllocator>>::other>;
  _blocks_type blocks;

  // setters for named parameter idiom
  Type & set__blocks(
    const std::vector<ublox_msgs::msg::CfgINFBlock_<ContainerAllocator>, typename ContainerAllocator::template rebind<ublox_msgs::msg::CfgINFBlock_<ContainerAllocator>>::other> & _arg)
  {
    this->blocks = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CLASS_ID =
    6u;
  static constexpr uint8_t MESSAGE_ID =
    2u;

  // pointer types
  using RawPtr =
    ublox_msgs::msg::CfgINF_<ContainerAllocator> *;
  using ConstRawPtr =
    const ublox_msgs::msg::CfgINF_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ublox_msgs::msg::CfgINF_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ublox_msgs::msg::CfgINF_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ublox_msgs::msg::CfgINF_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ublox_msgs::msg::CfgINF_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ublox_msgs::msg::CfgINF_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ublox_msgs::msg::CfgINF_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ublox_msgs::msg::CfgINF_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ublox_msgs::msg::CfgINF_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ublox_msgs__msg__CfgINF
    std::shared_ptr<ublox_msgs::msg::CfgINF_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ublox_msgs__msg__CfgINF
    std::shared_ptr<ublox_msgs::msg::CfgINF_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CfgINF_ & other) const
  {
    if (this->blocks != other.blocks) {
      return false;
    }
    return true;
  }
  bool operator!=(const CfgINF_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CfgINF_

// alias to use template instance with default allocator
using CfgINF =
  ublox_msgs::msg::CfgINF_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CfgINF_<ContainerAllocator>::CLASS_ID;
template<typename ContainerAllocator>
constexpr uint8_t CfgINF_<ContainerAllocator>::MESSAGE_ID;

}  // namespace msg

}  // namespace ublox_msgs

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_INF__STRUCT_HPP_
