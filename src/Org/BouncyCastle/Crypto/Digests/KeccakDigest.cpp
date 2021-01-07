// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.KeccakDigest
#include "Org/BouncyCastle/Crypto/Digests/KeccakDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.UInt64[] KeccakRoundConstants
::Array<uint64_t>* Org::BouncyCastle::Crypto::Digests::KeccakDigest::_get_KeccakRoundConstants() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("_get_KeccakRoundConstants");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint64_t>*>("Org.BouncyCastle.Crypto.Digests", "KeccakDigest", "KeccakRoundConstants"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.UInt64[] KeccakRoundConstants
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::_set_KeccakRoundConstants(::Array<uint64_t>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("_set_KeccakRoundConstants");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Digests", "KeccakDigest", "KeccakRoundConstants", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.CopyIn
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::CopyIn(Org::BouncyCastle::Crypto::Digests::KeccakDigest* source) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("CopyIn");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CopyIn", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(source)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, source);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.Init
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::Init(int bitLength) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(bitLength)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, bitLength);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.InitSponge
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::InitSponge(int rate) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("InitSponge");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InitSponge", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(rate)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, rate);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.Absorb
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::Absorb(uint8_t data) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("Absorb");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Absorb", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(data)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, data);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.Absorb
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::Absorb(::Array<uint8_t>* data, int off, int len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("Absorb");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Absorb", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(data, off, len)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, data, off, len);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.AbsorbBits
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::AbsorbBits(int data, int bits) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("AbsorbBits");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AbsorbBits", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(data, bits)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, data, bits);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.PadAndSwitchToSqueezingPhase
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::PadAndSwitchToSqueezingPhase() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("PadAndSwitchToSqueezingPhase");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PadAndSwitchToSqueezingPhase", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.Squeeze
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::Squeeze(::Array<uint8_t>* output, int offset, int64_t outputLength) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("Squeeze");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Squeeze", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(output, offset, outputLength)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, output, offset, outputLength);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.KeccakAbsorb
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::KeccakAbsorb(::Array<uint8_t>* data, int off) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("KeccakAbsorb");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "KeccakAbsorb", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(data, off)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, data, off);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.KeccakExtract
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::KeccakExtract() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("KeccakExtract");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "KeccakExtract", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.KeccakPermutation
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::KeccakPermutation() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("KeccakPermutation");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "KeccakPermutation", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest..cctor
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Digests", "KeccakDigest", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Digests::KeccakDigest::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.GetDigestSize
int Org::BouncyCastle::Crypto::Digests::KeccakDigest::GetDigestSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("GetDigestSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetDigestSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.Update
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::Update(uint8_t input) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Update", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.BlockUpdate
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::BlockUpdate(::Array<uint8_t>* input, int inOff, int len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("BlockUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BlockUpdate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, inOff, len)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input, inOff, len);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.DoFinal
int Org::BouncyCastle::Crypto::Digests::KeccakDigest::DoFinal(::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("DoFinal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DoFinal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.Reset
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.GetByteLength
int Org::BouncyCastle::Crypto::Digests::KeccakDigest::GetByteLength() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("GetByteLength");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetByteLength", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.Copy
Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::KeccakDigest::Copy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("Copy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Copy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Utilities::IMemoable*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.KeccakDigest.Reset
void Org::BouncyCastle::Crypto::Digests::KeccakDigest::Reset(Org::BouncyCastle::Utilities::IMemoable* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("KeccakDigest").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, other);
}
