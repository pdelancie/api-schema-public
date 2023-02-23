/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: kentik/notification_channel/v202204alpha1/notification_channel.proto */

#ifndef PROTOBUF_C_kentik_2fnotification_5fchannel_2fv202204alpha1_2fnotification_5fchannel_2eproto__INCLUDED
#define PROTOBUF_C_kentik_2fnotification_5fchannel_2fv202204alpha1_2fnotification_5fchannel_2eproto__INCLUDED

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
#include "kentik/core/v202012alpha1/annotations.pb-c.h"
#include "google/protobuf/timestamp.pb-c.h"

typedef struct _Kentik__NotificationChannel__V202204alpha1__NotificationChannel Kentik__NotificationChannel__V202204alpha1__NotificationChannel;
typedef struct _Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest;
typedef struct _Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse;
typedef struct _Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest;
typedef struct _Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse;


/* --- enums --- */

typedef enum _Kentik__NotificationChannel__V202204alpha1__ChannelType {
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_UNSPECIFIED = 0,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_XMATTERS = 1,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_SLACK = 2,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_SERVICENOW = 3,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_SYSLOG = 4,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_OPSGENIE = 5,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_CUSTOM_WEBHOOK = 6,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_SPLUNK = 7,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_MSTEAMS = 8,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_JSON = 9,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_EMAIL = 10,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_VICTOROPS = 11,
  KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_PAGERDUTY = 12
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE)
} Kentik__NotificationChannel__V202204alpha1__ChannelType;

/* --- messages --- */

struct  _Kentik__NotificationChannel__V202204alpha1__NotificationChannel
{
  ProtobufCMessage base;
  char *id;
  char *name;
  Kentik__NotificationChannel__V202204alpha1__ChannelType type;
  char *status;
  /*
   * Create timestamp.
   */
  Google__Protobuf__Timestamp *cdate;
  /*
   * Update timestamp.
   */
  Google__Protobuf__Timestamp *edate;
};
#define KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__NOTIFICATION_CHANNEL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__notification_channel__v202204alpha1__notification_channel__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__CHANNEL_TYPE__CHANNEL_TYPE_UNSPECIFIED, (char *)protobuf_c_empty_string, NULL, NULL }


struct  _Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest
{
  ProtobufCMessage base;
};
#define KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__LIST_NOTIFICATION_CHANNELS_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__notification_channel__v202204alpha1__list_notification_channels_request__descriptor) \
     }


struct  _Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse
{
  ProtobufCMessage base;
  size_t n_notification_channels;
  Kentik__NotificationChannel__V202204alpha1__NotificationChannel **notification_channels;
  int32_t invalid_count;
};
#define KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__LIST_NOTIFICATION_CHANNELS_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__notification_channel__v202204alpha1__list_notification_channels_response__descriptor) \
    , 0,NULL, 0 }


struct  _Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest
{
  ProtobufCMessage base;
  char *id;
};
#define KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__GET_NOTIFICATION_CHANNEL_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__notification_channel__v202204alpha1__get_notification_channel_request__descriptor) \
    , (char *)protobuf_c_empty_string }


struct  _Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse
{
  ProtobufCMessage base;
  Kentik__NotificationChannel__V202204alpha1__NotificationChannel *notification_channel;
};
#define KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__GET_NOTIFICATION_CHANNEL_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kentik__notification_channel__v202204alpha1__get_notification_channel_response__descriptor) \
    , NULL }


/* Kentik__NotificationChannel__V202204alpha1__NotificationChannel methods */
void   kentik__notification_channel__v202204alpha1__notification_channel__init
                     (Kentik__NotificationChannel__V202204alpha1__NotificationChannel         *message);
size_t kentik__notification_channel__v202204alpha1__notification_channel__get_packed_size
                     (const Kentik__NotificationChannel__V202204alpha1__NotificationChannel   *message);
size_t kentik__notification_channel__v202204alpha1__notification_channel__pack
                     (const Kentik__NotificationChannel__V202204alpha1__NotificationChannel   *message,
                      uint8_t             *out);
size_t kentik__notification_channel__v202204alpha1__notification_channel__pack_to_buffer
                     (const Kentik__NotificationChannel__V202204alpha1__NotificationChannel   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NotificationChannel__V202204alpha1__NotificationChannel *
       kentik__notification_channel__v202204alpha1__notification_channel__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__notification_channel__v202204alpha1__notification_channel__free_unpacked
                     (Kentik__NotificationChannel__V202204alpha1__NotificationChannel *message,
                      ProtobufCAllocator *allocator);
/* Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest methods */
void   kentik__notification_channel__v202204alpha1__list_notification_channels_request__init
                     (Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest         *message);
size_t kentik__notification_channel__v202204alpha1__list_notification_channels_request__get_packed_size
                     (const Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest   *message);
size_t kentik__notification_channel__v202204alpha1__list_notification_channels_request__pack
                     (const Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest   *message,
                      uint8_t             *out);
size_t kentik__notification_channel__v202204alpha1__list_notification_channels_request__pack_to_buffer
                     (const Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest *
       kentik__notification_channel__v202204alpha1__list_notification_channels_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__notification_channel__v202204alpha1__list_notification_channels_request__free_unpacked
                     (Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest *message,
                      ProtobufCAllocator *allocator);
/* Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse methods */
void   kentik__notification_channel__v202204alpha1__list_notification_channels_response__init
                     (Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse         *message);
size_t kentik__notification_channel__v202204alpha1__list_notification_channels_response__get_packed_size
                     (const Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse   *message);
size_t kentik__notification_channel__v202204alpha1__list_notification_channels_response__pack
                     (const Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse   *message,
                      uint8_t             *out);
size_t kentik__notification_channel__v202204alpha1__list_notification_channels_response__pack_to_buffer
                     (const Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse *
       kentik__notification_channel__v202204alpha1__list_notification_channels_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__notification_channel__v202204alpha1__list_notification_channels_response__free_unpacked
                     (Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse *message,
                      ProtobufCAllocator *allocator);
/* Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest methods */
void   kentik__notification_channel__v202204alpha1__get_notification_channel_request__init
                     (Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest         *message);
size_t kentik__notification_channel__v202204alpha1__get_notification_channel_request__get_packed_size
                     (const Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest   *message);
size_t kentik__notification_channel__v202204alpha1__get_notification_channel_request__pack
                     (const Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest   *message,
                      uint8_t             *out);
size_t kentik__notification_channel__v202204alpha1__get_notification_channel_request__pack_to_buffer
                     (const Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest *
       kentik__notification_channel__v202204alpha1__get_notification_channel_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__notification_channel__v202204alpha1__get_notification_channel_request__free_unpacked
                     (Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest *message,
                      ProtobufCAllocator *allocator);
/* Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse methods */
void   kentik__notification_channel__v202204alpha1__get_notification_channel_response__init
                     (Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse         *message);
size_t kentik__notification_channel__v202204alpha1__get_notification_channel_response__get_packed_size
                     (const Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse   *message);
size_t kentik__notification_channel__v202204alpha1__get_notification_channel_response__pack
                     (const Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse   *message,
                      uint8_t             *out);
size_t kentik__notification_channel__v202204alpha1__get_notification_channel_response__pack_to_buffer
                     (const Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse   *message,
                      ProtobufCBuffer     *buffer);
Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse *
       kentik__notification_channel__v202204alpha1__get_notification_channel_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kentik__notification_channel__v202204alpha1__get_notification_channel_response__free_unpacked
                     (Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Kentik__NotificationChannel__V202204alpha1__NotificationChannel_Closure)
                 (const Kentik__NotificationChannel__V202204alpha1__NotificationChannel *message,
                  void *closure_data);
typedef void (*Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest_Closure)
                 (const Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest *message,
                  void *closure_data);
typedef void (*Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse_Closure)
                 (const Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse *message,
                  void *closure_data);
typedef void (*Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest_Closure)
                 (const Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest *message,
                  void *closure_data);
typedef void (*Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse_Closure)
                 (const Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse *message,
                  void *closure_data);

/* --- services --- */

typedef struct _Kentik__NotificationChannel__V202204alpha1__NotificationChannelService_Service Kentik__NotificationChannel__V202204alpha1__NotificationChannelService_Service;
struct _Kentik__NotificationChannel__V202204alpha1__NotificationChannelService_Service
{
  ProtobufCService base;
  void (*list_notification_channels)(Kentik__NotificationChannel__V202204alpha1__NotificationChannelService_Service *service,
                                     const Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest *input,
                                     Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse_Closure closure,
                                     void *closure_data);
  void (*get_notification_channel)(Kentik__NotificationChannel__V202204alpha1__NotificationChannelService_Service *service,
                                   const Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest *input,
                                   Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse_Closure closure,
                                   void *closure_data);
};
typedef void (*Kentik__NotificationChannel__V202204alpha1__NotificationChannelService_ServiceDestroy)(Kentik__NotificationChannel__V202204alpha1__NotificationChannelService_Service *);
void kentik__notification_channel__v202204alpha1__notification_channel_service__init (Kentik__NotificationChannel__V202204alpha1__NotificationChannelService_Service *service,
                                                                                      Kentik__NotificationChannel__V202204alpha1__NotificationChannelService_ServiceDestroy destroy);
#define KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__NOTIFICATION_CHANNEL_SERVICE__BASE_INIT \
    { &kentik__notification_channel__v202204alpha1__notification_channel_service__descriptor, protobuf_c_service_invoke_internal, NULL }
#define KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__NOTIFICATION_CHANNEL_SERVICE__INIT(function_prefix__) \
    { KENTIK__NOTIFICATION_CHANNEL__V202204ALPHA1__NOTIFICATION_CHANNEL_SERVICE__BASE_INIT,\
      function_prefix__ ## list_notification_channels,\
      function_prefix__ ## get_notification_channel  }
void kentik__notification_channel__v202204alpha1__notification_channel_service__list_notification_channels(ProtobufCService *service,
                                                                                                           const Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsRequest *input,
                                                                                                           Kentik__NotificationChannel__V202204alpha1__ListNotificationChannelsResponse_Closure closure,
                                                                                                           void *closure_data);
void kentik__notification_channel__v202204alpha1__notification_channel_service__get_notification_channel(ProtobufCService *service,
                                                                                                         const Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelRequest *input,
                                                                                                         Kentik__NotificationChannel__V202204alpha1__GetNotificationChannelResponse_Closure closure,
                                                                                                         void *closure_data);

/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    kentik__notification_channel__v202204alpha1__channel_type__descriptor;
extern const ProtobufCMessageDescriptor kentik__notification_channel__v202204alpha1__notification_channel__descriptor;
extern const ProtobufCMessageDescriptor kentik__notification_channel__v202204alpha1__list_notification_channels_request__descriptor;
extern const ProtobufCMessageDescriptor kentik__notification_channel__v202204alpha1__list_notification_channels_response__descriptor;
extern const ProtobufCMessageDescriptor kentik__notification_channel__v202204alpha1__get_notification_channel_request__descriptor;
extern const ProtobufCMessageDescriptor kentik__notification_channel__v202204alpha1__get_notification_channel_response__descriptor;
extern const ProtobufCServiceDescriptor kentik__notification_channel__v202204alpha1__notification_channel_service__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_kentik_2fnotification_5fchannel_2fv202204alpha1_2fnotification_5fchannel_2eproto__INCLUDED */
