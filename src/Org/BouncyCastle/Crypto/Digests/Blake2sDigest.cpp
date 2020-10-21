// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.Blake2sDigest
#include "Org/BouncyCastle/Crypto/Digests/Blake2sDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.UInt32[] blake2s_IV
::Array<uint>* Org::BouncyCastle::Crypto::Digests::Blake2sDigest::_get_blake2s_IV() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint>*>("Org.BouncyCastle.Crypto.Digests", "Blake2sDigest", "blake2s_IV"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.UInt32[] blake2s_IV
void Org::BouncyCastle::Crypto::Digests::Blake2sDigest::_set_blake2s_IV(::Array<uint>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Digests", "Blake2sDigest", "blake2s_IV", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Byte[,] blake2s_sigma
::Array<uint8_t>* Org::BouncyCastle::Crypto::Digests::Blake2sDigest::_get_blake2s_sigma() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("Org.BouncyCastle.Crypto.Digests", "Blake2sDigest", "blake2s_sigma"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Byte[,] blake2s_sigma
void Org::BouncyCastle::Crypto::Digests::Blake2sDigest::_set_blake2s_sigma(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Digests", "Blake2sDigest", "blake2s_sigma", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest..ctor
Org::BouncyCastle::Crypto::Digests::Blake2sDigest* Org::BouncyCastle::Crypto::Digests::Blake2sDigest::New_ctor(int digestBits) {
  return THROW_UNLESS(il2cpp_utils::New<Blake2sDigest*>(digestBits));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.Init
void Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Init() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.InitializeInternalState
void Org::BouncyCastle::Crypto::Digests::Blake2sDigest::InitializeInternalState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitializeInternalState"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.Compress
void Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Compress(::Array<uint8_t>* message, int messagePos) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Compress", message, messagePos));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.G
void Org::BouncyCastle::Crypto::Digests::Blake2sDigest::G(uint m1, uint m2, int posA, int posB, int posC, int posD) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "G", m1, m2, posA, posB, posC, posD));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.rotr32
uint Org::BouncyCastle::Crypto::Digests::Blake2sDigest::rotr32(uint x, int rot) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "rotr32", x, rot));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest..cctor
void Org::BouncyCastle::Crypto::Digests::Blake2sDigest::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Crypto.Digests", "Blake2sDigest", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.Update
void Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Update(uint8_t b) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update", b));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.BlockUpdate
void Org::BouncyCastle::Crypto::Digests::Blake2sDigest::BlockUpdate(::Array<uint8_t>* message, int offset, int len) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BlockUpdate", message, offset, len));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.DoFinal
int Org::BouncyCastle::Crypto::Digests::Blake2sDigest::DoFinal(::Array<uint8_t>* output, int outOffset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "DoFinal", output, outOffset));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.Reset
void Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Digests::Blake2sDigest::get_AlgorithmName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_AlgorithmName"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.GetDigestSize
int Org::BouncyCastle::Crypto::Digests::Blake2sDigest::GetDigestSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetDigestSize"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2sDigest.GetByteLength
int Org::BouncyCastle::Crypto::Digests::Blake2sDigest::GetByteLength() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteLength"));
}