// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kentik/core/v202303/annotations.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_kentik_2fcore_2fv202303_2fannotations_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_kentik_2fcore_2fv202303_2fannotations_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_kentik_2fcore_2fv202303_2fannotations_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_kentik_2fcore_2fv202303_2fannotations_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_kentik_2fcore_2fv202303_2fannotations_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace kentik {
namespace core {
namespace v202303 {

enum ServiceVisibility : int {
  SERVICE_VISIBILITY_PRIVATE = 0,
  SERVICE_VISIBILITY_PROTECTED = 1,
  SERVICE_VISIBILITY_INTERNAL = 2,
  SERVICE_VISIBILITY_PUBLIC = 3,
  ServiceVisibility_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ServiceVisibility_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ServiceVisibility_IsValid(int value);
constexpr ServiceVisibility ServiceVisibility_MIN = SERVICE_VISIBILITY_PRIVATE;
constexpr ServiceVisibility ServiceVisibility_MAX = SERVICE_VISIBILITY_PUBLIC;
constexpr int ServiceVisibility_ARRAYSIZE = ServiceVisibility_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ServiceVisibility_descriptor();
template<typename T>
inline const std::string& ServiceVisibility_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ServiceVisibility>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ServiceVisibility_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ServiceVisibility_descriptor(), enum_t_value);
}
inline bool ServiceVisibility_Parse(
    const std::string& name, ServiceVisibility* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ServiceVisibility>(
    ServiceVisibility_descriptor(), name, value);
}
// ===================================================================


// ===================================================================

static const int kServiceScopeFieldNumber = 5501;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  service_scope;
static const int kPrivateServiceFieldNumber = 5503;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  private_service;
static const int kVisibilityFieldNumber = 5506;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::EnumTypeTraits< ::kentik::core::v202303::ServiceVisibility, ::kentik::core::v202303::ServiceVisibility_IsValid>, 14, false >
  visibility;
static const int kMethodScopeFieldNumber = 5502;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  method_scope;
static const int kPrivateMethodFieldNumber = 5504;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  private_method;
static const int kMethodCategoryFieldNumber = 5505;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  method_category;

// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v202303
}  // namespace core
}  // namespace kentik

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::kentik::core::v202303::ServiceVisibility> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::kentik::core::v202303::ServiceVisibility>() {
  return ::kentik::core::v202303::ServiceVisibility_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_kentik_2fcore_2fv202303_2fannotations_2eproto
