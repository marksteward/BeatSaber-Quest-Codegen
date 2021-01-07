// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/Ed25519PrivateKeyParameters.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.Ed25519PublicKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/Ed25519PublicKeyParameters.hpp"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed25519_Algorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Int32 KeySize
int Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_get_KeySize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Ed25519PrivateKeyParameters").WithContext("_get_KeySize");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("Org.BouncyCastle.Crypto.Parameters", "Ed25519PrivateKeyParameters", "KeySize"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Int32 KeySize
void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_set_KeySize(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Ed25519PrivateKeyParameters").WithContext("_set_KeySize");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Parameters", "Ed25519PrivateKeyParameters", "KeySize", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.Int32 SignatureSize
int Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_get_SignatureSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Ed25519PrivateKeyParameters").WithContext("_get_SignatureSize");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("Org.BouncyCastle.Crypto.Parameters", "Ed25519PrivateKeyParameters", "SignatureSize"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Int32 SignatureSize
void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_set_SignatureSize(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Ed25519PrivateKeyParameters").WithContext("_set_SignatureSize");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Parameters", "Ed25519PrivateKeyParameters", "SignatureSize", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters.GeneratePublicKey
Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::GeneratePublicKey() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Ed25519PrivateKeyParameters").WithContext("GeneratePublicKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GeneratePublicKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters.Sign
void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::Sign(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Algorithm algorithm, ::Array<uint8_t>* ctx, ::Array<uint8_t>* msg, int msgOff, int msgLen, ::Array<uint8_t>* sig, int sigOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Ed25519PrivateKeyParameters").WithContext("Sign");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Sign", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(algorithm, ctx, msg, msgOff, msgLen, sig, sigOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, algorithm, ctx, msg, msgOff, msgLen, sig, sigOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters..cctor
void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Ed25519PrivateKeyParameters").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Parameters", "Ed25519PrivateKeyParameters", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
