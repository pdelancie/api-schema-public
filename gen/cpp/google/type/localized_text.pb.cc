// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/localized_text.proto

#include "google/type/localized_text.pb.h"

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
class LocalizedTextDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LocalizedText> _instance;
} _LocalizedText_default_instance_;
}  // namespace type
}  // namespace google
static void InitDefaultsscc_info_LocalizedText_google_2ftype_2flocalized_5ftext_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::type::_LocalizedText_default_instance_;
    new (ptr) ::google::type::LocalizedText();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::type::LocalizedText::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LocalizedText_google_2ftype_2flocalized_5ftext_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LocalizedText_google_2ftype_2flocalized_5ftext_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2ftype_2flocalized_5ftext_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2ftype_2flocalized_5ftext_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2ftype_2flocalized_5ftext_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2ftype_2flocalized_5ftext_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::type::LocalizedText, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::type::LocalizedText, text_),
  PROTOBUF_FIELD_OFFSET(::google::type::LocalizedText, language_code_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::type::LocalizedText)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::type::_LocalizedText_default_instance_),
};

const char descriptor_table_protodef_google_2ftype_2flocalized_5ftext_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n google/type/localized_text.proto\022\013goog"
  "le.type\"H\n\rLocalizedText\022\022\n\004text\030\001 \001(\tR\004"
  "text\022#\n\rlanguage_code\030\002 \001(\tR\014languageCod"
  "eBz\n\017com.google.typeB\022LocalizedTextProto"
  "P\001ZHgoogle.golang.org/genproto/googleapi"
  "s/type/localized_text;localized_text\370\001\001\242"
  "\002\003GTPb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2ftype_2flocalized_5ftext_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2ftype_2flocalized_5ftext_2eproto_sccs[1] = {
  &scc_info_LocalizedText_google_2ftype_2flocalized_5ftext_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2ftype_2flocalized_5ftext_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2flocalized_5ftext_2eproto = {
  false, false, descriptor_table_protodef_google_2ftype_2flocalized_5ftext_2eproto, "google/type/localized_text.proto", 253,
  &descriptor_table_google_2ftype_2flocalized_5ftext_2eproto_once, descriptor_table_google_2ftype_2flocalized_5ftext_2eproto_sccs, descriptor_table_google_2ftype_2flocalized_5ftext_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_google_2ftype_2flocalized_5ftext_2eproto::offsets,
  file_level_metadata_google_2ftype_2flocalized_5ftext_2eproto, 1, file_level_enum_descriptors_google_2ftype_2flocalized_5ftext_2eproto, file_level_service_descriptors_google_2ftype_2flocalized_5ftext_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2ftype_2flocalized_5ftext_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2ftype_2flocalized_5ftext_2eproto)), true);
namespace google {
namespace type {

// ===================================================================

void LocalizedText::InitAsDefaultInstance() {
}
class LocalizedText::_Internal {
 public:
};

LocalizedText::LocalizedText(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.type.LocalizedText)
}
LocalizedText::LocalizedText(const LocalizedText& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  text_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_text().empty()) {
    text_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_text(),
      GetArena());
  }
  language_code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_language_code().empty()) {
    language_code_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_language_code(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:google.type.LocalizedText)
}

void LocalizedText::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LocalizedText_google_2ftype_2flocalized_5ftext_2eproto.base);
  text_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  language_code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

LocalizedText::~LocalizedText() {
  // @@protoc_insertion_point(destructor:google.type.LocalizedText)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LocalizedText::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  text_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  language_code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LocalizedText::ArenaDtor(void* object) {
  LocalizedText* _this = reinterpret_cast< LocalizedText* >(object);
  (void)_this;
}
void LocalizedText::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LocalizedText::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LocalizedText& LocalizedText::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LocalizedText_google_2ftype_2flocalized_5ftext_2eproto.base);
  return *internal_default_instance();
}


void LocalizedText::Clear() {
// @@protoc_insertion_point(message_clear_start:google.type.LocalizedText)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  text_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  language_code_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LocalizedText::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string text = 1[json_name = "text"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_text();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.type.LocalizedText.text"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string language_code = 2[json_name = "languageCode"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_language_code();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.type.LocalizedText.language_code"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LocalizedText::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.type.LocalizedText)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string text = 1[json_name = "text"];
  if (this->text().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_text().data(), static_cast<int>(this->_internal_text().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.type.LocalizedText.text");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_text(), target);
  }

  // string language_code = 2[json_name = "languageCode"];
  if (this->language_code().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_language_code().data(), static_cast<int>(this->_internal_language_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.type.LocalizedText.language_code");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_language_code(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.type.LocalizedText)
  return target;
}

size_t LocalizedText::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.type.LocalizedText)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string text = 1[json_name = "text"];
  if (this->text().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_text());
  }

  // string language_code = 2[json_name = "languageCode"];
  if (this->language_code().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_language_code());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LocalizedText::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.type.LocalizedText)
  GOOGLE_DCHECK_NE(&from, this);
  const LocalizedText* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LocalizedText>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.type.LocalizedText)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.type.LocalizedText)
    MergeFrom(*source);
  }
}

void LocalizedText::MergeFrom(const LocalizedText& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.type.LocalizedText)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.text().size() > 0) {
    _internal_set_text(from._internal_text());
  }
  if (from.language_code().size() > 0) {
    _internal_set_language_code(from._internal_language_code());
  }
}

void LocalizedText::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.type.LocalizedText)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LocalizedText::CopyFrom(const LocalizedText& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.type.LocalizedText)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LocalizedText::IsInitialized() const {
  return true;
}

void LocalizedText::InternalSwap(LocalizedText* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  text_.Swap(&other->text_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  language_code_.Swap(&other->language_code_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata LocalizedText::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::type::LocalizedText* Arena::CreateMaybeMessage< ::google::type::LocalizedText >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::type::LocalizedText >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
