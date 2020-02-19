// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/endpoint.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fendpoint_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fendpoint_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fendpoint_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fendpoint_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fendpoint_2eproto;
namespace google {
namespace api {
class Endpoint;
class EndpointDefaultTypeInternal;
extern EndpointDefaultTypeInternal _Endpoint_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::Endpoint* Arena::CreateMaybeMessage<::google::api::Endpoint>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

// ===================================================================

class Endpoint :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.Endpoint) */ {
 public:
  Endpoint();
  virtual ~Endpoint();

  Endpoint(const Endpoint& from);
  Endpoint(Endpoint&& from) noexcept
    : Endpoint() {
    *this = ::std::move(from);
  }

  inline Endpoint& operator=(const Endpoint& from) {
    CopyFrom(from);
    return *this;
  }
  inline Endpoint& operator=(Endpoint&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
  static const Endpoint& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Endpoint* internal_default_instance() {
    return reinterpret_cast<const Endpoint*>(
               &_Endpoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Endpoint& a, Endpoint& b) {
    a.Swap(&b);
  }
  inline void Swap(Endpoint* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Endpoint* New() const final {
    return CreateMaybeMessage<Endpoint>(nullptr);
  }

  Endpoint* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Endpoint>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Endpoint& from);
  void MergeFrom(const Endpoint& from);
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
  void InternalSwap(Endpoint* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.Endpoint";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fapi_2fendpoint_2eproto);
    return ::descriptor_table_google_2fapi_2fendpoint_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAliasesFieldNumber = 2,
    kFeaturesFieldNumber = 4,
    kNameFieldNumber = 1,
    kTargetFieldNumber = 101,
    kAllowCorsFieldNumber = 5,
  };
  // repeated string aliases = 2;
  int aliases_size() const;
  private:
  int _internal_aliases_size() const;
  public:
  void clear_aliases();
  const std::string& aliases(int index) const;
  std::string* mutable_aliases(int index);
  void set_aliases(int index, const std::string& value);
  void set_aliases(int index, std::string&& value);
  void set_aliases(int index, const char* value);
  void set_aliases(int index, const char* value, size_t size);
  std::string* add_aliases();
  void add_aliases(const std::string& value);
  void add_aliases(std::string&& value);
  void add_aliases(const char* value);
  void add_aliases(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& aliases() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_aliases();
  private:
  const std::string& _internal_aliases(int index) const;
  std::string* _internal_add_aliases();
  public:

  // repeated string features = 4;
  int features_size() const;
  private:
  int _internal_features_size() const;
  public:
  void clear_features();
  const std::string& features(int index) const;
  std::string* mutable_features(int index);
  void set_features(int index, const std::string& value);
  void set_features(int index, std::string&& value);
  void set_features(int index, const char* value);
  void set_features(int index, const char* value, size_t size);
  std::string* add_features();
  void add_features(const std::string& value);
  void add_features(std::string&& value);
  void add_features(const char* value);
  void add_features(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& features() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_features();
  private:
  const std::string& _internal_features(int index) const;
  std::string* _internal_add_features();
  public:

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string target = 101;
  void clear_target();
  const std::string& target() const;
  void set_target(const std::string& value);
  void set_target(std::string&& value);
  void set_target(const char* value);
  void set_target(const char* value, size_t size);
  std::string* mutable_target();
  std::string* release_target();
  void set_allocated_target(std::string* target);
  private:
  const std::string& _internal_target() const;
  void _internal_set_target(const std::string& value);
  std::string* _internal_mutable_target();
  public:

  // bool allow_cors = 5;
  void clear_allow_cors();
  bool allow_cors() const;
  void set_allow_cors(bool value);
  private:
  bool _internal_allow_cors() const;
  void _internal_set_allow_cors(bool value);
  public:

  // @@protoc_insertion_point(class_scope:google.api.Endpoint)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> aliases_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> features_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr target_;
  bool allow_cors_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fendpoint_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Endpoint

// string name = 1;
inline void Endpoint::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Endpoint::name() const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.name)
  return _internal_name();
}
inline void Endpoint::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:google.api.Endpoint.name)
}
inline std::string* Endpoint::mutable_name() {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.name)
  return _internal_mutable_name();
}
inline const std::string& Endpoint::_internal_name() const {
  return name_.GetNoArena();
}
inline void Endpoint::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Endpoint::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Endpoint.name)
}
inline void Endpoint::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.name)
}
inline void Endpoint::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.name)
}
inline std::string* Endpoint::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Endpoint::release_name() {
  // @@protoc_insertion_point(field_release:google.api.Endpoint.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Endpoint::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.api.Endpoint.name)
}

// repeated string aliases = 2;
inline int Endpoint::_internal_aliases_size() const {
  return aliases_.size();
}
inline int Endpoint::aliases_size() const {
  return _internal_aliases_size();
}
inline void Endpoint::clear_aliases() {
  aliases_.Clear();
}
inline std::string* Endpoint::add_aliases() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.aliases)
  return _internal_add_aliases();
}
inline const std::string& Endpoint::_internal_aliases(int index) const {
  return aliases_.Get(index);
}
inline const std::string& Endpoint::aliases(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.aliases)
  return _internal_aliases(index);
}
inline std::string* Endpoint::mutable_aliases(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.aliases)
  return aliases_.Mutable(index);
}
inline void Endpoint::set_aliases(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.aliases)
  aliases_.Mutable(index)->assign(value);
}
inline void Endpoint::set_aliases(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.aliases)
  aliases_.Mutable(index)->assign(std::move(value));
}
inline void Endpoint::set_aliases(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  aliases_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.aliases)
}
inline void Endpoint::set_aliases(int index, const char* value, size_t size) {
  aliases_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.aliases)
}
inline std::string* Endpoint::_internal_add_aliases() {
  return aliases_.Add();
}
inline void Endpoint::add_aliases(const std::string& value) {
  aliases_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.aliases)
}
inline void Endpoint::add_aliases(std::string&& value) {
  aliases_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Endpoint.aliases)
}
inline void Endpoint::add_aliases(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  aliases_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.aliases)
}
inline void Endpoint::add_aliases(const char* value, size_t size) {
  aliases_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.aliases)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Endpoint::aliases() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.aliases)
  return aliases_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Endpoint::mutable_aliases() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.aliases)
  return &aliases_;
}

// repeated string features = 4;
inline int Endpoint::_internal_features_size() const {
  return features_.size();
}
inline int Endpoint::features_size() const {
  return _internal_features_size();
}
inline void Endpoint::clear_features() {
  features_.Clear();
}
inline std::string* Endpoint::add_features() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.features)
  return _internal_add_features();
}
inline const std::string& Endpoint::_internal_features(int index) const {
  return features_.Get(index);
}
inline const std::string& Endpoint::features(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.features)
  return _internal_features(index);
}
inline std::string* Endpoint::mutable_features(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.features)
  return features_.Mutable(index);
}
inline void Endpoint::set_features(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.features)
  features_.Mutable(index)->assign(value);
}
inline void Endpoint::set_features(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.features)
  features_.Mutable(index)->assign(std::move(value));
}
inline void Endpoint::set_features(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  features_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.features)
}
inline void Endpoint::set_features(int index, const char* value, size_t size) {
  features_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.features)
}
inline std::string* Endpoint::_internal_add_features() {
  return features_.Add();
}
inline void Endpoint::add_features(const std::string& value) {
  features_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.features)
}
inline void Endpoint::add_features(std::string&& value) {
  features_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Endpoint.features)
}
inline void Endpoint::add_features(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  features_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.features)
}
inline void Endpoint::add_features(const char* value, size_t size) {
  features_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.features)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Endpoint::features() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.features)
  return features_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Endpoint::mutable_features() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.features)
  return &features_;
}

// string target = 101;
inline void Endpoint::clear_target() {
  target_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Endpoint::target() const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.target)
  return _internal_target();
}
inline void Endpoint::set_target(const std::string& value) {
  _internal_set_target(value);
  // @@protoc_insertion_point(field_set:google.api.Endpoint.target)
}
inline std::string* Endpoint::mutable_target() {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.target)
  return _internal_mutable_target();
}
inline const std::string& Endpoint::_internal_target() const {
  return target_.GetNoArena();
}
inline void Endpoint::_internal_set_target(const std::string& value) {
  
  target_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Endpoint::set_target(std::string&& value) {
  
  target_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Endpoint.target)
}
inline void Endpoint::set_target(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  target_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.target)
}
inline void Endpoint::set_target(const char* value, size_t size) {
  
  target_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.target)
}
inline std::string* Endpoint::_internal_mutable_target() {
  
  return target_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Endpoint::release_target() {
  // @@protoc_insertion_point(field_release:google.api.Endpoint.target)
  
  return target_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Endpoint::set_allocated_target(std::string* target) {
  if (target != nullptr) {
    
  } else {
    
  }
  target_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), target);
  // @@protoc_insertion_point(field_set_allocated:google.api.Endpoint.target)
}

// bool allow_cors = 5;
inline void Endpoint::clear_allow_cors() {
  allow_cors_ = false;
}
inline bool Endpoint::_internal_allow_cors() const {
  return allow_cors_;
}
inline bool Endpoint::allow_cors() const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.allow_cors)
  return _internal_allow_cors();
}
inline void Endpoint::_internal_set_allow_cors(bool value) {
  
  allow_cors_ = value;
}
inline void Endpoint::set_allow_cors(bool value) {
  _internal_set_allow_cors(value);
  // @@protoc_insertion_point(field_set:google.api.Endpoint.allow_cors)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fendpoint_2eproto