/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: google/api/httpbody.proto */

#ifndef PROTOBUF_C_google_2fapi_2fhttpbody_2eproto__INCLUDED
#define PROTOBUF_C_google_2fapi_2fhttpbody_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "google/protobuf/any.pb-c.h"

typedef struct _Google__Api__HttpBody Google__Api__HttpBody;


/* --- enums --- */


/* --- messages --- */

/*
 * Message that represents an arbitrary HTTP body. It should only be used for
 * payload formats that can't be represented as JSON, such as raw binary or
 * an HTML page.
 * This message can be used both in streaming and non-streaming API methods in
 * the request as well as the response.
 * It can be used as a top-level request field, which is convenient if one
 * wants to extract parameters from either the URL or HTTP template into the
 * request fields and also want access to the raw HTTP body.
 * Example:
 *     message GetResourceRequest {
 *       // A unique request id.
 *       string request_id = 1;
 *       // The raw HTTP body is bound to this field.
 *       google.api.HttpBody http_body = 2;
 *     }
 *     service ResourceService {
 *       rpc GetResource(GetResourceRequest) returns (google.api.HttpBody);
 *       rpc UpdateResource(google.api.HttpBody) returns
 *       (google.protobuf.Empty);
 *     }
 * Example with streaming methods:
 *     service CaldavService {
 *       rpc GetCalendar(stream google.api.HttpBody)
 *         returns (stream google.api.HttpBody);
 *       rpc UpdateCalendar(stream google.api.HttpBody)
 *         returns (stream google.api.HttpBody);
 *     }
 * Use of this type only changes how the request and response bodies are
 * handled, all other features will continue to work unchanged.
 */
struct  _Google__Api__HttpBody
{
  ProtobufCMessage base;
  /*
   * The HTTP Content-Type header value specifying the content type of the body.
   */
  char *content_type;
  /*
   * The HTTP request/response body as raw binary.
   */
  ProtobufCBinaryData data;
  /*
   * Application specific response metadata. Must be set in the first response
   * for streaming APIs.
   */
  size_t n_extensions;
  Google__Protobuf__Any **extensions;
};
#define GOOGLE__API__HTTP_BODY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__api__http_body__descriptor) \
    , (char *)protobuf_c_empty_string, {0,NULL}, 0,NULL }


/* Google__Api__HttpBody methods */
void   google__api__http_body__init
                     (Google__Api__HttpBody         *message);
size_t google__api__http_body__get_packed_size
                     (const Google__Api__HttpBody   *message);
size_t google__api__http_body__pack
                     (const Google__Api__HttpBody   *message,
                      uint8_t             *out);
size_t google__api__http_body__pack_to_buffer
                     (const Google__Api__HttpBody   *message,
                      ProtobufCBuffer     *buffer);
Google__Api__HttpBody *
       google__api__http_body__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__api__http_body__free_unpacked
                     (Google__Api__HttpBody *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Google__Api__HttpBody_Closure)
                 (const Google__Api__HttpBody *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor google__api__http_body__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_google_2fapi_2fhttpbody_2eproto__INCLUDED */
