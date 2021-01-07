// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.PublicKey
#include "System/Security/Cryptography/X509Certificates/PublicKey.hpp"
// Including type: System.Security.Cryptography.AsymmetricAlgorithm
#include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
// Including type: System.Security.Cryptography.AsnEncodedData
#include "System/Security/Cryptography/AsnEncodedData.hpp"
// Including type: System.Security.Cryptography.Oid
#include "System/Security/Cryptography/Oid.hpp"
// Including type: Mono.Security.X509.X509Certificate
#include "Mono/Security/X509/X509Certificate.hpp"
// Including type: System.Security.Cryptography.DSA
#include "System/Security/Cryptography/DSA.hpp"
// Including type: System.Security.Cryptography.RSA
#include "System/Security/Cryptography/RSA.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Byte[] Empty
::Array<uint8_t>* System::Security::Cryptography::X509Certificates::PublicKey::_get_Empty() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("PublicKey").WithContext("_get_Empty");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("System.Security.Cryptography.X509Certificates", "PublicKey", "Empty"));
}
// Autogenerated static field setter
// Set static field: static private System.Byte[] Empty
void System::Security::Cryptography::X509Certificates::PublicKey::_set_Empty(::Array<uint8_t>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("PublicKey").WithContext("_set_Empty");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography.X509Certificates", "PublicKey", "Empty", value));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.PublicKey.get_EncodedKeyValue
System::Security::Cryptography::AsnEncodedData* System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedKeyValue() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("PublicKey").WithContext("get_EncodedKeyValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_EncodedKeyValue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::AsnEncodedData*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.PublicKey.get_EncodedParameters
System::Security::Cryptography::AsnEncodedData* System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedParameters() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("PublicKey").WithContext("get_EncodedParameters");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_EncodedParameters", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::AsnEncodedData*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.PublicKey.get_Key
System::Security::Cryptography::AsymmetricAlgorithm* System::Security::Cryptography::X509Certificates::PublicKey::get_Key() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("PublicKey").WithContext("get_Key");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Key", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::AsymmetricAlgorithm*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.PublicKey.get_Oid
System::Security::Cryptography::Oid* System::Security::Cryptography::X509Certificates::PublicKey::get_Oid() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("PublicKey").WithContext("get_Oid");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Oid", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::Oid*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.PublicKey.GetUnsignedBigInteger
::Array<uint8_t>* System::Security::Cryptography::X509Certificates::PublicKey::GetUnsignedBigInteger(::Array<uint8_t>* integer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("PublicKey").WithContext("GetUnsignedBigInteger");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography.X509Certificates", "PublicKey", "GetUnsignedBigInteger", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(integer)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, integer);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.PublicKey.DecodeDSA
System::Security::Cryptography::DSA* System::Security::Cryptography::X509Certificates::PublicKey::DecodeDSA(::Array<uint8_t>* rawPublicKey, ::Array<uint8_t>* rawParameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("PublicKey").WithContext("DecodeDSA");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography.X509Certificates", "PublicKey", "DecodeDSA", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(rawPublicKey, rawParameters)));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::DSA*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, rawPublicKey, rawParameters);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.PublicKey.DecodeRSA
System::Security::Cryptography::RSA* System::Security::Cryptography::X509Certificates::PublicKey::DecodeRSA(::Array<uint8_t>* rawPublicKey) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("PublicKey").WithContext("DecodeRSA");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography.X509Certificates", "PublicKey", "DecodeRSA", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(rawPublicKey)));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::RSA*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, rawPublicKey);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.PublicKey..cctor
void System::Security::Cryptography::X509Certificates::PublicKey::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("PublicKey").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography.X509Certificates", "PublicKey", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
