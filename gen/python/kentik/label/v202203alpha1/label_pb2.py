# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: kentik/label/v202203alpha1/label.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.api import annotations_pb2 as google_dot_api_dot_annotations__pb2
from google.api import client_pb2 as google_dot_api_dot_client__pb2
from protoc_gen_openapiv2.options import annotations_pb2 as protoc__gen__openapiv2_dot_options_dot_annotations__pb2
from kentik.core.v202012alpha1 import annotations_pb2 as kentik_dot_core_dot_v202012alpha1_dot_annotations__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='kentik/label/v202203alpha1/label.proto',
  package='kentik.label.v202203alpha1',
  syntax='proto3',
  serialized_options=b'ZDgithub.com/kentik/api-schema/gen/go/kentik/label/v202203alpha1;label\222A\347\002\022\200\001\n\tLabel API\022K--- This API has been deprecated and will be removed in the near future ---\"\030\n\026Kentik API Engineering2\014202203alpha1*\001\0022\020application/json:\020application/jsonZD\n\036\n\005email\022\025\010\002\032\017X-CH-Auth-Email \002\n\"\n\005token\022\031\010\002\032\023X-CH-Auth-API-Token \002b\026\n\t\n\005email\022\000\n\t\n\005token\022\000r]\n%General information about Kentik APIs\0224https://kb.kentik.com/v0/Ab09.htm#Ab09-APIs_Overview',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n&kentik/label/v202203alpha1/label.proto\x12\x1akentik.label.v202203alpha1\x1a\x1cgoogle/api/annotations.proto\x1a\x17google/api/client.proto\x1a.protoc-gen-openapiv2/options/annotations.proto\x1a+kentik/core/v202012alpha1/annotations.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xc7\x01\n\x05Label\x12\x0e\n\x02id\x18\x01 \x01(\tR\x02id\x12\x12\n\x04name\x18\x02 \x01(\tR\x04name\x12 \n\x0b\x64\x65scription\x18\x03 \x01(\tR\x0b\x64\x65scription\x12\x14\n\x05\x63olor\x18\x05 \x01(\tR\x05\x63olor\x12\x30\n\x05\x63\x64\x61te\x18\x06 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\x05\x63\x64\x61te\x12\x30\n\x05\x65\x64\x61te\x18\x07 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\x05\x65\x64\x61te\"\x13\n\x11ListLabelsRequest\"t\n\x12ListLabelsResponse\x12\x39\n\x06labels\x18\x01 \x03(\x0b\x32!.kentik.label.v202203alpha1.LabelR\x06labels\x12#\n\rinvalid_count\x18\x02 \x01(\x05R\x0cinvalidCount\"M\n\x12\x43reateLabelRequest\x12\x37\n\x05label\x18\x01 \x01(\x0b\x32!.kentik.label.v202203alpha1.LabelR\x05label\"N\n\x13\x43reateLabelResponse\x12\x37\n\x05label\x18\x01 \x01(\x0b\x32!.kentik.label.v202203alpha1.LabelR\x05label\"M\n\x12UpdateLabelRequest\x12\x37\n\x05label\x18\x01 \x01(\x0b\x32!.kentik.label.v202203alpha1.LabelR\x05label\"N\n\x13UpdateLabelResponse\x12\x37\n\x05label\x18\x01 \x01(\x0b\x32!.kentik.label.v202203alpha1.LabelR\x05label\"$\n\x12\x44\x65leteLabelRequest\x12\x0e\n\x02id\x18\x01 \x01(\tR\x02id\"\x15\n\x13\x44\x65leteLabelResponse2\xbf\x08\n\x0cLabelService\x12\xf8\x01\n\nListLabels\x12-.kentik.label.v202203alpha1.ListLabelsRequest\x1a..kentik.label.v202203alpha1.ListLabelsResponse\"\x8a\x01\x92\x41P\x12\x13\x46\x65tch Search Labels\x1a.Return list of labels matches search criteria.*\tListLabel\xf2\xd7\x02\x10\x61\x64min.label:read\x82\xd3\xe4\x93\x02\x1d\x12\x1b/label/v202203alpha1/labels\x12\xfc\x01\n\x0b\x43reateLabel\x12..kentik.label.v202203alpha1.CreateLabelRequest\x1a/.kentik.label.v202203alpha1.CreateLabelResponse\"\x8b\x01\x92\x41M\x12\x0f\x43reate a label.\x1a-Create a label from request. returns created.*\x0bLabelCreate\xf2\xd7\x02\x11\x61\x64min.label:write\x82\xd3\xe4\x93\x02 \"\x1b/label/v202203alpha1/labels:\x01*\x12\x91\x02\n\x0bUpdateLabel\x12..kentik.label.v202203alpha1.UpdateLabelRequest\x1a/.kentik.label.v202203alpha1.UpdateLabelResponse\"\xa0\x01\x92\x41W\x12\x0fUpdate a label.\x1a\x37Replaces the entire label attributes specified with id.*\x0bLabelUpdate\xf2\xd7\x02\x11\x61\x64min.label:write\x82\xd3\xe4\x93\x02+\"&/label/v202203alpha1/labels/{label.id}:\x01*\x12\xf5\x01\n\x0b\x44\x65leteLabel\x12..kentik.label.v202203alpha1.DeleteLabelRequest\x1a/.kentik.label.v202203alpha1.DeleteLabelResponse\"\x84\x01\x92\x41\x44\x12\x0f\x44\x65lete a label.\x1a$Deletes the label specified with id.*\x0bLabelDelete\xf2\xd7\x02\x11\x61\x64min.label:write\x82\xd3\xe4\x93\x02\"* /label/v202203alpha1/labels/{id}\x1a)\xca\x41\x13grpc.api.kentik.com\xea\xd7\x02\x0b\x61\x64min.label\x90\xd8\x02\x03\x42\xb1\x03ZDgithub.com/kentik/api-schema/gen/go/kentik/label/v202203alpha1;label\x92\x41\xe7\x02\x12\x80\x01\n\tLabel API\x12K--- This API has been deprecated and will be removed in the near future ---\"\x18\n\x16Kentik API Engineering2\x0c\x32\x30\x32\x32\x30\x33\x61lpha1*\x01\x02\x32\x10\x61pplication/json:\x10\x61pplication/jsonZD\n\x1e\n\x05\x65mail\x12\x15\x08\x02\x1a\x0fX-CH-Auth-Email \x02\n\"\n\x05token\x12\x19\x08\x02\x1a\x13X-CH-Auth-API-Token \x02\x62\x16\n\t\n\x05\x65mail\x12\x00\n\t\n\x05token\x12\x00r]\n%General information about Kentik APIs\x12\x34https://kb.kentik.com/v0/Ab09.htm#Ab09-APIs_Overviewb\x06proto3'
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_api_dot_client__pb2.DESCRIPTOR,protoc__gen__openapiv2_dot_options_dot_annotations__pb2.DESCRIPTOR,kentik_dot_core_dot_v202012alpha1_dot_annotations__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,])




_LABEL = _descriptor.Descriptor(
  name='Label',
  full_name='kentik.label.v202203alpha1.Label',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='kentik.label.v202203alpha1.Label.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='id', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='name', full_name='kentik.label.v202203alpha1.Label.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='name', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='description', full_name='kentik.label.v202203alpha1.Label.description', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='description', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='color', full_name='kentik.label.v202203alpha1.Label.color', index=3,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='color', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='cdate', full_name='kentik.label.v202203alpha1.Label.cdate', index=4,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='cdate', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='edate', full_name='kentik.label.v202203alpha1.Label.edate', index=5,
      number=7, type=11, cpp_type=10, label=1,
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
  serialized_start=252,
  serialized_end=451,
)


_LISTLABELSREQUEST = _descriptor.Descriptor(
  name='ListLabelsRequest',
  full_name='kentik.label.v202203alpha1.ListLabelsRequest',
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
  serialized_start=453,
  serialized_end=472,
)


_LISTLABELSRESPONSE = _descriptor.Descriptor(
  name='ListLabelsResponse',
  full_name='kentik.label.v202203alpha1.ListLabelsResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='labels', full_name='kentik.label.v202203alpha1.ListLabelsResponse.labels', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='labels', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='invalid_count', full_name='kentik.label.v202203alpha1.ListLabelsResponse.invalid_count', index=1,
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
  serialized_start=474,
  serialized_end=590,
)


_CREATELABELREQUEST = _descriptor.Descriptor(
  name='CreateLabelRequest',
  full_name='kentik.label.v202203alpha1.CreateLabelRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='label', full_name='kentik.label.v202203alpha1.CreateLabelRequest.label', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='label', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=592,
  serialized_end=669,
)


_CREATELABELRESPONSE = _descriptor.Descriptor(
  name='CreateLabelResponse',
  full_name='kentik.label.v202203alpha1.CreateLabelResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='label', full_name='kentik.label.v202203alpha1.CreateLabelResponse.label', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='label', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=671,
  serialized_end=749,
)


_UPDATELABELREQUEST = _descriptor.Descriptor(
  name='UpdateLabelRequest',
  full_name='kentik.label.v202203alpha1.UpdateLabelRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='label', full_name='kentik.label.v202203alpha1.UpdateLabelRequest.label', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='label', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=751,
  serialized_end=828,
)


_UPDATELABELRESPONSE = _descriptor.Descriptor(
  name='UpdateLabelResponse',
  full_name='kentik.label.v202203alpha1.UpdateLabelResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='label', full_name='kentik.label.v202203alpha1.UpdateLabelResponse.label', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='label', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=830,
  serialized_end=908,
)


_DELETELABELREQUEST = _descriptor.Descriptor(
  name='DeleteLabelRequest',
  full_name='kentik.label.v202203alpha1.DeleteLabelRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='kentik.label.v202203alpha1.DeleteLabelRequest.id', index=0,
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
  serialized_start=910,
  serialized_end=946,
)


_DELETELABELRESPONSE = _descriptor.Descriptor(
  name='DeleteLabelResponse',
  full_name='kentik.label.v202203alpha1.DeleteLabelResponse',
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
  serialized_start=948,
  serialized_end=969,
)

_LABEL.fields_by_name['cdate'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_LABEL.fields_by_name['edate'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_LISTLABELSRESPONSE.fields_by_name['labels'].message_type = _LABEL
_CREATELABELREQUEST.fields_by_name['label'].message_type = _LABEL
_CREATELABELRESPONSE.fields_by_name['label'].message_type = _LABEL
_UPDATELABELREQUEST.fields_by_name['label'].message_type = _LABEL
_UPDATELABELRESPONSE.fields_by_name['label'].message_type = _LABEL
DESCRIPTOR.message_types_by_name['Label'] = _LABEL
DESCRIPTOR.message_types_by_name['ListLabelsRequest'] = _LISTLABELSREQUEST
DESCRIPTOR.message_types_by_name['ListLabelsResponse'] = _LISTLABELSRESPONSE
DESCRIPTOR.message_types_by_name['CreateLabelRequest'] = _CREATELABELREQUEST
DESCRIPTOR.message_types_by_name['CreateLabelResponse'] = _CREATELABELRESPONSE
DESCRIPTOR.message_types_by_name['UpdateLabelRequest'] = _UPDATELABELREQUEST
DESCRIPTOR.message_types_by_name['UpdateLabelResponse'] = _UPDATELABELRESPONSE
DESCRIPTOR.message_types_by_name['DeleteLabelRequest'] = _DELETELABELREQUEST
DESCRIPTOR.message_types_by_name['DeleteLabelResponse'] = _DELETELABELRESPONSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Label = _reflection.GeneratedProtocolMessageType('Label', (_message.Message,), {
  'DESCRIPTOR' : _LABEL,
  '__module__' : 'kentik.label.v202203alpha1.label_pb2'
  # @@protoc_insertion_point(class_scope:kentik.label.v202203alpha1.Label)
  })
_sym_db.RegisterMessage(Label)

ListLabelsRequest = _reflection.GeneratedProtocolMessageType('ListLabelsRequest', (_message.Message,), {
  'DESCRIPTOR' : _LISTLABELSREQUEST,
  '__module__' : 'kentik.label.v202203alpha1.label_pb2'
  # @@protoc_insertion_point(class_scope:kentik.label.v202203alpha1.ListLabelsRequest)
  })
_sym_db.RegisterMessage(ListLabelsRequest)

ListLabelsResponse = _reflection.GeneratedProtocolMessageType('ListLabelsResponse', (_message.Message,), {
  'DESCRIPTOR' : _LISTLABELSRESPONSE,
  '__module__' : 'kentik.label.v202203alpha1.label_pb2'
  # @@protoc_insertion_point(class_scope:kentik.label.v202203alpha1.ListLabelsResponse)
  })
_sym_db.RegisterMessage(ListLabelsResponse)

CreateLabelRequest = _reflection.GeneratedProtocolMessageType('CreateLabelRequest', (_message.Message,), {
  'DESCRIPTOR' : _CREATELABELREQUEST,
  '__module__' : 'kentik.label.v202203alpha1.label_pb2'
  # @@protoc_insertion_point(class_scope:kentik.label.v202203alpha1.CreateLabelRequest)
  })
_sym_db.RegisterMessage(CreateLabelRequest)

CreateLabelResponse = _reflection.GeneratedProtocolMessageType('CreateLabelResponse', (_message.Message,), {
  'DESCRIPTOR' : _CREATELABELRESPONSE,
  '__module__' : 'kentik.label.v202203alpha1.label_pb2'
  # @@protoc_insertion_point(class_scope:kentik.label.v202203alpha1.CreateLabelResponse)
  })
_sym_db.RegisterMessage(CreateLabelResponse)

UpdateLabelRequest = _reflection.GeneratedProtocolMessageType('UpdateLabelRequest', (_message.Message,), {
  'DESCRIPTOR' : _UPDATELABELREQUEST,
  '__module__' : 'kentik.label.v202203alpha1.label_pb2'
  # @@protoc_insertion_point(class_scope:kentik.label.v202203alpha1.UpdateLabelRequest)
  })
_sym_db.RegisterMessage(UpdateLabelRequest)

UpdateLabelResponse = _reflection.GeneratedProtocolMessageType('UpdateLabelResponse', (_message.Message,), {
  'DESCRIPTOR' : _UPDATELABELRESPONSE,
  '__module__' : 'kentik.label.v202203alpha1.label_pb2'
  # @@protoc_insertion_point(class_scope:kentik.label.v202203alpha1.UpdateLabelResponse)
  })
_sym_db.RegisterMessage(UpdateLabelResponse)

DeleteLabelRequest = _reflection.GeneratedProtocolMessageType('DeleteLabelRequest', (_message.Message,), {
  'DESCRIPTOR' : _DELETELABELREQUEST,
  '__module__' : 'kentik.label.v202203alpha1.label_pb2'
  # @@protoc_insertion_point(class_scope:kentik.label.v202203alpha1.DeleteLabelRequest)
  })
_sym_db.RegisterMessage(DeleteLabelRequest)

DeleteLabelResponse = _reflection.GeneratedProtocolMessageType('DeleteLabelResponse', (_message.Message,), {
  'DESCRIPTOR' : _DELETELABELRESPONSE,
  '__module__' : 'kentik.label.v202203alpha1.label_pb2'
  # @@protoc_insertion_point(class_scope:kentik.label.v202203alpha1.DeleteLabelResponse)
  })
_sym_db.RegisterMessage(DeleteLabelResponse)


DESCRIPTOR._options = None

_LABELSERVICE = _descriptor.ServiceDescriptor(
  name='LabelService',
  full_name='kentik.label.v202203alpha1.LabelService',
  file=DESCRIPTOR,
  index=0,
  serialized_options=b'\312A\023grpc.api.kentik.com\352\327\002\013admin.label\220\330\002\003',
  create_key=_descriptor._internal_create_key,
  serialized_start=972,
  serialized_end=2059,
  methods=[
  _descriptor.MethodDescriptor(
    name='ListLabels',
    full_name='kentik.label.v202203alpha1.LabelService.ListLabels',
    index=0,
    containing_service=None,
    input_type=_LISTLABELSREQUEST,
    output_type=_LISTLABELSRESPONSE,
    serialized_options=b'\222AP\022\023Fetch Search Labels\032.Return list of labels matches search criteria.*\tListLabel\362\327\002\020admin.label:read\202\323\344\223\002\035\022\033/label/v202203alpha1/labels',
    create_key=_descriptor._internal_create_key,
  ),
  _descriptor.MethodDescriptor(
    name='CreateLabel',
    full_name='kentik.label.v202203alpha1.LabelService.CreateLabel',
    index=1,
    containing_service=None,
    input_type=_CREATELABELREQUEST,
    output_type=_CREATELABELRESPONSE,
    serialized_options=b'\222AM\022\017Create a label.\032-Create a label from request. returns created.*\013LabelCreate\362\327\002\021admin.label:write\202\323\344\223\002 \"\033/label/v202203alpha1/labels:\001*',
    create_key=_descriptor._internal_create_key,
  ),
  _descriptor.MethodDescriptor(
    name='UpdateLabel',
    full_name='kentik.label.v202203alpha1.LabelService.UpdateLabel',
    index=2,
    containing_service=None,
    input_type=_UPDATELABELREQUEST,
    output_type=_UPDATELABELRESPONSE,
    serialized_options=b'\222AW\022\017Update a label.\0327Replaces the entire label attributes specified with id.*\013LabelUpdate\362\327\002\021admin.label:write\202\323\344\223\002+\"&/label/v202203alpha1/labels/{label.id}:\001*',
    create_key=_descriptor._internal_create_key,
  ),
  _descriptor.MethodDescriptor(
    name='DeleteLabel',
    full_name='kentik.label.v202203alpha1.LabelService.DeleteLabel',
    index=3,
    containing_service=None,
    input_type=_DELETELABELREQUEST,
    output_type=_DELETELABELRESPONSE,
    serialized_options=b'\222AD\022\017Delete a label.\032$Deletes the label specified with id.*\013LabelDelete\362\327\002\021admin.label:write\202\323\344\223\002\"* /label/v202203alpha1/labels/{id}',
    create_key=_descriptor._internal_create_key,
  ),
])
_sym_db.RegisterServiceDescriptor(_LABELSERVICE)

DESCRIPTOR.services_by_name['LabelService'] = _LABELSERVICE

# @@protoc_insertion_point(module_scope)
