// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/usage.proto

#include "google/api/usage.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fusage_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UsageRule_google_2fapi_2fusage_2eproto;
namespace google {
namespace api {
class UsageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Usage> _instance;
} _Usage_default_instance_;
class UsageRuleDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<UsageRule> _instance;
} _UsageRule_default_instance_;
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_Usage_google_2fapi_2fusage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_Usage_default_instance_;
    new (ptr) ::google::api::Usage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::Usage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Usage_google_2fapi_2fusage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Usage_google_2fapi_2fusage_2eproto}, {
      &scc_info_UsageRule_google_2fapi_2fusage_2eproto.base,}};

static void InitDefaultsscc_info_UsageRule_google_2fapi_2fusage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_UsageRule_default_instance_;
    new (ptr) ::google::api::UsageRule();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::UsageRule::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UsageRule_google_2fapi_2fusage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_UsageRule_google_2fapi_2fusage_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fusage_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fusage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fusage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fusage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Usage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::Usage, requirements_),
  PROTOBUF_FIELD_OFFSET(::google::api::Usage, rules_),
  PROTOBUF_FIELD_OFFSET(::google::api::Usage, producer_notification_channel_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::UsageRule, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::UsageRule, selector_),
  PROTOBUF_FIELD_OFFSET(::google::api::UsageRule, allow_unregistered_calls_),
  PROTOBUF_FIELD_OFFSET(::google::api::UsageRule, skip_service_control_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::Usage)},
  { 8, -1, sizeof(::google::api::UsageRule)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_Usage_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_UsageRule_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fusage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026google/api/usage.proto\022\ngoogle.api\032\034go"
  "ogle/api/annotations.proto\"j\n\005Usage\022\024\n\014r"
  "equirements\030\001 \003(\t\022$\n\005rules\030\006 \003(\0132\025.googl"
  "e.api.UsageRule\022%\n\035producer_notification"
  "_channel\030\007 \001(\t\"]\n\tUsageRule\022\020\n\010selector\030"
  "\001 \001(\t\022 \n\030allow_unregistered_calls\030\002 \001(\010\022"
  "\034\n\024skip_service_control\030\003 \001(\010Bl\n\016com.goo"
  "gle.apiB\nUsageProtoP\001ZEgoogle.golang.org"
  "/genproto/googleapis/api/serviceconfig;s"
  "erviceconfig\242\002\004GAPIb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fusage_2eproto_deps[1] = {
  &::descriptor_table_google_2fapi_2fannotations_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fusage_2eproto_sccs[2] = {
  &scc_info_Usage_google_2fapi_2fusage_2eproto.base,
  &scc_info_UsageRule_google_2fapi_2fusage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fusage_2eproto_once;
static bool descriptor_table_google_2fapi_2fusage_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fusage_2eproto = {
  &descriptor_table_google_2fapi_2fusage_2eproto_initialized, descriptor_table_protodef_google_2fapi_2fusage_2eproto, "google/api/usage.proto", 387,
  &descriptor_table_google_2fapi_2fusage_2eproto_once, descriptor_table_google_2fapi_2fusage_2eproto_sccs, descriptor_table_google_2fapi_2fusage_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_google_2fapi_2fusage_2eproto::offsets,
  file_level_metadata_google_2fapi_2fusage_2eproto, 2, file_level_enum_descriptors_google_2fapi_2fusage_2eproto, file_level_service_descriptors_google_2fapi_2fusage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fusage_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fusage_2eproto), true);
namespace google {
namespace api {

// ===================================================================

void Usage::InitAsDefaultInstance() {
}
class Usage::_Internal {
 public:
};

Usage::Usage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Usage)
}
Usage::Usage(const Usage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      requirements_(from.requirements_),
      rules_(from.rules_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  producer_notification_channel_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_producer_notification_channel().empty()) {
    producer_notification_channel_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.producer_notification_channel_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.Usage)
}

void Usage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Usage_google_2fapi_2fusage_2eproto.base);
  producer_notification_channel_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Usage::~Usage() {
  // @@protoc_insertion_point(destructor:google.api.Usage)
  SharedDtor();
}

void Usage::SharedDtor() {
  producer_notification_channel_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Usage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Usage& Usage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Usage_google_2fapi_2fusage_2eproto.base);
  return *internal_default_instance();
}


void Usage::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Usage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  requirements_.Clear();
  rules_.Clear();
  producer_notification_channel_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* Usage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated string requirements = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_requirements();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.Usage.requirements"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .google.api.UsageRule rules = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_rules(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<50>(ptr));
        } else goto handle_unusual;
        continue;
      // string producer_notification_channel = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_producer_notification_channel();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.Usage.producer_notification_channel"));
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Usage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Usage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string requirements = 1;
  for (int i = 0, n = this->_internal_requirements_size(); i < n; i++) {
    const auto& s = this->_internal_requirements(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.Usage.requirements");
    target = stream->WriteString(1, s, target);
  }

  // repeated .google.api.UsageRule rules = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_rules_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, this->_internal_rules(i), target, stream);
  }

  // string producer_notification_channel = 7;
  if (this->producer_notification_channel().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_producer_notification_channel().data(), static_cast<int>(this->_internal_producer_notification_channel().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.Usage.producer_notification_channel");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_producer_notification_channel(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Usage)
  return target;
}

size_t Usage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Usage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string requirements = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(requirements_.size());
  for (int i = 0, n = requirements_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      requirements_.Get(i));
  }

  // repeated .google.api.UsageRule rules = 6;
  total_size += 1UL * this->_internal_rules_size();
  for (const auto& msg : this->rules_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string producer_notification_channel = 7;
  if (this->producer_notification_channel().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_producer_notification_channel());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Usage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Usage)
  GOOGLE_DCHECK_NE(&from, this);
  const Usage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Usage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Usage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Usage)
    MergeFrom(*source);
  }
}

void Usage::MergeFrom(const Usage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Usage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  requirements_.MergeFrom(from.requirements_);
  rules_.MergeFrom(from.rules_);
  if (from.producer_notification_channel().size() > 0) {

    producer_notification_channel_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.producer_notification_channel_);
  }
}

void Usage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Usage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Usage::CopyFrom(const Usage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Usage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Usage::IsInitialized() const {
  return true;
}

void Usage::InternalSwap(Usage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  requirements_.InternalSwap(&other->requirements_);
  rules_.InternalSwap(&other->rules_);
  producer_notification_channel_.Swap(&other->producer_notification_channel_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata Usage::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void UsageRule::InitAsDefaultInstance() {
}
class UsageRule::_Internal {
 public:
};

UsageRule::UsageRule()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.UsageRule)
}
UsageRule::UsageRule(const UsageRule& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  selector_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_selector().empty()) {
    selector_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.selector_);
  }
  ::memcpy(&allow_unregistered_calls_, &from.allow_unregistered_calls_,
    static_cast<size_t>(reinterpret_cast<char*>(&skip_service_control_) -
    reinterpret_cast<char*>(&allow_unregistered_calls_)) + sizeof(skip_service_control_));
  // @@protoc_insertion_point(copy_constructor:google.api.UsageRule)
}

void UsageRule::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_UsageRule_google_2fapi_2fusage_2eproto.base);
  selector_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&allow_unregistered_calls_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&skip_service_control_) -
      reinterpret_cast<char*>(&allow_unregistered_calls_)) + sizeof(skip_service_control_));
}

UsageRule::~UsageRule() {
  // @@protoc_insertion_point(destructor:google.api.UsageRule)
  SharedDtor();
}

void UsageRule::SharedDtor() {
  selector_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void UsageRule::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const UsageRule& UsageRule::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_UsageRule_google_2fapi_2fusage_2eproto.base);
  return *internal_default_instance();
}


void UsageRule::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.UsageRule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  selector_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&allow_unregistered_calls_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&skip_service_control_) -
      reinterpret_cast<char*>(&allow_unregistered_calls_)) + sizeof(skip_service_control_));
  _internal_metadata_.Clear();
}

const char* UsageRule::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.UsageRule.selector"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool allow_unregistered_calls = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          allow_unregistered_calls_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool skip_service_control = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          skip_service_control_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* UsageRule::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.UsageRule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string selector = 1;
  if (this->selector().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_selector().data(), static_cast<int>(this->_internal_selector().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.UsageRule.selector");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_selector(), target);
  }

  // bool allow_unregistered_calls = 2;
  if (this->allow_unregistered_calls() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_allow_unregistered_calls(), target);
  }

  // bool skip_service_control = 3;
  if (this->skip_service_control() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_skip_service_control(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.UsageRule)
  return target;
}

size_t UsageRule::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.UsageRule)
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

  // bool allow_unregistered_calls = 2;
  if (this->allow_unregistered_calls() != 0) {
    total_size += 1 + 1;
  }

  // bool skip_service_control = 3;
  if (this->skip_service_control() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UsageRule::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.UsageRule)
  GOOGLE_DCHECK_NE(&from, this);
  const UsageRule* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<UsageRule>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.UsageRule)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.UsageRule)
    MergeFrom(*source);
  }
}

void UsageRule::MergeFrom(const UsageRule& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.UsageRule)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.selector().size() > 0) {

    selector_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.selector_);
  }
  if (from.allow_unregistered_calls() != 0) {
    _internal_set_allow_unregistered_calls(from._internal_allow_unregistered_calls());
  }
  if (from.skip_service_control() != 0) {
    _internal_set_skip_service_control(from._internal_skip_service_control());
  }
}

void UsageRule::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.UsageRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UsageRule::CopyFrom(const UsageRule& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.UsageRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UsageRule::IsInitialized() const {
  return true;
}

void UsageRule::InternalSwap(UsageRule* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  selector_.Swap(&other->selector_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(allow_unregistered_calls_, other->allow_unregistered_calls_);
  swap(skip_service_control_, other->skip_service_control_);
}

::PROTOBUF_NAMESPACE_ID::Metadata UsageRule::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::Usage* Arena::CreateMaybeMessage< ::google::api::Usage >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::Usage >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::UsageRule* Arena::CreateMaybeMessage< ::google::api::UsageRule >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::UsageRule >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
