// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_msgs:msg/NavSOL.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_SOL__TRAITS_HPP_
#define UBLOX_MSGS__MSG__DETAIL__NAV_SOL__TRAITS_HPP_

#include "ublox_msgs/msg/detail/nav_sol__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ublox_msgs::msg::NavSOL>()
{
  return "ublox_msgs::msg::NavSOL";
}

template<>
inline const char * name<ublox_msgs::msg::NavSOL>()
{
  return "ublox_msgs/msg/NavSOL";
}

template<>
struct has_fixed_size<ublox_msgs::msg::NavSOL>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ublox_msgs::msg::NavSOL>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ublox_msgs::msg::NavSOL>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_SOL__TRAITS_HPP_
