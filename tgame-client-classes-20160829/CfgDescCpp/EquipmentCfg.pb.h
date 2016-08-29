// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EquipmentCfg.proto

#ifndef PROTOBUF_EquipmentCfg_2eproto__INCLUDED
#define PROTOBUF_EquipmentCfg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_EquipmentCfg_2eproto();
void protobuf_AssignDesc_EquipmentCfg_2eproto();
void protobuf_ShutdownFile_EquipmentCfg_2eproto();

class EquipAttr;
class EquipmentCfg;
class EquipmentCfgSet;

// ===================================================================

class EquipAttr : public ::google::protobuf::MessageLite {
 public:
  EquipAttr();
  virtual ~EquipAttr();

  EquipAttr(const EquipAttr& from);

  inline EquipAttr& operator=(const EquipAttr& from) {
    CopyFrom(from);
    return *this;
  }

  static const EquipAttr& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const EquipAttr* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(EquipAttr* other);

  // implements Message ----------------------------------------------

  EquipAttr* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const EquipAttr& from);
  void MergeFrom(const EquipAttr& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 AttrID = 1;
  inline bool has_attrid() const;
  inline void clear_attrid();
  static const int kAttrIDFieldNumber = 1;
  inline ::google::protobuf::uint32 attrid() const;
  inline void set_attrid(::google::protobuf::uint32 value);

  // required uint32 AttrVal = 2;
  inline bool has_attrval() const;
  inline void clear_attrval();
  static const int kAttrValFieldNumber = 2;
  inline ::google::protobuf::uint32 attrval() const;
  inline void set_attrval(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.EquipAttr)
 private:
  inline void set_has_attrid();
  inline void clear_has_attrid();
  inline void set_has_attrval();
  inline void clear_has_attrval();

  ::google::protobuf::uint32 attrid_;
  ::google::protobuf::uint32 attrval_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_EquipmentCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_EquipmentCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_EquipmentCfg_2eproto();
  friend void protobuf_ShutdownFile_EquipmentCfg_2eproto();

  void InitAsDefaultInstance();
  static EquipAttr* default_instance_;
};
// -------------------------------------------------------------------

class EquipmentCfg : public ::google::protobuf::MessageLite {
 public:
  EquipmentCfg();
  virtual ~EquipmentCfg();

  EquipmentCfg(const EquipmentCfg& from);

  inline EquipmentCfg& operator=(const EquipmentCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const EquipmentCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const EquipmentCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(EquipmentCfg* other);

  // implements Message ----------------------------------------------

  EquipmentCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const EquipmentCfg& from);
  void MergeFrom(const EquipmentCfg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 EquipCfgID = 1;
  inline bool has_equipcfgid() const;
  inline void clear_equipcfgid();
  static const int kEquipCfgIDFieldNumber = 1;
  inline ::google::protobuf::uint32 equipcfgid() const;
  inline void set_equipcfgid(::google::protobuf::uint32 value);

  // required uint32 EquipLv = 2;
  inline bool has_equiplv() const;
  inline void clear_equiplv();
  static const int kEquipLvFieldNumber = 2;
  inline ::google::protobuf::uint32 equiplv() const;
  inline void set_equiplv(::google::protobuf::uint32 value);

  // required string EquipDesc = 3;
  inline bool has_equipdesc() const;
  inline void clear_equipdesc();
  static const int kEquipDescFieldNumber = 3;
  inline const ::std::string& equipdesc() const;
  inline void set_equipdesc(const ::std::string& value);
  inline void set_equipdesc(const char* value);
  inline void set_equipdesc(const char* value, size_t size);
  inline ::std::string* mutable_equipdesc();
  inline ::std::string* release_equipdesc();
  inline void set_allocated_equipdesc(::std::string* equipdesc);

  // required string EquipName = 4;
  inline bool has_equipname() const;
  inline void clear_equipname();
  static const int kEquipNameFieldNumber = 4;
  inline const ::std::string& equipname() const;
  inline void set_equipname(const ::std::string& value);
  inline void set_equipname(const char* value);
  inline void set_equipname(const char* value, size_t size);
  inline ::std::string* mutable_equipname();
  inline ::std::string* release_equipname();
  inline void set_allocated_equipname(::std::string* equipname);

  // required string ICON = 5;
  inline bool has_icon() const;
  inline void clear_icon();
  static const int kICONFieldNumber = 5;
  inline const ::std::string& icon() const;
  inline void set_icon(const ::std::string& value);
  inline void set_icon(const char* value);
  inline void set_icon(const char* value, size_t size);
  inline ::std::string* mutable_icon();
  inline ::std::string* release_icon();
  inline void set_allocated_icon(::std::string* icon);

  // required uint32 Part = 7;
  inline bool has_part() const;
  inline void clear_part();
  static const int kPartFieldNumber = 7;
  inline ::google::protobuf::uint32 part() const;
  inline void set_part(::google::protobuf::uint32 value);

  // required uint32 CoinPrice = 8;
  inline bool has_coinprice() const;
  inline void clear_coinprice();
  static const int kCoinPriceFieldNumber = 8;
  inline ::google::protobuf::uint32 coinprice() const;
  inline void set_coinprice(::google::protobuf::uint32 value);

  // required uint32 GoldPrice = 9;
  inline bool has_goldprice() const;
  inline void clear_goldprice();
  static const int kGoldPriceFieldNumber = 9;
  inline ::google::protobuf::uint32 goldprice() const;
  inline void set_goldprice(::google::protobuf::uint32 value);

  // required uint32 DefType = 10;
  inline bool has_deftype() const;
  inline void clear_deftype();
  static const int kDefTypeFieldNumber = 10;
  inline ::google::protobuf::uint32 deftype() const;
  inline void set_deftype(::google::protobuf::uint32 value);

  // required .com.cfg.vo.EquipAttr Attr = 11;
  inline bool has_attr() const;
  inline void clear_attr();
  static const int kAttrFieldNumber = 11;
  inline const ::com::cfg::vo::EquipAttr& attr() const;
  inline ::com::cfg::vo::EquipAttr* mutable_attr();
  inline ::com::cfg::vo::EquipAttr* release_attr();
  inline void set_allocated_attr(::com::cfg::vo::EquipAttr* attr);

  // required uint32 BaseExp = 12;
  inline bool has_baseexp() const;
  inline void clear_baseexp();
  static const int kBaseExpFieldNumber = 12;
  inline ::google::protobuf::uint32 baseexp() const;
  inline void set_baseexp(::google::protobuf::uint32 value);

  // required uint32 InitStar = 13;
  inline bool has_initstar() const;
  inline void clear_initstar();
  static const int kInitStarFieldNumber = 13;
  inline ::google::protobuf::uint32 initstar() const;
  inline void set_initstar(::google::protobuf::uint32 value);

  // required uint32 InitStep = 14;
  inline bool has_initstep() const;
  inline void clear_initstep();
  static const int kInitStepFieldNumber = 14;
  inline ::google::protobuf::uint32 initstep() const;
  inline void set_initstep(::google::protobuf::uint32 value);

  // required uint32 ExpMulti = 16;
  inline bool has_expmulti() const;
  inline void clear_expmulti();
  static const int kExpMultiFieldNumber = 16;
  inline ::google::protobuf::uint32 expmulti() const;
  inline void set_expmulti(::google::protobuf::uint32 value);

  // required uint32 EquipID = 17;
  inline bool has_equipid() const;
  inline void clear_equipid();
  static const int kEquipIDFieldNumber = 17;
  inline ::google::protobuf::uint32 equipid() const;
  inline void set_equipid(::google::protobuf::uint32 value);

  // required uint32 MaxStar = 18;
  inline bool has_maxstar() const;
  inline void clear_maxstar();
  static const int kMaxStarFieldNumber = 18;
  inline ::google::protobuf::uint32 maxstar() const;
  inline void set_maxstar(::google::protobuf::uint32 value);

  // required uint32 AttrAdd = 19;
  inline bool has_attradd() const;
  inline void clear_attradd();
  static const int kAttrAddFieldNumber = 19;
  inline ::google::protobuf::uint32 attradd() const;
  inline void set_attradd(::google::protobuf::uint32 value);

  // required uint32 Color = 20;
  inline bool has_color() const;
  inline void clear_color();
  static const int kColorFieldNumber = 20;
  inline ::google::protobuf::uint32 color() const;
  inline void set_color(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.EquipmentCfg)
 private:
  inline void set_has_equipcfgid();
  inline void clear_has_equipcfgid();
  inline void set_has_equiplv();
  inline void clear_has_equiplv();
  inline void set_has_equipdesc();
  inline void clear_has_equipdesc();
  inline void set_has_equipname();
  inline void clear_has_equipname();
  inline void set_has_icon();
  inline void clear_has_icon();
  inline void set_has_part();
  inline void clear_has_part();
  inline void set_has_coinprice();
  inline void clear_has_coinprice();
  inline void set_has_goldprice();
  inline void clear_has_goldprice();
  inline void set_has_deftype();
  inline void clear_has_deftype();
  inline void set_has_attr();
  inline void clear_has_attr();
  inline void set_has_baseexp();
  inline void clear_has_baseexp();
  inline void set_has_initstar();
  inline void clear_has_initstar();
  inline void set_has_initstep();
  inline void clear_has_initstep();
  inline void set_has_expmulti();
  inline void clear_has_expmulti();
  inline void set_has_equipid();
  inline void clear_has_equipid();
  inline void set_has_maxstar();
  inline void clear_has_maxstar();
  inline void set_has_attradd();
  inline void clear_has_attradd();
  inline void set_has_color();
  inline void clear_has_color();

  ::google::protobuf::uint32 equipcfgid_;
  ::google::protobuf::uint32 equiplv_;
  ::std::string* equipdesc_;
  ::std::string* equipname_;
  ::std::string* icon_;
  ::google::protobuf::uint32 part_;
  ::google::protobuf::uint32 coinprice_;
  ::google::protobuf::uint32 goldprice_;
  ::google::protobuf::uint32 deftype_;
  ::com::cfg::vo::EquipAttr* attr_;
  ::google::protobuf::uint32 baseexp_;
  ::google::protobuf::uint32 initstar_;
  ::google::protobuf::uint32 initstep_;
  ::google::protobuf::uint32 expmulti_;
  ::google::protobuf::uint32 equipid_;
  ::google::protobuf::uint32 maxstar_;
  ::google::protobuf::uint32 attradd_;
  ::google::protobuf::uint32 color_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(18 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_EquipmentCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_EquipmentCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_EquipmentCfg_2eproto();
  friend void protobuf_ShutdownFile_EquipmentCfg_2eproto();

  void InitAsDefaultInstance();
  static EquipmentCfg* default_instance_;
};
// -------------------------------------------------------------------

class EquipmentCfgSet : public ::google::protobuf::MessageLite {
 public:
  EquipmentCfgSet();
  virtual ~EquipmentCfgSet();

  EquipmentCfgSet(const EquipmentCfgSet& from);

  inline EquipmentCfgSet& operator=(const EquipmentCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const EquipmentCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const EquipmentCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(EquipmentCfgSet* other);

  // implements Message ----------------------------------------------

  EquipmentCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const EquipmentCfgSet& from);
  void MergeFrom(const EquipmentCfgSet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .com.cfg.vo.EquipmentCfg EquipCfg1 = 1;
  inline int equipcfg1_size() const;
  inline void clear_equipcfg1();
  static const int kEquipCfg1FieldNumber = 1;
  inline const ::com::cfg::vo::EquipmentCfg& equipcfg1(int index) const;
  inline ::com::cfg::vo::EquipmentCfg* mutable_equipcfg1(int index);
  inline ::com::cfg::vo::EquipmentCfg* add_equipcfg1();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::EquipmentCfg >&
      equipcfg1() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::EquipmentCfg >*
      mutable_equipcfg1();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.EquipmentCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::EquipmentCfg > equipcfg1_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_EquipmentCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_EquipmentCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_EquipmentCfg_2eproto();
  friend void protobuf_ShutdownFile_EquipmentCfg_2eproto();

  void InitAsDefaultInstance();
  static EquipmentCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// EquipAttr

// required uint32 AttrID = 1;
inline bool EquipAttr::has_attrid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EquipAttr::set_has_attrid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EquipAttr::clear_has_attrid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EquipAttr::clear_attrid() {
  attrid_ = 0u;
  clear_has_attrid();
}
inline ::google::protobuf::uint32 EquipAttr::attrid() const {
  return attrid_;
}
inline void EquipAttr::set_attrid(::google::protobuf::uint32 value) {
  set_has_attrid();
  attrid_ = value;
}

// required uint32 AttrVal = 2;
inline bool EquipAttr::has_attrval() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EquipAttr::set_has_attrval() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EquipAttr::clear_has_attrval() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EquipAttr::clear_attrval() {
  attrval_ = 0u;
  clear_has_attrval();
}
inline ::google::protobuf::uint32 EquipAttr::attrval() const {
  return attrval_;
}
inline void EquipAttr::set_attrval(::google::protobuf::uint32 value) {
  set_has_attrval();
  attrval_ = value;
}

// -------------------------------------------------------------------

// EquipmentCfg

// required uint32 EquipCfgID = 1;
inline bool EquipmentCfg::has_equipcfgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EquipmentCfg::set_has_equipcfgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EquipmentCfg::clear_has_equipcfgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EquipmentCfg::clear_equipcfgid() {
  equipcfgid_ = 0u;
  clear_has_equipcfgid();
}
inline ::google::protobuf::uint32 EquipmentCfg::equipcfgid() const {
  return equipcfgid_;
}
inline void EquipmentCfg::set_equipcfgid(::google::protobuf::uint32 value) {
  set_has_equipcfgid();
  equipcfgid_ = value;
}

// required uint32 EquipLv = 2;
inline bool EquipmentCfg::has_equiplv() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EquipmentCfg::set_has_equiplv() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EquipmentCfg::clear_has_equiplv() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EquipmentCfg::clear_equiplv() {
  equiplv_ = 0u;
  clear_has_equiplv();
}
inline ::google::protobuf::uint32 EquipmentCfg::equiplv() const {
  return equiplv_;
}
inline void EquipmentCfg::set_equiplv(::google::protobuf::uint32 value) {
  set_has_equiplv();
  equiplv_ = value;
}

// required string EquipDesc = 3;
inline bool EquipmentCfg::has_equipdesc() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void EquipmentCfg::set_has_equipdesc() {
  _has_bits_[0] |= 0x00000004u;
}
inline void EquipmentCfg::clear_has_equipdesc() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void EquipmentCfg::clear_equipdesc() {
  if (equipdesc_ != &::google::protobuf::internal::kEmptyString) {
    equipdesc_->clear();
  }
  clear_has_equipdesc();
}
inline const ::std::string& EquipmentCfg::equipdesc() const {
  return *equipdesc_;
}
inline void EquipmentCfg::set_equipdesc(const ::std::string& value) {
  set_has_equipdesc();
  if (equipdesc_ == &::google::protobuf::internal::kEmptyString) {
    equipdesc_ = new ::std::string;
  }
  equipdesc_->assign(value);
}
inline void EquipmentCfg::set_equipdesc(const char* value) {
  set_has_equipdesc();
  if (equipdesc_ == &::google::protobuf::internal::kEmptyString) {
    equipdesc_ = new ::std::string;
  }
  equipdesc_->assign(value);
}
inline void EquipmentCfg::set_equipdesc(const char* value, size_t size) {
  set_has_equipdesc();
  if (equipdesc_ == &::google::protobuf::internal::kEmptyString) {
    equipdesc_ = new ::std::string;
  }
  equipdesc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* EquipmentCfg::mutable_equipdesc() {
  set_has_equipdesc();
  if (equipdesc_ == &::google::protobuf::internal::kEmptyString) {
    equipdesc_ = new ::std::string;
  }
  return equipdesc_;
}
inline ::std::string* EquipmentCfg::release_equipdesc() {
  clear_has_equipdesc();
  if (equipdesc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = equipdesc_;
    equipdesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void EquipmentCfg::set_allocated_equipdesc(::std::string* equipdesc) {
  if (equipdesc_ != &::google::protobuf::internal::kEmptyString) {
    delete equipdesc_;
  }
  if (equipdesc) {
    set_has_equipdesc();
    equipdesc_ = equipdesc;
  } else {
    clear_has_equipdesc();
    equipdesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string EquipName = 4;
inline bool EquipmentCfg::has_equipname() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void EquipmentCfg::set_has_equipname() {
  _has_bits_[0] |= 0x00000008u;
}
inline void EquipmentCfg::clear_has_equipname() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void EquipmentCfg::clear_equipname() {
  if (equipname_ != &::google::protobuf::internal::kEmptyString) {
    equipname_->clear();
  }
  clear_has_equipname();
}
inline const ::std::string& EquipmentCfg::equipname() const {
  return *equipname_;
}
inline void EquipmentCfg::set_equipname(const ::std::string& value) {
  set_has_equipname();
  if (equipname_ == &::google::protobuf::internal::kEmptyString) {
    equipname_ = new ::std::string;
  }
  equipname_->assign(value);
}
inline void EquipmentCfg::set_equipname(const char* value) {
  set_has_equipname();
  if (equipname_ == &::google::protobuf::internal::kEmptyString) {
    equipname_ = new ::std::string;
  }
  equipname_->assign(value);
}
inline void EquipmentCfg::set_equipname(const char* value, size_t size) {
  set_has_equipname();
  if (equipname_ == &::google::protobuf::internal::kEmptyString) {
    equipname_ = new ::std::string;
  }
  equipname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* EquipmentCfg::mutable_equipname() {
  set_has_equipname();
  if (equipname_ == &::google::protobuf::internal::kEmptyString) {
    equipname_ = new ::std::string;
  }
  return equipname_;
}
inline ::std::string* EquipmentCfg::release_equipname() {
  clear_has_equipname();
  if (equipname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = equipname_;
    equipname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void EquipmentCfg::set_allocated_equipname(::std::string* equipname) {
  if (equipname_ != &::google::protobuf::internal::kEmptyString) {
    delete equipname_;
  }
  if (equipname) {
    set_has_equipname();
    equipname_ = equipname;
  } else {
    clear_has_equipname();
    equipname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string ICON = 5;
inline bool EquipmentCfg::has_icon() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void EquipmentCfg::set_has_icon() {
  _has_bits_[0] |= 0x00000010u;
}
inline void EquipmentCfg::clear_has_icon() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void EquipmentCfg::clear_icon() {
  if (icon_ != &::google::protobuf::internal::kEmptyString) {
    icon_->clear();
  }
  clear_has_icon();
}
inline const ::std::string& EquipmentCfg::icon() const {
  return *icon_;
}
inline void EquipmentCfg::set_icon(const ::std::string& value) {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  icon_->assign(value);
}
inline void EquipmentCfg::set_icon(const char* value) {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  icon_->assign(value);
}
inline void EquipmentCfg::set_icon(const char* value, size_t size) {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  icon_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* EquipmentCfg::mutable_icon() {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  return icon_;
}
inline ::std::string* EquipmentCfg::release_icon() {
  clear_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = icon_;
    icon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void EquipmentCfg::set_allocated_icon(::std::string* icon) {
  if (icon_ != &::google::protobuf::internal::kEmptyString) {
    delete icon_;
  }
  if (icon) {
    set_has_icon();
    icon_ = icon;
  } else {
    clear_has_icon();
    icon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 Part = 7;
inline bool EquipmentCfg::has_part() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void EquipmentCfg::set_has_part() {
  _has_bits_[0] |= 0x00000020u;
}
inline void EquipmentCfg::clear_has_part() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void EquipmentCfg::clear_part() {
  part_ = 0u;
  clear_has_part();
}
inline ::google::protobuf::uint32 EquipmentCfg::part() const {
  return part_;
}
inline void EquipmentCfg::set_part(::google::protobuf::uint32 value) {
  set_has_part();
  part_ = value;
}

// required uint32 CoinPrice = 8;
inline bool EquipmentCfg::has_coinprice() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void EquipmentCfg::set_has_coinprice() {
  _has_bits_[0] |= 0x00000040u;
}
inline void EquipmentCfg::clear_has_coinprice() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void EquipmentCfg::clear_coinprice() {
  coinprice_ = 0u;
  clear_has_coinprice();
}
inline ::google::protobuf::uint32 EquipmentCfg::coinprice() const {
  return coinprice_;
}
inline void EquipmentCfg::set_coinprice(::google::protobuf::uint32 value) {
  set_has_coinprice();
  coinprice_ = value;
}

// required uint32 GoldPrice = 9;
inline bool EquipmentCfg::has_goldprice() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void EquipmentCfg::set_has_goldprice() {
  _has_bits_[0] |= 0x00000080u;
}
inline void EquipmentCfg::clear_has_goldprice() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void EquipmentCfg::clear_goldprice() {
  goldprice_ = 0u;
  clear_has_goldprice();
}
inline ::google::protobuf::uint32 EquipmentCfg::goldprice() const {
  return goldprice_;
}
inline void EquipmentCfg::set_goldprice(::google::protobuf::uint32 value) {
  set_has_goldprice();
  goldprice_ = value;
}

// required uint32 DefType = 10;
inline bool EquipmentCfg::has_deftype() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void EquipmentCfg::set_has_deftype() {
  _has_bits_[0] |= 0x00000100u;
}
inline void EquipmentCfg::clear_has_deftype() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void EquipmentCfg::clear_deftype() {
  deftype_ = 0u;
  clear_has_deftype();
}
inline ::google::protobuf::uint32 EquipmentCfg::deftype() const {
  return deftype_;
}
inline void EquipmentCfg::set_deftype(::google::protobuf::uint32 value) {
  set_has_deftype();
  deftype_ = value;
}

// required .com.cfg.vo.EquipAttr Attr = 11;
inline bool EquipmentCfg::has_attr() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void EquipmentCfg::set_has_attr() {
  _has_bits_[0] |= 0x00000200u;
}
inline void EquipmentCfg::clear_has_attr() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void EquipmentCfg::clear_attr() {
  if (attr_ != NULL) attr_->::com::cfg::vo::EquipAttr::Clear();
  clear_has_attr();
}
inline const ::com::cfg::vo::EquipAttr& EquipmentCfg::attr() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return attr_ != NULL ? *attr_ : *default_instance().attr_;
#else
  return attr_ != NULL ? *attr_ : *default_instance_->attr_;
#endif
}
inline ::com::cfg::vo::EquipAttr* EquipmentCfg::mutable_attr() {
  set_has_attr();
  if (attr_ == NULL) attr_ = new ::com::cfg::vo::EquipAttr;
  return attr_;
}
inline ::com::cfg::vo::EquipAttr* EquipmentCfg::release_attr() {
  clear_has_attr();
  ::com::cfg::vo::EquipAttr* temp = attr_;
  attr_ = NULL;
  return temp;
}
inline void EquipmentCfg::set_allocated_attr(::com::cfg::vo::EquipAttr* attr) {
  delete attr_;
  attr_ = attr;
  if (attr) {
    set_has_attr();
  } else {
    clear_has_attr();
  }
}

// required uint32 BaseExp = 12;
inline bool EquipmentCfg::has_baseexp() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void EquipmentCfg::set_has_baseexp() {
  _has_bits_[0] |= 0x00000400u;
}
inline void EquipmentCfg::clear_has_baseexp() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void EquipmentCfg::clear_baseexp() {
  baseexp_ = 0u;
  clear_has_baseexp();
}
inline ::google::protobuf::uint32 EquipmentCfg::baseexp() const {
  return baseexp_;
}
inline void EquipmentCfg::set_baseexp(::google::protobuf::uint32 value) {
  set_has_baseexp();
  baseexp_ = value;
}

// required uint32 InitStar = 13;
inline bool EquipmentCfg::has_initstar() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void EquipmentCfg::set_has_initstar() {
  _has_bits_[0] |= 0x00000800u;
}
inline void EquipmentCfg::clear_has_initstar() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void EquipmentCfg::clear_initstar() {
  initstar_ = 0u;
  clear_has_initstar();
}
inline ::google::protobuf::uint32 EquipmentCfg::initstar() const {
  return initstar_;
}
inline void EquipmentCfg::set_initstar(::google::protobuf::uint32 value) {
  set_has_initstar();
  initstar_ = value;
}

// required uint32 InitStep = 14;
inline bool EquipmentCfg::has_initstep() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void EquipmentCfg::set_has_initstep() {
  _has_bits_[0] |= 0x00001000u;
}
inline void EquipmentCfg::clear_has_initstep() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void EquipmentCfg::clear_initstep() {
  initstep_ = 0u;
  clear_has_initstep();
}
inline ::google::protobuf::uint32 EquipmentCfg::initstep() const {
  return initstep_;
}
inline void EquipmentCfg::set_initstep(::google::protobuf::uint32 value) {
  set_has_initstep();
  initstep_ = value;
}

// required uint32 ExpMulti = 16;
inline bool EquipmentCfg::has_expmulti() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void EquipmentCfg::set_has_expmulti() {
  _has_bits_[0] |= 0x00002000u;
}
inline void EquipmentCfg::clear_has_expmulti() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void EquipmentCfg::clear_expmulti() {
  expmulti_ = 0u;
  clear_has_expmulti();
}
inline ::google::protobuf::uint32 EquipmentCfg::expmulti() const {
  return expmulti_;
}
inline void EquipmentCfg::set_expmulti(::google::protobuf::uint32 value) {
  set_has_expmulti();
  expmulti_ = value;
}

// required uint32 EquipID = 17;
inline bool EquipmentCfg::has_equipid() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void EquipmentCfg::set_has_equipid() {
  _has_bits_[0] |= 0x00004000u;
}
inline void EquipmentCfg::clear_has_equipid() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void EquipmentCfg::clear_equipid() {
  equipid_ = 0u;
  clear_has_equipid();
}
inline ::google::protobuf::uint32 EquipmentCfg::equipid() const {
  return equipid_;
}
inline void EquipmentCfg::set_equipid(::google::protobuf::uint32 value) {
  set_has_equipid();
  equipid_ = value;
}

// required uint32 MaxStar = 18;
inline bool EquipmentCfg::has_maxstar() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void EquipmentCfg::set_has_maxstar() {
  _has_bits_[0] |= 0x00008000u;
}
inline void EquipmentCfg::clear_has_maxstar() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void EquipmentCfg::clear_maxstar() {
  maxstar_ = 0u;
  clear_has_maxstar();
}
inline ::google::protobuf::uint32 EquipmentCfg::maxstar() const {
  return maxstar_;
}
inline void EquipmentCfg::set_maxstar(::google::protobuf::uint32 value) {
  set_has_maxstar();
  maxstar_ = value;
}

// required uint32 AttrAdd = 19;
inline bool EquipmentCfg::has_attradd() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void EquipmentCfg::set_has_attradd() {
  _has_bits_[0] |= 0x00010000u;
}
inline void EquipmentCfg::clear_has_attradd() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void EquipmentCfg::clear_attradd() {
  attradd_ = 0u;
  clear_has_attradd();
}
inline ::google::protobuf::uint32 EquipmentCfg::attradd() const {
  return attradd_;
}
inline void EquipmentCfg::set_attradd(::google::protobuf::uint32 value) {
  set_has_attradd();
  attradd_ = value;
}

// required uint32 Color = 20;
inline bool EquipmentCfg::has_color() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void EquipmentCfg::set_has_color() {
  _has_bits_[0] |= 0x00020000u;
}
inline void EquipmentCfg::clear_has_color() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void EquipmentCfg::clear_color() {
  color_ = 0u;
  clear_has_color();
}
inline ::google::protobuf::uint32 EquipmentCfg::color() const {
  return color_;
}
inline void EquipmentCfg::set_color(::google::protobuf::uint32 value) {
  set_has_color();
  color_ = value;
}

// -------------------------------------------------------------------

// EquipmentCfgSet

// repeated .com.cfg.vo.EquipmentCfg EquipCfg1 = 1;
inline int EquipmentCfgSet::equipcfg1_size() const {
  return equipcfg1_.size();
}
inline void EquipmentCfgSet::clear_equipcfg1() {
  equipcfg1_.Clear();
}
inline const ::com::cfg::vo::EquipmentCfg& EquipmentCfgSet::equipcfg1(int index) const {
  return equipcfg1_.Get(index);
}
inline ::com::cfg::vo::EquipmentCfg* EquipmentCfgSet::mutable_equipcfg1(int index) {
  return equipcfg1_.Mutable(index);
}
inline ::com::cfg::vo::EquipmentCfg* EquipmentCfgSet::add_equipcfg1() {
  return equipcfg1_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::EquipmentCfg >&
EquipmentCfgSet::equipcfg1() const {
  return equipcfg1_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::EquipmentCfg >*
EquipmentCfgSet::mutable_equipcfg1() {
  return &equipcfg1_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_EquipmentCfg_2eproto__INCLUDED