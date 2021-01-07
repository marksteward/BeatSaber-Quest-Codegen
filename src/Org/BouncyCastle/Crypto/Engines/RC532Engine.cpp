// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.RC532Engine
#include "Org/BouncyCastle/Crypto/Engines/RC532Engine.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 P32
int Org::BouncyCastle::Crypto::Engines::RC532Engine::_get_P32() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("_get_P32");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("Org.BouncyCastle.Crypto.Engines", "RC532Engine", "P32"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 P32
void Org::BouncyCastle::Crypto::Engines::RC532Engine::_set_P32(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("_set_P32");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "RC532Engine", "P32", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 Q32
int Org::BouncyCastle::Crypto::Engines::RC532Engine::_get_Q32() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("_get_Q32");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("Org.BouncyCastle.Crypto.Engines", "RC532Engine", "Q32"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 Q32
void Org::BouncyCastle::Crypto::Engines::RC532Engine::_set_Q32(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("_set_Q32");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "RC532Engine", "Q32", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.SetKey
void Org::BouncyCastle::Crypto::Engines::RC532Engine::SetKey(::Array<uint8_t>* key) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("SetKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.EncryptBlock
int Org::BouncyCastle::Crypto::Engines::RC532Engine::EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("EncryptBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EncryptBlock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, inOff, outBytes, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff, outBytes, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.DecryptBlock
int Org::BouncyCastle::Crypto::Engines::RC532Engine::DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("DecryptBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DecryptBlock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, inOff, outBytes, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff, outBytes, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.RotateLeft
int Org::BouncyCastle::Crypto::Engines::RC532Engine::RotateLeft(int x, int y) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("RotateLeft");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RotateLeft", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, x, y);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.RotateRight
int Org::BouncyCastle::Crypto::Engines::RC532Engine::RotateRight(int x, int y) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("RotateRight");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RotateRight", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, x, y);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.BytesToWord
int Org::BouncyCastle::Crypto::Engines::RC532Engine::BytesToWord(::Array<uint8_t>* src, int srcOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("BytesToWord");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BytesToWord", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(src, srcOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, src, srcOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.WordToBytes
void Org::BouncyCastle::Crypto::Engines::RC532Engine::WordToBytes(int word, ::Array<uint8_t>* dst, int dstOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("WordToBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WordToBytes", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(word, dst, dstOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, word, dst, dstOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine..cctor
void Org::BouncyCastle::Crypto::Engines::RC532Engine::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Engines", "RC532Engine", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Engines::RC532Engine::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.get_IsPartialBlockOkay
bool Org::BouncyCastle::Crypto::Engines::RC532Engine::get_IsPartialBlockOkay() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("get_IsPartialBlockOkay");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_IsPartialBlockOkay", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.GetBlockSize
int Org::BouncyCastle::Crypto::Engines::RC532Engine::GetBlockSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("GetBlockSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetBlockSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.Init
void Org::BouncyCastle::Crypto::Engines::RC532Engine::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(forEncryption, parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, forEncryption, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.ProcessBlock
int Org::BouncyCastle::Crypto::Engines::RC532Engine::ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("ProcessBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ProcessBlock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, inOff, output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC532Engine.Reset
void Org::BouncyCastle::Crypto::Engines::RC532Engine::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
