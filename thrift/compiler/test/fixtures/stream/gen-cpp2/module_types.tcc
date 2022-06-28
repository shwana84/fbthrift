/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>
#include <thrift/lib/cpp2/op/Clear.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::FooStreamEx> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::FooEx> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

template <class Protocol_>
void FooStreamEx::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<FooStreamEx>>();
  }

  switch (_readState.fieldId) {
    default:
    {
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t FooStreamEx::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("FooStreamEx");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t FooStreamEx::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("FooStreamEx");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t FooStreamEx::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("FooStreamEx");
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void FooStreamEx::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t FooStreamEx::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t FooStreamEx::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t FooStreamEx::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void FooStreamEx::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t FooStreamEx::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t FooStreamEx::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t FooStreamEx::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


template <class Protocol_>
void FooEx::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<FooEx>>();
  }

  switch (_readState.fieldId) {
    default:
    {
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t FooEx::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("FooEx");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t FooEx::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("FooEx");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t FooEx::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("FooEx");
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void FooEx::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t FooEx::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t FooEx::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t FooEx::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void FooEx::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t FooEx::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t FooEx::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t FooEx::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2
