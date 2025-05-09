// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shop.proto

#include "shop.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace shop {

inline constexpr PlaceOrderResponse::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : order_id_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR PlaceOrderResponse::PlaceOrderResponse(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct PlaceOrderResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PlaceOrderResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PlaceOrderResponseDefaultTypeInternal() {}
  union {
    PlaceOrderResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PlaceOrderResponseDefaultTypeInternal _PlaceOrderResponse_default_instance_;

inline constexpr PlaceOrderRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : size_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        color_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        text_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR PlaceOrderRequest::PlaceOrderRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct PlaceOrderRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PlaceOrderRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PlaceOrderRequestDefaultTypeInternal() {}
  union {
    PlaceOrderRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PlaceOrderRequestDefaultTypeInternal _PlaceOrderRequest_default_instance_;

inline constexpr CheckStatusResponse::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : status_{static_cast< ::shop::OrderStatus >(0)},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR CheckStatusResponse::CheckStatusResponse(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct CheckStatusResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CheckStatusResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CheckStatusResponseDefaultTypeInternal() {}
  union {
    CheckStatusResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CheckStatusResponseDefaultTypeInternal _CheckStatusResponse_default_instance_;

inline constexpr CheckStatusRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : order_id_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR CheckStatusRequest::CheckStatusRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct CheckStatusRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CheckStatusRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CheckStatusRequestDefaultTypeInternal() {}
  union {
    CheckStatusRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CheckStatusRequestDefaultTypeInternal _CheckStatusRequest_default_instance_;
}  // namespace shop
static ::_pb::Metadata file_level_metadata_shop_2eproto[4];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_shop_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_shop_2eproto = nullptr;
const ::uint32_t TableStruct_shop_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::shop::PlaceOrderRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::shop::PlaceOrderRequest, _impl_.size_),
    PROTOBUF_FIELD_OFFSET(::shop::PlaceOrderRequest, _impl_.color_),
    PROTOBUF_FIELD_OFFSET(::shop::PlaceOrderRequest, _impl_.text_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::shop::PlaceOrderResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::shop::PlaceOrderResponse, _impl_.order_id_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::shop::CheckStatusRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::shop::CheckStatusRequest, _impl_.order_id_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::shop::CheckStatusResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::shop::CheckStatusResponse, _impl_.status_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::shop::PlaceOrderRequest)},
        {11, -1, -1, sizeof(::shop::PlaceOrderResponse)},
        {20, -1, -1, sizeof(::shop::CheckStatusRequest)},
        {29, -1, -1, sizeof(::shop::CheckStatusResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::shop::_PlaceOrderRequest_default_instance_._instance,
    &::shop::_PlaceOrderResponse_default_instance_._instance,
    &::shop::_CheckStatusRequest_default_instance_._instance,
    &::shop::_CheckStatusResponse_default_instance_._instance,
};
const char descriptor_table_protodef_shop_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\nshop.proto\022\004shop\">\n\021PlaceOrderRequest\022"
    "\014\n\004size\030\001 \001(\t\022\r\n\005color\030\002 \001(\t\022\014\n\004text\030\003 \001"
    "(\t\"&\n\022PlaceOrderResponse\022\020\n\010order_id\030\001 \001"
    "(\005\"&\n\022CheckStatusRequest\022\020\n\010order_id\030\001 \001"
    "(\005\"8\n\023CheckStatusResponse\022!\n\006status\030\001 \001("
    "\0162\021.shop.OrderStatus*E\n\013OrderStatus\022\013\n\007U"
    "NKNOWN\020\000\022\n\n\006MAKING\020\001\022\016\n\nIN_TRANSIT\020\002\022\r\n\t"
    "DELIVERED\020\0032\222\001\n\013ShopService\022\?\n\nPlaceOrde"
    "r\022\027.shop.PlaceOrderRequest\032\030.shop.PlaceO"
    "rderResponse\022B\n\013CheckStatus\022\030.shop.Check"
    "StatusRequest\032\031.shop.CheckStatusResponse"
    "b\006proto3"
};
static ::absl::once_flag descriptor_table_shop_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_shop_2eproto = {
    false,
    false,
    448,
    descriptor_table_protodef_shop_2eproto,
    "shop.proto",
    &descriptor_table_shop_2eproto_once,
    nullptr,
    0,
    4,
    schemas,
    file_default_instances,
    TableStruct_shop_2eproto::offsets,
    file_level_metadata_shop_2eproto,
    file_level_enum_descriptors_shop_2eproto,
    file_level_service_descriptors_shop_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_shop_2eproto_getter() {
  return &descriptor_table_shop_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_shop_2eproto(&descriptor_table_shop_2eproto);
namespace shop {
const ::google::protobuf::EnumDescriptor* OrderStatus_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_shop_2eproto);
  return file_level_enum_descriptors_shop_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t OrderStatus_internal_data_[] = {
    262144u, 0u, };
bool OrderStatus_IsValid(int value) {
  return 0 <= value && value <= 3;
}
// ===================================================================

class PlaceOrderRequest::_Internal {
 public:
};

PlaceOrderRequest::PlaceOrderRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:shop.PlaceOrderRequest)
}
inline PROTOBUF_NDEBUG_INLINE PlaceOrderRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : size_(arena, from.size_),
        color_(arena, from.color_),
        text_(arena, from.text_),
        _cached_size_{0} {}

PlaceOrderRequest::PlaceOrderRequest(
    ::google::protobuf::Arena* arena,
    const PlaceOrderRequest& from)
    : ::google::protobuf::Message(arena) {
  PlaceOrderRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:shop.PlaceOrderRequest)
}
inline PROTOBUF_NDEBUG_INLINE PlaceOrderRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : size_(arena),
        color_(arena),
        text_(arena),
        _cached_size_{0} {}

inline void PlaceOrderRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
PlaceOrderRequest::~PlaceOrderRequest() {
  // @@protoc_insertion_point(destructor:shop.PlaceOrderRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void PlaceOrderRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.size_.Destroy();
  _impl_.color_.Destroy();
  _impl_.text_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void PlaceOrderRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:shop.PlaceOrderRequest)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.size_.ClearToEmpty();
  _impl_.color_.ClearToEmpty();
  _impl_.text_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* PlaceOrderRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 44, 2> PlaceOrderRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_PlaceOrderRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // string size = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(PlaceOrderRequest, _impl_.size_)}},
    // string color = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(PlaceOrderRequest, _impl_.color_)}},
    // string text = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(PlaceOrderRequest, _impl_.text_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string size = 1;
    {PROTOBUF_FIELD_OFFSET(PlaceOrderRequest, _impl_.size_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string color = 2;
    {PROTOBUF_FIELD_OFFSET(PlaceOrderRequest, _impl_.color_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string text = 3;
    {PROTOBUF_FIELD_OFFSET(PlaceOrderRequest, _impl_.text_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\26\4\5\4\0\0\0\0"
    "shop.PlaceOrderRequest"
    "size"
    "color"
    "text"
  }},
};

::uint8_t* PlaceOrderRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:shop.PlaceOrderRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string size = 1;
  if (!this->_internal_size().empty()) {
    const std::string& _s = this->_internal_size();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "shop.PlaceOrderRequest.size");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string color = 2;
  if (!this->_internal_color().empty()) {
    const std::string& _s = this->_internal_color();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "shop.PlaceOrderRequest.color");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // string text = 3;
  if (!this->_internal_text().empty()) {
    const std::string& _s = this->_internal_text();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "shop.PlaceOrderRequest.text");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:shop.PlaceOrderRequest)
  return target;
}

::size_t PlaceOrderRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:shop.PlaceOrderRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string size = 1;
  if (!this->_internal_size().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_size());
  }

  // string color = 2;
  if (!this->_internal_color().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_color());
  }

  // string text = 3;
  if (!this->_internal_text().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_text());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData PlaceOrderRequest::_class_data_ = {
    PlaceOrderRequest::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* PlaceOrderRequest::GetClassData() const {
  return &_class_data_;
}

void PlaceOrderRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<PlaceOrderRequest*>(&to_msg);
  auto& from = static_cast<const PlaceOrderRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:shop.PlaceOrderRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_size().empty()) {
    _this->_internal_set_size(from._internal_size());
  }
  if (!from._internal_color().empty()) {
    _this->_internal_set_color(from._internal_color());
  }
  if (!from._internal_text().empty()) {
    _this->_internal_set_text(from._internal_text());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void PlaceOrderRequest::CopyFrom(const PlaceOrderRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:shop.PlaceOrderRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool PlaceOrderRequest::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* PlaceOrderRequest::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void PlaceOrderRequest::InternalSwap(PlaceOrderRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.size_, &other->_impl_.size_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.color_, &other->_impl_.color_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.text_, &other->_impl_.text_, arena);
}

::google::protobuf::Metadata PlaceOrderRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_shop_2eproto_getter, &descriptor_table_shop_2eproto_once,
      file_level_metadata_shop_2eproto[0]);
}
// ===================================================================

class PlaceOrderResponse::_Internal {
 public:
};

PlaceOrderResponse::PlaceOrderResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:shop.PlaceOrderResponse)
}
PlaceOrderResponse::PlaceOrderResponse(
    ::google::protobuf::Arena* arena, const PlaceOrderResponse& from)
    : PlaceOrderResponse(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE PlaceOrderResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void PlaceOrderResponse::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.order_id_ = {};
}
PlaceOrderResponse::~PlaceOrderResponse() {
  // @@protoc_insertion_point(destructor:shop.PlaceOrderResponse)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void PlaceOrderResponse::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void PlaceOrderResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:shop.PlaceOrderResponse)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.order_id_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* PlaceOrderResponse::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> PlaceOrderResponse::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_PlaceOrderResponse_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 order_id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(PlaceOrderResponse, _impl_.order_id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(PlaceOrderResponse, _impl_.order_id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 order_id = 1;
    {PROTOBUF_FIELD_OFFSET(PlaceOrderResponse, _impl_.order_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* PlaceOrderResponse::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:shop.PlaceOrderResponse)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 order_id = 1;
  if (this->_internal_order_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_order_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:shop.PlaceOrderResponse)
  return target;
}

::size_t PlaceOrderResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:shop.PlaceOrderResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 order_id = 1;
  if (this->_internal_order_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_order_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData PlaceOrderResponse::_class_data_ = {
    PlaceOrderResponse::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* PlaceOrderResponse::GetClassData() const {
  return &_class_data_;
}

void PlaceOrderResponse::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<PlaceOrderResponse*>(&to_msg);
  auto& from = static_cast<const PlaceOrderResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:shop.PlaceOrderResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_order_id() != 0) {
    _this->_internal_set_order_id(from._internal_order_id());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void PlaceOrderResponse::CopyFrom(const PlaceOrderResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:shop.PlaceOrderResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool PlaceOrderResponse::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* PlaceOrderResponse::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void PlaceOrderResponse::InternalSwap(PlaceOrderResponse* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.order_id_, other->_impl_.order_id_);
}

::google::protobuf::Metadata PlaceOrderResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_shop_2eproto_getter, &descriptor_table_shop_2eproto_once,
      file_level_metadata_shop_2eproto[1]);
}
// ===================================================================

class CheckStatusRequest::_Internal {
 public:
};

CheckStatusRequest::CheckStatusRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:shop.CheckStatusRequest)
}
CheckStatusRequest::CheckStatusRequest(
    ::google::protobuf::Arena* arena, const CheckStatusRequest& from)
    : CheckStatusRequest(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE CheckStatusRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void CheckStatusRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.order_id_ = {};
}
CheckStatusRequest::~CheckStatusRequest() {
  // @@protoc_insertion_point(destructor:shop.CheckStatusRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void CheckStatusRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void CheckStatusRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:shop.CheckStatusRequest)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.order_id_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* CheckStatusRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> CheckStatusRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_CheckStatusRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 order_id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(CheckStatusRequest, _impl_.order_id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(CheckStatusRequest, _impl_.order_id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 order_id = 1;
    {PROTOBUF_FIELD_OFFSET(CheckStatusRequest, _impl_.order_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* CheckStatusRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:shop.CheckStatusRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 order_id = 1;
  if (this->_internal_order_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_order_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:shop.CheckStatusRequest)
  return target;
}

::size_t CheckStatusRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:shop.CheckStatusRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 order_id = 1;
  if (this->_internal_order_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_order_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData CheckStatusRequest::_class_data_ = {
    CheckStatusRequest::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* CheckStatusRequest::GetClassData() const {
  return &_class_data_;
}

void CheckStatusRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<CheckStatusRequest*>(&to_msg);
  auto& from = static_cast<const CheckStatusRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:shop.CheckStatusRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_order_id() != 0) {
    _this->_internal_set_order_id(from._internal_order_id());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CheckStatusRequest::CopyFrom(const CheckStatusRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:shop.CheckStatusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool CheckStatusRequest::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* CheckStatusRequest::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void CheckStatusRequest::InternalSwap(CheckStatusRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.order_id_, other->_impl_.order_id_);
}

::google::protobuf::Metadata CheckStatusRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_shop_2eproto_getter, &descriptor_table_shop_2eproto_once,
      file_level_metadata_shop_2eproto[2]);
}
// ===================================================================

class CheckStatusResponse::_Internal {
 public:
};

CheckStatusResponse::CheckStatusResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:shop.CheckStatusResponse)
}
CheckStatusResponse::CheckStatusResponse(
    ::google::protobuf::Arena* arena, const CheckStatusResponse& from)
    : CheckStatusResponse(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE CheckStatusResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void CheckStatusResponse::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.status_ = {};
}
CheckStatusResponse::~CheckStatusResponse() {
  // @@protoc_insertion_point(destructor:shop.CheckStatusResponse)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void CheckStatusResponse::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void CheckStatusResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:shop.CheckStatusResponse)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.status_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* CheckStatusResponse::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> CheckStatusResponse::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_CheckStatusResponse_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // .shop.OrderStatus status = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(CheckStatusResponse, _impl_.status_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(CheckStatusResponse, _impl_.status_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .shop.OrderStatus status = 1;
    {PROTOBUF_FIELD_OFFSET(CheckStatusResponse, _impl_.status_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* CheckStatusResponse::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:shop.CheckStatusResponse)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // .shop.OrderStatus status = 1;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        1, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:shop.CheckStatusResponse)
  return target;
}

::size_t CheckStatusResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:shop.CheckStatusResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .shop.OrderStatus status = 1;
  if (this->_internal_status() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_status());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData CheckStatusResponse::_class_data_ = {
    CheckStatusResponse::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* CheckStatusResponse::GetClassData() const {
  return &_class_data_;
}

void CheckStatusResponse::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<CheckStatusResponse*>(&to_msg);
  auto& from = static_cast<const CheckStatusResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:shop.CheckStatusResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_status() != 0) {
    _this->_internal_set_status(from._internal_status());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CheckStatusResponse::CopyFrom(const CheckStatusResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:shop.CheckStatusResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool CheckStatusResponse::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* CheckStatusResponse::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void CheckStatusResponse::InternalSwap(CheckStatusResponse* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.status_, other->_impl_.status_);
}

::google::protobuf::Metadata CheckStatusResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_shop_2eproto_getter, &descriptor_table_shop_2eproto_once,
      file_level_metadata_shop_2eproto[3]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace shop
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
