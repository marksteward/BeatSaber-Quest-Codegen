// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
#include "System/Security/Cryptography/X509Certificates/X509KeyUsageExtension.hpp"
// Including type: System.String
#include "System/String.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.String oid
::Il2CppString* System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_get_oid() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("_get_oid");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension", "oid"));
}
// Autogenerated static field setter
// Set static field: static System.String oid
void System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_set_oid(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("_set_oid");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension", "oid", value));
}
// Autogenerated static field getter
// Get static field: static System.String friendlyName
::Il2CppString* System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_get_friendlyName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("_get_friendlyName");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension", "friendlyName"));
}
// Autogenerated static field setter
// Set static field: static System.String friendlyName
void System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_set_friendlyName(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("_set_friendlyName");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension", "friendlyName", value));
}
// Autogenerated static field getter
// Get static field: static System.Security.Cryptography.X509Certificates.X509KeyUsageFlags all
System::Security::Cryptography::X509Certificates::X509KeyUsageFlags System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_get_all() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("_get_all");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>("System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension", "all"));
}
// Autogenerated static field setter
// Set static field: static System.Security.Cryptography.X509Certificates.X509KeyUsageFlags all
void System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_set_all(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("_set_all");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension", "all", value));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension.get_KeyUsages
System::Security::Cryptography::X509Certificates::X509KeyUsageFlags System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::get_KeyUsages() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("get_KeyUsages");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_KeyUsages", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension.GetValidFlags
System::Security::Cryptography::X509Certificates::X509KeyUsageFlags System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::GetValidFlags(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags flags) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("GetValidFlags");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetValidFlags", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(flags)));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, false>(this, ___internal__method, flags);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension.Decode
System::Security::Cryptography::AsnDecodeStatus System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Decode(::Array<uint8_t>* extension) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("Decode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Decode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(extension)));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::AsnDecodeStatus, false>(this, ___internal__method, extension);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension.Encode
::Array<uint8_t>* System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Encode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("Encode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Encode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension.CopyFrom
void System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("CopyFrom");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CopyFrom", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(asnEncodedData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, asnEncodedData);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension.ToString
::Il2CppString* System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::ToString(bool multiLine) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509KeyUsageExtension").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(multiLine)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, multiLine);
}
