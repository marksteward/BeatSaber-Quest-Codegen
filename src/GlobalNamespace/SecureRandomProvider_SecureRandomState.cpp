// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SecureRandomProvider/SecureRandomState
#include "GlobalNamespace/SecureRandomProvider_SecureRandomState.hpp"
// Including type: System.Security.Cryptography.RNGCryptoServiceProvider
#include "System/Security/Cryptography/RNGCryptoServiceProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kBufferSize
int GlobalNamespace::SecureRandomProvider::SecureRandomState::_get_kBufferSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SecureRandomState").WithContext("_get_kBufferSize");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "SecureRandomProvider/SecureRandomState", "kBufferSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kBufferSize
void GlobalNamespace::SecureRandomProvider::SecureRandomState::_set_kBufferSize(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SecureRandomState").WithContext("_set_kBufferSize");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SecureRandomProvider/SecureRandomState", "kBufferSize", value));
}
// Autogenerated method: SecureRandomProvider/SecureRandomState.GetBytes
void GlobalNamespace::SecureRandomProvider::SecureRandomState::GetBytes(::Array<uint8_t>* buffer, int offset, int length) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SecureRandomState").WithContext("GetBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetBytes", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(buffer, offset, length)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, buffer, offset, length);
}
// Autogenerated method: SecureRandomProvider/SecureRandomState.GetByte
uint8_t GlobalNamespace::SecureRandomProvider::SecureRandomState::GetByte() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SecureRandomState").WithContext("GetByte");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetByte", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<uint8_t, false>(this, ___internal__method);
}
// Autogenerated method: SecureRandomProvider/SecureRandomState.FillBuffer
void GlobalNamespace::SecureRandomProvider::SecureRandomState::FillBuffer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SecureRandomState").WithContext("FillBuffer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FillBuffer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
