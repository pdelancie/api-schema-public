# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: kentik/user/v202106alpha1/user.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.api import annotations_pb2 as google_dot_api_dot_annotations__pb2
from google.api import client_pb2 as google_dot_api_dot_client__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2
from protoc_gen_openapiv2.options import annotations_pb2 as protoc__gen__openapiv2_dot_options_dot_annotations__pb2
from kentik.core.v202303 import annotations_pb2 as kentik_dot_core_dot_v202303_dot_annotations__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='kentik/user/v202106alpha1/user.proto',
  package='kentik.user.v202106alpha1',
  syntax='proto3',
  serialized_options=b'ZEgithub.com/kentik/api-schema-public/go/kentik/user/v202106alpha1;user\222A\220\003\022\251\001\n\023User management API\022K--- This API has been deprecated and will be removed in the near future ---\"7\n\026Kentik API Engineering\022\035https://github.com/kentik/api2\014202102alpha1*\001\0022\020application/json:\020application/jsonZD\n\036\n\005email\022\025\010\002\032\017X-CH-Auth-Email \002\n\"\n\005token\022\031\010\002\032\023X-CH-Auth-API-Token \002b\026\n\t\n\005email\022\000\n\t\n\005token\022\000r]\n%General information about Kentik APIs\0224https://kb.kentik.com/v0/Ab09.htm#Ab09-APIs_Overview',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n$kentik/user/v202106alpha1/user.proto\x12\x19kentik.user.v202106alpha1\x1a\x1cgoogle/api/annotations.proto\x1a\x17google/api/client.proto\x1a\x1fgoogle/protobuf/timestamp.proto\x1a.protoc-gen-openapiv2/options/annotations.proto\x1a%kentik/core/v202303/annotations.proto\"\xe5\x02\n\x04User\x12\x0e\n\x02id\x18\x01 \x01(\tR\x02id\x12\x1d\n\nuser_email\x18\x02 \x01(\tR\tuserEmail\x12\x1a\n\x08username\x18\x03 \x01(\tR\x08username\x12$\n\x0euser_full_name\x18\x04 \x01(\tR\x0cuserFullName\x12\x33\n\x04role\x18\x05 \x01(\x0e\x32\x1f.kentik.user.v202106alpha1.RoleR\x04role\x12\x39\n\nlast_login\x18\x06 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\tlastLogin\x12=\n\x0c\x63reated_date\x18\x07 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\x0b\x63reatedDate\x12=\n\x0cupdated_date\x18\x08 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\x0bupdatedDate\"\x11\n\x0fListUserRequest\"n\n\x10ListUserResponse\x12\x35\n\x05users\x18\x01 \x03(\x0b\x32\x1f.kentik.user.v202106alpha1.UserR\x05users\x12#\n\rinvalid_count\x18\x02 \x01(\rR\x0cinvalidCount\" \n\x0eGetUserRequest\x12\x0e\n\x02id\x18\x01 \x01(\tR\x02id\"F\n\x0fGetUserResponse\x12\x33\n\x04user\x18\x01 \x01(\x0b\x32\x1f.kentik.user.v202106alpha1.UserR\x04user\"H\n\x11\x43reateUserRequest\x12\x33\n\x04user\x18\x01 \x01(\x0b\x32\x1f.kentik.user.v202106alpha1.UserR\x04user\"I\n\x12\x43reateUserResponse\x12\x33\n\x04user\x18\x01 \x01(\x0b\x32\x1f.kentik.user.v202106alpha1.UserR\x04user\"H\n\x11UpdateUserRequest\x12\x33\n\x04user\x18\x01 \x01(\x0b\x32\x1f.kentik.user.v202106alpha1.UserR\x04user\"I\n\x12UpdateUserResponse\x12\x33\n\x04user\x18\x01 \x01(\x0b\x32\x1f.kentik.user.v202106alpha1.UserR\x04user\"#\n\x11\x44\x65leteUserRequest\x12\x0e\n\x02id\x18\x01 \x01(\tR\x02id\"\x14\n\x12\x44\x65leteUserResponse*\xb7\x01\n\x07Landing\x12\x17\n\x13LANDING_UNSPECIFIED\x10\x00\x12\x1c\n\x18LANDING_OBSERVATION_DECK\x10\x01\x12\x1c\n\x18LANDING_NETWORK_EXPLORER\x10\x02\x12\x13\n\x0fLANDING_LIBRARY\x10\x03\x12\x14\n\x10LANDING_EXPLORER\x10\x04\x12\x14\n\x10LANDING_ALERTING\x10\x05\x12\x16\n\x12LANDING_SYNTHETICS\x10\x06*c\n\x04Role\x12\x14\n\x10ROLE_UNSPECIFIED\x10\x00\x12\x0f\n\x0bROLE_MEMBER\x10\x01\x12\x16\n\x12ROLE_ADMINISTRATOR\x10\x02\x12\x1c\n\x18ROLE_SUPER_ADMINISTRATOR\x10\x03\x32\xab\n\n\x0bUserService\x12\xd5\x01\n\x08ListUser\x12*.kentik.user.v202106alpha1.ListUserRequest\x1a+.kentik.user.v202106alpha1.ListUserResponse\"p\x92\x41\x39\x12\x0bList users.\x1a Returns a list of user accounts.*\x08UserList\xf2\xd7\x02\x0f\x61\x64min.user:read\x82\xd3\xe4\x93\x02\x1b\x12\x19/user/v202106alpha1/users\x12\xf8\x01\n\x07GetUser\x12).kentik.user.v202106alpha1.GetUserRequest\x1a*.kentik.user.v202106alpha1.GetUserResponse\"\x95\x01\x92\x41Y\x12\x13Get a user account.\x1a\x39Returns information about user account specified with ID.*\x07UserGet\xf2\xd7\x02\x0f\x61\x64min.user:read\x82\xd3\xe4\x93\x02 \x12\x1e/user/v202106alpha1/users/{id}\x12\x89\x02\n\nCreateUser\x12,.kentik.user.v202106alpha1.CreateUserRequest\x1a-.kentik.user.v202106alpha1.CreateUserResponse\"\x9d\x01\x92\x41\x62\x12\x16\x43reate a user account.\x1a<Create a user account from request. returns created account.*\nUserCreate\xf2\xd7\x02\x10\x61\x64min.user:write\x82\xd3\xe4\x93\x02\x1e\"\x19/user/v202106alpha1/users:\x01*\x12\x95\x02\n\nUpdateUser\x12,.kentik.user.v202106alpha1.UpdateUserRequest\x1a-.kentik.user.v202106alpha1.UpdateUserResponse\"\xa9\x01\x92\x41\x64\x12\x16Update a user account.\x1a>Replaces the entire user account attributes specified with id.*\nUserUpdate\xf2\xd7\x02\x10\x61\x64min.user:write\x82\xd3\xe4\x93\x02(\x1a#/user/v202106alpha1/users/{user.id}:\x01*\x12\xfa\x01\n\nDeleteUser\x12,.kentik.user.v202106alpha1.DeleteUserRequest\x1a-.kentik.user.v202106alpha1.DeleteUserResponse\"\x8e\x01\x92\x41Q\x12\x16\x44\x65lete a user account.\x1a+Deletes the user account specified with id.*\nUserDelete\xf2\xd7\x02\x10\x61\x64min.user:write\x82\xd3\xe4\x93\x02 *\x1e/user/v202106alpha1/users/{id}\x1a(\xca\x41\x13grpc.api.kentik.com\xea\xd7\x02\nadmin.user\x90\xd8\x02\x03\x42\xdb\x03ZEgithub.com/kentik/api-schema-public/go/kentik/user/v202106alpha1;user\x92\x41\x90\x03\x12\xa9\x01\n\x13User management API\x12K--- This API has been deprecated and will be removed in the near future ---\"7\n\x16Kentik API Engineering\x12\x1dhttps://github.com/kentik/api2\x0c\x32\x30\x32\x31\x30\x32\x61lpha1*\x01\x02\x32\x10\x61pplication/json:\x10\x61pplication/jsonZD\n\x1e\n\x05\x65mail\x12\x15\x08\x02\x1a\x0fX-CH-Auth-Email \x02\n\"\n\x05token\x12\x19\x08\x02\x1a\x13X-CH-Auth-API-Token \x02\x62\x16\n\t\n\x05\x65mail\x12\x00\n\t\n\x05token\x12\x00r]\n%General information about Kentik APIs\x12\x34https://kb.kentik.com/v0/Ab09.htm#Ab09-APIs_Overviewb\x06proto3'
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_api_dot_client__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,protoc__gen__openapiv2_dot_options_dot_annotations__pb2.DESCRIPTOR,kentik_dot_core_dot_v202303_dot_annotations__pb2.DESCRIPTOR,])

_LANDING = _descriptor.EnumDescriptor(
  name='Landing',
  full_name='kentik.user.v202106alpha1.Landing',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='LANDING_UNSPECIFIED', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='LANDING_OBSERVATION_DECK', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='LANDING_NETWORK_EXPLORER', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='LANDING_LIBRARY', index=3, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='LANDING_EXPLORER', index=4, number=4,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='LANDING_ALERTING', index=5, number=5,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='LANDING_SYNTHETICS', index=6, number=6,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1197,
  serialized_end=1380,
)
_sym_db.RegisterEnumDescriptor(_LANDING)

Landing = enum_type_wrapper.EnumTypeWrapper(_LANDING)
_ROLE = _descriptor.EnumDescriptor(
  name='Role',
  full_name='kentik.user.v202106alpha1.Role',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='ROLE_UNSPECIFIED', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='ROLE_MEMBER', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='ROLE_ADMINISTRATOR', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='ROLE_SUPER_ADMINISTRATOR', index=3, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1382,
  serialized_end=1481,
)
_sym_db.RegisterEnumDescriptor(_ROLE)

Role = enum_type_wrapper.EnumTypeWrapper(_ROLE)
LANDING_UNSPECIFIED = 0
LANDING_OBSERVATION_DECK = 1
LANDING_NETWORK_EXPLORER = 2
LANDING_LIBRARY = 3
LANDING_EXPLORER = 4
LANDING_ALERTING = 5
LANDING_SYNTHETICS = 6
ROLE_UNSPECIFIED = 0
ROLE_MEMBER = 1
ROLE_ADMINISTRATOR = 2
ROLE_SUPER_ADMINISTRATOR = 3



_USER = _descriptor.Descriptor(
  name='User',
  full_name='kentik.user.v202106alpha1.User',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='kentik.user.v202106alpha1.User.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='id', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='user_email', full_name='kentik.user.v202106alpha1.User.user_email', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='userEmail', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='username', full_name='kentik.user.v202106alpha1.User.username', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='username', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='user_full_name', full_name='kentik.user.v202106alpha1.User.user_full_name', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='userFullName', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='role', full_name='kentik.user.v202106alpha1.User.role', index=4,
      number=5, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='role', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='last_login', full_name='kentik.user.v202106alpha1.User.last_login', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='lastLogin', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='created_date', full_name='kentik.user.v202106alpha1.User.created_date', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='createdDate', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='updated_date', full_name='kentik.user.v202106alpha1.User.updated_date', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='updatedDate', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=243,
  serialized_end=600,
)


_LISTUSERREQUEST = _descriptor.Descriptor(
  name='ListUserRequest',
  full_name='kentik.user.v202106alpha1.ListUserRequest',
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
  serialized_start=602,
  serialized_end=619,
)


_LISTUSERRESPONSE = _descriptor.Descriptor(
  name='ListUserResponse',
  full_name='kentik.user.v202106alpha1.ListUserResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='users', full_name='kentik.user.v202106alpha1.ListUserResponse.users', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='users', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='invalid_count', full_name='kentik.user.v202106alpha1.ListUserResponse.invalid_count', index=1,
      number=2, type=13, cpp_type=3, label=1,
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
  serialized_start=621,
  serialized_end=731,
)


_GETUSERREQUEST = _descriptor.Descriptor(
  name='GetUserRequest',
  full_name='kentik.user.v202106alpha1.GetUserRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='kentik.user.v202106alpha1.GetUserRequest.id', index=0,
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
  serialized_start=733,
  serialized_end=765,
)


_GETUSERRESPONSE = _descriptor.Descriptor(
  name='GetUserResponse',
  full_name='kentik.user.v202106alpha1.GetUserResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='user', full_name='kentik.user.v202106alpha1.GetUserResponse.user', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='user', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=767,
  serialized_end=837,
)


_CREATEUSERREQUEST = _descriptor.Descriptor(
  name='CreateUserRequest',
  full_name='kentik.user.v202106alpha1.CreateUserRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='user', full_name='kentik.user.v202106alpha1.CreateUserRequest.user', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='user', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=839,
  serialized_end=911,
)


_CREATEUSERRESPONSE = _descriptor.Descriptor(
  name='CreateUserResponse',
  full_name='kentik.user.v202106alpha1.CreateUserResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='user', full_name='kentik.user.v202106alpha1.CreateUserResponse.user', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='user', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=913,
  serialized_end=986,
)


_UPDATEUSERREQUEST = _descriptor.Descriptor(
  name='UpdateUserRequest',
  full_name='kentik.user.v202106alpha1.UpdateUserRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='user', full_name='kentik.user.v202106alpha1.UpdateUserRequest.user', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='user', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=988,
  serialized_end=1060,
)


_UPDATEUSERRESPONSE = _descriptor.Descriptor(
  name='UpdateUserResponse',
  full_name='kentik.user.v202106alpha1.UpdateUserResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='user', full_name='kentik.user.v202106alpha1.UpdateUserResponse.user', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, json_name='user', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=1062,
  serialized_end=1135,
)


_DELETEUSERREQUEST = _descriptor.Descriptor(
  name='DeleteUserRequest',
  full_name='kentik.user.v202106alpha1.DeleteUserRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='kentik.user.v202106alpha1.DeleteUserRequest.id', index=0,
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
  serialized_start=1137,
  serialized_end=1172,
)


_DELETEUSERRESPONSE = _descriptor.Descriptor(
  name='DeleteUserResponse',
  full_name='kentik.user.v202106alpha1.DeleteUserResponse',
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
  serialized_start=1174,
  serialized_end=1194,
)

_USER.fields_by_name['role'].enum_type = _ROLE
_USER.fields_by_name['last_login'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_USER.fields_by_name['created_date'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_USER.fields_by_name['updated_date'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_LISTUSERRESPONSE.fields_by_name['users'].message_type = _USER
_GETUSERRESPONSE.fields_by_name['user'].message_type = _USER
_CREATEUSERREQUEST.fields_by_name['user'].message_type = _USER
_CREATEUSERRESPONSE.fields_by_name['user'].message_type = _USER
_UPDATEUSERREQUEST.fields_by_name['user'].message_type = _USER
_UPDATEUSERRESPONSE.fields_by_name['user'].message_type = _USER
DESCRIPTOR.message_types_by_name['User'] = _USER
DESCRIPTOR.message_types_by_name['ListUserRequest'] = _LISTUSERREQUEST
DESCRIPTOR.message_types_by_name['ListUserResponse'] = _LISTUSERRESPONSE
DESCRIPTOR.message_types_by_name['GetUserRequest'] = _GETUSERREQUEST
DESCRIPTOR.message_types_by_name['GetUserResponse'] = _GETUSERRESPONSE
DESCRIPTOR.message_types_by_name['CreateUserRequest'] = _CREATEUSERREQUEST
DESCRIPTOR.message_types_by_name['CreateUserResponse'] = _CREATEUSERRESPONSE
DESCRIPTOR.message_types_by_name['UpdateUserRequest'] = _UPDATEUSERREQUEST
DESCRIPTOR.message_types_by_name['UpdateUserResponse'] = _UPDATEUSERRESPONSE
DESCRIPTOR.message_types_by_name['DeleteUserRequest'] = _DELETEUSERREQUEST
DESCRIPTOR.message_types_by_name['DeleteUserResponse'] = _DELETEUSERRESPONSE
DESCRIPTOR.enum_types_by_name['Landing'] = _LANDING
DESCRIPTOR.enum_types_by_name['Role'] = _ROLE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

User = _reflection.GeneratedProtocolMessageType('User', (_message.Message,), {
  'DESCRIPTOR' : _USER,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.User)
  })
_sym_db.RegisterMessage(User)

ListUserRequest = _reflection.GeneratedProtocolMessageType('ListUserRequest', (_message.Message,), {
  'DESCRIPTOR' : _LISTUSERREQUEST,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.ListUserRequest)
  })
_sym_db.RegisterMessage(ListUserRequest)

ListUserResponse = _reflection.GeneratedProtocolMessageType('ListUserResponse', (_message.Message,), {
  'DESCRIPTOR' : _LISTUSERRESPONSE,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.ListUserResponse)
  })
_sym_db.RegisterMessage(ListUserResponse)

GetUserRequest = _reflection.GeneratedProtocolMessageType('GetUserRequest', (_message.Message,), {
  'DESCRIPTOR' : _GETUSERREQUEST,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.GetUserRequest)
  })
_sym_db.RegisterMessage(GetUserRequest)

GetUserResponse = _reflection.GeneratedProtocolMessageType('GetUserResponse', (_message.Message,), {
  'DESCRIPTOR' : _GETUSERRESPONSE,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.GetUserResponse)
  })
_sym_db.RegisterMessage(GetUserResponse)

CreateUserRequest = _reflection.GeneratedProtocolMessageType('CreateUserRequest', (_message.Message,), {
  'DESCRIPTOR' : _CREATEUSERREQUEST,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.CreateUserRequest)
  })
_sym_db.RegisterMessage(CreateUserRequest)

CreateUserResponse = _reflection.GeneratedProtocolMessageType('CreateUserResponse', (_message.Message,), {
  'DESCRIPTOR' : _CREATEUSERRESPONSE,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.CreateUserResponse)
  })
_sym_db.RegisterMessage(CreateUserResponse)

UpdateUserRequest = _reflection.GeneratedProtocolMessageType('UpdateUserRequest', (_message.Message,), {
  'DESCRIPTOR' : _UPDATEUSERREQUEST,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.UpdateUserRequest)
  })
_sym_db.RegisterMessage(UpdateUserRequest)

UpdateUserResponse = _reflection.GeneratedProtocolMessageType('UpdateUserResponse', (_message.Message,), {
  'DESCRIPTOR' : _UPDATEUSERRESPONSE,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.UpdateUserResponse)
  })
_sym_db.RegisterMessage(UpdateUserResponse)

DeleteUserRequest = _reflection.GeneratedProtocolMessageType('DeleteUserRequest', (_message.Message,), {
  'DESCRIPTOR' : _DELETEUSERREQUEST,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.DeleteUserRequest)
  })
_sym_db.RegisterMessage(DeleteUserRequest)

DeleteUserResponse = _reflection.GeneratedProtocolMessageType('DeleteUserResponse', (_message.Message,), {
  'DESCRIPTOR' : _DELETEUSERRESPONSE,
  '__module__' : 'kentik.user.v202106alpha1.user_pb2'
  # @@protoc_insertion_point(class_scope:kentik.user.v202106alpha1.DeleteUserResponse)
  })
_sym_db.RegisterMessage(DeleteUserResponse)


DESCRIPTOR._options = None

_USERSERVICE = _descriptor.ServiceDescriptor(
  name='UserService',
  full_name='kentik.user.v202106alpha1.UserService',
  file=DESCRIPTOR,
  index=0,
  serialized_options=b'\312A\023grpc.api.kentik.com\352\327\002\nadmin.user\220\330\002\003',
  create_key=_descriptor._internal_create_key,
  serialized_start=1484,
  serialized_end=2807,
  methods=[
  _descriptor.MethodDescriptor(
    name='ListUser',
    full_name='kentik.user.v202106alpha1.UserService.ListUser',
    index=0,
    containing_service=None,
    input_type=_LISTUSERREQUEST,
    output_type=_LISTUSERRESPONSE,
    serialized_options=b'\222A9\022\013List users.\032 Returns a list of user accounts.*\010UserList\362\327\002\017admin.user:read\202\323\344\223\002\033\022\031/user/v202106alpha1/users',
    create_key=_descriptor._internal_create_key,
  ),
  _descriptor.MethodDescriptor(
    name='GetUser',
    full_name='kentik.user.v202106alpha1.UserService.GetUser',
    index=1,
    containing_service=None,
    input_type=_GETUSERREQUEST,
    output_type=_GETUSERRESPONSE,
    serialized_options=b'\222AY\022\023Get a user account.\0329Returns information about user account specified with ID.*\007UserGet\362\327\002\017admin.user:read\202\323\344\223\002 \022\036/user/v202106alpha1/users/{id}',
    create_key=_descriptor._internal_create_key,
  ),
  _descriptor.MethodDescriptor(
    name='CreateUser',
    full_name='kentik.user.v202106alpha1.UserService.CreateUser',
    index=2,
    containing_service=None,
    input_type=_CREATEUSERREQUEST,
    output_type=_CREATEUSERRESPONSE,
    serialized_options=b'\222Ab\022\026Create a user account.\032<Create a user account from request. returns created account.*\nUserCreate\362\327\002\020admin.user:write\202\323\344\223\002\036\"\031/user/v202106alpha1/users:\001*',
    create_key=_descriptor._internal_create_key,
  ),
  _descriptor.MethodDescriptor(
    name='UpdateUser',
    full_name='kentik.user.v202106alpha1.UserService.UpdateUser',
    index=3,
    containing_service=None,
    input_type=_UPDATEUSERREQUEST,
    output_type=_UPDATEUSERRESPONSE,
    serialized_options=b'\222Ad\022\026Update a user account.\032>Replaces the entire user account attributes specified with id.*\nUserUpdate\362\327\002\020admin.user:write\202\323\344\223\002(\032#/user/v202106alpha1/users/{user.id}:\001*',
    create_key=_descriptor._internal_create_key,
  ),
  _descriptor.MethodDescriptor(
    name='DeleteUser',
    full_name='kentik.user.v202106alpha1.UserService.DeleteUser',
    index=4,
    containing_service=None,
    input_type=_DELETEUSERREQUEST,
    output_type=_DELETEUSERRESPONSE,
    serialized_options=b'\222AQ\022\026Delete a user account.\032+Deletes the user account specified with id.*\nUserDelete\362\327\002\020admin.user:write\202\323\344\223\002 *\036/user/v202106alpha1/users/{id}',
    create_key=_descriptor._internal_create_key,
  ),
])
_sym_db.RegisterServiceDescriptor(_USERSERVICE)

DESCRIPTOR.services_by_name['UserService'] = _USERSERVICE

# @@protoc_insertion_point(module_scope)
