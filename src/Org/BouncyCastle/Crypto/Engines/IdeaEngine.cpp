// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.IdeaEngine
#include "Org/BouncyCastle/Crypto/Engines/IdeaEngine.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 MASK
int Org::BouncyCastle::Crypto::Engines::IdeaEngine::_get_MASK() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("_get_MASK");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("Org.BouncyCastle.Crypto.Engines", "IdeaEngine", "MASK"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 MASK
void Org::BouncyCastle::Crypto::Engines::IdeaEngine::_set_MASK(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("_set_MASK");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "IdeaEngine", "MASK", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 BASE
int Org::BouncyCastle::Crypto::Engines::IdeaEngine::_get_BASE() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("_get_BASE");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("Org.BouncyCastle.Crypto.Engines", "IdeaEngine", "BASE"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 BASE
void Org::BouncyCastle::Crypto::Engines::IdeaEngine::_set_BASE(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("_set_BASE");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "IdeaEngine", "BASE", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.BytesToWord
int Org::BouncyCastle::Crypto::Engines::IdeaEngine::BytesToWord(::Array<uint8_t>* input, int inOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("BytesToWord");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BytesToWord", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, inOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.WordToBytes
void Org::BouncyCastle::Crypto::Engines::IdeaEngine::WordToBytes(int word, ::Array<uint8_t>* outBytes, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("WordToBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WordToBytes", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(word, outBytes, outOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, word, outBytes, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.Mul
int Org::BouncyCastle::Crypto::Engines::IdeaEngine::Mul(int x, int y) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("Mul");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Mul", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, x, y);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.IdeaFunc
void Org::BouncyCastle::Crypto::Engines::IdeaEngine::IdeaFunc(::Array<int>* workingKey, ::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("IdeaFunc");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IdeaFunc", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(workingKey, input, inOff, outBytes, outOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, workingKey, input, inOff, outBytes, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.ExpandKey
::Array<int>* Org::BouncyCastle::Crypto::Engines::IdeaEngine::ExpandKey(::Array<uint8_t>* uKey) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("ExpandKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ExpandKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(uKey)));
  return ::il2cpp_utils::RunMethodThrow<::Array<int>*, false>(this, ___internal__method, uKey);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.MulInv
int Org::BouncyCastle::Crypto::Engines::IdeaEngine::MulInv(int x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("MulInv");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MulInv", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, x);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.AddInv
int Org::BouncyCastle::Crypto::Engines::IdeaEngine::AddInv(int x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("AddInv");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddInv", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, x);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.InvertKey
::Array<int>* Org::BouncyCastle::Crypto::Engines::IdeaEngine::InvertKey(::Array<int>* inKey) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("InvertKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvertKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inKey)));
  return ::il2cpp_utils::RunMethodThrow<::Array<int>*, false>(this, ___internal__method, inKey);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.GenerateWorkingKey
::Array<int>* Org::BouncyCastle::Crypto::Engines::IdeaEngine::GenerateWorkingKey(bool forEncryption, ::Array<uint8_t>* userKey) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("GenerateWorkingKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GenerateWorkingKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(forEncryption, userKey)));
  return ::il2cpp_utils::RunMethodThrow<::Array<int>*, false>(this, ___internal__method, forEncryption, userKey);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine..cctor
void Org::BouncyCastle::Crypto::Engines::IdeaEngine::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Engines", "IdeaEngine", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.Init
void Org::BouncyCastle::Crypto::Engines::IdeaEngine::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(forEncryption, parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, forEncryption, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Engines::IdeaEngine::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.get_IsPartialBlockOkay
bool Org::BouncyCastle::Crypto::Engines::IdeaEngine::get_IsPartialBlockOkay() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("get_IsPartialBlockOkay");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_IsPartialBlockOkay", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.GetBlockSize
int Org::BouncyCastle::Crypto::Engines::IdeaEngine::GetBlockSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("GetBlockSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetBlockSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.ProcessBlock
int Org::BouncyCastle::Crypto::Engines::IdeaEngine::ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("ProcessBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ProcessBlock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, inOff, output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.IdeaEngine.Reset
void Org::BouncyCastle::Crypto::Engines::IdeaEngine::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("IdeaEngine").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
