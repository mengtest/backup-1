// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ItemDropTipCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ItemDropTipCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_ItemDropTipCfg_2eproto() {
  delete ItemDropTipType::default_instance_;
  delete ItemDropTipOne::default_instance_;
  delete ItemDropTipCfg::default_instance_;
  delete ItemDropTipCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ItemDropTipCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ItemDropTipCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ItemDropTipType::default_instance_ = new ItemDropTipType();
  ItemDropTipOne::default_instance_ = new ItemDropTipOne();
  ItemDropTipCfg::default_instance_ = new ItemDropTipCfg();
  ItemDropTipCfgSet::default_instance_ = new ItemDropTipCfgSet();
  ItemDropTipType::default_instance_->InitAsDefaultInstance();
  ItemDropTipOne::default_instance_->InitAsDefaultInstance();
  ItemDropTipCfg::default_instance_->InitAsDefaultInstance();
  ItemDropTipCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ItemDropTipCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ItemDropTipCfg_2eproto_once_);
void protobuf_AddDesc_ItemDropTipCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ItemDropTipCfg_2eproto_once_,
                 &protobuf_AddDesc_ItemDropTipCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ItemDropTipCfg_2eproto {
  StaticDescriptorInitializer_ItemDropTipCfg_2eproto() {
    protobuf_AddDesc_ItemDropTipCfg_2eproto();
  }
} static_descriptor_initializer_ItemDropTipCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ItemDropTipType::kTypeFieldNumber;
#endif  // !_MSC_VER

ItemDropTipType::ItemDropTipType()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ItemDropTipType::InitAsDefaultInstance() {
}

ItemDropTipType::ItemDropTipType(const ItemDropTipType& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ItemDropTipType::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ItemDropTipType::~ItemDropTipType() {
  SharedDtor();
}

void ItemDropTipType::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ItemDropTipType::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ItemDropTipType& ItemDropTipType::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ItemDropTipCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ItemDropTipCfg_2eproto();
#endif
  return *default_instance_;
}

ItemDropTipType* ItemDropTipType::default_instance_ = NULL;

ItemDropTipType* ItemDropTipType::New() const {
  return new ItemDropTipType;
}

void ItemDropTipType::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ItemDropTipType::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ItemDropTipType::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->type(), output);
  }

}

int ItemDropTipType::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ItemDropTipType::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ItemDropTipType*>(&from));
}

void ItemDropTipType::MergeFrom(const ItemDropTipType& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
  }
}

void ItemDropTipType::CopyFrom(const ItemDropTipType& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemDropTipType::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ItemDropTipType::Swap(ItemDropTipType* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ItemDropTipType::GetTypeName() const {
  return "com.cfg.vo.ItemDropTipType";
}


// ===================================================================

#ifndef _MSC_VER
const int ItemDropTipOne::kWarTypeFieldNumber;
const int ItemDropTipOne::kWarIDFieldNumber;
#endif  // !_MSC_VER

ItemDropTipOne::ItemDropTipOne()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ItemDropTipOne::InitAsDefaultInstance() {
}

ItemDropTipOne::ItemDropTipOne(const ItemDropTipOne& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ItemDropTipOne::SharedCtor() {
  _cached_size_ = 0;
  wartype_ = 0u;
  warid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ItemDropTipOne::~ItemDropTipOne() {
  SharedDtor();
}

void ItemDropTipOne::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ItemDropTipOne::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ItemDropTipOne& ItemDropTipOne::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ItemDropTipCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ItemDropTipCfg_2eproto();
#endif
  return *default_instance_;
}

ItemDropTipOne* ItemDropTipOne::default_instance_ = NULL;

ItemDropTipOne* ItemDropTipOne::New() const {
  return new ItemDropTipOne;
}

void ItemDropTipOne::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    wartype_ = 0u;
    warid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ItemDropTipOne::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 WarType = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wartype_)));
          set_has_wartype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_WarID;
        break;
      }

      // required uint32 WarID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_WarID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &warid_)));
          set_has_warid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ItemDropTipOne::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 WarType = 1;
  if (has_wartype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->wartype(), output);
  }

  // required uint32 WarID = 2;
  if (has_warid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->warid(), output);
  }

}

int ItemDropTipOne::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 WarType = 1;
    if (has_wartype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->wartype());
    }

    // required uint32 WarID = 2;
    if (has_warid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->warid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ItemDropTipOne::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ItemDropTipOne*>(&from));
}

void ItemDropTipOne::MergeFrom(const ItemDropTipOne& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_wartype()) {
      set_wartype(from.wartype());
    }
    if (from.has_warid()) {
      set_warid(from.warid());
    }
  }
}

void ItemDropTipOne::CopyFrom(const ItemDropTipOne& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemDropTipOne::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ItemDropTipOne::Swap(ItemDropTipOne* other) {
  if (other != this) {
    std::swap(wartype_, other->wartype_);
    std::swap(warid_, other->warid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ItemDropTipOne::GetTypeName() const {
  return "com.cfg.vo.ItemDropTipOne";
}


// ===================================================================

#ifndef _MSC_VER
const int ItemDropTipCfg::kIDFieldNumber;
const int ItemDropTipCfg::kThingIDFieldNumber;
const int ItemDropTipCfg::kThingTypeFieldNumber;
const int ItemDropTipCfg::kTipTxtFieldNumber;
const int ItemDropTipCfg::kDropTypeFieldNumber;
const int ItemDropTipCfg::kWarListFieldNumber;
#endif  // !_MSC_VER

ItemDropTipCfg::ItemDropTipCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ItemDropTipCfg::InitAsDefaultInstance() {
}

ItemDropTipCfg::ItemDropTipCfg(const ItemDropTipCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ItemDropTipCfg::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  thingid_ = 0u;
  thingtype_ = 0u;
  tiptxt_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ItemDropTipCfg::~ItemDropTipCfg() {
  SharedDtor();
}

void ItemDropTipCfg::SharedDtor() {
  if (tiptxt_ != &::google::protobuf::internal::kEmptyString) {
    delete tiptxt_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ItemDropTipCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ItemDropTipCfg& ItemDropTipCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ItemDropTipCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ItemDropTipCfg_2eproto();
#endif
  return *default_instance_;
}

ItemDropTipCfg* ItemDropTipCfg::default_instance_ = NULL;

ItemDropTipCfg* ItemDropTipCfg::New() const {
  return new ItemDropTipCfg;
}

void ItemDropTipCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    thingid_ = 0u;
    thingtype_ = 0u;
    if (has_tiptxt()) {
      if (tiptxt_ != &::google::protobuf::internal::kEmptyString) {
        tiptxt_->clear();
      }
    }
  }
  droptype_.Clear();
  warlist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ItemDropTipCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 ID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_ThingID;
        break;
      }

      // required uint32 ThingID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ThingID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &thingid_)));
          set_has_thingid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_ThingType;
        break;
      }

      // required uint32 ThingType = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ThingType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &thingtype_)));
          set_has_thingtype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_TipTxt;
        break;
      }

      // required string TipTxt = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_TipTxt:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tiptxt()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_DropType;
        break;
      }

      // repeated .com.cfg.vo.ItemDropTipType DropType = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_DropType:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_droptype()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_DropType;
        if (input->ExpectTag(50)) goto parse_WarList;
        break;
      }

      // repeated .com.cfg.vo.ItemDropTipOne WarList = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_WarList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_warlist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_WarList;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ItemDropTipCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ID = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required uint32 ThingID = 2;
  if (has_thingid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->thingid(), output);
  }

  // required uint32 ThingType = 3;
  if (has_thingtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->thingtype(), output);
  }

  // required string TipTxt = 4;
  if (has_tiptxt()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->tiptxt(), output);
  }

  // repeated .com.cfg.vo.ItemDropTipType DropType = 5;
  for (int i = 0; i < this->droptype_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5, this->droptype(i), output);
  }

  // repeated .com.cfg.vo.ItemDropTipOne WarList = 6;
  for (int i = 0; i < this->warlist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      6, this->warlist(i), output);
  }

}

int ItemDropTipCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ID = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required uint32 ThingID = 2;
    if (has_thingid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->thingid());
    }

    // required uint32 ThingType = 3;
    if (has_thingtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->thingtype());
    }

    // required string TipTxt = 4;
    if (has_tiptxt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->tiptxt());
    }

  }
  // repeated .com.cfg.vo.ItemDropTipType DropType = 5;
  total_size += 1 * this->droptype_size();
  for (int i = 0; i < this->droptype_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->droptype(i));
  }

  // repeated .com.cfg.vo.ItemDropTipOne WarList = 6;
  total_size += 1 * this->warlist_size();
  for (int i = 0; i < this->warlist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->warlist(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ItemDropTipCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ItemDropTipCfg*>(&from));
}

void ItemDropTipCfg::MergeFrom(const ItemDropTipCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  droptype_.MergeFrom(from.droptype_);
  warlist_.MergeFrom(from.warlist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_thingid()) {
      set_thingid(from.thingid());
    }
    if (from.has_thingtype()) {
      set_thingtype(from.thingtype());
    }
    if (from.has_tiptxt()) {
      set_tiptxt(from.tiptxt());
    }
  }
}

void ItemDropTipCfg::CopyFrom(const ItemDropTipCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemDropTipCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  for (int i = 0; i < droptype_size(); i++) {
    if (!this->droptype(i).IsInitialized()) return false;
  }
  for (int i = 0; i < warlist_size(); i++) {
    if (!this->warlist(i).IsInitialized()) return false;
  }
  return true;
}

void ItemDropTipCfg::Swap(ItemDropTipCfg* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(thingid_, other->thingid_);
    std::swap(thingtype_, other->thingtype_);
    std::swap(tiptxt_, other->tiptxt_);
    droptype_.Swap(&other->droptype_);
    warlist_.Swap(&other->warlist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ItemDropTipCfg::GetTypeName() const {
  return "com.cfg.vo.ItemDropTipCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int ItemDropTipCfgSet::kItemDropTipCfgFieldNumber;
#endif  // !_MSC_VER

ItemDropTipCfgSet::ItemDropTipCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ItemDropTipCfgSet::InitAsDefaultInstance() {
}

ItemDropTipCfgSet::ItemDropTipCfgSet(const ItemDropTipCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ItemDropTipCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ItemDropTipCfgSet::~ItemDropTipCfgSet() {
  SharedDtor();
}

void ItemDropTipCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ItemDropTipCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ItemDropTipCfgSet& ItemDropTipCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ItemDropTipCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ItemDropTipCfg_2eproto();
#endif
  return *default_instance_;
}

ItemDropTipCfgSet* ItemDropTipCfgSet::default_instance_ = NULL;

ItemDropTipCfgSet* ItemDropTipCfgSet::New() const {
  return new ItemDropTipCfgSet;
}

void ItemDropTipCfgSet::Clear() {
  itemdroptipcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ItemDropTipCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.ItemDropTipCfg itemDropTipCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_itemDropTipCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_itemdroptipcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_itemDropTipCfg;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ItemDropTipCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.ItemDropTipCfg itemDropTipCfg = 1;
  for (int i = 0; i < this->itemdroptipcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->itemdroptipcfg(i), output);
  }

}

int ItemDropTipCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.ItemDropTipCfg itemDropTipCfg = 1;
  total_size += 1 * this->itemdroptipcfg_size();
  for (int i = 0; i < this->itemdroptipcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->itemdroptipcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ItemDropTipCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ItemDropTipCfgSet*>(&from));
}

void ItemDropTipCfgSet::MergeFrom(const ItemDropTipCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  itemdroptipcfg_.MergeFrom(from.itemdroptipcfg_);
}

void ItemDropTipCfgSet::CopyFrom(const ItemDropTipCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemDropTipCfgSet::IsInitialized() const {

  for (int i = 0; i < itemdroptipcfg_size(); i++) {
    if (!this->itemdroptipcfg(i).IsInitialized()) return false;
  }
  return true;
}

void ItemDropTipCfgSet::Swap(ItemDropTipCfgSet* other) {
  if (other != this) {
    itemdroptipcfg_.Swap(&other->itemdroptipcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ItemDropTipCfgSet::GetTypeName() const {
  return "com.cfg.vo.ItemDropTipCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
