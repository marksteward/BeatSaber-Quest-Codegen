// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.CaseInsensitiveAscii
#include "System/Net/CaseInsensitiveAscii.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.Net.CaseInsensitiveAscii StaticInstance
System::Net::CaseInsensitiveAscii* System::Net::CaseInsensitiveAscii::_get_StaticInstance() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("CaseInsensitiveAscii").WithContext("_get_StaticInstance");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Net::CaseInsensitiveAscii*>("System.Net", "CaseInsensitiveAscii", "StaticInstance"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Net.CaseInsensitiveAscii StaticInstance
void System::Net::CaseInsensitiveAscii::_set_StaticInstance(System::Net::CaseInsensitiveAscii* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("CaseInsensitiveAscii").WithContext("_set_StaticInstance");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "CaseInsensitiveAscii", "StaticInstance", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.Byte[] AsciiToLower
::Array<uint8_t>* System::Net::CaseInsensitiveAscii::_get_AsciiToLower() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("CaseInsensitiveAscii").WithContext("_get_AsciiToLower");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("System.Net", "CaseInsensitiveAscii", "AsciiToLower"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Byte[] AsciiToLower
void System::Net::CaseInsensitiveAscii::_set_AsciiToLower(::Array<uint8_t>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("CaseInsensitiveAscii").WithContext("_set_AsciiToLower");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "CaseInsensitiveAscii", "AsciiToLower", value));
}
// Autogenerated method: System.Net.CaseInsensitiveAscii.FastGetHashCode
int System::Net::CaseInsensitiveAscii::FastGetHashCode(::Il2CppString* myString) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("CaseInsensitiveAscii").WithContext("FastGetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FastGetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(myString)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, myString);
}
// Autogenerated method: System.Net.CaseInsensitiveAscii..cctor
void System::Net::CaseInsensitiveAscii::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("CaseInsensitiveAscii").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "CaseInsensitiveAscii", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Net.CaseInsensitiveAscii.GetHashCode
int System::Net::CaseInsensitiveAscii::GetHashCode(::Il2CppObject* myObject) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("CaseInsensitiveAscii").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(myObject)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, myObject);
}
int System::Net::CaseInsensitiveAscii::System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* myObject) {
  return System::Net::CaseInsensitiveAscii::GetHashCode(myObject);
}
// Autogenerated method: System.Net.CaseInsensitiveAscii.Compare
int System::Net::CaseInsensitiveAscii::Compare(::Il2CppObject* firstObject, ::Il2CppObject* secondObject) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("CaseInsensitiveAscii").WithContext("Compare");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Compare", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(firstObject, secondObject)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, firstObject, secondObject);
}
int System::Net::CaseInsensitiveAscii::System_Collections_IComparer_Compare(::Il2CppObject* firstObject, ::Il2CppObject* secondObject) {
  return System::Net::CaseInsensitiveAscii::Compare(firstObject, secondObject);
}
// Autogenerated method: System.Net.CaseInsensitiveAscii.Equals
bool System::Net::CaseInsensitiveAscii::Equals(::Il2CppObject* firstObject, ::Il2CppObject* secondObject) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("CaseInsensitiveAscii").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(firstObject, secondObject)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, firstObject, secondObject);
}
bool System::Net::CaseInsensitiveAscii::System_Collections_IEqualityComparer_Equals(::Il2CppObject* firstObject, ::Il2CppObject* secondObject) {
  return System::Net::CaseInsensitiveAscii::Equals(firstObject, secondObject);
}
