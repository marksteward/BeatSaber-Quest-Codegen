// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.__BinaryParser
#include "System/Runtime/Serialization/Formatters/Binary/__BinaryParser.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "System/Runtime/Serialization/Formatters/Binary/ObjectReader.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.SizedArray
#include "System/Runtime/Serialization/Formatters/Binary/SizedArray.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.SerStack
#include "System/Runtime/Serialization/Formatters/Binary/SerStack.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.ParseRecord
#include "System/Runtime/Serialization/Formatters/Binary/ParseRecord.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo
#include "System/Runtime/Serialization/Formatters/Binary/BinaryAssemblyInfo.hpp"
// Including type: System.IO.BinaryReader
#include "System/IO/BinaryReader.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryObject
#include "System/Runtime/Serialization/Formatters/Binary/BinaryObject.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
#include "System/Runtime/Serialization/Formatters/Binary/BinaryObjectWithMap.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped
#include "System/Runtime/Serialization/Formatters/Binary/BinaryObjectWithMapTyped.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
#include "System/Runtime/Serialization/Formatters/Binary/BinaryObjectString.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString
#include "System/Runtime/Serialization/Formatters/Binary/BinaryCrossAppDomainString.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped
#include "System/Runtime/Serialization/Formatters/Binary/MemberPrimitiveTyped.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped
#include "System/Runtime/Serialization/Formatters/Binary/MemberPrimitiveUnTyped.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.MemberReference
#include "System/Runtime/Serialization/Formatters/Binary/MemberReference.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.ObjectNull
#include "System/Runtime/Serialization/Formatters/Binary/ObjectNull.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.MessageEnd
#include "System/Runtime/Serialization/Formatters/Binary/MessageEnd.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.ObjectProgress
#include "System/Runtime/Serialization/Formatters/Binary/ObjectProgress.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Text.Encoding encoding
System::Text::Encoding* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_get_encoding() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("_get_encoding");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Text::Encoding*>("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser", "encoding"));
}
// Autogenerated static field setter
// Set static field: static private System.Text.Encoding encoding
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_set_encoding(System::Text::Encoding* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("_set_encoding");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser", "encoding", value));
}
// Autogenerated static field getter
// Get static field: static System.Runtime.Serialization.Formatters.Binary.MessageEnd messageEnd
System::Runtime::Serialization::Formatters::Binary::MessageEnd* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_get_messageEnd() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("_get_messageEnd");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Runtime::Serialization::Formatters::Binary::MessageEnd*>("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser", "messageEnd"));
}
// Autogenerated static field setter
// Set static field: static System.Runtime.Serialization.Formatters.Binary.MessageEnd messageEnd
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_set_messageEnd(System::Runtime::Serialization::Formatters::Binary::MessageEnd* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("_set_messageEnd");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser", "messageEnd", value));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.get_SystemAssemblyInfo
System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_SystemAssemblyInfo() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("get_SystemAssemblyInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_SystemAssemblyInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.get_ObjectMapIdTable
System::Runtime::Serialization::Formatters::Binary::SizedArray* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_ObjectMapIdTable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("get_ObjectMapIdTable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_ObjectMapIdTable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Runtime::Serialization::Formatters::Binary::SizedArray*, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.get_AssemIdToAssemblyTable
System::Runtime::Serialization::Formatters::Binary::SizedArray* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_AssemIdToAssemblyTable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("get_AssemIdToAssemblyTable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_AssemIdToAssemblyTable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Runtime::Serialization::Formatters::Binary::SizedArray*, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.get_prs
System::Runtime::Serialization::Formatters::Binary::ParseRecord* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_prs() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("get_prs");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_prs", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Runtime::Serialization::Formatters::Binary::ParseRecord*, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.Run
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::Run() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("Run");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Run", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadBegin
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBegin() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadBegin");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadBegin", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadEnd
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadEnd() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadEnd");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadEnd", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadBoolean
bool System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBoolean() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadBoolean");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadBoolean", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadByte
uint8_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadByte() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadByte");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadByte", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<uint8_t, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadBytes
::Array<uint8_t>* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes(int length) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadBytes", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(length)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method, length);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadBytes
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes(::Array<uint8_t>* byteA, int offset, int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadBytes", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(byteA, offset, size)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, byteA, offset, size);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadChar
::Il2CppChar System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChar() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadChar");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadChar", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppChar, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadChars
::Array<::Il2CppChar>* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChars(int length) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadChars");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadChars", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(length)));
  return ::il2cpp_utils::RunMethodThrow<::Array<::Il2CppChar>*, false>(this, ___internal__method, length);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadDecimal
System::Decimal System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDecimal() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadDecimal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadDecimal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Decimal, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadSingle
float System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSingle() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadSingle");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadSingle", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadDouble
double System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDouble() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadDouble");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadDouble", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<double, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadInt16
int16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt16() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadInt16");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadInt16", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int16_t, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadInt32
int System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt32() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadInt32");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadInt32", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadInt64
int64_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt64() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadInt64");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadInt64", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadSByte
int8_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSByte() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadSByte");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadSByte", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int8_t, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadString
::Il2CppString* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadTimeSpan
System::TimeSpan System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadTimeSpan() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadTimeSpan");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadTimeSpan", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::TimeSpan, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadDateTime
System::DateTime System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDateTime() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadDateTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadDateTime", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::DateTime, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadUInt16
uint16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt16() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadUInt16");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadUInt16", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<uint16_t, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadUInt32
uint System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt32() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadUInt32");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadUInt32", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<uint, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadUInt64
uint64_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt64() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadUInt64");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadUInt64", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<uint64_t, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadSerializationHeaderRecord
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSerializationHeaderRecord() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadSerializationHeaderRecord");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadSerializationHeaderRecord", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadAssembly
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadAssembly(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadAssembly");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadAssembly", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(binaryHeaderEnum)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, binaryHeaderEnum);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadObject
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObject() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadObject");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadCrossAppDomainMap
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadCrossAppDomainMap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadCrossAppDomainMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadCrossAppDomainMap", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadObjectWithMap
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadObjectWithMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadObjectWithMap", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(binaryHeaderEnum)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, binaryHeaderEnum);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadObjectWithMap
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* record) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadObjectWithMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadObjectWithMap", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(record)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, record);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadObjectWithMapTyped
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadObjectWithMapTyped");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadObjectWithMapTyped", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(binaryHeaderEnum)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, binaryHeaderEnum);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadObjectWithMapTyped
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* record) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadObjectWithMapTyped");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadObjectWithMapTyped", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(record)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, record);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadObjectString
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectString(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadObjectString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadObjectString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(binaryHeaderEnum)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, binaryHeaderEnum);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadMemberPrimitiveTyped
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveTyped() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadMemberPrimitiveTyped");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadMemberPrimitiveTyped", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadArray
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArray(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadArray");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadArray", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(binaryHeaderEnum)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, binaryHeaderEnum);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadArrayAsBytes
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArrayAsBytes(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadArrayAsBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadArrayAsBytes", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(pr)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, pr);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadMemberPrimitiveUnTyped
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveUnTyped() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadMemberPrimitiveUnTyped");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadMemberPrimitiveUnTyped", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadMemberReference
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberReference() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadMemberReference");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadMemberReference", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadObjectNull
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectNull(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadObjectNull");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadObjectNull", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(binaryHeaderEnum)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, binaryHeaderEnum);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadMessageEnd
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMessageEnd() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadMessageEnd");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadMessageEnd", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.ReadValue
::Il2CppObject* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadValue(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("ReadValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadValue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(code)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, code);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.GetOp
System::Runtime::Serialization::Formatters::Binary::ObjectProgress* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::GetOp() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("GetOp");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetOp", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Runtime::Serialization::Formatters::Binary::ObjectProgress*, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser.PutOp
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::PutOp(System::Runtime::Serialization::Formatters::Binary::ObjectProgress* op) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext("PutOp");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PutOp", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(op)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, op);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.__BinaryParser..cctor
void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("__BinaryParser").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
