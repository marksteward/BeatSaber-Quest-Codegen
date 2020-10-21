// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.DSAManaged
#include "Mono/Security/Cryptography/DSAManaged.hpp"
// Including type: Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
#include "Mono/Security/Cryptography/DSAManaged_KeyGeneratedEventHandler.hpp"
// Including type: Mono.Math.BigInteger
#include "Mono/Math/BigInteger.hpp"
// Including type: System.Security.Cryptography.RandomNumberGenerator
#include "System/Security/Cryptography/RandomNumberGenerator.hpp"
// Including type: System.Security.Cryptography.DSAParameters
#include "System/Security/Cryptography/DSAParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Security.Cryptography.DSAManaged..ctor
Mono::Security::Cryptography::DSAManaged* Mono::Security::Cryptography::DSAManaged::New_ctor(int dwKeySize) {
  return THROW_UNLESS(il2cpp_utils::New<DSAManaged*>(dwKeySize));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.Generate
void Mono::Security::Cryptography::DSAManaged::Generate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Generate"));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.GenerateKeyPair
void Mono::Security::Cryptography::DSAManaged::GenerateKeyPair() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GenerateKeyPair"));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.add
void Mono::Security::Cryptography::DSAManaged::add(::Array<uint8_t>* a, ::Array<uint8_t>* b, int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add", a, b, value));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.GenerateParams
void Mono::Security::Cryptography::DSAManaged::GenerateParams(int keyLength) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GenerateParams", keyLength));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.get_Random
System::Security::Cryptography::RandomNumberGenerator* Mono::Security::Cryptography::DSAManaged::get_Random() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::RandomNumberGenerator*>(this, "get_Random"));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.get_PublicOnly
bool Mono::Security::Cryptography::DSAManaged::get_PublicOnly() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_PublicOnly"));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.NormalizeArray
::Array<uint8_t>* Mono::Security::Cryptography::DSAManaged::NormalizeArray(::Array<uint8_t>* array) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "NormalizeArray", array));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.add_KeyGenerated
void Mono::Security::Cryptography::DSAManaged::add_KeyGenerated(Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_KeyGenerated", value));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.remove_KeyGenerated
void Mono::Security::Cryptography::DSAManaged::remove_KeyGenerated(Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_KeyGenerated", value));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.Finalize
void Mono::Security::Cryptography::DSAManaged::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.get_KeySize
int Mono::Security::Cryptography::DSAManaged::get_KeySize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_KeySize"));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.ExportParameters
System::Security::Cryptography::DSAParameters Mono::Security::Cryptography::DSAManaged::ExportParameters(bool includePrivateParameters) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::DSAParameters>(this, "ExportParameters", includePrivateParameters));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.ImportParameters
void Mono::Security::Cryptography::DSAManaged::ImportParameters(System::Security::Cryptography::DSAParameters parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ImportParameters", parameters));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.VerifySignature
bool Mono::Security::Cryptography::DSAManaged::VerifySignature(::Array<uint8_t>* rgbHash, ::Array<uint8_t>* rgbSignature) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "VerifySignature", rgbHash, rgbSignature));
}
// Autogenerated method: Mono.Security.Cryptography.DSAManaged.Dispose
void Mono::Security::Cryptography::DSAManaged::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}