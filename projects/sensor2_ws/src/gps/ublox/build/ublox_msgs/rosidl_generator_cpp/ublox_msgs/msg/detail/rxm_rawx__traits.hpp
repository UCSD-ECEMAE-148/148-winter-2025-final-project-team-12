// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_msgs:msg/RxmRAWX.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__RXM_RAWX__TRAITS_HPP_
#define UBLOX_MSGS__MSG__DETAIL__RXM_RAWX__TRAITS_HPP_

#include "ublox_msgs/msg/detail/rxm_rawx__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ublox_msgs::msg::RxmRAWX>()
{
  return "ublox_msgs::msg::RxmRAWX";
}

template<>
inline const char * name<ublox_msgs::msg::RxmRAWX>()
{
  return "ublox_msgs/msg/RxmRAWX";
}

template<>
struct has_fixed_size<ublox_msgs::msg::RxmRAWX>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ublox_msgs::msg::RxmRAWX>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ublox_msgs::msg::RxmRAWX>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_MSGS__MSG__DETAIL__RXM_RAWX__TRAITS_HPP_
