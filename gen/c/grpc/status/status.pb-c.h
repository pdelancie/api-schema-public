/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: grpc/status/status.proto */

#ifndef PROTOBUF_C_grpc_2fstatus_2fstatus_2eproto__INCLUDED
#define PROTOBUF_C_grpc_2fstatus_2fstatus_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "google/protobuf/any.pb-c.h"

typedef struct _Google__Rpc__Status Google__Rpc__Status;


/* --- enums --- */


/* --- messages --- */

/*
 * The `Status` type defines a logical error model that is suitable for different
 * programming environments, including REST APIs and RPC APIs. It is used by
 * [gRPC](https://github.com/grpc). The error model is designed to be:
 * - Simple to use and understand for most users
 * - Flexible enough to meet unexpected needs
 * # Overview
 * The `Status` message contains three pieces of data: error code, error message,
 * and error details. The error code should be an enum value of
 * [google.rpc.Code][google.rpc.Code], but it may accept additional error codes if needed.  The
 * error message should be a developer-facing English message that helps
 * developers *understand* and *resolve* the error. If a localized user-facing
 * error message is needed, put the localized message in the error details or
 * localize it in the client. The optional error details may contain arbitrary
 * information about the error. There is a predefined set of error detail types
 * in the package `google.rpc` which can be used for common error conditions.
 * # Language mapping
 * The `Status` message is the logical representation of the error model, but it
 * is not necessarily the actual wire format. When the `Status` message is
 * exposed in different client libraries and different wire protocols, it can be
 * mapped differently. For example, it will likely be mapped to some exceptions
 * in Java, but more likely mapped to some error codes in C.
 * # Other uses
 * The error model and the `Status` message can be used in a variety of
 * environments, either with or without APIs, to provide a
 * consistent developer experience across different environments.
 * Example uses of this error model include:
 * - Partial errors. If a service needs to return partial errors to the client,
 *     it may embed the `Status` in the normal response to indicate the partial
 *     errors.
 * - Workflow errors. A typical workflow has multiple steps. Each step may
 *     have a `Status` message for error reporting purpose.
 * - Batch operations. If a client uses batch request and batch response, the
 *     `Status` message should be used directly inside batch response, one for
 *     each error sub-response.
 * - Asynchronous operations. If an API call embeds asynchronous operation
 *     results in its response, the status of those operations should be
 *     represented directly using the `Status` message.
 * - Logging. If some API errors are stored in logs, the message `Status` could
 *     be used directly after any stripping needed for security/privacy reasons.
 */
struct  _Google__Rpc__Status
{
  ProtobufCMessage base;
  /*
   * The status code, which should be an enum value of [google.rpc.Code][google.rpc.Code].
   */
  int32_t code;
  /*
   * A developer-facing error message, which should be in English. Any
   * user-facing error message should be localized and sent in the
   * [google.rpc.Status.details][google.rpc.Status.details] field, or localized by the client.
   */
  char *message;
  /*
   * A list of messages that carry the error details.  There will be a
   * common set of message types for APIs to use.
   */
  size_t n_details;
  Google__Protobuf__Any **details;
};
#define GOOGLE__RPC__STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__rpc__status__descriptor) \
    , 0, (char *)protobuf_c_empty_string, 0,NULL }


/* Google__Rpc__Status methods */
void   google__rpc__status__init
                     (Google__Rpc__Status         *message);
size_t google__rpc__status__get_packed_size
                     (const Google__Rpc__Status   *message);
size_t google__rpc__status__pack
                     (const Google__Rpc__Status   *message,
                      uint8_t             *out);
size_t google__rpc__status__pack_to_buffer
                     (const Google__Rpc__Status   *message,
                      ProtobufCBuffer     *buffer);
Google__Rpc__Status *
       google__rpc__status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__rpc__status__free_unpacked
                     (Google__Rpc__Status *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Google__Rpc__Status_Closure)
                 (const Google__Rpc__Status *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor google__rpc__status__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_grpc_2fstatus_2fstatus_2eproto__INCLUDED */
