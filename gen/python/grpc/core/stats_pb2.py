# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: grpc/core/stats.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x15grpc/core/stats.proto\x12\tgrpc.core\"&\n\x06\x42ucket\x12\r\n\x05start\x18\x01 \x01(\x01\x12\r\n\x05\x63ount\x18\x02 \x01(\x04\"/\n\tHistogram\x12\"\n\x07\x62uckets\x18\x01 \x03(\x0b\x32\x11.grpc.core.Bucket\"[\n\x06Metric\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x0f\n\x05\x63ount\x18\n \x01(\x04H\x00\x12)\n\thistogram\x18\x0b \x01(\x0b\x32\x14.grpc.core.HistogramH\x00\x42\x07\n\x05value\"+\n\x05Stats\x12\"\n\x07metrics\x18\x01 \x03(\x0b\x32\x11.grpc.core.Metricb\x06proto3')



_BUCKET = DESCRIPTOR.message_types_by_name['Bucket']
_HISTOGRAM = DESCRIPTOR.message_types_by_name['Histogram']
_METRIC = DESCRIPTOR.message_types_by_name['Metric']
_STATS = DESCRIPTOR.message_types_by_name['Stats']
Bucket = _reflection.GeneratedProtocolMessageType('Bucket', (_message.Message,), {
  'DESCRIPTOR' : _BUCKET,
  '__module__' : 'grpc.core.stats_pb2'
  # @@protoc_insertion_point(class_scope:grpc.core.Bucket)
  })
_sym_db.RegisterMessage(Bucket)

Histogram = _reflection.GeneratedProtocolMessageType('Histogram', (_message.Message,), {
  'DESCRIPTOR' : _HISTOGRAM,
  '__module__' : 'grpc.core.stats_pb2'
  # @@protoc_insertion_point(class_scope:grpc.core.Histogram)
  })
_sym_db.RegisterMessage(Histogram)

Metric = _reflection.GeneratedProtocolMessageType('Metric', (_message.Message,), {
  'DESCRIPTOR' : _METRIC,
  '__module__' : 'grpc.core.stats_pb2'
  # @@protoc_insertion_point(class_scope:grpc.core.Metric)
  })
_sym_db.RegisterMessage(Metric)

Stats = _reflection.GeneratedProtocolMessageType('Stats', (_message.Message,), {
  'DESCRIPTOR' : _STATS,
  '__module__' : 'grpc.core.stats_pb2'
  # @@protoc_insertion_point(class_scope:grpc.core.Stats)
  })
_sym_db.RegisterMessage(Stats)

if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _BUCKET._serialized_start=36
  _BUCKET._serialized_end=74
  _HISTOGRAM._serialized_start=76
  _HISTOGRAM._serialized_end=123
  _METRIC._serialized_start=125
  _METRIC._serialized_end=216
  _STATS._serialized_start=218
  _STATS._serialized_end=261
# @@protoc_insertion_point(module_scope)
