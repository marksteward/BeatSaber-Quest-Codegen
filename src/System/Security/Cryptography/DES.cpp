// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.DES
#include "System/Security/Cryptography/DES.hpp"
// Including type: System.Security.Cryptography.KeySizes
#include "System/Security/Cryptography/KeySizes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
::Array<System::Security::Cryptography::KeySizes*>* System::Security::Cryptography::DES::_get_s_legalBlockSizes() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("_get_s_legalBlockSizes");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Security::Cryptography::KeySizes*>*>("System.Security.Cryptography", "DES", "s_legalBlockSizes"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
void System::Security::Cryptography::DES::_set_s_legalBlockSizes(::Array<System::Security::Cryptography::KeySizes*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("_set_s_legalBlockSizes");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography", "DES", "s_legalBlockSizes", value));
}
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
::Array<System::Security::Cryptography::KeySizes*>* System::Security::Cryptography::DES::_get_s_legalKeySizes() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("_get_s_legalKeySizes");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Security::Cryptography::KeySizes*>*>("System.Security.Cryptography", "DES", "s_legalKeySizes"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
void System::Security::Cryptography::DES::_set_s_legalKeySizes(::Array<System::Security::Cryptography::KeySizes*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("_set_s_legalKeySizes");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography", "DES", "s_legalKeySizes", value));
}
// Autogenerated method: System.Security.Cryptography.DES.Create
System::Security::Cryptography::DES* System::Security::Cryptography::DES::Create() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("Create");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "DES", "Create", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::DES*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.DES.IsWeakKey
bool System::Security::Cryptography::DES::IsWeakKey(::Array<uint8_t>* rgbKey) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("IsWeakKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "DES", "IsWeakKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(rgbKey)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, rgbKey);
}
// Autogenerated method: System.Security.Cryptography.DES.IsSemiWeakKey
bool System::Security::Cryptography::DES::IsSemiWeakKey(::Array<uint8_t>* rgbKey) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("IsSemiWeakKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "DES", "IsSemiWeakKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(rgbKey)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, rgbKey);
}
// Autogenerated method: System.Security.Cryptography.DES.IsLegalKeySize
bool System::Security::Cryptography::DES::IsLegalKeySize(::Array<uint8_t>* rgbKey) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("IsLegalKeySize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "DES", "IsLegalKeySize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(rgbKey)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, rgbKey);
}
// Autogenerated method: System.Security.Cryptography.DES.QuadWordFromBigEndian
uint64_t System::Security::Cryptography::DES::QuadWordFromBigEndian(::Array<uint8_t>* block) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("QuadWordFromBigEndian");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "DES", "QuadWordFromBigEndian", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(block)));
  return ::il2cpp_utils::RunMethodThrow<uint64_t, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, block);
}
// Autogenerated method: System.Security.Cryptography.DES..cctor
void System::Security::Cryptography::DES::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "DES", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.DES.get_Key
::Array<uint8_t>* System::Security::Cryptography::DES::get_Key() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("get_Key");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Key", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.DES.set_Key
void System::Security::Cryptography::DES::set_Key(::Array<uint8_t>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("DES").WithContext("set_Key");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_Key", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
