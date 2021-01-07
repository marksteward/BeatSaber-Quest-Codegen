// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.RC2Engine
#include "Org/BouncyCastle/Crypto/Engines/RC2Engine.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Byte[] piTable
::Array<uint8_t>* Org::BouncyCastle::Crypto::Engines::RC2Engine::_get_piTable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("_get_piTable");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("Org.BouncyCastle.Crypto.Engines", "RC2Engine", "piTable"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Byte[] piTable
void Org::BouncyCastle::Crypto::Engines::RC2Engine::_set_piTable(::Array<uint8_t>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("_set_piTable");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "RC2Engine", "piTable", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine.GenerateWorkingKey
::Array<int>* Org::BouncyCastle::Crypto::Engines::RC2Engine::GenerateWorkingKey(::Array<uint8_t>* key, int bits) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("GenerateWorkingKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GenerateWorkingKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, bits)));
  return ::il2cpp_utils::RunMethodThrow<::Array<int>*, false>(this, ___internal__method, key, bits);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine.RotateWordLeft
int Org::BouncyCastle::Crypto::Engines::RC2Engine::RotateWordLeft(int x, int y) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("RotateWordLeft");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RotateWordLeft", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, x, y);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine.EncryptBlock
void Org::BouncyCastle::Crypto::Engines::RC2Engine::EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("EncryptBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EncryptBlock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, inOff, outBytes, outOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input, inOff, outBytes, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine.DecryptBlock
void Org::BouncyCastle::Crypto::Engines::RC2Engine::DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("DecryptBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DecryptBlock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, inOff, outBytes, outOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input, inOff, outBytes, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine..cctor
void Org::BouncyCastle::Crypto::Engines::RC2Engine::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Engines", "RC2Engine", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine.Init
void Org::BouncyCastle::Crypto::Engines::RC2Engine::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(forEncryption, parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, forEncryption, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine.Reset
void Org::BouncyCastle::Crypto::Engines::RC2Engine::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Engines::RC2Engine::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine.get_IsPartialBlockOkay
bool Org::BouncyCastle::Crypto::Engines::RC2Engine::get_IsPartialBlockOkay() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("get_IsPartialBlockOkay");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_IsPartialBlockOkay", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine.GetBlockSize
int Org::BouncyCastle::Crypto::Engines::RC2Engine::GetBlockSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("GetBlockSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetBlockSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC2Engine.ProcessBlock
int Org::BouncyCastle::Crypto::Engines::RC2Engine::ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC2Engine").WithContext("ProcessBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ProcessBlock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, inOff, output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff, output, outOff);
}
