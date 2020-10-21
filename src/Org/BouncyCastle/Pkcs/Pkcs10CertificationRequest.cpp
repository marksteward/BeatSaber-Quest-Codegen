// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest
#include "Org/BouncyCastle/Pkcs/Pkcs10CertificationRequest.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: Org.BouncyCastle.Utilities.Collections.ISet
#include "Org/BouncyCastle/Utilities/Collections/ISet.hpp"
// Including type: Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters
#include "Org/BouncyCastle/Asn1/Pkcs/RsassaPssParameters.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
#include "Org/BouncyCastle/Asn1/X509/AlgorithmIdentifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static protected readonly System.Collections.IDictionary algorithms
System::Collections::IDictionary* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_get_algorithms() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::IDictionary*>("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "algorithms"));
}
// Autogenerated static field setter
// Set static field: static protected readonly System.Collections.IDictionary algorithms
void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_set_algorithms(System::Collections::IDictionary* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "algorithms", value));
}
// Autogenerated static field getter
// Get static field: static protected readonly System.Collections.IDictionary exParams
System::Collections::IDictionary* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_get_exParams() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::IDictionary*>("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "exParams"));
}
// Autogenerated static field setter
// Set static field: static protected readonly System.Collections.IDictionary exParams
void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_set_exParams(System::Collections::IDictionary* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "exParams", value));
}
// Autogenerated static field getter
// Get static field: static protected readonly System.Collections.IDictionary keyAlgorithms
System::Collections::IDictionary* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_get_keyAlgorithms() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::IDictionary*>("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "keyAlgorithms"));
}
// Autogenerated static field setter
// Set static field: static protected readonly System.Collections.IDictionary keyAlgorithms
void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_set_keyAlgorithms(System::Collections::IDictionary* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "keyAlgorithms", value));
}
// Autogenerated static field getter
// Get static field: static protected readonly System.Collections.IDictionary oids
System::Collections::IDictionary* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_get_oids() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::IDictionary*>("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "oids"));
}
// Autogenerated static field setter
// Set static field: static protected readonly System.Collections.IDictionary oids
void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_set_oids(System::Collections::IDictionary* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "oids", value));
}
// Autogenerated static field getter
// Get static field: static protected readonly Org.BouncyCastle.Utilities.Collections.ISet noParams
Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_get_noParams() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Org::BouncyCastle::Utilities::Collections::ISet*>("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "noParams"));
}
// Autogenerated static field setter
// Set static field: static protected readonly Org.BouncyCastle.Utilities.Collections.ISet noParams
void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_set_noParams(Org::BouncyCastle::Utilities::Collections::ISet* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "noParams", value));
}
// Autogenerated method: Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest..cctor
void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest.CreatePssParams
Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::CreatePssParams(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgId, int saltSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>("Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest", "CreatePssParams", hashAlgId, saltSize));
}
// Autogenerated method: Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest..ctor
Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::New_ctor(::Array<uint8_t>* encoded) {
  return THROW_UNLESS(il2cpp_utils::New<Pkcs10CertificationRequest*>(encoded));
}