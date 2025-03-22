// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_msgs:msg/HnrPVT.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_MSGS__MSG__DETAIL__HNR_PVT__TRAITS_HPP_
#define UBLOX_MSGS__MSG__DETAIL__HNR_PVT__TRAITS_HPP_

#include "ublox_msgs/msg/detail/hnr_pvt__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ublox_msgs::msg::HnrPVT>()
{
  return "ublox_msgs::msg::HnrPVT";
}

template<>
inline const char * name<ublox_msgs::msg::HnrPVT>()
{
  return "ublox_msgs/msg/HnrPVT";
}

template<>
struct has_fixed_size<ublox_msgs::msg::HnrPVT>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ublox_msgs::msg::HnrPVT>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ublox_msgs::msg::HnrPVT>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_MSGS__MSG__DETAIL__HNR_PVT__TRAITS_HPP_
