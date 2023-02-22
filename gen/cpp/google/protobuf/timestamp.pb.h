// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/timestamp.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2ftimestamp_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2ftimestamp_2eproto

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2ftimestamp_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2ftimestamp_2eproto;
PROTOBUF_NAMESPACE_OPEN
class Timestamp;
class TimestampDefaultTypeInternal;
extern TimestampDefaultTypeInternal _Timestamp_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NAMESPACE_ID::Timestamp* Arena::CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN

// ===================================================================

class Timestamp PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Timestamp) */ {
 public:
  inline Timestamp() : Timestamp(nullptr) {};
  virtual ~Timestamp();

  Timestamp(const Timestamp& from);
  Timestamp(Timestamp&& from) noexcept
    : Timestamp() {
    *this = ::std::move(from);
  }

  inline Timestamp& operator=(const Timestamp& from) {
    CopyFrom(from);
    return *this;
  }
  inline Timestamp& operator=(Timestamp&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Timestamp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Timestamp* internal_default_instance() {
    return reinterpret_cast<const Timestamp*>(
               &_Timestamp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Timestamp& a, Timestamp& b) {
    a.Swap(&b);
  }
  inline void Swap(Timestamp* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Timestamp* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Timestamp* New() const final {
    return CreateMaybeMessage<Timestamp>(nullptr);
  }

  Timestamp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Timestamp>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Timestamp& from);
  void MergeFrom(const Timestamp& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Timestamp* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.protobuf.Timestamp";
  }
  protected:
  explicit Timestamp(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto);
    return ::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSecondsFieldNumber = 1,
    kNanosFieldNumber = 2,
  };
  // int64 seconds = 1[json_name = "seconds"];
  void clear_seconds();
  ::PROTOBUF_NAMESPACE_ID::int64 seconds() const;
  void set_seconds(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_seconds() const;
  void _internal_set_seconds(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int32 nanos = 2[json_name = "nanos"];
  void clear_nanos();
  ::PROTOBUF_NAMESPACE_ID::int32 nanos() const;
  void set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_nanos() const;
  void _internal_set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:google.protobuf.Timestamp)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int64 seconds_;
  ::PROTOBUF_NAMESPACE_ID::int32 nanos_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2ftimestamp_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Timestamp

// int64 seconds = 1[json_name = "seconds"];
inline void Timestamp::clear_seconds() {
  seconds_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Timestamp::_internal_seconds() const {
  return seconds_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Timestamp::seconds() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Timestamp.seconds)
  return _internal_seconds();
}
inline void Timestamp::_internal_set_seconds(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  seconds_ = value;
}
inline void Timestamp::set_seconds(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_seconds(value);
  // @@protoc_insertion_point(field_set:google.protobuf.Timestamp.seconds)
}

// int32 nanos = 2[json_name = "nanos"];
inline void Timestamp::clear_nanos() {
  nanos_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Timestamp::_internal_nanos() const {
  return nanos_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Timestamp::nanos() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Timestamp.nanos)
  return _internal_nanos();
}
inline void Timestamp::_internal_set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  nanos_ = value;
}
inline void Timestamp::set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_nanos(value);
  // @@protoc_insertion_point(field_set:google.protobuf.Timestamp.nanos)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2ftimestamp_2eproto
