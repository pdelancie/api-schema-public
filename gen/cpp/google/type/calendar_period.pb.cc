// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/calendar_period.proto

#include "google/type/calendar_period.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace google {
namespace type {
}  // namespace type
}  // namespace google
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_google_2ftype_2fcalendar_5fperiod_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2ftype_2fcalendar_5fperiod_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2ftype_2fcalendar_5fperiod_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2ftype_2fcalendar_5fperiod_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_google_2ftype_2fcalendar_5fperiod_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!google/type/calendar_period.proto\022\013goo"
  "gle.type*\177\n\016CalendarPeriod\022\037\n\033CALENDAR_P"
  "ERIOD_UNSPECIFIED\020\000\022\007\n\003DAY\020\001\022\010\n\004WEEK\020\002\022\r"
  "\n\tFORTNIGHT\020\003\022\t\n\005MONTH\020\004\022\013\n\007QUARTER\020\005\022\010\n"
  "\004HALF\020\006\022\010\n\004YEAR\020\007Bx\n\017com.google.typeB\023Ca"
  "lendarPeriodProtoP\001ZHgoogle.golang.org/g"
  "enproto/googleapis/type/calendarperiod;c"
  "alendarperiod\242\002\003GTPb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2ftype_2fcalendar_5fperiod_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2ftype_2fcalendar_5fperiod_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2ftype_2fcalendar_5fperiod_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2fcalendar_5fperiod_2eproto = {
  false, false, descriptor_table_protodef_google_2ftype_2fcalendar_5fperiod_2eproto, "google/type/calendar_period.proto", 307,
  &descriptor_table_google_2ftype_2fcalendar_5fperiod_2eproto_once, descriptor_table_google_2ftype_2fcalendar_5fperiod_2eproto_sccs, descriptor_table_google_2ftype_2fcalendar_5fperiod_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_google_2ftype_2fcalendar_5fperiod_2eproto::offsets,
  file_level_metadata_google_2ftype_2fcalendar_5fperiod_2eproto, 0, file_level_enum_descriptors_google_2ftype_2fcalendar_5fperiod_2eproto, file_level_service_descriptors_google_2ftype_2fcalendar_5fperiod_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2ftype_2fcalendar_5fperiod_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2ftype_2fcalendar_5fperiod_2eproto)), true);
namespace google {
namespace type {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CalendarPeriod_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2ftype_2fcalendar_5fperiod_2eproto);
  return file_level_enum_descriptors_google_2ftype_2fcalendar_5fperiod_2eproto[0];
}
bool CalendarPeriod_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
