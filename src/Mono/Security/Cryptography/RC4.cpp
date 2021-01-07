// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.RC4
#include "Mono/Security/Cryptography/RC4.hpp"
// Including type: System.Security.Cryptography.KeySizes
#include "System/Security/Cryptography/KeySizes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
::Array<System::Security::Cryptography::KeySizes*>* Mono::Security::Cryptography::RC4::_get_s_legalBlockSizes() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RC4").WithContext("_get_s_legalBlockSizes");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Security::Cryptography::KeySizes*>*>("Mono.Security.Cryptography", "RC4", "s_legalBlockSizes"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
void Mono::Security::Cryptography::RC4::_set_s_legalBlockSizes(::Array<System::Security::Cryptography::KeySizes*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RC4").WithContext("_set_s_legalBlockSizes");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Security.Cryptography", "RC4", "s_legalBlockSizes", value));
}
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
::Array<System::Security::Cryptography::KeySizes*>* Mono::Security::Cryptography::RC4::_get_s_legalKeySizes() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RC4").WithContext("_get_s_legalKeySizes");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Security::Cryptography::KeySizes*>*>("Mono.Security.Cryptography", "RC4", "s_legalKeySizes"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
void Mono::Security::Cryptography::RC4::_set_s_legalKeySizes(::Array<System::Security::Cryptography::KeySizes*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RC4").WithContext("_set_s_legalKeySizes");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Security.Cryptography", "RC4", "s_legalKeySizes", value));
}
// Autogenerated method: Mono.Security.Cryptography.RC4.Create
Mono::Security::Cryptography::RC4* Mono::Security::Cryptography::RC4::Create() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RC4").WithContext("Create");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Mono.Security.Cryptography", "RC4", "Create", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Mono::Security::Cryptography::RC4*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Mono.Security.Cryptography.RC4..cctor
void Mono::Security::Cryptography::RC4::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RC4").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Mono.Security.Cryptography", "RC4", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Mono.Security.Cryptography.RC4.get_IV
::Array<uint8_t>* Mono::Security::Cryptography::RC4::get_IV() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RC4").WithContext("get_IV");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_IV", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.Cryptography.RC4.set_IV
void Mono::Security::Cryptography::RC4::set_IV(::Array<uint8_t>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RC4").WithContext("set_IV");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_IV", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
