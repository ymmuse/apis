// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/experimental/experimental.proto

#include "google/api/experimental/experimental.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AuthorizationConfig_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto;
namespace google {
namespace api {
class ExperimentalDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Experimental> _instance;
} _Experimental_default_instance_;
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_Experimental_google_2fapi_2fexperimental_2fexperimental_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_Experimental_default_instance_;
    new (ptr) ::google::api::Experimental();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::Experimental::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Experimental_google_2fapi_2fexperimental_2fexperimental_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Experimental_google_2fapi_2fexperimental_2fexperimental_2eproto}, {
      &scc_info_AuthorizationConfig_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fexperimental_2fexperimental_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fexperimental_2fexperimental_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fexperimental_2fexperimental_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fexperimental_2fexperimental_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Experimental, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::Experimental, authorization_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::Experimental)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_Experimental_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fexperimental_2fexperimental_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n*google/api/experimental/experimental.p"
  "roto\022\ngoogle.api\032\034google/api/annotations"
  ".proto\0322google/api/experimental/authoriz"
  "ation_config.proto\"F\n\014Experimental\0226\n\rau"
  "thorization\030\010 \001(\0132\037.google.api.Authoriza"
  "tionConfigB[\n\016com.google.apiB\021Experiment"
  "alProtoP\001Z-google.golang.org/genproto/go"
  "ogleapis/api;api\242\002\004GAPIb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto_deps[2] = {
  &::descriptor_table_google_2fapi_2fannotations_2eproto,
  &::descriptor_table_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto_sccs[1] = {
  &scc_info_Experimental_google_2fapi_2fexperimental_2fexperimental_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto_once;
static bool descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto = {
  &descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto_initialized, descriptor_table_protodef_google_2fapi_2fexperimental_2fexperimental_2eproto, "google/api/experimental/experimental.proto", 311,
  &descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto_once, descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto_sccs, descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_google_2fapi_2fexperimental_2fexperimental_2eproto::offsets,
  file_level_metadata_google_2fapi_2fexperimental_2fexperimental_2eproto, 1, file_level_enum_descriptors_google_2fapi_2fexperimental_2fexperimental_2eproto, file_level_service_descriptors_google_2fapi_2fexperimental_2fexperimental_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fexperimental_2fexperimental_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto), true);
namespace google {
namespace api {

// ===================================================================

void Experimental::InitAsDefaultInstance() {
  ::google::api::_Experimental_default_instance_._instance.get_mutable()->authorization_ = const_cast< ::google::api::AuthorizationConfig*>(
      ::google::api::AuthorizationConfig::internal_default_instance());
}
class Experimental::_Internal {
 public:
  static const ::google::api::AuthorizationConfig& authorization(const Experimental* msg);
};

const ::google::api::AuthorizationConfig&
Experimental::_Internal::authorization(const Experimental* msg) {
  return *msg->authorization_;
}
void Experimental::clear_authorization() {
  if (GetArenaNoVirtual() == nullptr && authorization_ != nullptr) {
    delete authorization_;
  }
  authorization_ = nullptr;
}
Experimental::Experimental()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Experimental)
}
Experimental::Experimental(const Experimental& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_authorization()) {
    authorization_ = new ::google::api::AuthorizationConfig(*from.authorization_);
  } else {
    authorization_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:google.api.Experimental)
}

void Experimental::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Experimental_google_2fapi_2fexperimental_2fexperimental_2eproto.base);
  authorization_ = nullptr;
}

Experimental::~Experimental() {
  // @@protoc_insertion_point(destructor:google.api.Experimental)
  SharedDtor();
}

void Experimental::SharedDtor() {
  if (this != internal_default_instance()) delete authorization_;
}

void Experimental::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Experimental& Experimental::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Experimental_google_2fapi_2fexperimental_2fexperimental_2eproto.base);
  return *internal_default_instance();
}


void Experimental::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Experimental)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && authorization_ != nullptr) {
    delete authorization_;
  }
  authorization_ = nullptr;
  _internal_metadata_.Clear();
}

const char* Experimental::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .google.api.AuthorizationConfig authorization = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_authorization(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Experimental::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Experimental)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.api.AuthorizationConfig authorization = 8;
  if (this->has_authorization()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        8, _Internal::authorization(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Experimental)
  return target;
}

size_t Experimental::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Experimental)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .google.api.AuthorizationConfig authorization = 8;
  if (this->has_authorization()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *authorization_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Experimental::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Experimental)
  GOOGLE_DCHECK_NE(&from, this);
  const Experimental* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Experimental>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Experimental)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Experimental)
    MergeFrom(*source);
  }
}

void Experimental::MergeFrom(const Experimental& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Experimental)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_authorization()) {
    _internal_mutable_authorization()->::google::api::AuthorizationConfig::MergeFrom(from._internal_authorization());
  }
}

void Experimental::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Experimental)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Experimental::CopyFrom(const Experimental& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Experimental)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Experimental::IsInitialized() const {
  return true;
}

void Experimental::InternalSwap(Experimental* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(authorization_, other->authorization_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Experimental::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::Experimental* Arena::CreateMaybeMessage< ::google::api::Experimental >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::Experimental >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
