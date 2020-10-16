// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:srv/GateLocation.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/gate_location__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/gate_location__struct.h"
#include "interfaces/srv/gate_location__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // image_path
#include "rosidl_generator_c/string_functions.h"  // image_path

// forward declare type support functions


using _GateLocation_Request__ros_msg_type = interfaces__srv__GateLocation_Request;

static bool _GateLocation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GateLocation_Request__ros_msg_type * ros_message = static_cast<const _GateLocation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: image_path
  {
    const rosidl_generator_c__String * str = &ros_message->image_path;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GateLocation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GateLocation_Request__ros_msg_type * ros_message = static_cast<_GateLocation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: image_path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->image_path.data) {
      rosidl_generator_c__String__init(&ros_message->image_path);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->image_path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'image_path'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__GateLocation_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GateLocation_Request__ros_msg_type * ros_message = static_cast<const _GateLocation_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name image_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->image_path.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GateLocation_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__GateLocation_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__GateLocation_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: image_path
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GateLocation_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__GateLocation_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GateLocation_Request = {
  "interfaces::srv",
  "GateLocation_Request",
  _GateLocation_Request__cdr_serialize,
  _GateLocation_Request__cdr_deserialize,
  _GateLocation_Request__get_serialized_size,
  _GateLocation_Request__max_serialized_size
};

static rosidl_message_type_support_t _GateLocation_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GateLocation_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, GateLocation_Request)() {
  return &_GateLocation_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interfaces/srv/gate_location__struct.h"
// already included above
// #include "interfaces/srv/gate_location__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_generator_c/string.h"  // gate_location
// already included above
// #include "rosidl_generator_c/string_functions.h"  // gate_location

// forward declare type support functions


using _GateLocation_Response__ros_msg_type = interfaces__srv__GateLocation_Response;

static bool _GateLocation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GateLocation_Response__ros_msg_type * ros_message = static_cast<const _GateLocation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: gate_location
  {
    const rosidl_generator_c__String * str = &ros_message->gate_location;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GateLocation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GateLocation_Response__ros_msg_type * ros_message = static_cast<_GateLocation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: gate_location
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gate_location.data) {
      rosidl_generator_c__String__init(&ros_message->gate_location);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->gate_location,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gate_location'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__GateLocation_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GateLocation_Response__ros_msg_type * ros_message = static_cast<const _GateLocation_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gate_location
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gate_location.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GateLocation_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__GateLocation_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__GateLocation_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: gate_location
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GateLocation_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__GateLocation_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GateLocation_Response = {
  "interfaces::srv",
  "GateLocation_Response",
  _GateLocation_Response__cdr_serialize,
  _GateLocation_Response__cdr_deserialize,
  _GateLocation_Response__get_serialized_size,
  _GateLocation_Response__max_serialized_size
};

static rosidl_message_type_support_t _GateLocation_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GateLocation_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, GateLocation_Response)() {
  return &_GateLocation_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/gate_location.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GateLocation__callbacks = {
  "interfaces::srv",
  "GateLocation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, GateLocation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, GateLocation_Response)(),
};

static rosidl_service_type_support_t GateLocation__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GateLocation__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, GateLocation)() {
  return &GateLocation__handle;
}

#if defined(__cplusplus)
}
#endif
