// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/consumer.proto

#include "google/api/consumer.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fconsumer_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Property_google_2fapi_2fconsumer_2eproto;
namespace google {
namespace api {
class ProjectPropertiesDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ProjectProperties> _instance;
} _ProjectProperties_default_instance_;
class PropertyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Property> _instance;
} _Property_default_instance_;
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_ProjectProperties_google_2fapi_2fconsumer_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_ProjectProperties_default_instance_;
    new (ptr) ::google::api::ProjectProperties();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::ProjectProperties::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ProjectProperties_google_2fapi_2fconsumer_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ProjectProperties_google_2fapi_2fconsumer_2eproto}, {
      &scc_info_Property_google_2fapi_2fconsumer_2eproto.base,}};

static void InitDefaultsscc_info_Property_google_2fapi_2fconsumer_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_Property_default_instance_;
    new (ptr) ::google::api::Property();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::Property::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Property_google_2fapi_2fconsumer_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Property_google_2fapi_2fconsumer_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fconsumer_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2fapi_2fconsumer_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fconsumer_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fconsumer_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::ProjectProperties, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::ProjectProperties, properties_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Property, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::Property, name_),
  PROTOBUF_FIELD_OFFSET(::google::api::Property, type_),
  PROTOBUF_FIELD_OFFSET(::google::api::Property, description_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::ProjectProperties)},
  { 6, -1, sizeof(::google::api::Property)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_ProjectProperties_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_Property_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fconsumer_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031google/api/consumer.proto\022\ngoogle.api\""
  "=\n\021ProjectProperties\022(\n\nproperties\030\001 \003(\013"
  "2\024.google.api.Property\"\254\001\n\010Property\022\014\n\004n"
  "ame\030\001 \001(\t\022/\n\004type\030\002 \001(\0162!.google.api.Pro"
  "perty.PropertyType\022\023\n\013description\030\003 \001(\t\""
  "L\n\014PropertyType\022\017\n\013UNSPECIFIED\020\000\022\t\n\005INT6"
  "4\020\001\022\010\n\004BOOL\020\002\022\n\n\006STRING\020\003\022\n\n\006DOUBLE\020\004Bh\n"
  "\016com.google.apiB\rConsumerProtoP\001ZEgoogle"
  ".golang.org/genproto/googleapis/api/serv"
  "iceconfig;serviceconfigb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fconsumer_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fconsumer_2eproto_sccs[2] = {
  &scc_info_ProjectProperties_google_2fapi_2fconsumer_2eproto.base,
  &scc_info_Property_google_2fapi_2fconsumer_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fconsumer_2eproto_once;
static bool descriptor_table_google_2fapi_2fconsumer_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fconsumer_2eproto = {
  &descriptor_table_google_2fapi_2fconsumer_2eproto_initialized, descriptor_table_protodef_google_2fapi_2fconsumer_2eproto, "google/api/consumer.proto", 391,
  &descriptor_table_google_2fapi_2fconsumer_2eproto_once, descriptor_table_google_2fapi_2fconsumer_2eproto_sccs, descriptor_table_google_2fapi_2fconsumer_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_google_2fapi_2fconsumer_2eproto::offsets,
  file_level_metadata_google_2fapi_2fconsumer_2eproto, 2, file_level_enum_descriptors_google_2fapi_2fconsumer_2eproto, file_level_service_descriptors_google_2fapi_2fconsumer_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fconsumer_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fconsumer_2eproto), true);
namespace google {
namespace api {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Property_PropertyType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fapi_2fconsumer_2eproto);
  return file_level_enum_descriptors_google_2fapi_2fconsumer_2eproto[0];
}
bool Property_PropertyType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Property_PropertyType Property::UNSPECIFIED;
constexpr Property_PropertyType Property::INT64;
constexpr Property_PropertyType Property::BOOL;
constexpr Property_PropertyType Property::STRING;
constexpr Property_PropertyType Property::DOUBLE;
constexpr Property_PropertyType Property::PropertyType_MIN;
constexpr Property_PropertyType Property::PropertyType_MAX;
constexpr int Property::PropertyType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void ProjectProperties::InitAsDefaultInstance() {
}
class ProjectProperties::_Internal {
 public:
};

ProjectProperties::ProjectProperties()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.ProjectProperties)
}
ProjectProperties::ProjectProperties(const ProjectProperties& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      properties_(from.properties_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.ProjectProperties)
}

void ProjectProperties::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ProjectProperties_google_2fapi_2fconsumer_2eproto.base);
}

ProjectProperties::~ProjectProperties() {
  // @@protoc_insertion_point(destructor:google.api.ProjectProperties)
  SharedDtor();
}

void ProjectProperties::SharedDtor() {
}

void ProjectProperties::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ProjectProperties& ProjectProperties::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ProjectProperties_google_2fapi_2fconsumer_2eproto.base);
  return *internal_default_instance();
}


void ProjectProperties::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.ProjectProperties)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  properties_.Clear();
  _internal_metadata_.Clear();
}

const char* ProjectProperties::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .google.api.Property properties = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_properties(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ProjectProperties::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.ProjectProperties)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.Property properties = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_properties_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_properties(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.ProjectProperties)
  return target;
}

size_t ProjectProperties::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.ProjectProperties)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.Property properties = 1;
  total_size += 1UL * this->_internal_properties_size();
  for (const auto& msg : this->properties_) {
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

void ProjectProperties::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.ProjectProperties)
  GOOGLE_DCHECK_NE(&from, this);
  const ProjectProperties* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ProjectProperties>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.ProjectProperties)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.ProjectProperties)
    MergeFrom(*source);
  }
}

void ProjectProperties::MergeFrom(const ProjectProperties& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.ProjectProperties)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  properties_.MergeFrom(from.properties_);
}

void ProjectProperties::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.ProjectProperties)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProjectProperties::CopyFrom(const ProjectProperties& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.ProjectProperties)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProjectProperties::IsInitialized() const {
  return true;
}

void ProjectProperties::InternalSwap(ProjectProperties* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  properties_.InternalSwap(&other->properties_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProjectProperties::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Property::InitAsDefaultInstance() {
}
class Property::_Internal {
 public:
};

Property::Property()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Property)
}
Property::Property(const Property& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_description().empty()) {
    description_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:google.api.Property)
}

void Property::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Property_google_2fapi_2fconsumer_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
}

Property::~Property() {
  // @@protoc_insertion_point(destructor:google.api.Property)
  SharedDtor();
}

void Property::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Property::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Property& Property::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Property_google_2fapi_2fconsumer_2eproto.base);
  return *internal_default_instance();
}


void Property::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Property)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
  _internal_metadata_.Clear();
}

const char* Property::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.Property.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.api.Property.PropertyType type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::google::api::Property_PropertyType>(val));
        } else goto handle_unusual;
        continue;
      // string description = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_description();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.Property.description"));
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

::PROTOBUF_NAMESPACE_ID::uint8* Property::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Property)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.Property.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // .google.api.Property.PropertyType type = 2;
  if (this->type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_type(), target);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_description().data(), static_cast<int>(this->_internal_description().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.Property.description");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_description(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Property)
  return target;
}

size_t Property::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Property)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string description = 3;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_description());
  }

  // .google.api.Property.PropertyType type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Property::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Property)
  GOOGLE_DCHECK_NE(&from, this);
  const Property* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Property>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Property)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Property)
    MergeFrom(*source);
  }
}

void Property::MergeFrom(const Property& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Property)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
}

void Property::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Property)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Property::CopyFrom(const Property& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Property)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Property::IsInitialized() const {
  return true;
}

void Property::InternalSwap(Property* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  description_.Swap(&other->description_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Property::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::ProjectProperties* Arena::CreateMaybeMessage< ::google::api::ProjectProperties >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::ProjectProperties >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::Property* Arena::CreateMaybeMessage< ::google::api::Property >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::Property >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>