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
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AttributeCertificateInfo
  class AttributeCertificateInfo;
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.AttributeCertificate
  class AttributeCertificate : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo acinfo
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signatureAlgorithm
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerBitString signatureValue
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerBitString* signatureValue;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Creating value type constructor for type: AttributeCertificate
    AttributeCertificate(Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm_ = {}, Org::BouncyCastle::Asn1::DerBitString* signatureValue_ = {}) noexcept : acinfo{acinfo_}, signatureAlgorithm{signatureAlgorithm_}, signatureValue{signatureValue_} {}
    // static public Org.BouncyCastle.Asn1.X509.AttributeCertificate GetInstance(System.Object obj)
    // Offset: 0x1A03900
    static Org::BouncyCastle::Asn1::X509::AttributeCertificate* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1A039A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeCertificate* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::AttributeCertificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeCertificate*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo get_ACInfo()
    // Offset: 0x1A03CA0
    Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* get_ACInfo();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1A03CA8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.AttributeCertificate
  #pragma pack(pop)
  static check_size<sizeof(AttributeCertificate), 32 + sizeof(Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_X509_AttributeCertificateSizeCheck;
  static_assert(sizeof(AttributeCertificate) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AttributeCertificate*, "Org.BouncyCastle.Asn1.X509", "AttributeCertificate");
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttributeCertificate::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AttributeCertificate* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::AttributeCertificate::GetInstance)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::AttributeCertificate*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttributeCertificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttributeCertificate::get_ACInfo
// Il2CppName: get_ACInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* (Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)()>(&Org::BouncyCastle::Asn1::X509::AttributeCertificate::get_ACInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::AttributeCertificate*), "get_ACInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttributeCertificate::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)()>(&Org::BouncyCastle::Asn1::X509::AttributeCertificate::ToAsn1Object)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::AttributeCertificate*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
