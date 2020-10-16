// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/GateLocation.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__GATE_LOCATION__TRAITS_HPP_
#define INTERFACES__SRV__GATE_LOCATION__TRAITS_HPP_

#include "interfaces/srv/gate_location__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::GateLocation_Request>()
{
  return "interfaces::srv::GateLocation_Request";
}

template<>
struct has_fixed_size<interfaces::srv::GateLocation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::GateLocation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::GateLocation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::GateLocation_Response>()
{
  return "interfaces::srv::GateLocation_Response";
}

template<>
struct has_fixed_size<interfaces::srv::GateLocation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::GateLocation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::GateLocation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::GateLocation>()
{
  return "interfaces::srv::GateLocation";
}

template<>
struct has_fixed_size<interfaces::srv::GateLocation>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::GateLocation_Request>::value &&
    has_fixed_size<interfaces::srv::GateLocation_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::GateLocation>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::GateLocation_Request>::value &&
    has_bounded_size<interfaces::srv::GateLocation_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::GateLocation>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::GateLocation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::GateLocation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__GATE_LOCATION__TRAITS_HPP_
