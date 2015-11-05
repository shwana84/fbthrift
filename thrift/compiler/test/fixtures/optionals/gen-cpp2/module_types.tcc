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

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t Color::read(Protocol_* iprot) {
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
      if (fname == "red") {
        fid = 1;
        ftype = apache::thrift::protocol::T_DOUBLE;
      }
      else if (fname == "green") {
        fid = 2;
        ftype = apache::thrift::protocol::T_DOUBLE;
      }
      else if (fname == "blue") {
        fid = 3;
        ftype = apache::thrift::protocol::T_DOUBLE;
      }
      else if (fname == "alpha") {
        fid = 4;
        ftype = apache::thrift::protocol::T_DOUBLE;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->red);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->green);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->blue);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 4:
      {
        if (ftype == apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->alpha);
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
uint32_t Color::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Color");
  xfer += prot_->serializedFieldSize("red", apache::thrift::protocol::T_DOUBLE, 1);
  xfer += prot_->serializedSizeDouble(this->red);
  xfer += prot_->serializedFieldSize("green", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->serializedSizeDouble(this->green);
  xfer += prot_->serializedFieldSize("blue", apache::thrift::protocol::T_DOUBLE, 3);
  xfer += prot_->serializedSizeDouble(this->blue);
  xfer += prot_->serializedFieldSize("alpha", apache::thrift::protocol::T_DOUBLE, 4);
  xfer += prot_->serializedSizeDouble(this->alpha);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Color::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Color");
  xfer += prot_->serializedFieldSize("red", apache::thrift::protocol::T_DOUBLE, 1);
  xfer += prot_->serializedSizeDouble(this->red);
  xfer += prot_->serializedFieldSize("green", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->serializedSizeDouble(this->green);
  xfer += prot_->serializedFieldSize("blue", apache::thrift::protocol::T_DOUBLE, 3);
  xfer += prot_->serializedSizeDouble(this->blue);
  xfer += prot_->serializedFieldSize("alpha", apache::thrift::protocol::T_DOUBLE, 4);
  xfer += prot_->serializedSizeDouble(this->alpha);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Color::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Color");
  xfer += prot_->writeFieldBegin("red", apache::thrift::protocol::T_DOUBLE, 1);
  xfer += prot_->writeDouble(this->red);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("green", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->writeDouble(this->green);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("blue", apache::thrift::protocol::T_DOUBLE, 3);
  xfer += prot_->writeDouble(this->blue);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("alpha", apache::thrift::protocol::T_DOUBLE, 4);
  xfer += prot_->writeDouble(this->alpha);
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
uint32_t Vehicle::read(Protocol_* iprot) {
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
      if (fname == "color") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
      else if (fname == "licensePlate") {
        fid = 2;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "description") {
        fid = 3;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "name") {
        fid = 4;
        ftype = apache::thrift::protocol::T_STRING;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::read(iprot, &this->color);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          this->licensePlate = std::string();
          xfer += iprot->readString(this->licensePlate.value());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          this->description = std::string();
          xfer += iprot->readString(this->description.value());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 4:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          this->name = std::string();
          xfer += iprot->readString(this->name.value());
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
uint32_t Vehicle::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Vehicle");
  xfer += prot_->serializedFieldSize("color", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::serializedSize(prot_, &this->color);
  if (this->licensePlate.hasValue()) {
    xfer += prot_->serializedFieldSize("licensePlate", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->serializedSizeString(this->licensePlate.value());
  }
  if (this->description.hasValue()) {
    xfer += prot_->serializedFieldSize("description", apache::thrift::protocol::T_STRING, 3);
    xfer += prot_->serializedSizeString(this->description.value());
  }
  if (this->name.hasValue()) {
    xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->serializedSizeString(this->name.value());
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Vehicle::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Vehicle");
  xfer += prot_->serializedFieldSize("color", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::serializedSizeZC(prot_, &this->color);
  if (this->licensePlate.hasValue()) {
    xfer += prot_->serializedFieldSize("licensePlate", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->serializedSizeString(this->licensePlate.value());
  }
  if (this->description.hasValue()) {
    xfer += prot_->serializedFieldSize("description", apache::thrift::protocol::T_STRING, 3);
    xfer += prot_->serializedSizeString(this->description.value());
  }
  if (this->name.hasValue()) {
    xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->serializedSizeString(this->name.value());
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Vehicle::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Vehicle");
  xfer += prot_->writeFieldBegin("color", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::write(prot_, &this->color);
  xfer += prot_->writeFieldEnd();
  if (this->licensePlate.hasValue()) {
    xfer += prot_->writeFieldBegin("licensePlate", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->writeString(this->licensePlate.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->description.hasValue()) {
    xfer += prot_->writeFieldBegin("description", apache::thrift::protocol::T_STRING, 3);
    xfer += prot_->writeString(this->description.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->name.hasValue()) {
    xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->writeString(this->name.value());
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

template <class Protocol_>
uint32_t Person::read(Protocol_* iprot) {
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
      if (fname == "id") {
        fid = 1;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "name") {
        fid = 2;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "age") {
        fid = 3;
        ftype = apache::thrift::protocol::T_I16;
      }
      else if (fname == "address") {
        fid = 4;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "favoriteColor") {
        fid = 5;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
      else if (fname == "friends") {
        fid = 6;
        ftype = apache::thrift::protocol::T_SET;
      }
      else if (fname == "bestFriend") {
        fid = 7;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "petNames") {
        fid = 8;
        ftype = apache::thrift::protocol::T_MAP;
      }
      else if (fname == "afraidOfAnimal") {
        fid = 9;
        ftype = apache::thrift::protocol::T_I32;
      }
      else if (fname == "vehicles") {
        fid = 10;
        ftype = apache::thrift::protocol::T_LIST;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_I16) {
          this->age = int16_t();
          xfer += iprot->readI16(this->age.value());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 4:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          this->address = std::string();
          xfer += iprot->readString(this->address.value());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 5:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          this->favoriteColor =  ::cpp2::Color();
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::read(iprot, &this->favoriteColor.value());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 6:
      {
        if (ftype == apache::thrift::protocol::T_SET) {
          this->friends = std::set< ::cpp2::PersonID>();
          uint32_t _size0;
          apache::thrift::protocol::TType _etype3;
          xfer += iprot->readSetBegin(_etype3, _size0);
          uint32_t _i4;
          if (_size0 == std::numeric_limits<uint32_t>::max()) {
            for (_i4 = 0; iprot->peekSet(); _i4++) {
               ::cpp2::PersonID _elem5;
              xfer += iprot->readI64(_elem5);
              this->friends.value().insert(std::move(_elem5));
            }
          }
          else {
            for (_i4 = 0; _i4 < _size0; ++_i4) {
               ::cpp2::PersonID _elem6;
              xfer += iprot->readI64(_elem6);
              this->friends.value().insert(std::move(_elem6));
            }
          }
          xfer += iprot->readSetEnd();
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 7:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          this->bestFriend = int64_t();
          xfer += iprot->readI64(this->bestFriend.value());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 8:
      {
        if (ftype == apache::thrift::protocol::T_MAP) {
          this->petNames = std::map< ::cpp2::Animal, std::string>();
          uint32_t _size7;
          apache::thrift::protocol::TType _ktype8;
          apache::thrift::protocol::TType _vtype9;
          xfer += iprot->readMapBegin(_ktype8, _vtype9, _size7);
          uint32_t _i11;
          if (_size7 == std::numeric_limits<uint32_t>::max()) {
            for (_i11 = 0; iprot->peekMap(); _i11++) {
               ::cpp2::Animal _key12;
              int32_t ecast14;
              xfer += iprot->readI32(ecast14);
              _key12 = ( ::cpp2::Animal)ecast14;
              std::string& _val13 = this->petNames.value()[std::move(_key12)];
              xfer += iprot->readString(_val13);
            }
          }
          else {
            for (_i11 = 0; _i11 < _size7; ++_i11) {
               ::cpp2::Animal _key15;
              int32_t ecast17;
              xfer += iprot->readI32(ecast17);
              _key15 = ( ::cpp2::Animal)ecast17;
              std::string& _val16 = this->petNames.value()[std::move(_key15)];
              xfer += iprot->readString(_val16);
            }
          }
          xfer += iprot->readMapEnd();
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 9:
      {
        if (ftype == apache::thrift::protocol::T_I32) {
          int32_t ecast18;
          xfer += iprot->readI32(ecast18);
          this->afraidOfAnimal = ( ::cpp2::Animal)ecast18;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 10:
      {
        if (ftype == apache::thrift::protocol::T_LIST) {
          this->vehicles = std::vector< ::cpp2::Vehicle>();
          uint32_t _size19;
          apache::thrift::protocol::TType _etype22;
          xfer += iprot->readListBegin(_etype22, _size19);
          uint32_t _i23;
          if (_size19 == std::numeric_limits<uint32_t>::max()) {
            for (_i23 = 0; iprot->peekList(); _i23++) {
              this->vehicles.value().resize(_i23 + 1);
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Vehicle>::read(iprot, &this->vehicles.value()[_i23]);
            }
          }
          else {
            this->vehicles.value().resize(_size19);
            for (_i23 = 0; _i23 < _size19; ++_i23) {
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Vehicle>::read(iprot, &this->vehicles.value()[_i23]);
            }
          }
          xfer += iprot->readListEnd();
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
uint32_t Person::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Person");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->id);
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->name);
  if (this->age.hasValue()) {
    xfer += prot_->serializedFieldSize("age", apache::thrift::protocol::T_I16, 3);
    xfer += prot_->serializedSizeI16(this->age.value());
  }
  if (this->address.hasValue()) {
    xfer += prot_->serializedFieldSize("address", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->serializedSizeString(this->address.value());
  }
  if (this->favoriteColor.hasValue()) {
    xfer += prot_->serializedFieldSize("favoriteColor", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::serializedSize(prot_, &this->favoriteColor.value());
  }
  if (this->friends.hasValue()) {
    xfer += prot_->serializedFieldSize("friends", apache::thrift::protocol::T_SET, 6);
    xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_I64, this->friends.value().size());
    for (auto _iter24 = this->friends.value().begin(); _iter24 != this->friends.value().end(); ++_iter24) {
      xfer += prot_->serializedSizeI64((*_iter24));
    }
    xfer += prot_->serializedSizeSetEnd();
  }
  if (this->bestFriend.hasValue()) {
    xfer += prot_->serializedFieldSize("bestFriend", apache::thrift::protocol::T_I64, 7);
    xfer += prot_->serializedSizeI64(this->bestFriend.value());
  }
  if (this->petNames.hasValue()) {
    xfer += prot_->serializedFieldSize("petNames", apache::thrift::protocol::T_MAP, 8);
    xfer += prot_->serializedSizeMapBegin(apache::thrift::protocol::T_I32, apache::thrift::protocol::T_STRING, this->petNames.value().size());
    for (auto _iter25 = this->petNames.value().begin(); _iter25 != this->petNames.value().end(); ++_iter25) {
      xfer += prot_->serializedSizeI32((int32_t)_iter25->first);
      xfer += prot_->serializedSizeString(_iter25->second);
    }
    xfer += prot_->serializedSizeMapEnd();
  }
  if (this->afraidOfAnimal.hasValue()) {
    xfer += prot_->serializedFieldSize("afraidOfAnimal", apache::thrift::protocol::T_I32, 9);
    xfer += prot_->serializedSizeI32((int32_t)this->afraidOfAnimal.value());
  }
  if (this->vehicles.hasValue()) {
    xfer += prot_->serializedFieldSize("vehicles", apache::thrift::protocol::T_LIST, 10);
    xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_STRUCT, this->vehicles.value().size());
    for (auto _iter26 = this->vehicles.value().begin(); _iter26 != this->vehicles.value().end(); ++_iter26) {
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Vehicle>::serializedSize(prot_, &(*_iter26));
    }
    xfer += prot_->serializedSizeListEnd();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Person::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Person");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->id);
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->name);
  if (this->age.hasValue()) {
    xfer += prot_->serializedFieldSize("age", apache::thrift::protocol::T_I16, 3);
    xfer += prot_->serializedSizeI16(this->age.value());
  }
  if (this->address.hasValue()) {
    xfer += prot_->serializedFieldSize("address", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->serializedSizeString(this->address.value());
  }
  if (this->favoriteColor.hasValue()) {
    xfer += prot_->serializedFieldSize("favoriteColor", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::serializedSizeZC(prot_, &this->favoriteColor.value());
  }
  if (this->friends.hasValue()) {
    xfer += prot_->serializedFieldSize("friends", apache::thrift::protocol::T_SET, 6);
    xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_I64, this->friends.value().size());
    for (auto _iter27 = this->friends.value().begin(); _iter27 != this->friends.value().end(); ++_iter27) {
      xfer += prot_->serializedSizeI64((*_iter27));
    }
    xfer += prot_->serializedSizeSetEnd();
  }
  if (this->bestFriend.hasValue()) {
    xfer += prot_->serializedFieldSize("bestFriend", apache::thrift::protocol::T_I64, 7);
    xfer += prot_->serializedSizeI64(this->bestFriend.value());
  }
  if (this->petNames.hasValue()) {
    xfer += prot_->serializedFieldSize("petNames", apache::thrift::protocol::T_MAP, 8);
    xfer += prot_->serializedSizeMapBegin(apache::thrift::protocol::T_I32, apache::thrift::protocol::T_STRING, this->petNames.value().size());
    for (auto _iter28 = this->petNames.value().begin(); _iter28 != this->petNames.value().end(); ++_iter28) {
      xfer += prot_->serializedSizeI32((int32_t)_iter28->first);
      xfer += prot_->serializedSizeString(_iter28->second);
    }
    xfer += prot_->serializedSizeMapEnd();
  }
  if (this->afraidOfAnimal.hasValue()) {
    xfer += prot_->serializedFieldSize("afraidOfAnimal", apache::thrift::protocol::T_I32, 9);
    xfer += prot_->serializedSizeI32((int32_t)this->afraidOfAnimal.value());
  }
  if (this->vehicles.hasValue()) {
    xfer += prot_->serializedFieldSize("vehicles", apache::thrift::protocol::T_LIST, 10);
    xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_STRUCT, this->vehicles.value().size());
    for (auto _iter29 = this->vehicles.value().begin(); _iter29 != this->vehicles.value().end(); ++_iter29) {
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Vehicle>::serializedSizeZC(prot_, &(*_iter29));
    }
    xfer += prot_->serializedSizeListEnd();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Person::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Person");
  xfer += prot_->writeFieldBegin("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->writeI64(this->id);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->name);
  xfer += prot_->writeFieldEnd();
  if (this->age.hasValue()) {
    xfer += prot_->writeFieldBegin("age", apache::thrift::protocol::T_I16, 3);
    xfer += prot_->writeI16(this->age.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->address.hasValue()) {
    xfer += prot_->writeFieldBegin("address", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->writeString(this->address.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->favoriteColor.hasValue()) {
    xfer += prot_->writeFieldBegin("favoriteColor", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::write(prot_, &this->favoriteColor.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->friends.hasValue()) {
    xfer += prot_->writeFieldBegin("friends", apache::thrift::protocol::T_SET, 6);
    xfer += prot_->writeSetBegin(apache::thrift::protocol::T_I64, this->friends.value().size());
    for (auto _iter30 = this->friends.value().begin(); _iter30 != this->friends.value().end(); ++_iter30) {
      xfer += prot_->writeI64((*_iter30));
    }
    xfer += prot_->writeSetEnd();
    xfer += prot_->writeFieldEnd();
  }
  if (this->bestFriend.hasValue()) {
    xfer += prot_->writeFieldBegin("bestFriend", apache::thrift::protocol::T_I64, 7);
    xfer += prot_->writeI64(this->bestFriend.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->petNames.hasValue()) {
    xfer += prot_->writeFieldBegin("petNames", apache::thrift::protocol::T_MAP, 8);
    xfer += prot_->writeMapBegin(apache::thrift::protocol::T_I32, apache::thrift::protocol::T_STRING, this->petNames.value().size());
    for (auto _iter31 = this->petNames.value().begin(); _iter31 != this->petNames.value().end(); ++_iter31) {
      xfer += prot_->writeI32((int32_t)_iter31->first);
      xfer += prot_->writeString(_iter31->second);
    }
    xfer += prot_->writeMapEnd();
    xfer += prot_->writeFieldEnd();
  }
  if (this->afraidOfAnimal.hasValue()) {
    xfer += prot_->writeFieldBegin("afraidOfAnimal", apache::thrift::protocol::T_I32, 9);
    xfer += prot_->writeI32((int32_t)this->afraidOfAnimal.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->vehicles.hasValue()) {
    xfer += prot_->writeFieldBegin("vehicles", apache::thrift::protocol::T_LIST, 10);
    xfer += prot_->writeListBegin(apache::thrift::protocol::T_STRUCT, this->vehicles.value().size());
    for (auto _iter32 = this->vehicles.value().begin(); _iter32 != this->vehicles.value().end(); ++_iter32) {
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Vehicle>::write(prot_, &(*_iter32));
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