/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: grpc/lb/v1/load_reporter.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "grpc/lb/v1/load_reporter.pb-c.h"
void   grpc__lb__v1__load_report_request__init
                     (Grpc__Lb__V1__LoadReportRequest         *message)
{
  static const Grpc__Lb__V1__LoadReportRequest init_value = GRPC__LB__V1__LOAD_REPORT_REQUEST__INIT;
  *message = init_value;
}
size_t grpc__lb__v1__load_report_request__get_packed_size
                     (const Grpc__Lb__V1__LoadReportRequest *message)
{
  assert(message->base.descriptor == &grpc__lb__v1__load_report_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t grpc__lb__v1__load_report_request__pack
                     (const Grpc__Lb__V1__LoadReportRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &grpc__lb__v1__load_report_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t grpc__lb__v1__load_report_request__pack_to_buffer
                     (const Grpc__Lb__V1__LoadReportRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &grpc__lb__v1__load_report_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Grpc__Lb__V1__LoadReportRequest *
       grpc__lb__v1__load_report_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Grpc__Lb__V1__LoadReportRequest *)
     protobuf_c_message_unpack (&grpc__lb__v1__load_report_request__descriptor,
                                allocator, len, data);
}
void   grpc__lb__v1__load_report_request__free_unpacked
                     (Grpc__Lb__V1__LoadReportRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &grpc__lb__v1__load_report_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   grpc__lb__v1__initial_load_report_request__init
                     (Grpc__Lb__V1__InitialLoadReportRequest         *message)
{
  static const Grpc__Lb__V1__InitialLoadReportRequest init_value = GRPC__LB__V1__INITIAL_LOAD_REPORT_REQUEST__INIT;
  *message = init_value;
}
size_t grpc__lb__v1__initial_load_report_request__get_packed_size
                     (const Grpc__Lb__V1__InitialLoadReportRequest *message)
{
  assert(message->base.descriptor == &grpc__lb__v1__initial_load_report_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t grpc__lb__v1__initial_load_report_request__pack
                     (const Grpc__Lb__V1__InitialLoadReportRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &grpc__lb__v1__initial_load_report_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t grpc__lb__v1__initial_load_report_request__pack_to_buffer
                     (const Grpc__Lb__V1__InitialLoadReportRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &grpc__lb__v1__initial_load_report_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Grpc__Lb__V1__InitialLoadReportRequest *
       grpc__lb__v1__initial_load_report_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Grpc__Lb__V1__InitialLoadReportRequest *)
     protobuf_c_message_unpack (&grpc__lb__v1__initial_load_report_request__descriptor,
                                allocator, len, data);
}
void   grpc__lb__v1__initial_load_report_request__free_unpacked
                     (Grpc__Lb__V1__InitialLoadReportRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &grpc__lb__v1__initial_load_report_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   grpc__lb__v1__load_report_response__init
                     (Grpc__Lb__V1__LoadReportResponse         *message)
{
  static const Grpc__Lb__V1__LoadReportResponse init_value = GRPC__LB__V1__LOAD_REPORT_RESPONSE__INIT;
  *message = init_value;
}
size_t grpc__lb__v1__load_report_response__get_packed_size
                     (const Grpc__Lb__V1__LoadReportResponse *message)
{
  assert(message->base.descriptor == &grpc__lb__v1__load_report_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t grpc__lb__v1__load_report_response__pack
                     (const Grpc__Lb__V1__LoadReportResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &grpc__lb__v1__load_report_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t grpc__lb__v1__load_report_response__pack_to_buffer
                     (const Grpc__Lb__V1__LoadReportResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &grpc__lb__v1__load_report_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Grpc__Lb__V1__LoadReportResponse *
       grpc__lb__v1__load_report_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Grpc__Lb__V1__LoadReportResponse *)
     protobuf_c_message_unpack (&grpc__lb__v1__load_report_response__descriptor,
                                allocator, len, data);
}
void   grpc__lb__v1__load_report_response__free_unpacked
                     (Grpc__Lb__V1__LoadReportResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &grpc__lb__v1__load_report_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   grpc__lb__v1__initial_load_report_response__init
                     (Grpc__Lb__V1__InitialLoadReportResponse         *message)
{
  static const Grpc__Lb__V1__InitialLoadReportResponse init_value = GRPC__LB__V1__INITIAL_LOAD_REPORT_RESPONSE__INIT;
  *message = init_value;
}
size_t grpc__lb__v1__initial_load_report_response__get_packed_size
                     (const Grpc__Lb__V1__InitialLoadReportResponse *message)
{
  assert(message->base.descriptor == &grpc__lb__v1__initial_load_report_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t grpc__lb__v1__initial_load_report_response__pack
                     (const Grpc__Lb__V1__InitialLoadReportResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &grpc__lb__v1__initial_load_report_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t grpc__lb__v1__initial_load_report_response__pack_to_buffer
                     (const Grpc__Lb__V1__InitialLoadReportResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &grpc__lb__v1__initial_load_report_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Grpc__Lb__V1__InitialLoadReportResponse *
       grpc__lb__v1__initial_load_report_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Grpc__Lb__V1__InitialLoadReportResponse *)
     protobuf_c_message_unpack (&grpc__lb__v1__initial_load_report_response__descriptor,
                                allocator, len, data);
}
void   grpc__lb__v1__initial_load_report_response__free_unpacked
                     (Grpc__Lb__V1__InitialLoadReportResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &grpc__lb__v1__initial_load_report_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   grpc__lb__v1__load_balancing_feedback__init
                     (Grpc__Lb__V1__LoadBalancingFeedback         *message)
{
  static const Grpc__Lb__V1__LoadBalancingFeedback init_value = GRPC__LB__V1__LOAD_BALANCING_FEEDBACK__INIT;
  *message = init_value;
}
size_t grpc__lb__v1__load_balancing_feedback__get_packed_size
                     (const Grpc__Lb__V1__LoadBalancingFeedback *message)
{
  assert(message->base.descriptor == &grpc__lb__v1__load_balancing_feedback__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t grpc__lb__v1__load_balancing_feedback__pack
                     (const Grpc__Lb__V1__LoadBalancingFeedback *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &grpc__lb__v1__load_balancing_feedback__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t grpc__lb__v1__load_balancing_feedback__pack_to_buffer
                     (const Grpc__Lb__V1__LoadBalancingFeedback *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &grpc__lb__v1__load_balancing_feedback__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Grpc__Lb__V1__LoadBalancingFeedback *
       grpc__lb__v1__load_balancing_feedback__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Grpc__Lb__V1__LoadBalancingFeedback *)
     protobuf_c_message_unpack (&grpc__lb__v1__load_balancing_feedback__descriptor,
                                allocator, len, data);
}
void   grpc__lb__v1__load_balancing_feedback__free_unpacked
                     (Grpc__Lb__V1__LoadBalancingFeedback *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &grpc__lb__v1__load_balancing_feedback__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   grpc__lb__v1__load__init
                     (Grpc__Lb__V1__Load         *message)
{
  static const Grpc__Lb__V1__Load init_value = GRPC__LB__V1__LOAD__INIT;
  *message = init_value;
}
size_t grpc__lb__v1__load__get_packed_size
                     (const Grpc__Lb__V1__Load *message)
{
  assert(message->base.descriptor == &grpc__lb__v1__load__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t grpc__lb__v1__load__pack
                     (const Grpc__Lb__V1__Load *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &grpc__lb__v1__load__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t grpc__lb__v1__load__pack_to_buffer
                     (const Grpc__Lb__V1__Load *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &grpc__lb__v1__load__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Grpc__Lb__V1__Load *
       grpc__lb__v1__load__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Grpc__Lb__V1__Load *)
     protobuf_c_message_unpack (&grpc__lb__v1__load__descriptor,
                                allocator, len, data);
}
void   grpc__lb__v1__load__free_unpacked
                     (Grpc__Lb__V1__Load *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &grpc__lb__v1__load__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   grpc__lb__v1__call_metric_data__init
                     (Grpc__Lb__V1__CallMetricData         *message)
{
  static const Grpc__Lb__V1__CallMetricData init_value = GRPC__LB__V1__CALL_METRIC_DATA__INIT;
  *message = init_value;
}
size_t grpc__lb__v1__call_metric_data__get_packed_size
                     (const Grpc__Lb__V1__CallMetricData *message)
{
  assert(message->base.descriptor == &grpc__lb__v1__call_metric_data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t grpc__lb__v1__call_metric_data__pack
                     (const Grpc__Lb__V1__CallMetricData *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &grpc__lb__v1__call_metric_data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t grpc__lb__v1__call_metric_data__pack_to_buffer
                     (const Grpc__Lb__V1__CallMetricData *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &grpc__lb__v1__call_metric_data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Grpc__Lb__V1__CallMetricData *
       grpc__lb__v1__call_metric_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Grpc__Lb__V1__CallMetricData *)
     protobuf_c_message_unpack (&grpc__lb__v1__call_metric_data__descriptor,
                                allocator, len, data);
}
void   grpc__lb__v1__call_metric_data__free_unpacked
                     (Grpc__Lb__V1__CallMetricData *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &grpc__lb__v1__call_metric_data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   grpc__lb__v1__orphaned_load_identifier__init
                     (Grpc__Lb__V1__OrphanedLoadIdentifier         *message)
{
  static const Grpc__Lb__V1__OrphanedLoadIdentifier init_value = GRPC__LB__V1__ORPHANED_LOAD_IDENTIFIER__INIT;
  *message = init_value;
}
size_t grpc__lb__v1__orphaned_load_identifier__get_packed_size
                     (const Grpc__Lb__V1__OrphanedLoadIdentifier *message)
{
  assert(message->base.descriptor == &grpc__lb__v1__orphaned_load_identifier__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t grpc__lb__v1__orphaned_load_identifier__pack
                     (const Grpc__Lb__V1__OrphanedLoadIdentifier *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &grpc__lb__v1__orphaned_load_identifier__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t grpc__lb__v1__orphaned_load_identifier__pack_to_buffer
                     (const Grpc__Lb__V1__OrphanedLoadIdentifier *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &grpc__lb__v1__orphaned_load_identifier__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Grpc__Lb__V1__OrphanedLoadIdentifier *
       grpc__lb__v1__orphaned_load_identifier__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Grpc__Lb__V1__OrphanedLoadIdentifier *)
     protobuf_c_message_unpack (&grpc__lb__v1__orphaned_load_identifier__descriptor,
                                allocator, len, data);
}
void   grpc__lb__v1__orphaned_load_identifier__free_unpacked
                     (Grpc__Lb__V1__OrphanedLoadIdentifier *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &grpc__lb__v1__orphaned_load_identifier__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor grpc__lb__v1__load_report_request__field_descriptors[1] =
{
  {
    "initial_request",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__LoadReportRequest, initial_request),
    &grpc__lb__v1__initial_load_report_request__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned grpc__lb__v1__load_report_request__field_indices_by_name[] = {
  0,   /* field[0] = initial_request */
};
static const ProtobufCIntRange grpc__lb__v1__load_report_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor grpc__lb__v1__load_report_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "grpc.lb.v1.LoadReportRequest",
  "LoadReportRequest",
  "Grpc__Lb__V1__LoadReportRequest",
  "grpc.lb.v1",
  sizeof(Grpc__Lb__V1__LoadReportRequest),
  1,
  grpc__lb__v1__load_report_request__field_descriptors,
  grpc__lb__v1__load_report_request__field_indices_by_name,
  1,  grpc__lb__v1__load_report_request__number_ranges,
  (ProtobufCMessageInit) grpc__lb__v1__load_report_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor grpc__lb__v1__initial_load_report_request__field_descriptors[3] =
{
  {
    "load_balanced_hostname",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__InitialLoadReportRequest, load_balanced_hostname),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "load_key",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__InitialLoadReportRequest, load_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "load_report_interval",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__InitialLoadReportRequest, load_report_interval),
    &google__protobuf__duration__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned grpc__lb__v1__initial_load_report_request__field_indices_by_name[] = {
  0,   /* field[0] = load_balanced_hostname */
  1,   /* field[1] = load_key */
  2,   /* field[2] = load_report_interval */
};
static const ProtobufCIntRange grpc__lb__v1__initial_load_report_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor grpc__lb__v1__initial_load_report_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "grpc.lb.v1.InitialLoadReportRequest",
  "InitialLoadReportRequest",
  "Grpc__Lb__V1__InitialLoadReportRequest",
  "grpc.lb.v1",
  sizeof(Grpc__Lb__V1__InitialLoadReportRequest),
  3,
  grpc__lb__v1__initial_load_report_request__field_descriptors,
  grpc__lb__v1__initial_load_report_request__field_indices_by_name,
  1,  grpc__lb__v1__initial_load_report_request__number_ranges,
  (ProtobufCMessageInit) grpc__lb__v1__initial_load_report_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor grpc__lb__v1__load_report_response__field_descriptors[3] =
{
  {
    "initial_response",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__LoadReportResponse, initial_response),
    &grpc__lb__v1__initial_load_report_response__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "load_balancing_feedback",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__LoadReportResponse, load_balancing_feedback),
    &grpc__lb__v1__load_balancing_feedback__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "load",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Grpc__Lb__V1__LoadReportResponse, n_load),
    offsetof(Grpc__Lb__V1__LoadReportResponse, load),
    &grpc__lb__v1__load__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned grpc__lb__v1__load_report_response__field_indices_by_name[] = {
  0,   /* field[0] = initial_response */
  2,   /* field[2] = load */
  1,   /* field[1] = load_balancing_feedback */
};
static const ProtobufCIntRange grpc__lb__v1__load_report_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor grpc__lb__v1__load_report_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "grpc.lb.v1.LoadReportResponse",
  "LoadReportResponse",
  "Grpc__Lb__V1__LoadReportResponse",
  "grpc.lb.v1",
  sizeof(Grpc__Lb__V1__LoadReportResponse),
  3,
  grpc__lb__v1__load_report_response__field_descriptors,
  grpc__lb__v1__load_report_response__field_indices_by_name,
  1,  grpc__lb__v1__load_report_response__number_ranges,
  (ProtobufCMessageInit) grpc__lb__v1__load_report_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue grpc__lb__v1__initial_load_report_response__implementation_identifier__enum_values_by_number[4] =
{
  { "IMPL_UNSPECIFIED", "GRPC__LB__V1__INITIAL_LOAD_REPORT_RESPONSE__IMPLEMENTATION_IDENTIFIER__IMPL_UNSPECIFIED", 0 },
  { "CPP", "GRPC__LB__V1__INITIAL_LOAD_REPORT_RESPONSE__IMPLEMENTATION_IDENTIFIER__CPP", 1 },
  { "JAVA", "GRPC__LB__V1__INITIAL_LOAD_REPORT_RESPONSE__IMPLEMENTATION_IDENTIFIER__JAVA", 2 },
  { "GO", "GRPC__LB__V1__INITIAL_LOAD_REPORT_RESPONSE__IMPLEMENTATION_IDENTIFIER__GO", 3 },
};
static const ProtobufCIntRange grpc__lb__v1__initial_load_report_response__implementation_identifier__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex grpc__lb__v1__initial_load_report_response__implementation_identifier__enum_values_by_name[4] =
{
  { "CPP", 1 },
  { "GO", 3 },
  { "IMPL_UNSPECIFIED", 0 },
  { "JAVA", 2 },
};
const ProtobufCEnumDescriptor grpc__lb__v1__initial_load_report_response__implementation_identifier__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "grpc.lb.v1.InitialLoadReportResponse.ImplementationIdentifier",
  "ImplementationIdentifier",
  "Grpc__Lb__V1__InitialLoadReportResponse__ImplementationIdentifier",
  "grpc.lb.v1",
  4,
  grpc__lb__v1__initial_load_report_response__implementation_identifier__enum_values_by_number,
  4,
  grpc__lb__v1__initial_load_report_response__implementation_identifier__enum_values_by_name,
  1,
  grpc__lb__v1__initial_load_report_response__implementation_identifier__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor grpc__lb__v1__initial_load_report_response__field_descriptors[3] =
{
  {
    "load_balancer_id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__InitialLoadReportResponse, load_balancer_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "implementation_id",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__InitialLoadReportResponse, implementation_id),
    &grpc__lb__v1__initial_load_report_response__implementation_identifier__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "server_version",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__InitialLoadReportResponse, server_version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned grpc__lb__v1__initial_load_report_response__field_indices_by_name[] = {
  1,   /* field[1] = implementation_id */
  0,   /* field[0] = load_balancer_id */
  2,   /* field[2] = server_version */
};
static const ProtobufCIntRange grpc__lb__v1__initial_load_report_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor grpc__lb__v1__initial_load_report_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "grpc.lb.v1.InitialLoadReportResponse",
  "InitialLoadReportResponse",
  "Grpc__Lb__V1__InitialLoadReportResponse",
  "grpc.lb.v1",
  sizeof(Grpc__Lb__V1__InitialLoadReportResponse),
  3,
  grpc__lb__v1__initial_load_report_response__field_descriptors,
  grpc__lb__v1__initial_load_report_response__field_indices_by_name,
  1,  grpc__lb__v1__initial_load_report_response__number_ranges,
  (ProtobufCMessageInit) grpc__lb__v1__initial_load_report_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor grpc__lb__v1__load_balancing_feedback__field_descriptors[3] =
{
  {
    "server_utilization",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__LoadBalancingFeedback, server_utilization),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "calls_per_second",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__LoadBalancingFeedback, calls_per_second),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "errors_per_second",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__LoadBalancingFeedback, errors_per_second),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned grpc__lb__v1__load_balancing_feedback__field_indices_by_name[] = {
  1,   /* field[1] = calls_per_second */
  2,   /* field[2] = errors_per_second */
  0,   /* field[0] = server_utilization */
};
static const ProtobufCIntRange grpc__lb__v1__load_balancing_feedback__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor grpc__lb__v1__load_balancing_feedback__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "grpc.lb.v1.LoadBalancingFeedback",
  "LoadBalancingFeedback",
  "Grpc__Lb__V1__LoadBalancingFeedback",
  "grpc.lb.v1",
  sizeof(Grpc__Lb__V1__LoadBalancingFeedback),
  3,
  grpc__lb__v1__load_balancing_feedback__field_descriptors,
  grpc__lb__v1__load_balancing_feedback__field_indices_by_name,
  1,  grpc__lb__v1__load_balancing_feedback__number_ranges,
  (ProtobufCMessageInit) grpc__lb__v1__load_balancing_feedback__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor grpc__lb__v1__load__field_descriptors[15] =
{
  {
    "load_balance_tag",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__Load, load_balance_tag),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "user_id",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__Load, user_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num_calls_started",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__Load, num_calls_started),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num_calls_in_progress",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Grpc__Lb__V1__Load, in_progress_report_case),
    offsetof(Grpc__Lb__V1__Load, num_calls_in_progress),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num_calls_finished_without_error",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__Load, num_calls_finished_without_error),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num_calls_finished_with_error",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__Load, num_calls_finished_with_error),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "total_bytes_sent",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__Load, total_bytes_sent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "total_bytes_received",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__Load, total_bytes_received),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "total_latency",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__Load, total_latency),
    &google__protobuf__duration__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "metric_data",
    11,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Grpc__Lb__V1__Load, n_metric_data),
    offsetof(Grpc__Lb__V1__Load, metric_data),
    &grpc__lb__v1__call_metric_data__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "load_key",
    12,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Grpc__Lb__V1__Load, orphaned_load_case),
    offsetof(Grpc__Lb__V1__Load, load_key),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_DEPRECATED | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "load_key_unknown",
    13,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Grpc__Lb__V1__Load, orphaned_load_case),
    offsetof(Grpc__Lb__V1__Load, load_key_unknown),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "orphaned_load_identifier",
    14,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Grpc__Lb__V1__Load, orphaned_load_case),
    offsetof(Grpc__Lb__V1__Load, orphaned_load_identifier),
    &grpc__lb__v1__orphaned_load_identifier__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "client_ip_address",
    15,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__Load, client_ip_address),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num_calls_finished_with_server_error",
    16,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__Load, num_calls_finished_with_server_error),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned grpc__lb__v1__load__field_indices_by_name[] = {
  13,   /* field[13] = client_ip_address */
  0,   /* field[0] = load_balance_tag */
  10,   /* field[10] = load_key */
  11,   /* field[11] = load_key_unknown */
  9,   /* field[9] = metric_data */
  5,   /* field[5] = num_calls_finished_with_error */
  14,   /* field[14] = num_calls_finished_with_server_error */
  4,   /* field[4] = num_calls_finished_without_error */
  3,   /* field[3] = num_calls_in_progress */
  2,   /* field[2] = num_calls_started */
  12,   /* field[12] = orphaned_load_identifier */
  7,   /* field[7] = total_bytes_received */
  6,   /* field[6] = total_bytes_sent */
  8,   /* field[8] = total_latency */
  1,   /* field[1] = user_id */
};
static const ProtobufCIntRange grpc__lb__v1__load__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 3, 1 },
  { 0, 15 }
};
const ProtobufCMessageDescriptor grpc__lb__v1__load__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "grpc.lb.v1.Load",
  "Load",
  "Grpc__Lb__V1__Load",
  "grpc.lb.v1",
  sizeof(Grpc__Lb__V1__Load),
  15,
  grpc__lb__v1__load__field_descriptors,
  grpc__lb__v1__load__field_indices_by_name,
  2,  grpc__lb__v1__load__number_ranges,
  (ProtobufCMessageInit) grpc__lb__v1__load__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor grpc__lb__v1__call_metric_data__field_descriptors[3] =
{
  {
    "metric_name",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__CallMetricData, metric_name),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num_calls_finished_with_metric",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__CallMetricData, num_calls_finished_with_metric),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "total_metric_value",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_DOUBLE,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__CallMetricData, total_metric_value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned grpc__lb__v1__call_metric_data__field_indices_by_name[] = {
  0,   /* field[0] = metric_name */
  1,   /* field[1] = num_calls_finished_with_metric */
  2,   /* field[2] = total_metric_value */
};
static const ProtobufCIntRange grpc__lb__v1__call_metric_data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor grpc__lb__v1__call_metric_data__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "grpc.lb.v1.CallMetricData",
  "CallMetricData",
  "Grpc__Lb__V1__CallMetricData",
  "grpc.lb.v1",
  sizeof(Grpc__Lb__V1__CallMetricData),
  3,
  grpc__lb__v1__call_metric_data__field_descriptors,
  grpc__lb__v1__call_metric_data__field_indices_by_name,
  1,  grpc__lb__v1__call_metric_data__number_ranges,
  (ProtobufCMessageInit) grpc__lb__v1__call_metric_data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor grpc__lb__v1__orphaned_load_identifier__field_descriptors[2] =
{
  {
    "load_key",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__OrphanedLoadIdentifier, load_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "load_balancer_id",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Grpc__Lb__V1__OrphanedLoadIdentifier, load_balancer_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned grpc__lb__v1__orphaned_load_identifier__field_indices_by_name[] = {
  1,   /* field[1] = load_balancer_id */
  0,   /* field[0] = load_key */
};
static const ProtobufCIntRange grpc__lb__v1__orphaned_load_identifier__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor grpc__lb__v1__orphaned_load_identifier__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "grpc.lb.v1.OrphanedLoadIdentifier",
  "OrphanedLoadIdentifier",
  "Grpc__Lb__V1__OrphanedLoadIdentifier",
  "grpc.lb.v1",
  sizeof(Grpc__Lb__V1__OrphanedLoadIdentifier),
  2,
  grpc__lb__v1__orphaned_load_identifier__field_descriptors,
  grpc__lb__v1__orphaned_load_identifier__field_indices_by_name,
  1,  grpc__lb__v1__orphaned_load_identifier__number_ranges,
  (ProtobufCMessageInit) grpc__lb__v1__orphaned_load_identifier__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCMethodDescriptor grpc__lb__v1__load_reporter__method_descriptors[1] =
{
  { "ReportLoad", &grpc__lb__v1__load_report_request__descriptor, &grpc__lb__v1__load_report_response__descriptor },
};
const unsigned grpc__lb__v1__load_reporter__method_indices_by_name[] = {
  0         /* ReportLoad */
};
const ProtobufCServiceDescriptor grpc__lb__v1__load_reporter__descriptor =
{
  PROTOBUF_C__SERVICE_DESCRIPTOR_MAGIC,
  "grpc.lb.v1.LoadReporter",
  "LoadReporter",
  "Grpc__Lb__V1__LoadReporter",
  "grpc.lb.v1",
  1,
  grpc__lb__v1__load_reporter__method_descriptors,
  grpc__lb__v1__load_reporter__method_indices_by_name
};
void grpc__lb__v1__load_reporter__report_load(ProtobufCService *service,
                                              const Grpc__Lb__V1__LoadReportRequest *input,
                                              Grpc__Lb__V1__LoadReportResponse_Closure closure,
                                              void *closure_data)
{
  assert(service->descriptor == &grpc__lb__v1__load_reporter__descriptor);
  service->invoke(service, 0, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void grpc__lb__v1__load_reporter__init (Grpc__Lb__V1__LoadReporter_Service *service,
                                        Grpc__Lb__V1__LoadReporter_ServiceDestroy destroy)
{
  protobuf_c_service_generated_init (&service->base,
                                     &grpc__lb__v1__load_reporter__descriptor,
                                     (ProtobufCServiceDestroy) destroy);
}
