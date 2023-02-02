/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: grpc/http_over_grpc/http_over_grpc.proto */

#ifndef PROTOBUF_C_grpc_2fhttp_5fover_5fgrpc_2fhttp_5fover_5fgrpc_2eproto__INCLUDED
#define PROTOBUF_C_grpc_2fhttp_5fover_5fgrpc_2fhttp_5fover_5fgrpc_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Grpc__HttpOverGrpc__Header Grpc__HttpOverGrpc__Header;
typedef struct _Grpc__HttpOverGrpc__HTTPOverGRPCRequest Grpc__HttpOverGrpc__HTTPOverGRPCRequest;
typedef struct _Grpc__HttpOverGrpc__HTTPOverGRPCReply Grpc__HttpOverGrpc__HTTPOverGRPCReply;


/* --- enums --- */


/* --- messages --- */

/*
 * Represents HTTP 1.1 header.
 */
struct  _Grpc__HttpOverGrpc__Header
{
  ProtobufCMessage base;
  char *key;
  size_t n_values;
  char **values;
};
#define GRPC__HTTP_OVER_GRPC__HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__http_over_grpc__header__descriptor) \
    , (char *)protobuf_c_empty_string, 0,NULL }


/*
 * An HTTP 1.1 request encapsulated in a gRPC.
 */
struct  _Grpc__HttpOverGrpc__HTTPOverGRPCRequest
{
  ProtobufCMessage base;
  /*
   * The HTTP request method.
   */
  char *method;
  /*
   * The HTTP request URL.
   */
  char *url;
  /*
   * The HTTP request headers.
   */
  size_t n_headers;
  Grpc__HttpOverGrpc__Header **headers;
  /*
   * HTTP request body.
   */
  ProtobufCBinaryData body;
};
#define GRPC__HTTP_OVER_GRPC__HTTPOVER_GRPCREQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__http_over_grpc__httpover_grpcrequest__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, 0,NULL, {0,NULL} }


/*
 * An HTTP 1.1 reply encapsulated in an RPC.
 */
struct  _Grpc__HttpOverGrpc__HTTPOverGRPCReply
{
  ProtobufCMessage base;
  /*
   * The HTTP status code (e.g. 200, 400, 404).
   */
  int32_t status;
  /*
   * The HTTP response headers.
   */
  size_t n_headers;
  Grpc__HttpOverGrpc__Header **headers;
  /*
   * The HTTP response body.
   */
  ProtobufCBinaryData body;
};
#define GRPC__HTTP_OVER_GRPC__HTTPOVER_GRPCREPLY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__http_over_grpc__httpover_grpcreply__descriptor) \
    , 0, 0,NULL, {0,NULL} }


/* Grpc__HttpOverGrpc__Header methods */
void   grpc__http_over_grpc__header__init
                     (Grpc__HttpOverGrpc__Header         *message);
size_t grpc__http_over_grpc__header__get_packed_size
                     (const Grpc__HttpOverGrpc__Header   *message);
size_t grpc__http_over_grpc__header__pack
                     (const Grpc__HttpOverGrpc__Header   *message,
                      uint8_t             *out);
size_t grpc__http_over_grpc__header__pack_to_buffer
                     (const Grpc__HttpOverGrpc__Header   *message,
                      ProtobufCBuffer     *buffer);
Grpc__HttpOverGrpc__Header *
       grpc__http_over_grpc__header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__http_over_grpc__header__free_unpacked
                     (Grpc__HttpOverGrpc__Header *message,
                      ProtobufCAllocator *allocator);
/* Grpc__HttpOverGrpc__HTTPOverGRPCRequest methods */
void   grpc__http_over_grpc__httpover_grpcrequest__init
                     (Grpc__HttpOverGrpc__HTTPOverGRPCRequest         *message);
size_t grpc__http_over_grpc__httpover_grpcrequest__get_packed_size
                     (const Grpc__HttpOverGrpc__HTTPOverGRPCRequest   *message);
size_t grpc__http_over_grpc__httpover_grpcrequest__pack
                     (const Grpc__HttpOverGrpc__HTTPOverGRPCRequest   *message,
                      uint8_t             *out);
size_t grpc__http_over_grpc__httpover_grpcrequest__pack_to_buffer
                     (const Grpc__HttpOverGrpc__HTTPOverGRPCRequest   *message,
                      ProtobufCBuffer     *buffer);
Grpc__HttpOverGrpc__HTTPOverGRPCRequest *
       grpc__http_over_grpc__httpover_grpcrequest__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__http_over_grpc__httpover_grpcrequest__free_unpacked
                     (Grpc__HttpOverGrpc__HTTPOverGRPCRequest *message,
                      ProtobufCAllocator *allocator);
/* Grpc__HttpOverGrpc__HTTPOverGRPCReply methods */
void   grpc__http_over_grpc__httpover_grpcreply__init
                     (Grpc__HttpOverGrpc__HTTPOverGRPCReply         *message);
size_t grpc__http_over_grpc__httpover_grpcreply__get_packed_size
                     (const Grpc__HttpOverGrpc__HTTPOverGRPCReply   *message);
size_t grpc__http_over_grpc__httpover_grpcreply__pack
                     (const Grpc__HttpOverGrpc__HTTPOverGRPCReply   *message,
                      uint8_t             *out);
size_t grpc__http_over_grpc__httpover_grpcreply__pack_to_buffer
                     (const Grpc__HttpOverGrpc__HTTPOverGRPCReply   *message,
                      ProtobufCBuffer     *buffer);
Grpc__HttpOverGrpc__HTTPOverGRPCReply *
       grpc__http_over_grpc__httpover_grpcreply__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__http_over_grpc__httpover_grpcreply__free_unpacked
                     (Grpc__HttpOverGrpc__HTTPOverGRPCReply *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Grpc__HttpOverGrpc__Header_Closure)
                 (const Grpc__HttpOverGrpc__Header *message,
                  void *closure_data);
typedef void (*Grpc__HttpOverGrpc__HTTPOverGRPCRequest_Closure)
                 (const Grpc__HttpOverGrpc__HTTPOverGRPCRequest *message,
                  void *closure_data);
typedef void (*Grpc__HttpOverGrpc__HTTPOverGRPCReply_Closure)
                 (const Grpc__HttpOverGrpc__HTTPOverGRPCReply *message,
                  void *closure_data);

/* --- services --- */

typedef struct _Grpc__HttpOverGrpc__HTTPOverGRPC_Service Grpc__HttpOverGrpc__HTTPOverGRPC_Service;
struct _Grpc__HttpOverGrpc__HTTPOverGRPC_Service
{
  ProtobufCService base;
  void (*httprequest)(Grpc__HttpOverGrpc__HTTPOverGRPC_Service *service,
                      const Grpc__HttpOverGrpc__HTTPOverGRPCRequest *input,
                      Grpc__HttpOverGrpc__HTTPOverGRPCReply_Closure closure,
                      void *closure_data);
};
typedef void (*Grpc__HttpOverGrpc__HTTPOverGRPC_ServiceDestroy)(Grpc__HttpOverGrpc__HTTPOverGRPC_Service *);
void grpc__http_over_grpc__httpover_grpc__init (Grpc__HttpOverGrpc__HTTPOverGRPC_Service *service,
                                                Grpc__HttpOverGrpc__HTTPOverGRPC_ServiceDestroy destroy);
#define GRPC__HTTP_OVER_GRPC__HTTPOVER_GRPC__BASE_INIT \
    { &grpc__http_over_grpc__httpover_grpc__descriptor, protobuf_c_service_invoke_internal, NULL }
#define GRPC__HTTP_OVER_GRPC__HTTPOVER_GRPC__INIT(function_prefix__) \
    { GRPC__HTTP_OVER_GRPC__HTTPOVER_GRPC__BASE_INIT,\
      function_prefix__ ## httprequest  }
void grpc__http_over_grpc__httpover_grpc__httprequest(ProtobufCService *service,
                                                      const Grpc__HttpOverGrpc__HTTPOverGRPCRequest *input,
                                                      Grpc__HttpOverGrpc__HTTPOverGRPCReply_Closure closure,
                                                      void *closure_data);

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor grpc__http_over_grpc__header__descriptor;
extern const ProtobufCMessageDescriptor grpc__http_over_grpc__httpover_grpcrequest__descriptor;
extern const ProtobufCMessageDescriptor grpc__http_over_grpc__httpover_grpcreply__descriptor;
extern const ProtobufCServiceDescriptor grpc__http_over_grpc__httpover_grpc__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_grpc_2fhttp_5fover_5fgrpc_2fhttp_5fover_5fgrpc_2eproto__INCLUDED */
