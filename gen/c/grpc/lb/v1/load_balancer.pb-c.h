/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: grpc/lb/v1/load_balancer.proto */

#ifndef PROTOBUF_C_grpc_2flb_2fv1_2fload_5fbalancer_2eproto__INCLUDED
#define PROTOBUF_C_grpc_2flb_2fv1_2fload_5fbalancer_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "google/protobuf/duration.pb-c.h"
#include "google/protobuf/timestamp.pb-c.h"

typedef struct _Grpc__Lb__V1__LoadBalanceRequest Grpc__Lb__V1__LoadBalanceRequest;
typedef struct _Grpc__Lb__V1__InitialLoadBalanceRequest Grpc__Lb__V1__InitialLoadBalanceRequest;
typedef struct _Grpc__Lb__V1__ClientStatsPerToken Grpc__Lb__V1__ClientStatsPerToken;
typedef struct _Grpc__Lb__V1__ClientStats Grpc__Lb__V1__ClientStats;
typedef struct _Grpc__Lb__V1__LoadBalanceResponse Grpc__Lb__V1__LoadBalanceResponse;
typedef struct _Grpc__Lb__V1__InitialLoadBalanceResponse Grpc__Lb__V1__InitialLoadBalanceResponse;
typedef struct _Grpc__Lb__V1__ServerList Grpc__Lb__V1__ServerList;
typedef struct _Grpc__Lb__V1__Server Grpc__Lb__V1__Server;
typedef struct _Grpc__Lb__V1__FallbackResponse Grpc__Lb__V1__FallbackResponse;


/* --- enums --- */


/* --- messages --- */

typedef enum {
  GRPC__LB__V1__LOAD_BALANCE_REQUEST__LOAD_BALANCE_REQUEST_TYPE__NOT_SET = 0,
  GRPC__LB__V1__LOAD_BALANCE_REQUEST__LOAD_BALANCE_REQUEST_TYPE_INITIAL_REQUEST = 1,
  GRPC__LB__V1__LOAD_BALANCE_REQUEST__LOAD_BALANCE_REQUEST_TYPE_CLIENT_STATS = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(GRPC__LB__V1__LOAD_BALANCE_REQUEST__LOAD_BALANCE_REQUEST_TYPE)
} Grpc__Lb__V1__LoadBalanceRequest__LoadBalanceRequestTypeCase;

struct  _Grpc__Lb__V1__LoadBalanceRequest
{
  ProtobufCMessage base;
  Grpc__Lb__V1__LoadBalanceRequest__LoadBalanceRequestTypeCase load_balance_request_type_case;
  union {
    /*
     * This message should be sent on the first request to the load balancer.
     */
    Grpc__Lb__V1__InitialLoadBalanceRequest *initial_request;
    /*
     * The client stats should be periodically reported to the load balancer
     * based on the duration defined in the InitialLoadBalanceResponse.
     */
    Grpc__Lb__V1__ClientStats *client_stats;
  };
};
#define GRPC__LB__V1__LOAD_BALANCE_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__lb__v1__load_balance_request__descriptor) \
    , GRPC__LB__V1__LOAD_BALANCE_REQUEST__LOAD_BALANCE_REQUEST_TYPE__NOT_SET, {0} }


struct  _Grpc__Lb__V1__InitialLoadBalanceRequest
{
  ProtobufCMessage base;
  /*
   * The name of the load balanced service (e.g., service.googleapis.com). Its
   * length should be less than 256 bytes.
   * The name might include a port number. How to handle the port number is up
   * to the balancer.
   */
  char *name;
};
#define GRPC__LB__V1__INITIAL_LOAD_BALANCE_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__lb__v1__initial_load_balance_request__descriptor) \
    , (char *)protobuf_c_empty_string }


/*
 * Contains the number of calls finished for a particular load balance token.
 */
struct  _Grpc__Lb__V1__ClientStatsPerToken
{
  ProtobufCMessage base;
  /*
   * See Server.load_balance_token.
   */
  char *load_balance_token;
  /*
   * The total number of RPCs that finished associated with the token.
   */
  int64_t num_calls;
};
#define GRPC__LB__V1__CLIENT_STATS_PER_TOKEN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__lb__v1__client_stats_per_token__descriptor) \
    , (char *)protobuf_c_empty_string, 0 }


/*
 * Contains client level statistics that are useful to load balancing. Each
 * count except the timestamp should be reset to zero after reporting the stats.
 */
struct  _Grpc__Lb__V1__ClientStats
{
  ProtobufCMessage base;
  /*
   * The timestamp of generating the report.
   */
  Google__Protobuf__Timestamp *timestamp;
  /*
   * The total number of RPCs that started.
   */
  int64_t num_calls_started;
  /*
   * The total number of RPCs that finished.
   */
  int64_t num_calls_finished;
  /*
   * The total number of RPCs that failed to reach a server except dropped RPCs.
   */
  int64_t num_calls_finished_with_client_failed_to_send;
  /*
   * The total number of RPCs that finished and are known to have been received
   * by a server.
   */
  int64_t num_calls_finished_known_received;
  /*
   * The list of dropped calls.
   */
  size_t n_calls_finished_with_drop;
  Grpc__Lb__V1__ClientStatsPerToken **calls_finished_with_drop;
};
#define GRPC__LB__V1__CLIENT_STATS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__lb__v1__client_stats__descriptor) \
    , NULL, 0, 0, 0, 0, 0,NULL }


typedef enum {
  GRPC__LB__V1__LOAD_BALANCE_RESPONSE__LOAD_BALANCE_RESPONSE_TYPE__NOT_SET = 0,
  GRPC__LB__V1__LOAD_BALANCE_RESPONSE__LOAD_BALANCE_RESPONSE_TYPE_INITIAL_RESPONSE = 1,
  GRPC__LB__V1__LOAD_BALANCE_RESPONSE__LOAD_BALANCE_RESPONSE_TYPE_SERVER_LIST = 2,
  GRPC__LB__V1__LOAD_BALANCE_RESPONSE__LOAD_BALANCE_RESPONSE_TYPE_FALLBACK_RESPONSE = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(GRPC__LB__V1__LOAD_BALANCE_RESPONSE__LOAD_BALANCE_RESPONSE_TYPE)
} Grpc__Lb__V1__LoadBalanceResponse__LoadBalanceResponseTypeCase;

struct  _Grpc__Lb__V1__LoadBalanceResponse
{
  ProtobufCMessage base;
  Grpc__Lb__V1__LoadBalanceResponse__LoadBalanceResponseTypeCase load_balance_response_type_case;
  union {
    /*
     * This message should be sent on the first response to the client.
     */
    Grpc__Lb__V1__InitialLoadBalanceResponse *initial_response;
    /*
     * Contains the list of servers selected by the load balancer. The client
     * should send requests to these servers in the specified order.
     */
    Grpc__Lb__V1__ServerList *server_list;
    /*
     * If this field is set, then the client should eagerly enter fallback
     * mode (even if there are existing, healthy connections to backends).
     * See go/grpclb-explicit-fallback for more details.
     */
    Grpc__Lb__V1__FallbackResponse *fallback_response;
  };
};
#define GRPC__LB__V1__LOAD_BALANCE_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__lb__v1__load_balance_response__descriptor) \
    , GRPC__LB__V1__LOAD_BALANCE_RESPONSE__LOAD_BALANCE_RESPONSE_TYPE__NOT_SET, {0} }


struct  _Grpc__Lb__V1__InitialLoadBalanceResponse
{
  ProtobufCMessage base;
  /*
   * This is an application layer redirect that indicates the client should use
   * the specified server for load balancing. When this field is non-empty in
   * the response, the client should open a separate connection to the
   * load_balancer_delegate and call the BalanceLoad method. Its length should
   * be less than 64 bytes.
   */
  char *load_balancer_delegate;
  /*
   * This interval defines how often the client should send the client stats
   * to the load balancer. Stats should only be reported when the duration is
   * positive.
   */
  Google__Protobuf__Duration *client_stats_report_interval;
};
#define GRPC__LB__V1__INITIAL_LOAD_BALANCE_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__lb__v1__initial_load_balance_response__descriptor) \
    , (char *)protobuf_c_empty_string, NULL }


struct  _Grpc__Lb__V1__ServerList
{
  ProtobufCMessage base;
  /*
   * Contains a list of servers selected by the load balancer. The list will
   * be updated when server resolutions change or as needed to balance load
   * across more servers. The client should consume the server list in order
   * unless instructed otherwise via the client_config.
   */
  size_t n_servers;
  Grpc__Lb__V1__Server **servers;
};
#define GRPC__LB__V1__SERVER_LIST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__lb__v1__server_list__descriptor) \
    , 0,NULL }


/*
 * Contains server information. When the drop field is not true, use the other
 * fields.
 */
struct  _Grpc__Lb__V1__Server
{
  ProtobufCMessage base;
  /*
   * A resolved address for the server, serialized in network-byte-order. It may
   * either be an IPv4 or IPv6 address.
   */
  ProtobufCBinaryData ip_address;
  /*
   * A resolved port number for the server.
   */
  int32_t port;
  /*
   * An opaque but printable token for load reporting. The client must include
   * the token of the picked server into the initial metadata when it starts a
   * call to that server. The token is used by the server to verify the request
   * and to allow the server to report load to the gRPC LB system. The token is
   * also used in client stats for reporting dropped calls.
   * Its length can be variable but must be less than 50 bytes.
   */
  char *load_balance_token;
  /*
   * Indicates whether this particular request should be dropped by the client.
   * If the request is dropped, there will be a corresponding entry in
   * ClientStats.calls_finished_with_drop.
   */
  protobuf_c_boolean drop;
};
#define GRPC__LB__V1__SERVER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__lb__v1__server__descriptor) \
    , {0,NULL}, 0, (char *)protobuf_c_empty_string, 0 }


struct  _Grpc__Lb__V1__FallbackResponse
{
  ProtobufCMessage base;
};
#define GRPC__LB__V1__FALLBACK_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&grpc__lb__v1__fallback_response__descriptor) \
     }


/* Grpc__Lb__V1__LoadBalanceRequest methods */
void   grpc__lb__v1__load_balance_request__init
                     (Grpc__Lb__V1__LoadBalanceRequest         *message);
size_t grpc__lb__v1__load_balance_request__get_packed_size
                     (const Grpc__Lb__V1__LoadBalanceRequest   *message);
size_t grpc__lb__v1__load_balance_request__pack
                     (const Grpc__Lb__V1__LoadBalanceRequest   *message,
                      uint8_t             *out);
size_t grpc__lb__v1__load_balance_request__pack_to_buffer
                     (const Grpc__Lb__V1__LoadBalanceRequest   *message,
                      ProtobufCBuffer     *buffer);
Grpc__Lb__V1__LoadBalanceRequest *
       grpc__lb__v1__load_balance_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__lb__v1__load_balance_request__free_unpacked
                     (Grpc__Lb__V1__LoadBalanceRequest *message,
                      ProtobufCAllocator *allocator);
/* Grpc__Lb__V1__InitialLoadBalanceRequest methods */
void   grpc__lb__v1__initial_load_balance_request__init
                     (Grpc__Lb__V1__InitialLoadBalanceRequest         *message);
size_t grpc__lb__v1__initial_load_balance_request__get_packed_size
                     (const Grpc__Lb__V1__InitialLoadBalanceRequest   *message);
size_t grpc__lb__v1__initial_load_balance_request__pack
                     (const Grpc__Lb__V1__InitialLoadBalanceRequest   *message,
                      uint8_t             *out);
size_t grpc__lb__v1__initial_load_balance_request__pack_to_buffer
                     (const Grpc__Lb__V1__InitialLoadBalanceRequest   *message,
                      ProtobufCBuffer     *buffer);
Grpc__Lb__V1__InitialLoadBalanceRequest *
       grpc__lb__v1__initial_load_balance_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__lb__v1__initial_load_balance_request__free_unpacked
                     (Grpc__Lb__V1__InitialLoadBalanceRequest *message,
                      ProtobufCAllocator *allocator);
/* Grpc__Lb__V1__ClientStatsPerToken methods */
void   grpc__lb__v1__client_stats_per_token__init
                     (Grpc__Lb__V1__ClientStatsPerToken         *message);
size_t grpc__lb__v1__client_stats_per_token__get_packed_size
                     (const Grpc__Lb__V1__ClientStatsPerToken   *message);
size_t grpc__lb__v1__client_stats_per_token__pack
                     (const Grpc__Lb__V1__ClientStatsPerToken   *message,
                      uint8_t             *out);
size_t grpc__lb__v1__client_stats_per_token__pack_to_buffer
                     (const Grpc__Lb__V1__ClientStatsPerToken   *message,
                      ProtobufCBuffer     *buffer);
Grpc__Lb__V1__ClientStatsPerToken *
       grpc__lb__v1__client_stats_per_token__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__lb__v1__client_stats_per_token__free_unpacked
                     (Grpc__Lb__V1__ClientStatsPerToken *message,
                      ProtobufCAllocator *allocator);
/* Grpc__Lb__V1__ClientStats methods */
void   grpc__lb__v1__client_stats__init
                     (Grpc__Lb__V1__ClientStats         *message);
size_t grpc__lb__v1__client_stats__get_packed_size
                     (const Grpc__Lb__V1__ClientStats   *message);
size_t grpc__lb__v1__client_stats__pack
                     (const Grpc__Lb__V1__ClientStats   *message,
                      uint8_t             *out);
size_t grpc__lb__v1__client_stats__pack_to_buffer
                     (const Grpc__Lb__V1__ClientStats   *message,
                      ProtobufCBuffer     *buffer);
Grpc__Lb__V1__ClientStats *
       grpc__lb__v1__client_stats__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__lb__v1__client_stats__free_unpacked
                     (Grpc__Lb__V1__ClientStats *message,
                      ProtobufCAllocator *allocator);
/* Grpc__Lb__V1__LoadBalanceResponse methods */
void   grpc__lb__v1__load_balance_response__init
                     (Grpc__Lb__V1__LoadBalanceResponse         *message);
size_t grpc__lb__v1__load_balance_response__get_packed_size
                     (const Grpc__Lb__V1__LoadBalanceResponse   *message);
size_t grpc__lb__v1__load_balance_response__pack
                     (const Grpc__Lb__V1__LoadBalanceResponse   *message,
                      uint8_t             *out);
size_t grpc__lb__v1__load_balance_response__pack_to_buffer
                     (const Grpc__Lb__V1__LoadBalanceResponse   *message,
                      ProtobufCBuffer     *buffer);
Grpc__Lb__V1__LoadBalanceResponse *
       grpc__lb__v1__load_balance_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__lb__v1__load_balance_response__free_unpacked
                     (Grpc__Lb__V1__LoadBalanceResponse *message,
                      ProtobufCAllocator *allocator);
/* Grpc__Lb__V1__InitialLoadBalanceResponse methods */
void   grpc__lb__v1__initial_load_balance_response__init
                     (Grpc__Lb__V1__InitialLoadBalanceResponse         *message);
size_t grpc__lb__v1__initial_load_balance_response__get_packed_size
                     (const Grpc__Lb__V1__InitialLoadBalanceResponse   *message);
size_t grpc__lb__v1__initial_load_balance_response__pack
                     (const Grpc__Lb__V1__InitialLoadBalanceResponse   *message,
                      uint8_t             *out);
size_t grpc__lb__v1__initial_load_balance_response__pack_to_buffer
                     (const Grpc__Lb__V1__InitialLoadBalanceResponse   *message,
                      ProtobufCBuffer     *buffer);
Grpc__Lb__V1__InitialLoadBalanceResponse *
       grpc__lb__v1__initial_load_balance_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__lb__v1__initial_load_balance_response__free_unpacked
                     (Grpc__Lb__V1__InitialLoadBalanceResponse *message,
                      ProtobufCAllocator *allocator);
/* Grpc__Lb__V1__ServerList methods */
void   grpc__lb__v1__server_list__init
                     (Grpc__Lb__V1__ServerList         *message);
size_t grpc__lb__v1__server_list__get_packed_size
                     (const Grpc__Lb__V1__ServerList   *message);
size_t grpc__lb__v1__server_list__pack
                     (const Grpc__Lb__V1__ServerList   *message,
                      uint8_t             *out);
size_t grpc__lb__v1__server_list__pack_to_buffer
                     (const Grpc__Lb__V1__ServerList   *message,
                      ProtobufCBuffer     *buffer);
Grpc__Lb__V1__ServerList *
       grpc__lb__v1__server_list__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__lb__v1__server_list__free_unpacked
                     (Grpc__Lb__V1__ServerList *message,
                      ProtobufCAllocator *allocator);
/* Grpc__Lb__V1__Server methods */
void   grpc__lb__v1__server__init
                     (Grpc__Lb__V1__Server         *message);
size_t grpc__lb__v1__server__get_packed_size
                     (const Grpc__Lb__V1__Server   *message);
size_t grpc__lb__v1__server__pack
                     (const Grpc__Lb__V1__Server   *message,
                      uint8_t             *out);
size_t grpc__lb__v1__server__pack_to_buffer
                     (const Grpc__Lb__V1__Server   *message,
                      ProtobufCBuffer     *buffer);
Grpc__Lb__V1__Server *
       grpc__lb__v1__server__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__lb__v1__server__free_unpacked
                     (Grpc__Lb__V1__Server *message,
                      ProtobufCAllocator *allocator);
/* Grpc__Lb__V1__FallbackResponse methods */
void   grpc__lb__v1__fallback_response__init
                     (Grpc__Lb__V1__FallbackResponse         *message);
size_t grpc__lb__v1__fallback_response__get_packed_size
                     (const Grpc__Lb__V1__FallbackResponse   *message);
size_t grpc__lb__v1__fallback_response__pack
                     (const Grpc__Lb__V1__FallbackResponse   *message,
                      uint8_t             *out);
size_t grpc__lb__v1__fallback_response__pack_to_buffer
                     (const Grpc__Lb__V1__FallbackResponse   *message,
                      ProtobufCBuffer     *buffer);
Grpc__Lb__V1__FallbackResponse *
       grpc__lb__v1__fallback_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   grpc__lb__v1__fallback_response__free_unpacked
                     (Grpc__Lb__V1__FallbackResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Grpc__Lb__V1__LoadBalanceRequest_Closure)
                 (const Grpc__Lb__V1__LoadBalanceRequest *message,
                  void *closure_data);
typedef void (*Grpc__Lb__V1__InitialLoadBalanceRequest_Closure)
                 (const Grpc__Lb__V1__InitialLoadBalanceRequest *message,
                  void *closure_data);
typedef void (*Grpc__Lb__V1__ClientStatsPerToken_Closure)
                 (const Grpc__Lb__V1__ClientStatsPerToken *message,
                  void *closure_data);
typedef void (*Grpc__Lb__V1__ClientStats_Closure)
                 (const Grpc__Lb__V1__ClientStats *message,
                  void *closure_data);
typedef void (*Grpc__Lb__V1__LoadBalanceResponse_Closure)
                 (const Grpc__Lb__V1__LoadBalanceResponse *message,
                  void *closure_data);
typedef void (*Grpc__Lb__V1__InitialLoadBalanceResponse_Closure)
                 (const Grpc__Lb__V1__InitialLoadBalanceResponse *message,
                  void *closure_data);
typedef void (*Grpc__Lb__V1__ServerList_Closure)
                 (const Grpc__Lb__V1__ServerList *message,
                  void *closure_data);
typedef void (*Grpc__Lb__V1__Server_Closure)
                 (const Grpc__Lb__V1__Server *message,
                  void *closure_data);
typedef void (*Grpc__Lb__V1__FallbackResponse_Closure)
                 (const Grpc__Lb__V1__FallbackResponse *message,
                  void *closure_data);

/* --- services --- */

typedef struct _Grpc__Lb__V1__LoadBalancer_Service Grpc__Lb__V1__LoadBalancer_Service;
struct _Grpc__Lb__V1__LoadBalancer_Service
{
  ProtobufCService base;
  void (*balance_load)(Grpc__Lb__V1__LoadBalancer_Service *service,
                       const Grpc__Lb__V1__LoadBalanceRequest *input,
                       Grpc__Lb__V1__LoadBalanceResponse_Closure closure,
                       void *closure_data);
};
typedef void (*Grpc__Lb__V1__LoadBalancer_ServiceDestroy)(Grpc__Lb__V1__LoadBalancer_Service *);
void grpc__lb__v1__load_balancer__init (Grpc__Lb__V1__LoadBalancer_Service *service,
                                        Grpc__Lb__V1__LoadBalancer_ServiceDestroy destroy);
#define GRPC__LB__V1__LOAD_BALANCER__BASE_INIT \
    { &grpc__lb__v1__load_balancer__descriptor, protobuf_c_service_invoke_internal, NULL }
#define GRPC__LB__V1__LOAD_BALANCER__INIT(function_prefix__) \
    { GRPC__LB__V1__LOAD_BALANCER__BASE_INIT,\
      function_prefix__ ## balance_load  }
void grpc__lb__v1__load_balancer__balance_load(ProtobufCService *service,
                                               const Grpc__Lb__V1__LoadBalanceRequest *input,
                                               Grpc__Lb__V1__LoadBalanceResponse_Closure closure,
                                               void *closure_data);

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor grpc__lb__v1__load_balance_request__descriptor;
extern const ProtobufCMessageDescriptor grpc__lb__v1__initial_load_balance_request__descriptor;
extern const ProtobufCMessageDescriptor grpc__lb__v1__client_stats_per_token__descriptor;
extern const ProtobufCMessageDescriptor grpc__lb__v1__client_stats__descriptor;
extern const ProtobufCMessageDescriptor grpc__lb__v1__load_balance_response__descriptor;
extern const ProtobufCMessageDescriptor grpc__lb__v1__initial_load_balance_response__descriptor;
extern const ProtobufCMessageDescriptor grpc__lb__v1__server_list__descriptor;
extern const ProtobufCMessageDescriptor grpc__lb__v1__server__descriptor;
extern const ProtobufCMessageDescriptor grpc__lb__v1__fallback_response__descriptor;
extern const ProtobufCServiceDescriptor grpc__lb__v1__load_balancer__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_grpc_2flb_2fv1_2fload_5fbalancer_2eproto__INCLUDED */
