/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: kentik/network_class/v202109alpha1/network_class.proto */

#ifndef PROTOBUF_C_kentik_2fnetwork_5fclass_2fv202109alpha1_2fnetwork_5fclass_2eproto__INCLUDED
#define PROTOBUF_C_kentik_2fnetwork_5fclass_2fv202109alpha1_2fnetwork_5fclass_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "google/api/annotations.pb-c.h"
#include "google/api/client.pb-c.h"
#include "protoc-gen-openapiv2/options/annotations.pb-c.h"
#include "kentik/core/v202303/annotations.pb-c.h"

typedef struct _Kentik__NetworkClass__V202109alpha1__CloudSubnet Kentik__NetworkClass__V202109alpha1__CloudSubnet;
typedef struct _Kentik__NetworkClass__V202109alpha1__NetworkClass Kentik__NetworkClass__V202109alpha1__NetworkClass;
typedef struct _Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest;
typedef struct _Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse;
typedef struct _Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest;
typedef struct _Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse;


/* --- enums --- */

typedef enum _Kentik__NetworkClass__V202109alpha1__CloudType {
  KENTIK__NETWORK_CLASS__V202109ALPHA1__CLOUD_TYPE__CLOUD_TYPE_UNSPECIFIED = 0,
  KENTIK__NETWORK_CLASS__V202109ALPHA1__CLOUD_TYPE__CLOUD_TYPE_AWS = 1,
  KENTIK__NETWORK_CLASS__V202109ALPHA1__CLOUD_TYPE__CLOUD_TYPE_AZURE = 2,
  KENTIK__NETWORK_CLASS__V202109ALPHA1__CLOUD_TYPE__CLOUD_TYPE_GCE = 3,
  KENTIK__NETWORK_CLASS__V202109ALPHA1__CLOUD_TYPE__CLOUD_TYPE_IBM = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KENTIK__NETWORK_CLASS__V202109ALPHA1__CLOUD_TYPE)
} Kentik__NetworkClass__V202109alpha1__CloudType;

/* --- messages --- */

struct  _Kentik__NetworkClass__V202109alpha1__CloudSubnet
{
  ProtobufCMessage base;
  /*
   * Cloud provider
   */
  Kentik__NetworkClass__V202109alpha1__CloudType type;
  /*
   * Subnet masks
   */
  size_t n_subnets;
  char **subnets;
};
#define KENTIK__NETWORK_CLASS__V202109ALPHA1__CLOUD_SUBNET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__network_class__v202109alpha1__cloud_subnet__descriptor) \
    , KENTIK__NETWORK_CLASS__V202109ALPHA1__CLOUD_TYPE__CLOUD_TYPE_UNSPECIFIED, 0,NULL }


struct  _Kentik__NetworkClass__V202109alpha1__NetworkClass
{
  ProtobufCMessage base;
  /*
   * Internal ASNs
   */
  size_t n_internal_asns;
  char **internal_asns;
  /*
   * Internal IPs
   */
  size_t n_internal_ips;
  char **internal_ips;
  /*
   * Specify to use internal ASNs
   */
  protobuf_c_boolean use_private_asns;
  /*
   * Specify to use internal IPs
   */
  protobuf_c_boolean use_private_subnets;
  /*
   * Cloud provider and subnet info.
   */
  size_t n_cloud_subnets;
  Kentik__NetworkClass__V202109alpha1__CloudSubnet **cloud_subnets;
};
#define KENTIK__NETWORK_CLASS__V202109ALPHA1__NETWORK_CLASS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__network_class__v202109alpha1__network_class__descriptor) \
    , 0,NULL, 0,NULL, 0, 0, 0,NULL }


struct  _Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest
{
  ProtobufCMessage base;
};
#define KENTIK__NETWORK_CLASS__V202109ALPHA1__GET_NETWORK_CLASS_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__network_class__v202109alpha1__get_network_class_request__descriptor) \
     }


struct  _Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse
{
  ProtobufCMessage base;
  Kentik__NetworkClass__V202109alpha1__NetworkClass *network_class;
};
#define KENTIK__NETWORK_CLASS__V202109ALPHA1__GET_NETWORK_CLASS_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__network_class__v202109alpha1__get_network_class_response__descriptor) \
    , NULL }


struct  _Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest
{
  ProtobufCMessage base;
  Kentik__NetworkClass__V202109alpha1__NetworkClass *network_class;
};
#define KENTIK__NETWORK_CLASS__V202109ALPHA1__UPDATE_NETWORK_CLASS_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__network_class__v202109alpha1__update_network_class_request__descriptor) \
    , NULL }


struct  _Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse
{
  ProtobufCMessage base;
  Kentik__NetworkClass__V202109alpha1__NetworkClass *network_class;
};
#define KENTIK__NETWORK_CLASS__V202109ALPHA1__UPDATE_NETWORK_CLASS_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__network_class__v202109alpha1__update_network_class_response__descriptor) \
    , NULL }


/* Kentik__NetworkClass__V202109alpha1__CloudSubnet methods */
void   kentik__network_class__v202109alpha1__cloud_subnet__init
                     (Kentik__NetworkClass__V202109alpha1__CloudSubnet         *message);
size_t kentik__network_class__v202109alpha1__cloud_subnet__get_packed_size
                     (const Kentik__NetworkClass__V202109alpha1__CloudSubnet   *message);
size_t kentik__network_class__v202109alpha1__cloud_subnet__pack
                     (const Kentik__NetworkClass__V202109alpha1__CloudSubnet   *message,
                      uint8_t             *out);
size_t kentik__network_class__v202109alpha1__cloud_subnet__pack_to_buffer
                     (const Kentik__NetworkClass__V202109alpha1__CloudSubnet   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NetworkClass__V202109alpha1__CloudSubnet *
       kentik__network_class__v202109alpha1__cloud_subnet__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__network_class__v202109alpha1__cloud_subnet__free_unpacked
                     (Kentik__NetworkClass__V202109alpha1__CloudSubnet *message,
                      ProtobufCAllocator *allocator);
/* Kentik__NetworkClass__V202109alpha1__NetworkClass methods */
void   kentik__network_class__v202109alpha1__network_class__init
                     (Kentik__NetworkClass__V202109alpha1__NetworkClass         *message);
size_t kentik__network_class__v202109alpha1__network_class__get_packed_size
                     (const Kentik__NetworkClass__V202109alpha1__NetworkClass   *message);
size_t kentik__network_class__v202109alpha1__network_class__pack
                     (const Kentik__NetworkClass__V202109alpha1__NetworkClass   *message,
                      uint8_t             *out);
size_t kentik__network_class__v202109alpha1__network_class__pack_to_buffer
                     (const Kentik__NetworkClass__V202109alpha1__NetworkClass   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NetworkClass__V202109alpha1__NetworkClass *
       kentik__network_class__v202109alpha1__network_class__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__network_class__v202109alpha1__network_class__free_unpacked
                     (Kentik__NetworkClass__V202109alpha1__NetworkClass *message,
                      ProtobufCAllocator *allocator);
/* Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest methods */
void   kentik__network_class__v202109alpha1__get_network_class_request__init
                     (Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest         *message);
size_t kentik__network_class__v202109alpha1__get_network_class_request__get_packed_size
                     (const Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest   *message);
size_t kentik__network_class__v202109alpha1__get_network_class_request__pack
                     (const Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest   *message,
                      uint8_t             *out);
size_t kentik__network_class__v202109alpha1__get_network_class_request__pack_to_buffer
                     (const Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest *
       kentik__network_class__v202109alpha1__get_network_class_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__network_class__v202109alpha1__get_network_class_request__free_unpacked
                     (Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest *message,
                      ProtobufCAllocator *allocator);
/* Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse methods */
void   kentik__network_class__v202109alpha1__get_network_class_response__init
                     (Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse         *message);
size_t kentik__network_class__v202109alpha1__get_network_class_response__get_packed_size
                     (const Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse   *message);
size_t kentik__network_class__v202109alpha1__get_network_class_response__pack
                     (const Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse   *message,
                      uint8_t             *out);
size_t kentik__network_class__v202109alpha1__get_network_class_response__pack_to_buffer
                     (const Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse *
       kentik__network_class__v202109alpha1__get_network_class_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__network_class__v202109alpha1__get_network_class_response__free_unpacked
                     (Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse *message,
                      ProtobufCAllocator *allocator);
/* Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest methods */
void   kentik__network_class__v202109alpha1__update_network_class_request__init
                     (Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest         *message);
size_t kentik__network_class__v202109alpha1__update_network_class_request__get_packed_size
                     (const Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest   *message);
size_t kentik__network_class__v202109alpha1__update_network_class_request__pack
                     (const Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest   *message,
                      uint8_t             *out);
size_t kentik__network_class__v202109alpha1__update_network_class_request__pack_to_buffer
                     (const Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest *
       kentik__network_class__v202109alpha1__update_network_class_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__network_class__v202109alpha1__update_network_class_request__free_unpacked
                     (Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest *message,
                      ProtobufCAllocator *allocator);
/* Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse methods */
void   kentik__network_class__v202109alpha1__update_network_class_response__init
                     (Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse         *message);
size_t kentik__network_class__v202109alpha1__update_network_class_response__get_packed_size
                     (const Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse   *message);
size_t kentik__network_class__v202109alpha1__update_network_class_response__pack
                     (const Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse   *message,
                      uint8_t             *out);
size_t kentik__network_class__v202109alpha1__update_network_class_response__pack_to_buffer
                     (const Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse *
       kentik__network_class__v202109alpha1__update_network_class_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__network_class__v202109alpha1__update_network_class_response__free_unpacked
                     (Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Kentik__NetworkClass__V202109alpha1__CloudSubnet_Closure)
                 (const Kentik__NetworkClass__V202109alpha1__CloudSubnet *message,
                  void *closure_data);
typedef void (*Kentik__NetworkClass__V202109alpha1__NetworkClass_Closure)
                 (const Kentik__NetworkClass__V202109alpha1__NetworkClass *message,
                  void *closure_data);
typedef void (*Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest_Closure)
                 (const Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest *message,
                  void *closure_data);
typedef void (*Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse_Closure)
                 (const Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse *message,
                  void *closure_data);
typedef void (*Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest_Closure)
                 (const Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest *message,
                  void *closure_data);
typedef void (*Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse_Closure)
                 (const Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse *message,
                  void *closure_data);

/* --- services --- */

typedef struct _Kentik__NetworkClass__V202109alpha1__NetworkClassService_Service Kentik__NetworkClass__V202109alpha1__NetworkClassService_Service;
struct _Kentik__NetworkClass__V202109alpha1__NetworkClassService_Service
{
  ProtobufCService base;
  void (*get_network_class)(Kentik__NetworkClass__V202109alpha1__NetworkClassService_Service *service,
                            const Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest *input,
                            Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse_Closure closure,
                            void *closure_data);
  void (*update_network_class)(Kentik__NetworkClass__V202109alpha1__NetworkClassService_Service *service,
                               const Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest *input,
                               Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse_Closure closure,
                               void *closure_data);
};
typedef void (*Kentik__NetworkClass__V202109alpha1__NetworkClassService_ServiceDestroy)(Kentik__NetworkClass__V202109alpha1__NetworkClassService_Service *);
void kentik__network_class__v202109alpha1__network_class_service__init (Kentik__NetworkClass__V202109alpha1__NetworkClassService_Service *service,
                                                                        Kentik__NetworkClass__V202109alpha1__NetworkClassService_ServiceDestroy destroy);
#define KENTIK__NETWORK_CLASS__V202109ALPHA1__NETWORK_CLASS_SERVICE__BASE_INIT \
    { &kentik__network_class__v202109alpha1__network_class_service__descriptor, protobuf_c_service_invoke_internal, NULL }
#define KENTIK__NETWORK_CLASS__V202109ALPHA1__NETWORK_CLASS_SERVICE__INIT(function_prefix__) \
    { KENTIK__NETWORK_CLASS__V202109ALPHA1__NETWORK_CLASS_SERVICE__BASE_INIT,\
      function_prefix__ ## get_network_class,\
      function_prefix__ ## update_network_class  }
void kentik__network_class__v202109alpha1__network_class_service__get_network_class(ProtobufCService *service,
                                                                                    const Kentik__NetworkClass__V202109alpha1__GetNetworkClassRequest *input,
                                                                                    Kentik__NetworkClass__V202109alpha1__GetNetworkClassResponse_Closure closure,
                                                                                    void *closure_data);
void kentik__network_class__v202109alpha1__network_class_service__update_network_class(ProtobufCService *service,
                                                                                       const Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassRequest *input,
                                                                                       Kentik__NetworkClass__V202109alpha1__UpdateNetworkClassResponse_Closure closure,
                                                                                       void *closure_data);

/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    kentik__network_class__v202109alpha1__cloud_type__descriptor;
extern const ProtobufCMessageDescriptor kentik__network_class__v202109alpha1__cloud_subnet__descriptor;
extern const ProtobufCMessageDescriptor kentik__network_class__v202109alpha1__network_class__descriptor;
extern const ProtobufCMessageDescriptor kentik__network_class__v202109alpha1__get_network_class_request__descriptor;
extern const ProtobufCMessageDescriptor kentik__network_class__v202109alpha1__get_network_class_response__descriptor;
extern const ProtobufCMessageDescriptor kentik__network_class__v202109alpha1__update_network_class_request__descriptor;
extern const ProtobufCMessageDescriptor kentik__network_class__v202109alpha1__update_network_class_response__descriptor;
extern const ProtobufCServiceDescriptor kentik__network_class__v202109alpha1__network_class_service__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_kentik_2fnetwork_5fclass_2fv202109alpha1_2fnetwork_5fclass_2eproto__INCLUDED */
