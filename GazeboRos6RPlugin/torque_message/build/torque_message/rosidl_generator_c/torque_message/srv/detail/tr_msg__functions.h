// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from torque_message:srv/TRMsg.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__FUNCTIONS_H_
#define TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "torque_message/msg/rosidl_generator_c__visibility_control.h"

#include "torque_message/srv/detail/tr_msg__struct.h"

/// Initialize srv/TRMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * torque_message__srv__TRMsg_Request
 * )) before or use
 * torque_message__srv__TRMsg_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Request__init(torque_message__srv__TRMsg_Request * msg);

/// Finalize srv/TRMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
void
torque_message__srv__TRMsg_Request__fini(torque_message__srv__TRMsg_Request * msg);

/// Create srv/TRMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * torque_message__srv__TRMsg_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
torque_message__srv__TRMsg_Request *
torque_message__srv__TRMsg_Request__create();

/// Destroy srv/TRMsg message.
/**
 * It calls
 * torque_message__srv__TRMsg_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
void
torque_message__srv__TRMsg_Request__destroy(torque_message__srv__TRMsg_Request * msg);

/// Check for srv/TRMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Request__are_equal(const torque_message__srv__TRMsg_Request * lhs, const torque_message__srv__TRMsg_Request * rhs);

/// Copy a srv/TRMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Request__copy(
  const torque_message__srv__TRMsg_Request * input,
  torque_message__srv__TRMsg_Request * output);

/// Initialize array of srv/TRMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * torque_message__srv__TRMsg_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Request__Sequence__init(torque_message__srv__TRMsg_Request__Sequence * array, size_t size);

/// Finalize array of srv/TRMsg messages.
/**
 * It calls
 * torque_message__srv__TRMsg_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
void
torque_message__srv__TRMsg_Request__Sequence__fini(torque_message__srv__TRMsg_Request__Sequence * array);

/// Create array of srv/TRMsg messages.
/**
 * It allocates the memory for the array and calls
 * torque_message__srv__TRMsg_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
torque_message__srv__TRMsg_Request__Sequence *
torque_message__srv__TRMsg_Request__Sequence__create(size_t size);

/// Destroy array of srv/TRMsg messages.
/**
 * It calls
 * torque_message__srv__TRMsg_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
void
torque_message__srv__TRMsg_Request__Sequence__destroy(torque_message__srv__TRMsg_Request__Sequence * array);

/// Check for srv/TRMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Request__Sequence__are_equal(const torque_message__srv__TRMsg_Request__Sequence * lhs, const torque_message__srv__TRMsg_Request__Sequence * rhs);

/// Copy an array of srv/TRMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Request__Sequence__copy(
  const torque_message__srv__TRMsg_Request__Sequence * input,
  torque_message__srv__TRMsg_Request__Sequence * output);

/// Initialize srv/TRMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * torque_message__srv__TRMsg_Response
 * )) before or use
 * torque_message__srv__TRMsg_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Response__init(torque_message__srv__TRMsg_Response * msg);

/// Finalize srv/TRMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
void
torque_message__srv__TRMsg_Response__fini(torque_message__srv__TRMsg_Response * msg);

/// Create srv/TRMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * torque_message__srv__TRMsg_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
torque_message__srv__TRMsg_Response *
torque_message__srv__TRMsg_Response__create();

/// Destroy srv/TRMsg message.
/**
 * It calls
 * torque_message__srv__TRMsg_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
void
torque_message__srv__TRMsg_Response__destroy(torque_message__srv__TRMsg_Response * msg);

/// Check for srv/TRMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Response__are_equal(const torque_message__srv__TRMsg_Response * lhs, const torque_message__srv__TRMsg_Response * rhs);

/// Copy a srv/TRMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Response__copy(
  const torque_message__srv__TRMsg_Response * input,
  torque_message__srv__TRMsg_Response * output);

/// Initialize array of srv/TRMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * torque_message__srv__TRMsg_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Response__Sequence__init(torque_message__srv__TRMsg_Response__Sequence * array, size_t size);

/// Finalize array of srv/TRMsg messages.
/**
 * It calls
 * torque_message__srv__TRMsg_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
void
torque_message__srv__TRMsg_Response__Sequence__fini(torque_message__srv__TRMsg_Response__Sequence * array);

/// Create array of srv/TRMsg messages.
/**
 * It allocates the memory for the array and calls
 * torque_message__srv__TRMsg_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
torque_message__srv__TRMsg_Response__Sequence *
torque_message__srv__TRMsg_Response__Sequence__create(size_t size);

/// Destroy array of srv/TRMsg messages.
/**
 * It calls
 * torque_message__srv__TRMsg_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
void
torque_message__srv__TRMsg_Response__Sequence__destroy(torque_message__srv__TRMsg_Response__Sequence * array);

/// Check for srv/TRMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Response__Sequence__are_equal(const torque_message__srv__TRMsg_Response__Sequence * lhs, const torque_message__srv__TRMsg_Response__Sequence * rhs);

/// Copy an array of srv/TRMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_message
bool
torque_message__srv__TRMsg_Response__Sequence__copy(
  const torque_message__srv__TRMsg_Response__Sequence * input,
  torque_message__srv__TRMsg_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TORQUE_MESSAGE__SRV__DETAIL__TR_MSG__FUNCTIONS_H_
