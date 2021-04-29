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
  // Forward declaring type: Asn1Set
  class Asn1Set;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: SubjectPublicKeyInfo
  class SubjectPublicKeyInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.CertificationRequestInfo
  class CertificationRequestInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Org.BouncyCastle.Asn1.DerInteger version
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* version;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Name subject
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::X509Name* subject;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509Name*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo subjectPKInfo
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPKInfo;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*) == 0x8);
    // Org.BouncyCastle.Asn1.Asn1Set attributes
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::Asn1Set* attributes;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    // Creating value type constructor for type: CertificationRequestInfo
    CertificationRequestInfo(Org::BouncyCastle::Asn1::DerInteger* version_ = {}, Org::BouncyCastle::Asn1::X509::X509Name* subject_ = {}, Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPKInfo_ = {}, Org::BouncyCastle::Asn1::Asn1Set* attributes_ = {}) noexcept : version{version_}, subject{subject_}, subjectPKInfo{subjectPKInfo_}, attributes{attributes_} {}
    // static public Org.BouncyCastle.Asn1.Pkcs.CertificationRequestInfo GetInstance(System.Object obj)
    // Offset: 0x16239F4
    static Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1623BBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificationRequestInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificationRequestInfo*, creationType>(seq)));
    }
    // static private System.Void ValidateAttributes(Org.BouncyCastle.Asn1.Asn1Set attributes)
    // Offset: 0x1623DCC
    static void ValidateAttributes(Org::BouncyCastle::Asn1::Asn1Set* attributes);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x16240E8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.CertificationRequestInfo
  #pragma pack(pop)
  static check_size<sizeof(CertificationRequestInfo), 40 + sizeof(Org::BouncyCastle::Asn1::Asn1Set*)> __Org_BouncyCastle_Asn1_Pkcs_CertificationRequestInfoSizeCheck;
  static_assert(sizeof(CertificationRequestInfo) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo*, "Org.BouncyCastle.Asn1.Pkcs", "CertificationRequestInfo");
