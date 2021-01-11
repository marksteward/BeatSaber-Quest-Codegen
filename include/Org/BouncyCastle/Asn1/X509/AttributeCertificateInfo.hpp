// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: Holder
  class Holder;
  // Forward declaring type: AttCertIssuer
  class AttCertIssuer;
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
  // Forward declaring type: AttCertValidityPeriod
  class AttCertValidityPeriod;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo
  // [] Offset: FFFFFFFF
  class AttributeCertificateInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // readonly Org.BouncyCastle.Asn1.DerInteger version
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* version;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.X509.Holder holder
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::Holder* holder;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::Holder*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.X509.AttCertIssuer issuer
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AttCertIssuer*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signature
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.DerInteger serialNumber
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Asn1::DerInteger* serialNumber;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod attrCertValidityPeriod
    // Size: 0x8
    // Offset: 0x38
    Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* attrCertValidityPeriod;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.Asn1Sequence attributes
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Asn1::Asn1Sequence* attributes;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Sequence*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.DerBitString issuerUniqueID
    // Size: 0x8
    // Offset: 0x48
    Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.X509.X509Extensions extensions
    // Size: 0x8
    // Offset: 0x50
    Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509Extensions*) == 0x8);
    // Creating value type constructor for type: AttributeCertificateInfo
    AttributeCertificateInfo(Org::BouncyCastle::Asn1::DerInteger* version_ = {}, Org::BouncyCastle::Asn1::X509::Holder* holder_ = {}, Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature_ = {}, Org::BouncyCastle::Asn1::DerInteger* serialNumber_ = {}, Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* attrCertValidityPeriod_ = {}, Org::BouncyCastle::Asn1::Asn1Sequence* attributes_ = {}, Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID_ = {}, Org::BouncyCastle::Asn1::X509::X509Extensions* extensions_ = {}) noexcept : version{version_}, holder{holder_}, issuer{issuer_}, signature{signature_}, serialNumber{serialNumber_}, attrCertValidityPeriod{attrCertValidityPeriod_}, attributes{attributes_}, issuerUniqueID{issuerUniqueID_}, extensions{extensions_} {}
    // static public Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo GetInstance(System.Object obj)
    // Offset: 0x1577BCC
    static Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1577E9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeCertificateInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeCertificateInfo*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod get_AttrCertValidityPeriod()
    // Offset: 0x1578660
    Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* get_AttrCertValidityPeriod();
    // public Org.BouncyCastle.Asn1.X509.X509Extensions get_Extensions()
    // Offset: 0x1578668
    Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1578670
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo
  static check_size<sizeof(AttributeCertificateInfo), 80 + sizeof(Org::BouncyCastle::Asn1::X509::X509Extensions*)> __Org_BouncyCastle_Asn1_X509_AttributeCertificateInfoSizeCheck;
  static_assert(sizeof(AttributeCertificateInfo) == 0x58);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*, "Org.BouncyCastle.Asn1.X509", "AttributeCertificateInfo");
