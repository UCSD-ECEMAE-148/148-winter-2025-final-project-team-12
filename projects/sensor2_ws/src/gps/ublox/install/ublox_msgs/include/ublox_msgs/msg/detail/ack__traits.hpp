// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_msgs:msg/Ack.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__ACK__TRAITS_HPP_
#define UBLOX_MSGS__MSG__DETAIL__ACK__TRAITS_HPP_

#include "ublox_msgs/msg/detail/ack__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ublox_msgs::msg::Ack>()
{
  return "ublox_msgs::msg::Ack";
}

template<>
inline const char * name<ublox_msgs::msg::Ack>()
{
  return "ublox_msgs/msg/Ack";
}

template<>
struct has_fixed_size<ublox_msgs::msg::Ack>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ublox_msgs::msg::Ack>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ublox_msgs::msg::Ack>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_MSGS__MSG__DETAIL__ACK__TRAITS_HPP_
