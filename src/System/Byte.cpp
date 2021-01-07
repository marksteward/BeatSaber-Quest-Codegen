// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Byte
#include "System/Byte.hpp"
// Including type: System.Globalization.NumberStyles
#include "System/Globalization/NumberStyles.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
// Including type: System.Globalization.NumberFormatInfo
#include "System/Globalization/NumberFormatInfo.hpp"
// Including type: System.TypeCode
#include "System/TypeCode.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Byte MaxValue
uint8_t System::Byte::_get_MaxValue() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("_get_MaxValue");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint8_t>("System", "Byte", "MaxValue"));
}
// Autogenerated static field setter
// Set static field: static public System.Byte MaxValue
void System::Byte::_set_MaxValue(uint8_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("_set_MaxValue");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Byte", "MaxValue", value));
}
// Autogenerated static field getter
// Get static field: static public System.Byte MinValue
uint8_t System::Byte::_get_MinValue() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("_get_MinValue");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint8_t>("System", "Byte", "MinValue"));
}
// Autogenerated static field setter
// Set static field: static public System.Byte MinValue
void System::Byte::_set_MinValue(uint8_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("_set_MinValue");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Byte", "MinValue", value));
}
// Autogenerated method: System.Byte.Parse
uint8_t System::Byte::Parse(::Il2CppString* s, System::Globalization::NumberStyles style) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("Parse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System", "Byte", "Parse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s, style)));
  return ::il2cpp_utils::RunMethodThrow<uint8_t, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s, style);
}
// Autogenerated method: System.Byte.Parse
uint8_t System::Byte::Parse(::Il2CppString* s, System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("Parse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System", "Byte", "Parse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s, provider)));
  return ::il2cpp_utils::RunMethodThrow<uint8_t, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s, provider);
}
// Autogenerated method: System.Byte.Parse
uint8_t System::Byte::Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("Parse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System", "Byte", "Parse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s, style, provider)));
  return ::il2cpp_utils::RunMethodThrow<uint8_t, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s, style, provider);
}
// Autogenerated method: System.Byte.Parse
uint8_t System::Byte::Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("Parse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System", "Byte", "Parse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s, style, info)));
  return ::il2cpp_utils::RunMethodThrow<uint8_t, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s, style, info);
}
// Autogenerated method: System.Byte.TryParse
bool System::Byte::TryParse(::Il2CppString* s, uint8_t& result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("TryParse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System", "Byte", "TryParse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s, result)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s, result);
}
// Autogenerated method: System.Byte.TryParse
bool System::Byte::TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, uint8_t& result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("TryParse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System", "Byte", "TryParse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s, style, provider, result)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s, style, provider, result);
}
// Autogenerated method: System.Byte.TryParse
bool System::Byte::TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, uint8_t& result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("TryParse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System", "Byte", "TryParse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s, style, info, result)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s, style, info, result);
}
// Autogenerated method: System.Byte.ToString
::Il2CppString* System::Byte::ToString(::Il2CppString* format) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(format)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method, format);
}
// Autogenerated method: System.Byte.CompareTo
int System::Byte::CompareTo(::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("CompareTo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "CompareTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, value);
}
int System::Byte::System_IComparable_CompareTo(::Il2CppObject* value) {
  return System::Byte::CompareTo(value);
}
// Autogenerated method: System.Byte.CompareTo
int System::Byte::CompareTo(uint8_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("CompareTo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "CompareTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, value);
}
// Autogenerated method: System.Byte.Equals
bool System::Byte::Equals(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, obj);
}
// Autogenerated method: System.Byte.Equals
bool System::Byte::Equals(uint8_t obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, obj);
}
// Autogenerated method: System.Byte.GetHashCode
int System::Byte::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
}
// Autogenerated method: System.Byte.ToString
::Il2CppString* System::Byte::ToString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
}
// Autogenerated method: System.Byte.ToString
::Il2CppString* System::Byte::ToString(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.ToString
::Il2CppString* System::Byte::ToString(::Il2CppString* format, System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(format, provider)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method, format, provider);
}
// Autogenerated method: System.Byte.GetTypeCode
System::TypeCode System::Byte::GetTypeCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("GetTypeCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetTypeCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::TypeCode, false>(*this, ___internal__method);
}
// Autogenerated method: System.Byte.System.IConvertible.ToBoolean
bool System::Byte::System_IConvertible_ToBoolean(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToBoolean");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToBoolean", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToChar
::Il2CppChar System::Byte::System_IConvertible_ToChar(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToChar");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToChar", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppChar, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToSByte
int8_t System::Byte::System_IConvertible_ToSByte(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToSByte");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToSByte", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<int8_t, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToByte
uint8_t System::Byte::System_IConvertible_ToByte(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToByte");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToByte", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<uint8_t, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToInt16
int16_t System::Byte::System_IConvertible_ToInt16(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToInt16");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToInt16", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<int16_t, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToUInt16
uint16_t System::Byte::System_IConvertible_ToUInt16(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToUInt16");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToUInt16", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<uint16_t, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToInt32
int System::Byte::System_IConvertible_ToInt32(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToInt32");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToInt32", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToUInt32
uint System::Byte::System_IConvertible_ToUInt32(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToUInt32");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToUInt32", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<uint, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToInt64
int64_t System::Byte::System_IConvertible_ToInt64(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToInt64");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToInt64", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToUInt64
uint64_t System::Byte::System_IConvertible_ToUInt64(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToUInt64");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToUInt64", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<uint64_t, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToSingle
float System::Byte::System_IConvertible_ToSingle(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToSingle");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToSingle", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToDouble
double System::Byte::System_IConvertible_ToDouble(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToDouble");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToDouble", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<double, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToDecimal
System::Decimal System::Byte::System_IConvertible_ToDecimal(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToDecimal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToDecimal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<System::Decimal, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToDateTime
System::DateTime System::Byte::System_IConvertible_ToDateTime(System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToDateTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToDateTime", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider)));
  return ::il2cpp_utils::RunMethodThrow<System::DateTime, false>(*this, ___internal__method, provider);
}
// Autogenerated method: System.Byte.System.IConvertible.ToType
::Il2CppObject* System::Byte::System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("Byte").WithContext("System.IConvertible.ToType");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IConvertible.ToType", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type, provider)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(*this, ___internal__method, type, provider);
}
