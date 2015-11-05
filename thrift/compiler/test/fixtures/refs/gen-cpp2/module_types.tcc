/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/MoveWrapper.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

template <class Protocol_>
uint32_t MyUnion::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  xfer += iprot->readFieldBegin(fname, ftype, fid);
  if (ftype == apache::thrift::protocol::T_STOP) {
    this->__clear();
  } else {
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "anInteger") {
        fid = 1;
        ftype = apache::thrift::protocol::T_I32;
      }
      else if (fname == "aString") {
        fid = 2;
        ftype = apache::thrift::protocol::T_STRING;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_I32) {
          this->set_anInteger();
          xfer += iprot->readI32(this->mutable_anInteger());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          this->set_aString();
          xfer += iprot->readString(this->mutable_aString());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t MyUnion::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::anInteger:
    {
      xfer += prot_->serializedFieldSize("anInteger", apache::thrift::protocol::T_I32, 1);
      xfer += prot_->serializedSizeI32(this->get_anInteger());
      break;
    }
    case MyUnion::Type::aString:
    {
      xfer += prot_->serializedFieldSize("aString", apache::thrift::protocol::T_STRING, 2);
      xfer += prot_->serializedSizeString(this->get_aString());
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyUnion::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::anInteger:
    {
      xfer += prot_->serializedFieldSize("anInteger", apache::thrift::protocol::T_I32, 1);
      xfer += prot_->serializedSizeI32(this->get_anInteger());
      break;
    }
    case MyUnion::Type::aString:
    {
      xfer += prot_->serializedFieldSize("aString", apache::thrift::protocol::T_STRING, 2);
      xfer += prot_->serializedSizeString(this->get_aString());
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyUnion::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::anInteger:
    {
      xfer += prot_->writeFieldBegin("anInteger", apache::thrift::protocol::T_I32, 1);
      xfer += prot_->writeI32(this->get_anInteger());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case MyUnion::Type::aString:
    {
      xfer += prot_->writeFieldBegin("aString", apache::thrift::protocol::T_STRING, 2);
      xfer += prot_->writeString(this->get_aString());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t MyField::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;

  bool isset_req_value = false;

  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "opt_value") {
        fid = 1;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "value") {
        fid = 2;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "req_value") {
        fid = 3;
        ftype = apache::thrift::protocol::T_I64;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->opt_value);
          this->__isset.opt_value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->req_value);
          isset_req_value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  if (!isset_req_value) {
    throw TProtocolException(TProtocolException::MISSING_REQUIRED_FIELD, "Required field 'req_value' was not foundin serialized data! Struct: MyField");
  }
  return xfer;
}

template <class Protocol_>
uint32_t MyField::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyField");
  if (this->__isset.opt_value) {
    xfer += prot_->serializedFieldSize("opt_value", apache::thrift::protocol::T_I64, 1);
    xfer += prot_->serializedSizeI64(this->opt_value);
  }
  xfer += prot_->serializedFieldSize("value", apache::thrift::protocol::T_I64, 2);
  xfer += prot_->serializedSizeI64(this->value);
  xfer += prot_->serializedFieldSize("req_value", apache::thrift::protocol::T_I64, 3);
  xfer += prot_->serializedSizeI64(this->req_value);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyField::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyField");
  if (this->__isset.opt_value) {
    xfer += prot_->serializedFieldSize("opt_value", apache::thrift::protocol::T_I64, 1);
    xfer += prot_->serializedSizeI64(this->opt_value);
  }
  xfer += prot_->serializedFieldSize("value", apache::thrift::protocol::T_I64, 2);
  xfer += prot_->serializedSizeI64(this->value);
  xfer += prot_->serializedFieldSize("req_value", apache::thrift::protocol::T_I64, 3);
  xfer += prot_->serializedSizeI64(this->req_value);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyField::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyField");
  if (this->__isset.opt_value) {
    xfer += prot_->writeFieldBegin("opt_value", apache::thrift::protocol::T_I64, 1);
    xfer += prot_->writeI64(this->opt_value);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldBegin("value", apache::thrift::protocol::T_I64, 2);
  xfer += prot_->writeI64(this->value);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("req_value", apache::thrift::protocol::T_I64, 3);
  xfer += prot_->writeI64(this->req_value);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;

  bool isset_req_ref = false;

  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "opt_ref") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
      else if (fname == "ref") {
        fid = 2;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
      else if (fname == "req_ref") {
        fid = 3;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          this->opt_ref = std::unique_ptr< ::cpp2::MyField>(new  ::cpp2::MyField);
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::read(iprot, this->opt_ref.get());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          this->ref = std::unique_ptr< ::cpp2::MyField>(new  ::cpp2::MyField);
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::read(iprot, this->ref.get());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          this->req_ref = std::unique_ptr< ::cpp2::MyField>(new  ::cpp2::MyField);
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::read(iprot, this->req_ref.get());
          isset_req_ref = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  if (!isset_req_ref) {
    throw TProtocolException(TProtocolException::MISSING_REQUIRED_FIELD, "Required field 'req_ref' was not foundin serialized data! Struct: MyStruct");
  }
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  if (this->opt_ref) {
    xfer += prot_->serializedFieldSize("opt_ref", apache::thrift::protocol::T_STRUCT, 1);
    if (this->opt_ref) {
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::serializedSize(prot_, this->opt_ref.get());
    }
    else {
      prot_->writeStructBegin("MyField");
      prot_->writeStructEnd();
      prot_->writeFieldStop();
    }
  }
  xfer += prot_->serializedFieldSize("ref", apache::thrift::protocol::T_STRUCT, 2);
  if (this->ref) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::serializedSize(prot_, this->ref.get());
  }
  else {
    prot_->writeStructBegin("MyField");
    prot_->writeStructEnd();
    prot_->writeFieldStop();
  }
  xfer += prot_->serializedFieldSize("req_ref", apache::thrift::protocol::T_STRUCT, 3);
  if (this->req_ref) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::serializedSize(prot_, this->req_ref.get());
  }
  else {
    prot_->writeStructBegin("MyField");
    prot_->writeStructEnd();
    prot_->writeFieldStop();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  if (this->opt_ref) {
    xfer += prot_->serializedFieldSize("opt_ref", apache::thrift::protocol::T_STRUCT, 1);
    if (this->opt_ref) {
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::serializedSizeZC(prot_, this->opt_ref.get());
    }
    else {
      prot_->writeStructBegin("MyField");
      prot_->writeStructEnd();
      prot_->writeFieldStop();
    }
  }
  xfer += prot_->serializedFieldSize("ref", apache::thrift::protocol::T_STRUCT, 2);
  if (this->ref) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::serializedSizeZC(prot_, this->ref.get());
  }
  else {
    prot_->writeStructBegin("MyField");
    prot_->writeStructEnd();
    prot_->writeFieldStop();
  }
  xfer += prot_->serializedFieldSize("req_ref", apache::thrift::protocol::T_STRUCT, 3);
  if (this->req_ref) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::serializedSizeZC(prot_, this->req_ref.get());
  }
  else {
    prot_->writeStructBegin("MyField");
    prot_->writeStructEnd();
    prot_->writeFieldStop();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  if (this->opt_ref) {
    xfer += prot_->writeFieldBegin("opt_ref", apache::thrift::protocol::T_STRUCT, 1);
    if (this->opt_ref) {
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::write(prot_, this->opt_ref.get());
    }
    else {
      prot_->writeStructBegin("MyField");
      prot_->writeStructEnd();
      prot_->writeFieldStop();
    }
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldBegin("ref", apache::thrift::protocol::T_STRUCT, 2);
  if (this->ref) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::write(prot_, this->ref.get());
  }
  else {
    prot_->writeStructBegin("MyField");
    prot_->writeStructEnd();
    prot_->writeFieldStop();
  }
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("req_ref", apache::thrift::protocol::T_STRUCT, 3);
  if (this->req_ref) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::write(prot_, this->req_ref.get());
  }
  else {
    prot_->writeStructBegin("MyField");
    prot_->writeStructEnd();
    prot_->writeFieldStop();
  }
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t StructWithUnion::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "u") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
      else if (fname == "aDouble") {
        fid = 2;
        ftype = apache::thrift::protocol::T_DOUBLE;
      }
      else if (fname == "f") {
        fid = 3;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          this->u = std::unique_ptr< ::cpp2::MyUnion>(new  ::cpp2::MyUnion);
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyUnion>::read(iprot, this->u.get());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->aDouble);
          this->__isset.aDouble = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::read(iprot, &this->f);
          this->__isset.f = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t StructWithUnion::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructWithUnion");
  xfer += prot_->serializedFieldSize("u", apache::thrift::protocol::T_STRUCT, 1);
  if (this->u) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyUnion>::serializedSize(prot_, this->u.get());
  }
  else {
    prot_->writeStructBegin("MyUnion");
    prot_->writeStructEnd();
    prot_->writeFieldStop();
  }
  xfer += prot_->serializedFieldSize("aDouble", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->serializedSizeDouble(this->aDouble);
  xfer += prot_->serializedFieldSize("f", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::serializedSize(prot_, &this->f);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructWithUnion::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructWithUnion");
  xfer += prot_->serializedFieldSize("u", apache::thrift::protocol::T_STRUCT, 1);
  if (this->u) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyUnion>::serializedSizeZC(prot_, this->u.get());
  }
  else {
    prot_->writeStructBegin("MyUnion");
    prot_->writeStructEnd();
    prot_->writeFieldStop();
  }
  xfer += prot_->serializedFieldSize("aDouble", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->serializedSizeDouble(this->aDouble);
  xfer += prot_->serializedFieldSize("f", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::serializedSizeZC(prot_, &this->f);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructWithUnion::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("StructWithUnion");
  xfer += prot_->writeFieldBegin("u", apache::thrift::protocol::T_STRUCT, 1);
  if (this->u) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyUnion>::write(prot_, this->u.get());
  }
  else {
    prot_->writeStructBegin("MyUnion");
    prot_->writeStructEnd();
    prot_->writeFieldStop();
  }
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("aDouble", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->writeDouble(this->aDouble);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("f", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::write(prot_, &this->f);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t RecursiveStruct::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "mes") {
        fid = 1;
        ftype = apache::thrift::protocol::T_LIST;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_LIST) {
          this->mes = std::vector< ::cpp2::RecursiveStruct>();
          uint32_t _size6;
          apache::thrift::protocol::TType _etype9;
          xfer += iprot->readListBegin(_etype9, _size6);
          uint32_t _i10;
          if (_size6 == std::numeric_limits<uint32_t>::max()) {
            for (_i10 = 0; iprot->peekList(); _i10++) {
              this->mes.resize(_i10 + 1);
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::RecursiveStruct>::read(iprot, &this->mes[_i10]);
            }
          }
          else {
            this->mes.resize(_size6);
            for (_i10 = 0; _i10 < _size6; ++_i10) {
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::RecursiveStruct>::read(iprot, &this->mes[_i10]);
            }
          }
          xfer += iprot->readListEnd();
          this->__isset.mes = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t RecursiveStruct::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("RecursiveStruct");
  if (this->__isset.mes) {
    xfer += prot_->serializedFieldSize("mes", apache::thrift::protocol::T_LIST, 1);
    xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_STRUCT, this->mes.size());
    for (auto _iter11 = this->mes.begin(); _iter11 != this->mes.end(); ++_iter11) {
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::RecursiveStruct>::serializedSize(prot_, &(*_iter11));
    }
    xfer += prot_->serializedSizeListEnd();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t RecursiveStruct::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("RecursiveStruct");
  if (this->__isset.mes) {
    xfer += prot_->serializedFieldSize("mes", apache::thrift::protocol::T_LIST, 1);
    xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_STRUCT, this->mes.size());
    for (auto _iter12 = this->mes.begin(); _iter12 != this->mes.end(); ++_iter12) {
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::RecursiveStruct>::serializedSizeZC(prot_, &(*_iter12));
    }
    xfer += prot_->serializedSizeListEnd();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t RecursiveStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("RecursiveStruct");
  if (this->__isset.mes) {
    xfer += prot_->writeFieldBegin("mes", apache::thrift::protocol::T_LIST, 1);
    xfer += prot_->writeListBegin(apache::thrift::protocol::T_STRUCT, this->mes.size());
    for (auto _iter13 = this->mes.begin(); _iter13 != this->mes.end(); ++_iter13) {
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::RecursiveStruct>::write(prot_, &(*_iter13));
    }
    xfer += prot_->writeListEnd();
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2