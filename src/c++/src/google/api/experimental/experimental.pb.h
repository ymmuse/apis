// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/experimental/experimental.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fexperimental_2fexperimental_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fexperimental_2fexperimental_2eproto

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
#include "google/api/experimental/authorization_config.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fexperimental_2fexperimental_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fexperimental_2fexperimental_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto;
namespace google {
namespace api {
class Experimental;
class ExperimentalDefaultTypeInternal;
extern ExperimentalDefaultTypeInternal _Experimental_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::Experimental* Arena::CreateMaybeMessage<::google::api::Experimental>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

// ===================================================================

class Experimental :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.Experimental) */ {
 public:
  Experimental();
  virtual ~Experimental();

  Experimental(const Experimental& from);
  Experimental(Experimental&& from) noexcept
    : Experimental() {
    *this = ::std::move(from);
  }

  inline Experimental& operator=(const Experimental& from) {
    CopyFrom(from);
    return *this;
  }
  inline Experimental& operator=(Experimental&& from) noexcept {
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
  static const Experimental& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Experimental* internal_default_instance() {
    return reinterpret_cast<const Experimental*>(
               &_Experimental_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Experimental& a, Experimental& b) {
    a.Swap(&b);
  }
  inline void Swap(Experimental* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Experimental* New() const final {
    return CreateMaybeMessage<Experimental>(nullptr);
  }

  Experimental* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Experimental>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Experimental& from);
  void MergeFrom(const Experimental& from);
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
  void InternalSwap(Experimental* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.Experimental";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto);
    return ::descriptor_table_google_2fapi_2fexperimental_2fexperimental_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAuthorizationFieldNumber = 8,
  };
  // .google.api.AuthorizationConfig authorization = 8;
  bool has_authorization() const;
  private:
  bool _internal_has_authorization() const;
  public:
  void clear_authorization();
  const ::google::api::AuthorizationConfig& authorization() const;
  ::google::api::AuthorizationConfig* release_authorization();
  ::google::api::AuthorizationConfig* mutable_authorization();
  void set_allocated_authorization(::google::api::AuthorizationConfig* authorization);
  private:
  const ::google::api::AuthorizationConfig& _internal_authorization() const;
  ::google::api::AuthorizationConfig* _internal_mutable_authorization();
  public:

  // @@protoc_insertion_point(class_scope:google.api.Experimental)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::api::AuthorizationConfig* authorization_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fexperimental_2fexperimental_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Experimental

// .google.api.AuthorizationConfig authorization = 8;
inline bool Experimental::_internal_has_authorization() const {
  return this != internal_default_instance() && authorization_ != nullptr;
}
inline bool Experimental::has_authorization() const {
  return _internal_has_authorization();
}
inline const ::google::api::AuthorizationConfig& Experimental::_internal_authorization() const {
  const ::google::api::AuthorizationConfig* p = authorization_;
  return p != nullptr ? *p : *reinterpret_cast<const ::google::api::AuthorizationConfig*>(
      &::google::api::_AuthorizationConfig_default_instance_);
}
inline const ::google::api::AuthorizationConfig& Experimental::authorization() const {
  // @@protoc_insertion_point(field_get:google.api.Experimental.authorization)
  return _internal_authorization();
}
inline ::google::api::AuthorizationConfig* Experimental::release_authorization() {
  // @@protoc_insertion_point(field_release:google.api.Experimental.authorization)
  
  ::google::api::AuthorizationConfig* temp = authorization_;
  authorization_ = nullptr;
  return temp;
}
inline ::google::api::AuthorizationConfig* Experimental::_internal_mutable_authorization() {
  
  if (authorization_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::api::AuthorizationConfig>(GetArenaNoVirtual());
    authorization_ = p;
  }
  return authorization_;
}
inline ::google::api::AuthorizationConfig* Experimental::mutable_authorization() {
  // @@protoc_insertion_point(field_mutable:google.api.Experimental.authorization)
  return _internal_mutable_authorization();
}
inline void Experimental::set_allocated_authorization(::google::api::AuthorizationConfig* authorization) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(authorization_);
  }
  if (authorization) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      authorization = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, authorization, submessage_arena);
    }
    
  } else {
    
  }
  authorization_ = authorization;
  // @@protoc_insertion_point(field_set_allocated:google.api.Experimental.authorization)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fexperimental_2fexperimental_2eproto
