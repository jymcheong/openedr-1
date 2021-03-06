// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/servicecontrol/v1/check_error.proto

#include "google/api/servicecontrol/v1/check_error.pb.h"

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
namespace api {
namespace servicecontrol {
namespace v1 {
class CheckErrorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CheckError> _instance;
} _CheckError_default_instance_;
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_CheckError_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::servicecontrol::v1::_CheckError_default_instance_;
    new (ptr) ::google::api::servicecontrol::v1::CheckError();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::servicecontrol::v1::CheckError::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CheckError_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_CheckError_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::CheckError, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::CheckError, code_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::CheckError, detail_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::servicecontrol::v1::CheckError)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::servicecontrol::v1::_CheckError_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.google/api/servicecontrol/v1/check_err"
  "or.proto\022\034google.api.servicecontrol.v1\032\034"
  "google/api/annotations.proto\"\232\004\n\nCheckEr"
  "ror\022;\n\004code\030\001 \001(\0162-.google.api.serviceco"
  "ntrol.v1.CheckError.Code\022\016\n\006detail\030\002 \001(\t"
  "\"\276\003\n\004Code\022\032\n\026ERROR_CODE_UNSPECIFIED\020\000\022\r\n"
  "\tNOT_FOUND\020\005\022\025\n\021PERMISSION_DENIED\020\007\022\026\n\022R"
  "ESOURCE_EXHAUSTED\020\010\022\031\n\025SERVICE_NOT_ACTIV"
  "ATED\020h\022\024\n\020BILLING_DISABLED\020k\022\023\n\017PROJECT_"
  "DELETED\020l\022\023\n\017PROJECT_INVALID\020r\022\026\n\022IP_ADD"
  "RESS_BLOCKED\020m\022\023\n\017REFERER_BLOCKED\020n\022\026\n\022C"
  "LIENT_APP_BLOCKED\020o\022\026\n\022API_TARGET_BLOCKE"
  "D\020z\022\023\n\017API_KEY_INVALID\020i\022\023\n\017API_KEY_EXPI"
  "RED\020p\022\025\n\021API_KEY_NOT_FOUND\020q\022!\n\034NAMESPAC"
  "E_LOOKUP_UNAVAILABLE\020\254\002\022\037\n\032SERVICE_STATU"
  "S_UNAVAILABLE\020\255\002\022\037\n\032BILLING_STATUS_UNAVA"
  "ILABLE\020\256\002B\204\001\n com.google.api.servicecont"
  "rol.v1B\017CheckErrorProtoP\001ZJgoogle.golang"
  ".org/genproto/googleapis/api/servicecont"
  "rol/v1;servicecontrol\370\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto_deps[1] = {
  &::descriptor_table_google_2fapi_2fannotations_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto_sccs[1] = {
  &scc_info_CheckError_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto_once;
static bool descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto = {
  &descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto_initialized, descriptor_table_protodef_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto, "google/api/servicecontrol/v1/check_error.proto", 792,
  &descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto_once, descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto_sccs, descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::offsets,
  file_level_metadata_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto, 1, file_level_enum_descriptors_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto, file_level_service_descriptors_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto), true);
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CheckError_Code_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto);
  return file_level_enum_descriptors_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto[0];
}
bool CheckError_Code_IsValid(int value) {
  switch (value) {
    case 0:
    case 5:
    case 7:
    case 8:
    case 104:
    case 105:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 122:
    case 300:
    case 301:
    case 302:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr CheckError_Code CheckError::ERROR_CODE_UNSPECIFIED;
constexpr CheckError_Code CheckError::NOT_FOUND;
constexpr CheckError_Code CheckError::PERMISSION_DENIED;
constexpr CheckError_Code CheckError::RESOURCE_EXHAUSTED;
constexpr CheckError_Code CheckError::SERVICE_NOT_ACTIVATED;
constexpr CheckError_Code CheckError::BILLING_DISABLED;
constexpr CheckError_Code CheckError::PROJECT_DELETED;
constexpr CheckError_Code CheckError::PROJECT_INVALID;
constexpr CheckError_Code CheckError::IP_ADDRESS_BLOCKED;
constexpr CheckError_Code CheckError::REFERER_BLOCKED;
constexpr CheckError_Code CheckError::CLIENT_APP_BLOCKED;
constexpr CheckError_Code CheckError::API_TARGET_BLOCKED;
constexpr CheckError_Code CheckError::API_KEY_INVALID;
constexpr CheckError_Code CheckError::API_KEY_EXPIRED;
constexpr CheckError_Code CheckError::API_KEY_NOT_FOUND;
constexpr CheckError_Code CheckError::NAMESPACE_LOOKUP_UNAVAILABLE;
constexpr CheckError_Code CheckError::SERVICE_STATUS_UNAVAILABLE;
constexpr CheckError_Code CheckError::BILLING_STATUS_UNAVAILABLE;
constexpr CheckError_Code CheckError::Code_MIN;
constexpr CheckError_Code CheckError::Code_MAX;
constexpr int CheckError::Code_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void CheckError::InitAsDefaultInstance() {
}
class CheckError::_Internal {
 public:
};

CheckError::CheckError()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.servicecontrol.v1.CheckError)
}
CheckError::CheckError(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.api.servicecontrol.v1.CheckError)
}
CheckError::CheckError(const CheckError& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  detail_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_detail().empty()) {
    detail_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_detail(),
      GetArenaNoVirtual());
  }
  code_ = from.code_;
  // @@protoc_insertion_point(copy_constructor:google.api.servicecontrol.v1.CheckError)
}

void CheckError::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_CheckError_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto.base);
  detail_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  code_ = 0;
}

CheckError::~CheckError() {
  // @@protoc_insertion_point(destructor:google.api.servicecontrol.v1.CheckError)
  SharedDtor();
}

void CheckError::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
  detail_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void CheckError::ArenaDtor(void* object) {
  CheckError* _this = reinterpret_cast< CheckError* >(object);
  (void)_this;
}
void CheckError::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CheckError::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CheckError& CheckError::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CheckError_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto.base);
  return *internal_default_instance();
}


void CheckError::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.servicecontrol.v1.CheckError)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  detail_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  code_ = 0;
  _internal_metadata_.Clear();
}

const char* CheckError::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .google.api.servicecontrol.v1.CheckError.Code code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_code(static_cast<::google::api::servicecontrol::v1::CheckError_Code>(val));
        } else goto handle_unusual;
        continue;
      // string detail = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_detail(), ptr, ctx, "google.api.servicecontrol.v1.CheckError.detail");
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

::PROTOBUF_NAMESPACE_ID::uint8* CheckError::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.servicecontrol.v1.CheckError)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.api.servicecontrol.v1.CheckError.Code code = 1;
  if (this->code() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_code(), target);
  }

  // string detail = 2;
  if (this->detail().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_detail().data(), static_cast<int>(this->_internal_detail().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.CheckError.detail");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_detail(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.servicecontrol.v1.CheckError)
  return target;
}

size_t CheckError::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.servicecontrol.v1.CheckError)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string detail = 2;
  if (this->detail().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_detail());
  }

  // .google.api.servicecontrol.v1.CheckError.Code code = 1;
  if (this->code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_code());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CheckError::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.servicecontrol.v1.CheckError)
  GOOGLE_DCHECK_NE(&from, this);
  const CheckError* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CheckError>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.servicecontrol.v1.CheckError)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.servicecontrol.v1.CheckError)
    MergeFrom(*source);
  }
}

void CheckError::MergeFrom(const CheckError& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.servicecontrol.v1.CheckError)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.detail().size() > 0) {
    _internal_set_detail(from._internal_detail());
  }
  if (from.code() != 0) {
    _internal_set_code(from._internal_code());
  }
}

void CheckError::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.servicecontrol.v1.CheckError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CheckError::CopyFrom(const CheckError& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.servicecontrol.v1.CheckError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CheckError::IsInitialized() const {
  return true;
}

void CheckError::InternalSwap(CheckError* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  detail_.Swap(&other->detail_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(code_, other->code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CheckError::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::servicecontrol::v1::CheckError* Arena::CreateMaybeMessage< ::google::api::servicecontrol::v1::CheckError >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::servicecontrol::v1::CheckError >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
