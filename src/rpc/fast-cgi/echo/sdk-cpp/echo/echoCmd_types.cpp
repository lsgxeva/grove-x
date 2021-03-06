/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "echoCmd_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace EchoCmd {


EchoReq::~EchoReq() throw() {
}


void EchoReq::__set_command(const std::string& val) {
  this->command = val;
}

void EchoReq::__set_header(const  ::HttpCmd::Header& val) {
  this->header = val;
}

void EchoReq::__set_foo(const std::string& val) {
  this->foo = val;
}

const char* EchoReq::ascii_fingerprint = "06A235020DFE310C434A71E9E6127848";
const uint8_t EchoReq::binary_fingerprint[16] = {0x06,0xA2,0x35,0x02,0x0D,0xFE,0x31,0x0C,0x43,0x4A,0x71,0xE9,0xE6,0x12,0x78,0x48};

uint32_t EchoReq::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_command = false;
  bool isset_header = false;
  bool isset_foo = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->command);
          isset_command = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->header.read(iprot);
          isset_header = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->foo);
          isset_foo = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_command)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_header)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_foo)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EchoReq::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("EchoReq");

  xfer += oprot->writeFieldBegin("command", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->command);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("header", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->header.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("foo", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->foo);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(EchoReq &a, EchoReq &b) {
  using ::std::swap;
  swap(a.command, b.command);
  swap(a.header, b.header);
  swap(a.foo, b.foo);
}

EchoReq::EchoReq(const EchoReq& other0) {
  command = other0.command;
  header = other0.header;
  foo = other0.foo;
}
EchoReq& EchoReq::operator=(const EchoReq& other1) {
  command = other1.command;
  header = other1.header;
  foo = other1.foo;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const EchoReq& obj) {
  using apache::thrift::to_string;
  out << "EchoReq(";
  out << "command=" << to_string(obj.command);
  out << ", " << "header=" << to_string(obj.header);
  out << ", " << "foo=" << to_string(obj.foo);
  out << ")";
  return out;
}


EchoRsp::~EchoRsp() throw() {
}


void EchoRsp::__set_error(const int32_t val) {
  this->error = val;
}

void EchoRsp::__set_errmsg(const std::string& val) {
  this->errmsg = val;
}

void EchoRsp::__set_foo(const std::string& val) {
  this->foo = val;
}

void EchoRsp::__set_pid(const int32_t val) {
  this->pid = val;
}

const char* EchoRsp::ascii_fingerprint = "E162B1F7953C55D6B978645D745A3B90";
const uint8_t EchoRsp::binary_fingerprint[16] = {0xE1,0x62,0xB1,0xF7,0x95,0x3C,0x55,0xD6,0xB9,0x78,0x64,0x5D,0x74,0x5A,0x3B,0x90};

uint32_t EchoRsp::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_error = false;
  bool isset_errmsg = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->error);
          isset_error = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->errmsg);
          isset_errmsg = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->foo);
          this->__isset.foo = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->pid);
          this->__isset.pid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_error)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_errmsg)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EchoRsp::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("EchoRsp");

  xfer += oprot->writeFieldBegin("error", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->error);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("errmsg", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->errmsg);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("foo", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->foo);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pid", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->pid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(EchoRsp &a, EchoRsp &b) {
  using ::std::swap;
  swap(a.error, b.error);
  swap(a.errmsg, b.errmsg);
  swap(a.foo, b.foo);
  swap(a.pid, b.pid);
  swap(a.__isset, b.__isset);
}

EchoRsp::EchoRsp(const EchoRsp& other2) {
  error = other2.error;
  errmsg = other2.errmsg;
  foo = other2.foo;
  pid = other2.pid;
  __isset = other2.__isset;
}
EchoRsp& EchoRsp::operator=(const EchoRsp& other3) {
  error = other3.error;
  errmsg = other3.errmsg;
  foo = other3.foo;
  pid = other3.pid;
  __isset = other3.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const EchoRsp& obj) {
  using apache::thrift::to_string;
  out << "EchoRsp(";
  out << "error=" << to_string(obj.error);
  out << ", " << "errmsg=" << to_string(obj.errmsg);
  out << ", " << "foo=" << to_string(obj.foo);
  out << ", " << "pid=" << to_string(obj.pid);
  out << ")";
  return out;
}

} // namespace
