# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: grpc/lb/v1/load_balancer.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import duration_pb2 as google_dot_protobuf_dot_duration__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='grpc/lb/v1/load_balancer.proto',
  package='grpc.lb.v1',
  syntax='proto3',
  serialized_options=b'\n\016io.grpc.grpclbB\021LoadBalancerProtoP\001Z1google.golang.org/grpc/balancer/grpclb/grpc_lb_v1',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x1egrpc/lb/v1/load_balancer.proto\x12\ngrpc.lb.v1\x1a\x1egoogle/protobuf/duration.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xa4\x01\n\x12LoadBalanceRequest\x12@\n\x0finitial_request\x18\x01 \x01(\x0b\x32%.grpc.lb.v1.InitialLoadBalanceRequestH\x00\x12/\n\x0c\x63lient_stats\x18\x02 \x01(\x0b\x32\x17.grpc.lb.v1.ClientStatsH\x00\x42\x1b\n\x19load_balance_request_type\")\n\x19InitialLoadBalanceRequest\x12\x0c\n\x04name\x18\x01 \x01(\t\"D\n\x13\x43lientStatsPerToken\x12\x1a\n\x12load_balance_token\x18\x01 \x01(\t\x12\x11\n\tnum_calls\x18\x02 \x01(\x03\"\xa4\x02\n\x0b\x43lientStats\x12-\n\ttimestamp\x18\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x19\n\x11num_calls_started\x18\x02 \x01(\x03\x12\x1a\n\x12num_calls_finished\x18\x03 \x01(\x03\x12\x35\n-num_calls_finished_with_client_failed_to_send\x18\x06 \x01(\x03\x12)\n!num_calls_finished_known_received\x18\x07 \x01(\x03\x12\x41\n\x18\x63\x61lls_finished_with_drop\x18\x08 \x03(\x0b\x32\x1f.grpc.lb.v1.ClientStatsPerTokenJ\x04\x08\x04\x10\x05J\x04\x08\x05\x10\x06\"\xe1\x01\n\x13LoadBalanceResponse\x12\x42\n\x10initial_response\x18\x01 \x01(\x0b\x32&.grpc.lb.v1.InitialLoadBalanceResponseH\x00\x12-\n\x0bserver_list\x18\x02 \x01(\x0b\x32\x16.grpc.lb.v1.ServerListH\x00\x12\x39\n\x11\x66\x61llback_response\x18\x03 \x01(\x0b\x32\x1c.grpc.lb.v1.FallbackResponseH\x00\x42\x1c\n\x1aload_balance_response_type\"}\n\x1aInitialLoadBalanceResponse\x12\x1e\n\x16load_balancer_delegate\x18\x01 \x01(\t\x12?\n\x1c\x63lient_stats_report_interval\x18\x02 \x01(\x0b\x32\x19.google.protobuf.Duration\"7\n\nServerList\x12#\n\x07servers\x18\x01 \x03(\x0b\x32\x12.grpc.lb.v1.ServerJ\x04\x08\x03\x10\x04\"Z\n\x06Server\x12\x12\n\nip_address\x18\x01 \x01(\x0c\x12\x0c\n\x04port\x18\x02 \x01(\x05\x12\x1a\n\x12load_balance_token\x18\x03 \x01(\t\x12\x0c\n\x04\x64rop\x18\x04 \x01(\x08J\x04\x08\x05\x10\x06\"\x12\n\x10\x46\x61llbackResponse2b\n\x0cLoadBalancer\x12R\n\x0b\x42\x61lanceLoad\x12\x1e.grpc.lb.v1.LoadBalanceRequest\x1a\x1f.grpc.lb.v1.LoadBalanceResponse(\x01\x30\x01\x42X\n\x0eio.grpc.grpclbB\x11LoadBalancerProtoP\x01Z1google.golang.org/grpc/balancer/grpclb/grpc_lb_v1b\x06proto3'
  ,
  dependencies=[google_dot_protobuf_dot_duration__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,])




_LOADBALANCEREQUEST = _descriptor.Descriptor(
  name='LoadBalanceRequest',
  full_name='grpc.lb.v1.LoadBalanceRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='initial_request', full_name='grpc.lb.v1.LoadBalanceRequest.initial_request', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='client_stats', full_name='grpc.lb.v1.LoadBalanceRequest.client_stats', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
    _descriptor.OneofDescriptor(
      name='load_balance_request_type', full_name='grpc.lb.v1.LoadBalanceRequest.load_balance_request_type',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=112,
  serialized_end=276,
)


_INITIALLOADBALANCEREQUEST = _descriptor.Descriptor(
  name='InitialLoadBalanceRequest',
  full_name='grpc.lb.v1.InitialLoadBalanceRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='grpc.lb.v1.InitialLoadBalanceRequest.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=278,
  serialized_end=319,
)


_CLIENTSTATSPERTOKEN = _descriptor.Descriptor(
  name='ClientStatsPerToken',
  full_name='grpc.lb.v1.ClientStatsPerToken',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='load_balance_token', full_name='grpc.lb.v1.ClientStatsPerToken.load_balance_token', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='num_calls', full_name='grpc.lb.v1.ClientStatsPerToken.num_calls', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=321,
  serialized_end=389,
)


_CLIENTSTATS = _descriptor.Descriptor(
  name='ClientStats',
  full_name='grpc.lb.v1.ClientStats',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='grpc.lb.v1.ClientStats.timestamp', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='num_calls_started', full_name='grpc.lb.v1.ClientStats.num_calls_started', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='num_calls_finished', full_name='grpc.lb.v1.ClientStats.num_calls_finished', index=2,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='num_calls_finished_with_client_failed_to_send', full_name='grpc.lb.v1.ClientStats.num_calls_finished_with_client_failed_to_send', index=3,
      number=6, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='num_calls_finished_known_received', full_name='grpc.lb.v1.ClientStats.num_calls_finished_known_received', index=4,
      number=7, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='calls_finished_with_drop', full_name='grpc.lb.v1.ClientStats.calls_finished_with_drop', index=5,
      number=8, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=392,
  serialized_end=684,
)


_LOADBALANCERESPONSE = _descriptor.Descriptor(
  name='LoadBalanceResponse',
  full_name='grpc.lb.v1.LoadBalanceResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='initial_response', full_name='grpc.lb.v1.LoadBalanceResponse.initial_response', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='server_list', full_name='grpc.lb.v1.LoadBalanceResponse.server_list', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='fallback_response', full_name='grpc.lb.v1.LoadBalanceResponse.fallback_response', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
    _descriptor.OneofDescriptor(
      name='load_balance_response_type', full_name='grpc.lb.v1.LoadBalanceResponse.load_balance_response_type',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=687,
  serialized_end=912,
)


_INITIALLOADBALANCERESPONSE = _descriptor.Descriptor(
  name='InitialLoadBalanceResponse',
  full_name='grpc.lb.v1.InitialLoadBalanceResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='load_balancer_delegate', full_name='grpc.lb.v1.InitialLoadBalanceResponse.load_balancer_delegate', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='client_stats_report_interval', full_name='grpc.lb.v1.InitialLoadBalanceResponse.client_stats_report_interval', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=914,
  serialized_end=1039,
)


_SERVERLIST = _descriptor.Descriptor(
  name='ServerList',
  full_name='grpc.lb.v1.ServerList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='servers', full_name='grpc.lb.v1.ServerList.servers', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=1041,
  serialized_end=1096,
)


_SERVER = _descriptor.Descriptor(
  name='Server',
  full_name='grpc.lb.v1.Server',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='ip_address', full_name='grpc.lb.v1.Server.ip_address', index=0,
      number=1, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='port', full_name='grpc.lb.v1.Server.port', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='load_balance_token', full_name='grpc.lb.v1.Server.load_balance_token', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='drop', full_name='grpc.lb.v1.Server.drop', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=1098,
  serialized_end=1188,
)


_FALLBACKRESPONSE = _descriptor.Descriptor(
  name='FallbackResponse',
  full_name='grpc.lb.v1.FallbackResponse',
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
  serialized_start=1190,
  serialized_end=1208,
)

_LOADBALANCEREQUEST.fields_by_name['initial_request'].message_type = _INITIALLOADBALANCEREQUEST
_LOADBALANCEREQUEST.fields_by_name['client_stats'].message_type = _CLIENTSTATS
_LOADBALANCEREQUEST.oneofs_by_name['load_balance_request_type'].fields.append(
  _LOADBALANCEREQUEST.fields_by_name['initial_request'])
_LOADBALANCEREQUEST.fields_by_name['initial_request'].containing_oneof = _LOADBALANCEREQUEST.oneofs_by_name['load_balance_request_type']
_LOADBALANCEREQUEST.oneofs_by_name['load_balance_request_type'].fields.append(
  _LOADBALANCEREQUEST.fields_by_name['client_stats'])
_LOADBALANCEREQUEST.fields_by_name['client_stats'].containing_oneof = _LOADBALANCEREQUEST.oneofs_by_name['load_balance_request_type']
_CLIENTSTATS.fields_by_name['timestamp'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_CLIENTSTATS.fields_by_name['calls_finished_with_drop'].message_type = _CLIENTSTATSPERTOKEN
_LOADBALANCERESPONSE.fields_by_name['initial_response'].message_type = _INITIALLOADBALANCERESPONSE
_LOADBALANCERESPONSE.fields_by_name['server_list'].message_type = _SERVERLIST
_LOADBALANCERESPONSE.fields_by_name['fallback_response'].message_type = _FALLBACKRESPONSE
_LOADBALANCERESPONSE.oneofs_by_name['load_balance_response_type'].fields.append(
  _LOADBALANCERESPONSE.fields_by_name['initial_response'])
_LOADBALANCERESPONSE.fields_by_name['initial_response'].containing_oneof = _LOADBALANCERESPONSE.oneofs_by_name['load_balance_response_type']
_LOADBALANCERESPONSE.oneofs_by_name['load_balance_response_type'].fields.append(
  _LOADBALANCERESPONSE.fields_by_name['server_list'])
_LOADBALANCERESPONSE.fields_by_name['server_list'].containing_oneof = _LOADBALANCERESPONSE.oneofs_by_name['load_balance_response_type']
_LOADBALANCERESPONSE.oneofs_by_name['load_balance_response_type'].fields.append(
  _LOADBALANCERESPONSE.fields_by_name['fallback_response'])
_LOADBALANCERESPONSE.fields_by_name['fallback_response'].containing_oneof = _LOADBALANCERESPONSE.oneofs_by_name['load_balance_response_type']
_INITIALLOADBALANCERESPONSE.fields_by_name['client_stats_report_interval'].message_type = google_dot_protobuf_dot_duration__pb2._DURATION
_SERVERLIST.fields_by_name['servers'].message_type = _SERVER
DESCRIPTOR.message_types_by_name['LoadBalanceRequest'] = _LOADBALANCEREQUEST
DESCRIPTOR.message_types_by_name['InitialLoadBalanceRequest'] = _INITIALLOADBALANCEREQUEST
DESCRIPTOR.message_types_by_name['ClientStatsPerToken'] = _CLIENTSTATSPERTOKEN
DESCRIPTOR.message_types_by_name['ClientStats'] = _CLIENTSTATS
DESCRIPTOR.message_types_by_name['LoadBalanceResponse'] = _LOADBALANCERESPONSE
DESCRIPTOR.message_types_by_name['InitialLoadBalanceResponse'] = _INITIALLOADBALANCERESPONSE
DESCRIPTOR.message_types_by_name['ServerList'] = _SERVERLIST
DESCRIPTOR.message_types_by_name['Server'] = _SERVER
DESCRIPTOR.message_types_by_name['FallbackResponse'] = _FALLBACKRESPONSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

LoadBalanceRequest = _reflection.GeneratedProtocolMessageType('LoadBalanceRequest', (_message.Message,), {
  'DESCRIPTOR' : _LOADBALANCEREQUEST,
  '__module__' : 'grpc.lb.v1.load_balancer_pb2'
  # @@protoc_insertion_point(class_scope:grpc.lb.v1.LoadBalanceRequest)
  })
_sym_db.RegisterMessage(LoadBalanceRequest)

InitialLoadBalanceRequest = _reflection.GeneratedProtocolMessageType('InitialLoadBalanceRequest', (_message.Message,), {
  'DESCRIPTOR' : _INITIALLOADBALANCEREQUEST,
  '__module__' : 'grpc.lb.v1.load_balancer_pb2'
  # @@protoc_insertion_point(class_scope:grpc.lb.v1.InitialLoadBalanceRequest)
  })
_sym_db.RegisterMessage(InitialLoadBalanceRequest)

ClientStatsPerToken = _reflection.GeneratedProtocolMessageType('ClientStatsPerToken', (_message.Message,), {
  'DESCRIPTOR' : _CLIENTSTATSPERTOKEN,
  '__module__' : 'grpc.lb.v1.load_balancer_pb2'
  # @@protoc_insertion_point(class_scope:grpc.lb.v1.ClientStatsPerToken)
  })
_sym_db.RegisterMessage(ClientStatsPerToken)

ClientStats = _reflection.GeneratedProtocolMessageType('ClientStats', (_message.Message,), {
  'DESCRIPTOR' : _CLIENTSTATS,
  '__module__' : 'grpc.lb.v1.load_balancer_pb2'
  # @@protoc_insertion_point(class_scope:grpc.lb.v1.ClientStats)
  })
_sym_db.RegisterMessage(ClientStats)

LoadBalanceResponse = _reflection.GeneratedProtocolMessageType('LoadBalanceResponse', (_message.Message,), {
  'DESCRIPTOR' : _LOADBALANCERESPONSE,
  '__module__' : 'grpc.lb.v1.load_balancer_pb2'
  # @@protoc_insertion_point(class_scope:grpc.lb.v1.LoadBalanceResponse)
  })
_sym_db.RegisterMessage(LoadBalanceResponse)

InitialLoadBalanceResponse = _reflection.GeneratedProtocolMessageType('InitialLoadBalanceResponse', (_message.Message,), {
  'DESCRIPTOR' : _INITIALLOADBALANCERESPONSE,
  '__module__' : 'grpc.lb.v1.load_balancer_pb2'
  # @@protoc_insertion_point(class_scope:grpc.lb.v1.InitialLoadBalanceResponse)
  })
_sym_db.RegisterMessage(InitialLoadBalanceResponse)

ServerList = _reflection.GeneratedProtocolMessageType('ServerList', (_message.Message,), {
  'DESCRIPTOR' : _SERVERLIST,
  '__module__' : 'grpc.lb.v1.load_balancer_pb2'
  # @@protoc_insertion_point(class_scope:grpc.lb.v1.ServerList)
  })
_sym_db.RegisterMessage(ServerList)

Server = _reflection.GeneratedProtocolMessageType('Server', (_message.Message,), {
  'DESCRIPTOR' : _SERVER,
  '__module__' : 'grpc.lb.v1.load_balancer_pb2'
  # @@protoc_insertion_point(class_scope:grpc.lb.v1.Server)
  })
_sym_db.RegisterMessage(Server)

FallbackResponse = _reflection.GeneratedProtocolMessageType('FallbackResponse', (_message.Message,), {
  'DESCRIPTOR' : _FALLBACKRESPONSE,
  '__module__' : 'grpc.lb.v1.load_balancer_pb2'
  # @@protoc_insertion_point(class_scope:grpc.lb.v1.FallbackResponse)
  })
_sym_db.RegisterMessage(FallbackResponse)


DESCRIPTOR._options = None

_LOADBALANCER = _descriptor.ServiceDescriptor(
  name='LoadBalancer',
  full_name='grpc.lb.v1.LoadBalancer',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_start=1210,
  serialized_end=1308,
  methods=[
  _descriptor.MethodDescriptor(
    name='BalanceLoad',
    full_name='grpc.lb.v1.LoadBalancer.BalanceLoad',
    index=0,
    containing_service=None,
    input_type=_LOADBALANCEREQUEST,
    output_type=_LOADBALANCERESPONSE,
    serialized_options=None,
    create_key=_descriptor._internal_create_key,
  ),
])
_sym_db.RegisterServiceDescriptor(_LOADBALANCER)

DESCRIPTOR.services_by_name['LoadBalancer'] = _LOADBALANCER

# @@protoc_insertion_point(module_scope)
