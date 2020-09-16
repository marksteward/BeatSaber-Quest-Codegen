// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Guid/GuidStyles
#include "System/Guid_GuidStyles.hpp"
// Including type: System.Guid/GuidParseThrowStyle
#include "System/Guid_GuidParseThrowStyle.hpp"
// Including type: System.Guid/ParseFailureKind
#include "System/Guid_ParseFailureKind.hpp"
// Including type: System.Guid/GuidResult
#include "System/Guid_GuidResult.hpp"
// Including type: System.Security.Cryptography.RandomNumberGenerator
#include "System/Security/Cryptography/RandomNumberGenerator.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Guid Empty
System::Guid System::Guid::_get_Empty() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Guid>("System", "Guid", "Empty"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Guid Empty
void System::Guid::_set_Empty(System::Guid value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Guid", "Empty", value));
}
// Autogenerated static field getter
// Get static field: static private System.Object _rngAccess
::Il2CppObject* System::Guid::_get__rngAccess() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppObject*>("System", "Guid", "_rngAccess"));
}
// Autogenerated static field setter
// Set static field: static private System.Object _rngAccess
void System::Guid::_set__rngAccess(::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Guid", "_rngAccess", value));
}
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.RandomNumberGenerator _rng
System::Security::Cryptography::RandomNumberGenerator* System::Guid::_get__rng() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Security::Cryptography::RandomNumberGenerator*>("System", "Guid", "_rng"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.RandomNumberGenerator _rng
void System::Guid::_set__rng(System::Security::Cryptography::RandomNumberGenerator* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Guid", "_rng", value));
}
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.RandomNumberGenerator _fastRng
System::Security::Cryptography::RandomNumberGenerator* System::Guid::_get__fastRng() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Security::Cryptography::RandomNumberGenerator*>("System", "Guid", "_fastRng"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.RandomNumberGenerator _fastRng
void System::Guid::_set__fastRng(System::Security::Cryptography::RandomNumberGenerator* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Guid", "_fastRng", value));
}
// Autogenerated method: System.Guid..ctor
System::Guid::Guid(::Array<uint8_t>* b) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, ".ctor", b));
}
// Autogenerated method: System.Guid..ctor
System::Guid::Guid(uint a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, ".ctor", a, b, c, d, e, f, g, h, i, j, k));
}
// Autogenerated method: System.Guid..ctor
// ABORTED elsewhere.  System::Guid::Guid(int a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k)
// Autogenerated method: System.Guid..ctor
System::Guid::Guid(::Il2CppString* g) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, ".ctor", g));
}
// Autogenerated method: System.Guid.Parse
System::Guid System::Guid::Parse(::Il2CppString* input) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>("System", "Guid", "Parse", input));
}
// Autogenerated method: System.Guid.TryParse
bool System::Guid::TryParse(::Il2CppString* input, System::Guid& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "TryParse", input, result));
}
// Autogenerated method: System.Guid.TryParseGuid
bool System::Guid::TryParseGuid(::Il2CppString* g, System::Guid::GuidStyles flags, System::Guid::GuidResult& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "TryParseGuid", g, flags, result));
}
// Autogenerated method: System.Guid.TryParseGuidWithHexPrefix
bool System::Guid::TryParseGuidWithHexPrefix(::Il2CppString* guidString, System::Guid::GuidResult& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "TryParseGuidWithHexPrefix", guidString, result));
}
// Autogenerated method: System.Guid.TryParseGuidWithNoStyle
bool System::Guid::TryParseGuidWithNoStyle(::Il2CppString* guidString, System::Guid::GuidResult& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "TryParseGuidWithNoStyle", guidString, result));
}
// Autogenerated method: System.Guid.TryParseGuidWithDashes
bool System::Guid::TryParseGuidWithDashes(::Il2CppString* guidString, System::Guid::GuidResult& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "TryParseGuidWithDashes", guidString, result));
}
// Autogenerated method: System.Guid.StringToShort
bool System::Guid::StringToShort(::Il2CppString* str, int requiredLength, int flags, int16_t& result, System::Guid::GuidResult& parseResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "StringToShort", str, requiredLength, flags, result, parseResult));
}
// Autogenerated method: System.Guid.StringToShort
bool System::Guid::StringToShort(::Il2CppString* str, int* parsePos, int requiredLength, int flags, int16_t& result, System::Guid::GuidResult& parseResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "StringToShort", str, parsePos, requiredLength, flags, result, parseResult));
}
// Autogenerated method: System.Guid.StringToInt
bool System::Guid::StringToInt(::Il2CppString* str, int requiredLength, int flags, int& result, System::Guid::GuidResult& parseResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "StringToInt", str, requiredLength, flags, result, parseResult));
}
// Autogenerated method: System.Guid.StringToInt
bool System::Guid::StringToInt(::Il2CppString* str, int& parsePos, int requiredLength, int flags, int& result, System::Guid::GuidResult& parseResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "StringToInt", str, parsePos, requiredLength, flags, result, parseResult));
}
// Autogenerated method: System.Guid.StringToInt
bool System::Guid::StringToInt(::Il2CppString* str, int* parsePos, int requiredLength, int flags, int& result, System::Guid::GuidResult& parseResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "StringToInt", str, parsePos, requiredLength, flags, result, parseResult));
}
// Autogenerated method: System.Guid.StringToLong
bool System::Guid::StringToLong(::Il2CppString* str, int& parsePos, int flags, int64_t& result, System::Guid::GuidResult& parseResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "StringToLong", str, parsePos, flags, result, parseResult));
}
// Autogenerated method: System.Guid.StringToLong
bool System::Guid::StringToLong(::Il2CppString* str, int* parsePos, int flags, int64_t& result, System::Guid::GuidResult& parseResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "StringToLong", str, parsePos, flags, result, parseResult));
}
// Autogenerated method: System.Guid.EatAllWhitespace
::Il2CppString* System::Guid::EatAllWhitespace(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System", "Guid", "EatAllWhitespace", str));
}
// Autogenerated method: System.Guid.IsHexPrefix
bool System::Guid::IsHexPrefix(::Il2CppString* str, int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "IsHexPrefix", str, i));
}
// Autogenerated method: System.Guid.ToByteArray
::Array<uint8_t>* System::Guid::ToByteArray() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(*this, "ToByteArray"));
}
// Autogenerated method: System.Guid.GetResult
int System::Guid::GetResult(uint me, uint them) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetResult", me, them));
}
// Autogenerated method: System.Guid.ToString
::Il2CppString* System::Guid::ToString(::Il2CppString* format) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString", format));
}
// Autogenerated method: System.Guid.HexToChar
::Il2CppChar System::Guid::HexToChar(int a) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>("System", "Guid", "HexToChar", a));
}
// Autogenerated method: System.Guid.HexsToChars
int System::Guid::HexsToChars(::Il2CppChar* guidChars, int offset, int a, int b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "Guid", "HexsToChars", guidChars, offset, a, b));
}
// Autogenerated method: System.Guid.HexsToChars
int System::Guid::HexsToChars(::Il2CppChar* guidChars, int offset, int a, int b, bool hex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "Guid", "HexsToChars", guidChars, offset, a, b, hex));
}
// Autogenerated method: System.Guid.NewGuid
System::Guid System::Guid::NewGuid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>("System", "Guid", "NewGuid"));
}
// Autogenerated method: System.Guid..cctor
void System::Guid::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "Guid", ".cctor"));
}
// Autogenerated method: System.Guid.ToString
::Il2CppString* System::Guid::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
}
// Autogenerated method: System.Guid.GetHashCode
int System::Guid::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: System.Guid.Equals
bool System::Guid::Equals(::Il2CppObject* o) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", o));
}
// Autogenerated method: System.Guid.Equals
bool System::Guid::Equals(System::Guid g) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", g));
}
// Autogenerated method: System.Guid.CompareTo
int System::Guid::CompareTo(::Il2CppObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
int System::Guid::System_IComparable_CompareTo(::Il2CppObject* value) {
  return System::Guid::CompareTo(value);
}
// Autogenerated method: System.Guid.CompareTo
int System::Guid::CompareTo(System::Guid value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
// Autogenerated method: System.Guid.ToString
::Il2CppString* System::Guid::ToString(::Il2CppString* format, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString", format, provider));
}
// Autogenerated method: System.Guid.op_Equality
bool System::operator ==(const System::Guid& a, const System::Guid& b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "op_Equality", a, b));
}
// Autogenerated method: System.Guid.op_Inequality
bool System::operator !=(const System::Guid& a, const System::Guid& b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Guid", "op_Inequality", a, b));
}
