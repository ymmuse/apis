// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/backend.proto

#include "google/api/backend.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fbackend_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_BackendRule_google_2fapi_2fbackend_2eproto;
namespace google {
namespace api {
class BackendDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Backend> _instance;
} _Backend_default_instance_;
class BackendRuleDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<BackendRule> _instance;
} _BackendRule_default_instance_;
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_Backend_google_2fapi_2fbackend_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_Backend_default_instance_;
    new (ptr) ::google::api::Backend();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::Backend::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Backend_google_2fapi_2fbackend_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Backend_google_2fapi_2fbackend_2eproto}, {
      &scc_info_BackendRule_google_2fapi_2fbackend_2eproto.base,}};

static void InitDefaultsscc_info_BackendRule_google_2fapi_2fbackend_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_BackendRule_default_instance_;
    new (ptr) ::google::api::BackendRule();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::BackendRule::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_BackendRule_google_2fapi_2fbackend_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_BackendRule_google_2fapi_2fbackend_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fbackend_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fbackend_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fbackend_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fbackend_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Backend, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::Backend, rules_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::BackendRule, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::BackendRule, selector_),
  PROTOBUF_FIELD_OFFSET(::google::api::BackendRule, address_),
  PROTOBUF_FIELD_OFFSET(::google::api::BackendRule, deadline_),
  PROTOBUF_FIELD_OFFSET(::google::api::BackendRule, min_deadline_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::Backend)},
  { 6, -1, sizeof(::google::api::BackendRule)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_Backend_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_BackendRule_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fbackend_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030google/api/backend.proto\022\ngoogle.api\"1"
  "\n\007Backend\022&\n\005rules\030\001 \003(\0132\027.google.api.Ba"
  "ckendRule\"X\n\013BackendRule\022\020\n\010selector\030\001 \001"
  "(\t\022\017\n\007address\030\002 \001(\t\022\020\n\010deadline\030\003 \001(\001\022\024\n"
  "\014min_deadline\030\004 \001(\001Bn\n\016com.google.apiB\014B"
  "ackendProtoP\001ZEgoogle.golang.org/genprot"
  "o/googleapis/api/serviceconfig;serviceco"
  "nfig\242\002\004GAPIb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fbackend_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fbackend_2eproto_sccs[2] = {
  &scc_info_Backend_google_2fapi_2fbackend_2eproto.base,
  &scc_info_BackendRule_google_2fapi_2fbackend_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fbackend_2eproto_once;
static bool descriptor_table_google_2fapi_2fbackend_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fbackend_2eproto = {
  &descriptor_table_google_2fapi_2fbackend_2eproto_initialized, descriptor_table_protodef_google_2fapi_2fbackend_2eproto, "google/api/backend.proto", 299,
  &descriptor_table_google_2fapi_2fbackend_2eproto_once, descriptor_table_google_2fapi_2fbackend_2eproto_sccs, descriptor_table_google_2fapi_2fbackend_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_google_2fapi_2fbackend_2eproto::offsets,
  file_level_metadata_google_2fapi_2fbackend_2eproto, 2, file_level_enum_descriptors_google_2fapi_2fbackend_2eproto, file_level_service_descriptors_google_2fapi_2fbackend_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fbackend_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fbackend_2eproto), true);
namespace google {
namespace api {

// ===================================================================

void Backend::InitAsDefaultInstance() {
}
class Backend::_Internal {
 public:
};

Backend::Backend()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Backend)
}
Backend::Backend(const Backend& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      rules_(from.rules_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.Backend)
}

void Backend::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Backend_google_2fapi_2fbackend_2eproto.base);
}

Backend::~Backend() {
  // @@protoc_insertion_point(destructor:google.api.Backend)
  SharedDtor();
}

void Backend::SharedDtor() {
}

void Backend::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Backend& Backend::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Backend_google_2fapi_2fbackend_2eproto.base);
  return *internal_default_instance();
}


void Backend::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Backend)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rules_.Clear();
  _internal_metadata_.Clear();
}

const char* Backend::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .google.api.BackendRule rules = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_rules(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* Backend::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Backend)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.BackendRule rules = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_rules_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_rules(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Backend)
  return target;
}

size_t Backend::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Backend)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.BackendRule rules = 1;
  total_size += 1UL * this->_internal_rules_size();
  for (const auto& msg : this->rules_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Backend::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Backend)
  GOOGLE_DCHECK_NE(&from, this);
  const Backend* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Backend>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Backend)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Backend)
    MergeFrom(*source);
  }
}

void Backend::MergeFrom(const Backend& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Backend)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  rules_.MergeFrom(from.rules_);
}

void Backend::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Backend)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Backend::CopyFrom(const Backend& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Backend)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Backend::IsInitialized() const {
  return true;
}

void Backend::InternalSwap(Backend* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  rules_.InternalSwap(&other->rules_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Backend::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void BackendRule::InitAsDefaultInstance() {
}
class BackendRule::_Internal {
 public:
};

BackendRule::BackendRule()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.BackendRule)
}
BackendRule::BackendRule(const BackendRule& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  selector_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_selector().empty()) {
    selector_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.selector_);
  }
  address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_address().empty()) {
    address_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  ::memcpy(&deadline_, &from.deadline_,
    static_cast<size_t>(reinterpret_cast<char*>(&min_deadline_) -
    reinterpret_cast<char*>(&deadline_)) + sizeof(min_deadline_));
  // @@protoc_insertion_point(copy_constructor:google.api.BackendRule)
}

void BackendRule::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_BackendRule_google_2fapi_2fbackend_2eproto.base);
  selector_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&deadline_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&min_deadline_) -
      reinterpret_cast<char*>(&deadline_)) + sizeof(min_deadline_));
}

BackendRule::~BackendRule() {
  // @@protoc_insertion_point(destructor:google.api.BackendRule)
  SharedDtor();
}

void BackendRule::SharedDtor() {
  selector_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  address_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void BackendRule::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const BackendRule& BackendRule::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_BackendRule_google_2fapi_2fbackend_2eproto.base);
  return *internal_default_instance();
}


void BackendRule::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.BackendRule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  selector_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  address_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&deadline_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&min_deadline_) -
      reinterpret_cast<char*>(&deadline_)) + sizeof(min_deadline_));
  _internal_metadata_.Clear();
}

const char* BackendRule::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string selector = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_selector();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.BackendRule.selector"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string address = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_address();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.BackendRule.address"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double deadline = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          deadline_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double min_deadline = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          min_deadline_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* BackendRule::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.BackendRule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string selector = 1;
  if (this->selector().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_selector().data(), static_cast<int>(this->_internal_selector().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.BackendRule.selector");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_selector(), target);
  }

  // string address = 2;
  if (this->address().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_address().data(), static_cast<int>(this->_internal_address().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.BackendRule.address");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_address(), target);
  }

  // double deadline = 3;
  if (!(this->deadline() <= 0 && this->deadline() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_deadline(), target);
  }

  // double min_deadline = 4;
  if (!(this->min_deadline() <= 0 && this->min_deadline() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_min_deadline(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.BackendRule)
  return target;
}

size_t BackendRule::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.BackendRule)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string selector = 1;
  if (this->selector().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_selector());
  }

  // string address = 2;
  if (this->address().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_address());
  }

  // double deadline = 3;
  if (!(this->deadline() <= 0 && this->deadline() >= 0)) {
    total_size += 1 + 8;
  }

  // double min_deadline = 4;
  if (!(this->min_deadline() <= 0 && this->min_deadline() >= 0)) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BackendRule::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.BackendRule)
  GOOGLE_DCHECK_NE(&from, this);
  const BackendRule* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<BackendRule>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.BackendRule)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.BackendRule)
    MergeFrom(*source);
  }
}

void BackendRule::MergeFrom(const BackendRule& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.BackendRule)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.selector().size() > 0) {

    selector_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.selector_);
  }
  if (from.address().size() > 0) {

    address_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  if (!(from.deadline() <= 0 && from.deadline() >= 0)) {
    _internal_set_deadline(from._internal_deadline());
  }
  if (!(from.min_deadline() <= 0 && from.min_deadline() >= 0)) {
    _internal_set_min_deadline(from._internal_min_deadline());
  }
}

void BackendRule::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.BackendRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BackendRule::CopyFrom(const BackendRule& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.BackendRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BackendRule::IsInitialized() const {
  return true;
}

void BackendRule::InternalSwap(BackendRule* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  selector_.Swap(&other->selector_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  address_.Swap(&other->address_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(deadline_, other->deadline_);
  swap(min_deadline_, other->min_deadline_);
}

::PROTOBUF_NAMESPACE_ID::Metadata BackendRule::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::Backend* Arena::CreateMaybeMessage< ::google::api::Backend >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::Backend >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::BackendRule* Arena::CreateMaybeMessage< ::google::api::BackendRule >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::BackendRule >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
