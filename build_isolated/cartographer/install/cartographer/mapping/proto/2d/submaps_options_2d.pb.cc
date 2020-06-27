// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/2d/submaps_options_2d.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/2d/submaps_options_2d.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {
class SubmapsOptions2DDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<SubmapsOptions2D>
     _instance;
} _SubmapsOptions2D_default_instance_;

namespace protobuf_cartographer_2fmapping_2fproto_2f2d_2fsubmaps_5foptions_5f2d_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions2D, num_range_data_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions2D, grid_options_2d_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions2D, range_data_inserter_options_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(SubmapsOptions2D)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SubmapsOptions2D_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cartographer/mapping/proto/2d/submaps_options_2d.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::cartographer::mapping::proto::protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::InitDefaults();
  ::cartographer::mapping::proto::protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto::InitDefaults();
  _SubmapsOptions2D_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_SubmapsOptions2D_default_instance_);_SubmapsOptions2D_default_instance_._instance.get_mutable()->grid_options_2d_ = const_cast< ::cartographer::mapping::proto::GridOptions2D*>(
      ::cartographer::mapping::proto::GridOptions2D::internal_default_instance());
  _SubmapsOptions2D_default_instance_._instance.get_mutable()->range_data_inserter_options_ = const_cast< ::cartographer::mapping::proto::RangeDataInserterOptions*>(
      ::cartographer::mapping::proto::RangeDataInserterOptions::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n6cartographer/mapping/proto/2d/submaps_"
      "options_2d.proto\022\032cartographer.mapping.p"
      "roto\0323cartographer/mapping/proto/2d/grid"
      "_2d_options.proto\032<cartographer/mapping/"
      "proto/range_data_inserter_options.proto\""
      "\311\001\n\020SubmapsOptions2D\022\026\n\016num_range_data\030\001"
      " \001(\005\022B\n\017grid_options_2d\030\002 \001(\0132).cartogra"
      "pher.mapping.proto.GridOptions2D\022Y\n\033rang"
      "e_data_inserter_options\030\003 \001(\01324.cartogra"
      "pher.mapping.proto.RangeDataInserterOpti"
      "onsb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 411);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/2d/submaps_options_2d.proto", &protobuf_RegisterTypes);
  ::cartographer::mapping::proto::protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::AddDescriptors();
  ::cartographer::mapping::proto::protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto::AddDescriptors();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_cartographer_2fmapping_2fproto_2f2d_2fsubmaps_5foptions_5f2d_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SubmapsOptions2D::kNumRangeDataFieldNumber;
const int SubmapsOptions2D::kGridOptions2DFieldNumber;
const int SubmapsOptions2D::kRangeDataInserterOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SubmapsOptions2D::SubmapsOptions2D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cartographer_2fmapping_2fproto_2f2d_2fsubmaps_5foptions_5f2d_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.SubmapsOptions2D)
}
SubmapsOptions2D::SubmapsOptions2D(const SubmapsOptions2D& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_grid_options_2d()) {
    grid_options_2d_ = new ::cartographer::mapping::proto::GridOptions2D(*from.grid_options_2d_);
  } else {
    grid_options_2d_ = NULL;
  }
  if (from.has_range_data_inserter_options()) {
    range_data_inserter_options_ = new ::cartographer::mapping::proto::RangeDataInserterOptions(*from.range_data_inserter_options_);
  } else {
    range_data_inserter_options_ = NULL;
  }
  num_range_data_ = from.num_range_data_;
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.SubmapsOptions2D)
}

void SubmapsOptions2D::SharedCtor() {
  ::memset(&grid_options_2d_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&num_range_data_) -
      reinterpret_cast<char*>(&grid_options_2d_)) + sizeof(num_range_data_));
  _cached_size_ = 0;
}

SubmapsOptions2D::~SubmapsOptions2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.SubmapsOptions2D)
  SharedDtor();
}

void SubmapsOptions2D::SharedDtor() {
  if (this != internal_default_instance()) delete grid_options_2d_;
  if (this != internal_default_instance()) delete range_data_inserter_options_;
}

void SubmapsOptions2D::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SubmapsOptions2D::descriptor() {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fsubmaps_5foptions_5f2d_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2fproto_2f2d_2fsubmaps_5foptions_5f2d_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SubmapsOptions2D& SubmapsOptions2D::default_instance() {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fsubmaps_5foptions_5f2d_2eproto::InitDefaults();
  return *internal_default_instance();
}

SubmapsOptions2D* SubmapsOptions2D::New(::google::protobuf::Arena* arena) const {
  SubmapsOptions2D* n = new SubmapsOptions2D;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SubmapsOptions2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.SubmapsOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && grid_options_2d_ != NULL) {
    delete grid_options_2d_;
  }
  grid_options_2d_ = NULL;
  if (GetArenaNoVirtual() == NULL && range_data_inserter_options_ != NULL) {
    delete range_data_inserter_options_;
  }
  range_data_inserter_options_ = NULL;
  num_range_data_ = 0;
  _internal_metadata_.Clear();
}

bool SubmapsOptions2D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.SubmapsOptions2D)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 num_range_data = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_range_data_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .cartographer.mapping.proto.GridOptions2D grid_options_2d = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_grid_options_2d()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .cartographer.mapping.proto.RangeDataInserterOptions range_data_inserter_options = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_range_data_inserter_options()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.SubmapsOptions2D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.SubmapsOptions2D)
  return false;
#undef DO_
}

void SubmapsOptions2D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.SubmapsOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 num_range_data = 1;
  if (this->num_range_data() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->num_range_data(), output);
  }

  // .cartographer.mapping.proto.GridOptions2D grid_options_2d = 2;
  if (this->has_grid_options_2d()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->grid_options_2d_, output);
  }

  // .cartographer.mapping.proto.RangeDataInserterOptions range_data_inserter_options = 3;
  if (this->has_range_data_inserter_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->range_data_inserter_options_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.SubmapsOptions2D)
}

::google::protobuf::uint8* SubmapsOptions2D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.SubmapsOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 num_range_data = 1;
  if (this->num_range_data() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->num_range_data(), target);
  }

  // .cartographer.mapping.proto.GridOptions2D grid_options_2d = 2;
  if (this->has_grid_options_2d()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->grid_options_2d_, deterministic, target);
  }

  // .cartographer.mapping.proto.RangeDataInserterOptions range_data_inserter_options = 3;
  if (this->has_range_data_inserter_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->range_data_inserter_options_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.SubmapsOptions2D)
  return target;
}

size_t SubmapsOptions2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.SubmapsOptions2D)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .cartographer.mapping.proto.GridOptions2D grid_options_2d = 2;
  if (this->has_grid_options_2d()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->grid_options_2d_);
  }

  // .cartographer.mapping.proto.RangeDataInserterOptions range_data_inserter_options = 3;
  if (this->has_range_data_inserter_options()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->range_data_inserter_options_);
  }

  // int32 num_range_data = 1;
  if (this->num_range_data() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_range_data());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SubmapsOptions2D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.SubmapsOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  const SubmapsOptions2D* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SubmapsOptions2D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.SubmapsOptions2D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.SubmapsOptions2D)
    MergeFrom(*source);
  }
}

void SubmapsOptions2D::MergeFrom(const SubmapsOptions2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.SubmapsOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_grid_options_2d()) {
    mutable_grid_options_2d()->::cartographer::mapping::proto::GridOptions2D::MergeFrom(from.grid_options_2d());
  }
  if (from.has_range_data_inserter_options()) {
    mutable_range_data_inserter_options()->::cartographer::mapping::proto::RangeDataInserterOptions::MergeFrom(from.range_data_inserter_options());
  }
  if (from.num_range_data() != 0) {
    set_num_range_data(from.num_range_data());
  }
}

void SubmapsOptions2D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.SubmapsOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SubmapsOptions2D::CopyFrom(const SubmapsOptions2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.SubmapsOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubmapsOptions2D::IsInitialized() const {
  return true;
}

void SubmapsOptions2D::Swap(SubmapsOptions2D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SubmapsOptions2D::InternalSwap(SubmapsOptions2D* other) {
  using std::swap;
  swap(grid_options_2d_, other->grid_options_2d_);
  swap(range_data_inserter_options_, other->range_data_inserter_options_);
  swap(num_range_data_, other->num_range_data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SubmapsOptions2D::GetMetadata() const {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fsubmaps_5foptions_5f2d_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2fproto_2f2d_2fsubmaps_5foptions_5f2d_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SubmapsOptions2D

// int32 num_range_data = 1;
void SubmapsOptions2D::clear_num_range_data() {
  num_range_data_ = 0;
}
::google::protobuf::int32 SubmapsOptions2D::num_range_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions2D.num_range_data)
  return num_range_data_;
}
void SubmapsOptions2D::set_num_range_data(::google::protobuf::int32 value) {
  
  num_range_data_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions2D.num_range_data)
}

// .cartographer.mapping.proto.GridOptions2D grid_options_2d = 2;
bool SubmapsOptions2D::has_grid_options_2d() const {
  return this != internal_default_instance() && grid_options_2d_ != NULL;
}
void SubmapsOptions2D::clear_grid_options_2d() {
  if (GetArenaNoVirtual() == NULL && grid_options_2d_ != NULL) delete grid_options_2d_;
  grid_options_2d_ = NULL;
}
const ::cartographer::mapping::proto::GridOptions2D& SubmapsOptions2D::grid_options_2d() const {
  const ::cartographer::mapping::proto::GridOptions2D* p = grid_options_2d_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions2D.grid_options_2d)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::GridOptions2D*>(
      &::cartographer::mapping::proto::_GridOptions2D_default_instance_);
}
::cartographer::mapping::proto::GridOptions2D* SubmapsOptions2D::mutable_grid_options_2d() {
  
  if (grid_options_2d_ == NULL) {
    grid_options_2d_ = new ::cartographer::mapping::proto::GridOptions2D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SubmapsOptions2D.grid_options_2d)
  return grid_options_2d_;
}
::cartographer::mapping::proto::GridOptions2D* SubmapsOptions2D::release_grid_options_2d() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.SubmapsOptions2D.grid_options_2d)
  
  ::cartographer::mapping::proto::GridOptions2D* temp = grid_options_2d_;
  grid_options_2d_ = NULL;
  return temp;
}
void SubmapsOptions2D::set_allocated_grid_options_2d(::cartographer::mapping::proto::GridOptions2D* grid_options_2d) {
  delete grid_options_2d_;
  grid_options_2d_ = grid_options_2d;
  if (grid_options_2d) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.SubmapsOptions2D.grid_options_2d)
}

// .cartographer.mapping.proto.RangeDataInserterOptions range_data_inserter_options = 3;
bool SubmapsOptions2D::has_range_data_inserter_options() const {
  return this != internal_default_instance() && range_data_inserter_options_ != NULL;
}
void SubmapsOptions2D::clear_range_data_inserter_options() {
  if (GetArenaNoVirtual() == NULL && range_data_inserter_options_ != NULL) delete range_data_inserter_options_;
  range_data_inserter_options_ = NULL;
}
const ::cartographer::mapping::proto::RangeDataInserterOptions& SubmapsOptions2D::range_data_inserter_options() const {
  const ::cartographer::mapping::proto::RangeDataInserterOptions* p = range_data_inserter_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::RangeDataInserterOptions*>(
      &::cartographer::mapping::proto::_RangeDataInserterOptions_default_instance_);
}
::cartographer::mapping::proto::RangeDataInserterOptions* SubmapsOptions2D::mutable_range_data_inserter_options() {
  
  if (range_data_inserter_options_ == NULL) {
    range_data_inserter_options_ = new ::cartographer::mapping::proto::RangeDataInserterOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
  return range_data_inserter_options_;
}
::cartographer::mapping::proto::RangeDataInserterOptions* SubmapsOptions2D::release_range_data_inserter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
  
  ::cartographer::mapping::proto::RangeDataInserterOptions* temp = range_data_inserter_options_;
  range_data_inserter_options_ = NULL;
  return temp;
}
void SubmapsOptions2D::set_allocated_range_data_inserter_options(::cartographer::mapping::proto::RangeDataInserterOptions* range_data_inserter_options) {
  delete range_data_inserter_options_;
  range_data_inserter_options_ = range_data_inserter_options;
  if (range_data_inserter_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
