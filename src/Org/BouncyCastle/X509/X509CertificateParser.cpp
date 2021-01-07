// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.X509.X509CertificateParser
#include "Org/BouncyCastle/X509/X509CertificateParser.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Set
#include "Org/BouncyCastle/Asn1/Asn1Set.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: Org.BouncyCastle.X509.PemParser
#include "Org/BouncyCastle/X509/PemParser.hpp"
// Including type: Org.BouncyCastle.X509.X509Certificate
#include "Org/BouncyCastle/X509/X509Certificate.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1InputStream
#include "Org/BouncyCastle/Asn1/Asn1InputStream.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.X509CertificateStructure
#include "Org/BouncyCastle/Asn1/X509/X509CertificateStructure.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly Org.BouncyCastle.X509.PemParser PemCertParser
Org::BouncyCastle::X509::PemParser* Org::BouncyCastle::X509::X509CertificateParser::_get_PemCertParser() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext("_get_PemCertParser");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Org::BouncyCastle::X509::PemParser*>("Org.BouncyCastle.X509", "X509CertificateParser", "PemCertParser"));
}
// Autogenerated static field setter
// Set static field: static private readonly Org.BouncyCastle.X509.PemParser PemCertParser
void Org::BouncyCastle::X509::X509CertificateParser::_set_PemCertParser(Org::BouncyCastle::X509::PemParser* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext("_set_PemCertParser");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.X509", "X509CertificateParser", "PemCertParser", value));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadDerCertificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadDerCertificate(Org::BouncyCastle::Asn1::Asn1InputStream* dIn) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext("ReadDerCertificate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadDerCertificate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(dIn)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal__method, dIn);
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.GetCertificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::GetCertificate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext("GetCertificate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetCertificate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadPemCertificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadPemCertificate(System::IO::Stream* inStream) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext("ReadPemCertificate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadPemCertificate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inStream)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal__method, inStream);
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.CreateX509Certificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::CreateX509Certificate(Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext("CreateX509Certificate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateX509Certificate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal__method, c);
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadCertificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate(::Array<uint8_t>* input) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext("ReadCertificate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadCertificate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal__method, input);
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadCertificates
System::Collections::ICollection* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates(::Array<uint8_t>* input) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext("ReadCertificates");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadCertificates", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input)));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::ICollection*, false>(this, ___internal__method, input);
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadCertificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate(System::IO::Stream* inStream) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext("ReadCertificate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadCertificate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inStream)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal__method, inStream);
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadCertificates
System::Collections::ICollection* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates(System::IO::Stream* inStream) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext("ReadCertificates");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadCertificates", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inStream)));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::ICollection*, false>(this, ___internal__method, inStream);
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser..cctor
void Org::BouncyCastle::X509::X509CertificateParser::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::X509").WithContext("X509CertificateParser").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.X509", "X509CertificateParser", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
