# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: kentik/notification_channel/v202204alpha1/notification_channel.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.api import annotations_pb2 as google_dot_api_dot_annotations__pb2
from google.api import client_pb2 as google_dot_api_dot_client__pb2
from protoc_gen_openapiv2.options import annotations_pb2 as protoc__gen__openapiv2_dot_options_dot_annotations__pb2
from kentik.core.v202303 import annotations_pb2 as kentik_dot_core_dot_v202303_dot_annotations__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='kentik/notification_channel/v202204alpha1/notification_channel.proto',
  package='kentik.notification_channel.v202204alpha1',
  syntax='proto3',
  serialized_options=b'Zegithub.com/kentik/api-schema-public/go/kentik/notification_channel/v202204alpha1;notification_channel\222A\365\002\022\216\001\n\027NotificationChannel API\022K--- This API has been deprecated and will be removed in the near future ---\"\030\n\026Kentik API Engineering2\014202204alpha1*\001\0022\020application/json:\020application/jsonZD\n\036\n\005email\022\025\010\002\032\017X-CH-Auth-Email \002\n\"\n\005token\022\031\010\002\032\023X-CH-Auth-API-Token \002b\026\n\t\n\005email\022\000\n\t\n\005token\022\000r]\n%General information about Kentik APIs\0224https://kb.kentik.com/v0/Ab09.htm#Ab09-APIs_Overview',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\nDkentik/notification_channel/v202204alpha1/notification_channel.proto\x12)kentik.notification_channel.v202204alpha1\x1a\x1cgoogle/api/annotations.proto\x1a\x17google/api/client.proto\x1a.protoc-gen-openapiv2/options/annotations.proto\x1a%kentik/core/v202303/annotations.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\x81\x02\n\x13NotificationChannel\x12\x0e\n\x02id\x18\x01 \x01(\tR\x02id\x12\x12\n\x04name\x18\x02 \x01(\tR\x04name\x12J\n\x04type\x18\x03 \x01(\x0e\x32\x36.kentik.notification_channel.v202204alpha1.ChannelTypeR\x04type\x12\x16\n\x06status\x18\x04 \x01(\tR\x06status\x12\x30\n\x05\x63\x64\x61te\x18\x05 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\x05\x63\x64\x61te\x12\x30\n\x05\x65\x64\x61te\x18\x06 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\x05\x65\x64\x61te\"!\n\x1fListNotificationChannelsRequest\"\xbc\x01\n ListNotificationChannelsResponse\x12s\n\x15notification_channels\x18\x01 \x03(\x0b\x32>.kentik.notification_channel.v202204alpha1.NotificationChannelR\x14notificationChannels\x12#\n\rinvalid_count\x18\x02 \x01(\x05R\x0cinvalidCount\"/\n\x1dGetNotificationChannelRequest\x12\x0e\n\x02id\x18\x01 \x01(\tR\x02id\"\x93\x01\n\x1eGetNotificationChannelResponse\x12q\n\x14notification_channel\x18\x01 \x01(\x0b\x32>.kentik.notification_channel.v202204alpha1.NotificationChannelR\x13notificationChannel*\xea\x02\n\x0b\x43hannelType\x12\x1c\n\x18\x43HANNEL_TYPE_UNSPECIFIED\x10\x00\x12\x19\n\x15\x43HANNEL_TYPE_XMATTERS\x10\x01\x12\x16\n\x12\x43HANNEL_TYPE_SLACK\x10\x02\x12\x1b\n\x17\x43HANNEL_TYPE_SERVICENOW\x10\x03\x12\x17\n\x13\x43HANNEL_TYPE_SYSLOG\x10\x04\x12\x19\n\x15\x43HANNEL_TYPE_OPSGENIE\x10\x05\x12\x1f\n\x1b\x43HANNEL_TYPE_CUSTOM_WEBHOOK\x10\x06\x12\x17\n\x13\x43HANNEL_TYPE_SPLUNK\x10\x07\x12\x18\n\x14\x43HANNEL_TYPE_MSTEAMS\x10\x08\x12\x15\n\x11\x43HANNEL_TYPE_JSON\x10\t\x12\x16\n\x12\x43HANNEL_TYPE_EMAIL\x10\n\x12\x1a\n\x16\x43HANNEL_TYPE_VICTOROPS\x10\x0b\x12\x1a\n\x16\x43HANNEL_TYPE_PAGERDUTY\x10\x0c\x32\x97\x07\n\x1aNotificationChannelService\x12\x98\x03\n\x18ListNotificationChannels\x12J.kentik.notification_channel.v202204alpha1.ListNotificationChannelsRequest\x1aK.kentik.notification_channel.v202204alpha1.ListNotificationChannelsResponse\"\xe2\x01\x92\x41{\x12!Fetch Search NotificationChannels\x1a<Return list of notification_channels matches search critera.*\x18ListNotificationChannels\xf2\xd7\x02\x1f\x61\x64min.notification_channel:read\x82\xd3\xe4\x93\x02;\x12\x39/notification_channel/v202204alpha1/notification_channels\x12\xa3\x03\n\x16GetNotificationChannel\x12H.kentik.notification_channel.v202204alpha1.GetNotificationChannelRequest\x1aI.kentik.notification_channel.v202204alpha1.GetNotificationChannelResponse\"\xf3\x01\x92\x41\x86\x01\x12)Get information about NotificationChannel\x1a\x41Returns information about notification_channel specified with ID.*\x16GetNotificationChannel\xf2\xd7\x02\x1f\x61\x64min.notification_channel:read\x82\xd3\xe4\x93\x02@\x12>/notification_channel/v202204alpha1/notification_channels/{id}\x1a\x38\xca\x41\x13grpc.api.kentik.com\xea\xd7\x02\x1a\x61\x64min.notification_channel\x90\xd8\x02\x03\x42\xe0\x03Zegithub.com/kentik/api-schema-public/go/kentik/notification_channel/v202204alpha1;notification_channel\x92\x41\xf5\x02\x12\x8e\x01\n\x17NotificationChannel API\x12K--- This API has been deprecated and will be removed in the near future ---\"\x18\n\x16Kentik API Engineering2\x0c\x32\x30\x32\x32\x30\x34\x61lpha1*\x01\x02\x32\x10\x61pplication/json:\x10\x61pplication/jsonZD\n\x1e\n\x05\x65mail\x12\x15\x08\x02\x1a\x0fX-CH-Auth-Email \x02\n\"\n\x05token\x12\x19\x08\x02\x1a\x13X-CH-Auth-API-Token \x02\x62\x16\n\t\n\x05\x65mail\x12\x00\n\t\n\x05token\x12\x00r]\n%General information about Kentik APIs\x12\x34https://kb.kentik.com/v0/Ab09.htm#Ab09-APIs_Overviewb\x06proto3'
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_api_dot_client__pb2.DESCRIPTOR,protoc__gen__openapiv2_dot_options_dot_annotations__pb2.DESCRIPTOR,kentik_dot_core_dot_v202303_dot_annotations__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,])

_CHANNELTYPE = _descriptor.EnumDescriptor(
  name='ChannelType',
  full_name='kentik.notification_channel.v202204alpha1.ChannelType',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_UNSPECIFIED', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_XMATTERS', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_SLACK', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_SERVICENOW', index=3, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_SYSLOG', index=4, number=4,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_OPSGENIE', index=5, number=5,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_CUSTOM_WEBHOOK', index=6, number=6,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_SPLUNK', index=7, number=7,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_MSTEAMS', index=8, number=8,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_JSON', index=9, number=9,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_EMAIL', index=10, number=10,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_VICTOROPS', index=11, number=11,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CHANNEL_TYPE_PAGERDUTY', index=12, number=12,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=976,
  serialized_end=1338,
)
_sym_db.RegisterEnumDescriptor(_CHANNELTYPE)

ChannelType = enum_type_wrapper.EnumTypeWrapper(_CHANNELTYPE)
CHANNEL_TYPE_UNSPECIFIED = 0
CHANNEL_TYPE_XMATTERS = 1
CHANNEL_TYPE_SLACK = 2
CHANNEL_TYPE_SERVICENOW = 3
CHANNEL_TYPE_SYSLOG = 4
CHANNEL_TYPE_OPSGENIE = 5
CHANNEL_TYPE_CUSTOM_WEBHOOK = 6
CHANNEL_TYPE_SPLUNK = 7
CHANNEL_TYPE_MSTEAMS = 8
CHANNEL_TYPE_JSON = 9
CHANNEL_TYPE_EMAIL = 10
CHANNEL_TYPE_VICTOROPS = 11
CHANNEL_TYPE_PAGERDUTY = 12



_NOTIFICATIONCHANNEL = _descriptor.Descriptor(
  name='NotificationChannel',
  full_name='kentik.notification_channel.v202204alpha1.NotificationChannel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='kentik.notification_channel.v202204alpha1.NotificationChannel.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='id', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='name', full_name='kentik.notification_channel.v202204alpha1.NotificationChannel.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='name', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='type', full_name='kentik.notification_channel.v202204alpha1.NotificationChannel.type', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='type', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='status', full_name='kentik.notification_channel.v202204alpha1.NotificationChannel.status', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='status', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='cdate', full_name='kentik.notification_channel.v202204alpha1.NotificationChannel.cdate', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='cdate', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='edate', full_name='kentik.notification_channel.v202204alpha1.NotificationChannel.edate', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='edate', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=291,
  serialized_end=548,
)


_LISTNOTIFICATIONCHANNELSREQUEST = _descriptor.Descriptor(
  name='ListNotificationChannelsRequest',
  full_name='kentik.notification_channel.v202204alpha1.ListNotificationChannelsRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=550,
  serialized_end=583,
)


_LISTNOTIFICATIONCHANNELSRESPONSE = _descriptor.Descriptor(
  name='ListNotificationChannelsResponse',
  full_name='kentik.notification_channel.v202204alpha1.ListNotificationChannelsResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='notification_channels', full_name='kentik.notification_channel.v202204alpha1.ListNotificationChannelsResponse.notification_channels', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='notificationChannels', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='invalid_count', full_name='kentik.notification_channel.v202204alpha1.ListNotificationChannelsResponse.invalid_count', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='invalidCount', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=586,
  serialized_end=774,
)


_GETNOTIFICATIONCHANNELREQUEST = _descriptor.Descriptor(
  name='GetNotificationChannelRequest',
  full_name='kentik.notification_channel.v202204alpha1.GetNotificationChannelRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='kentik.notification_channel.v202204alpha1.GetNotificationChannelRequest.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='id', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=776,
  serialized_end=823,
)


_GETNOTIFICATIONCHANNELRESPONSE = _descriptor.Descriptor(
  name='GetNotificationChannelResponse',
  full_name='kentik.notification_channel.v202204alpha1.GetNotificationChannelResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='notification_channel', full_name='kentik.notification_channel.v202204alpha1.GetNotificationChannelResponse.notification_channel', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='notificationChannel', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=826,
  serialized_end=973,
)

_NOTIFICATIONCHANNEL.fields_by_name['type'].enum_type = _CHANNELTYPE
_NOTIFICATIONCHANNEL.fields_by_name['cdate'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_NOTIFICATIONCHANNEL.fields_by_name['edate'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_LISTNOTIFICATIONCHANNELSRESPONSE.fields_by_name['notification_channels'].message_type = _NOTIFICATIONCHANNEL
_GETNOTIFICATIONCHANNELRESPONSE.fields_by_name['notification_channel'].message_type = _NOTIFICATIONCHANNEL
DESCRIPTOR.message_types_by_name['NotificationChannel'] = _NOTIFICATIONCHANNEL
DESCRIPTOR.message_types_by_name['ListNotificationChannelsRequest'] = _LISTNOTIFICATIONCHANNELSREQUEST
DESCRIPTOR.message_types_by_name['ListNotificationChannelsResponse'] = _LISTNOTIFICATIONCHANNELSRESPONSE
DESCRIPTOR.message_types_by_name['GetNotificationChannelRequest'] = _GETNOTIFICATIONCHANNELREQUEST
DESCRIPTOR.message_types_by_name['GetNotificationChannelResponse'] = _GETNOTIFICATIONCHANNELRESPONSE
DESCRIPTOR.enum_types_by_name['ChannelType'] = _CHANNELTYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

NotificationChannel = _reflection.GeneratedProtocolMessageType('NotificationChannel', (_message.Message,), {
  'DESCRIPTOR' : _NOTIFICATIONCHANNEL,
  '__module__' : 'kentik.notification_channel.v202204alpha1.notification_channel_pb2'
  # @@protoc_insertion_point(class_scope:kentik.notification_channel.v202204alpha1.NotificationChannel)
  })
_sym_db.RegisterMessage(NotificationChannel)

ListNotificationChannelsRequest = _reflection.GeneratedProtocolMessageType('ListNotificationChannelsRequest', (_message.Message,), {
  'DESCRIPTOR' : _LISTNOTIFICATIONCHANNELSREQUEST,
  '__module__' : 'kentik.notification_channel.v202204alpha1.notification_channel_pb2'
  # @@protoc_insertion_point(class_scope:kentik.notification_channel.v202204alpha1.ListNotificationChannelsRequest)
  })
_sym_db.RegisterMessage(ListNotificationChannelsRequest)

ListNotificationChannelsResponse = _reflection.GeneratedProtocolMessageType('ListNotificationChannelsResponse', (_message.Message,), {
  'DESCRIPTOR' : _LISTNOTIFICATIONCHANNELSRESPONSE,
  '__module__' : 'kentik.notification_channel.v202204alpha1.notification_channel_pb2'
  # @@protoc_insertion_point(class_scope:kentik.notification_channel.v202204alpha1.ListNotificationChannelsResponse)
  })
_sym_db.RegisterMessage(ListNotificationChannelsResponse)

GetNotificationChannelRequest = _reflection.GeneratedProtocolMessageType('GetNotificationChannelRequest', (_message.Message,), {
  'DESCRIPTOR' : _GETNOTIFICATIONCHANNELREQUEST,
  '__module__' : 'kentik.notification_channel.v202204alpha1.notification_channel_pb2'
  # @@protoc_insertion_point(class_scope:kentik.notification_channel.v202204alpha1.GetNotificationChannelRequest)
  })
_sym_db.RegisterMessage(GetNotificationChannelRequest)

GetNotificationChannelResponse = _reflection.GeneratedProtocolMessageType('GetNotificationChannelResponse', (_message.Message,), {
  'DESCRIPTOR' : _GETNOTIFICATIONCHANNELRESPONSE,
  '__module__' : 'kentik.notification_channel.v202204alpha1.notification_channel_pb2'
  # @@protoc_insertion_point(class_scope:kentik.notification_channel.v202204alpha1.GetNotificationChannelResponse)
  })
_sym_db.RegisterMessage(GetNotificationChannelResponse)


DESCRIPTOR._options = None

_NOTIFICATIONCHANNELSERVICE = _descriptor.ServiceDescriptor(
  name='NotificationChannelService',
  full_name='kentik.notification_channel.v202204alpha1.NotificationChannelService',
  file=DESCRIPTOR,
  index=0,
  serialized_options=b'\312A\023grpc.api.kentik.com\352\327\002\032admin.notification_channel\220\330\002\003',
  create_key=_descriptor._internal_create_key,
  serialized_start=1341,
  serialized_end=2260,
  methods=[
  _descriptor.MethodDescriptor(
    name='ListNotificationChannels',
    full_name='kentik.notification_channel.v202204alpha1.NotificationChannelService.ListNotificationChannels',
    index=0,
    containing_service=None,
    input_type=_LISTNOTIFICATIONCHANNELSREQUEST,
    output_type=_LISTNOTIFICATIONCHANNELSRESPONSE,
    serialized_options=b'\222A{\022!Fetch Search NotificationChannels\032<Return list of notification_channels matches search critera.*\030ListNotificationChannels\362\327\002\037admin.notification_channel:read\202\323\344\223\002;\0229/notification_channel/v202204alpha1/notification_channels',
    create_key=_descriptor._internal_create_key,
  ),
  _descriptor.MethodDescriptor(
    name='GetNotificationChannel',
    full_name='kentik.notification_channel.v202204alpha1.NotificationChannelService.GetNotificationChannel',
    index=1,
    containing_service=None,
    input_type=_GETNOTIFICATIONCHANNELREQUEST,
    output_type=_GETNOTIFICATIONCHANNELRESPONSE,
    serialized_options=b'\222A\206\001\022)Get information about NotificationChannel\032AReturns information about notification_channel specified with ID.*\026GetNotificationChannel\362\327\002\037admin.notification_channel:read\202\323\344\223\002@\022>/notification_channel/v202204alpha1/notification_channels/{id}',
    create_key=_descriptor._internal_create_key,
  ),
])
_sym_db.RegisterServiceDescriptor(_NOTIFICATIONCHANNELSERVICE)

DESCRIPTOR.services_by_name['NotificationChannelService'] = _NOTIFICATIONCHANNELSERVICE

# @@protoc_insertion_point(module_scope)
