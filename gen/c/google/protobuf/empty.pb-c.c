/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: google/protobuf/empty.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "google/protobuf/empty.pb-c.h"
void   google__protobuf__empty__init
                     (Google__Protobuf__Empty         *message)
{
  static const Google__Protobuf__Empty init_value = GOOGLE__PROTOBUF__EMPTY__INIT;
  *message = init_value;
}
size_t google__protobuf__empty__get_packed_size
                     (const Google__Protobuf__Empty *message)
{
  assert(message->base.descriptor == &google__protobuf__empty__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t google__protobuf__empty__pack
                     (const Google__Protobuf__Empty *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &google__protobuf__empty__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t google__protobuf__empty__pack_to_buffer
                     (const Google__Protobuf__Empty *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &google__protobuf__empty__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Google__Protobuf__Empty *
       google__protobuf__empty__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Google__Protobuf__Empty *)
     protobuf_c_message_unpack (&google__protobuf__empty__descriptor,
                                allocator, len, data);
}
void   google__protobuf__empty__free_unpacked
                     (Google__Protobuf__Empty *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &google__protobuf__empty__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
#define google__protobuf__empty__field_descriptors NULL
#define google__protobuf__empty__field_indices_by_name NULL
#define google__protobuf__empty__number_ranges NULL
const ProtobufCMessageDescriptor google__protobuf__empty__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "google.protobuf.Empty",
  "Empty",
  "Google__Protobuf__Empty",
  "google.protobuf",
  sizeof(Google__Protobuf__Empty),
  0,
  google__protobuf__empty__field_descriptors,
  google__protobuf__empty__field_indices_by_name,
  0,  google__protobuf__empty__number_ranges,
  (ProtobufCMessageInit) google__protobuf__empty__init,
  NULL,NULL,NULL    /* reserved[123] */
};
