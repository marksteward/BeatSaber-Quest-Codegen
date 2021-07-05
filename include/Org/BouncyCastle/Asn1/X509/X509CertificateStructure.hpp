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
  // Forward declaring type: TbsCertificateStructure
  class TbsCertificateStructure;
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: Time
  class Time;
  // Forward declaring type: SubjectPublicKeyInfo
  class SubjectPublicKeyInfo;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.X509CertificateStructure
  class X509CertificateStructure : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.TbsCertificateStructure tbsCert
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier sigAlgID
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerBitString sig
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerBitString* sig;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Creating value type constructor for type: X509CertificateStructure
    X509CertificateStructure(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID_ = {}, Org::BouncyCastle::Asn1::DerBitString* sig_ = {}) noexcept : tbsCert{tbsCert_}, sigAlgID{sigAlgID_}, sig{sig_} {}
    // static public Org.BouncyCastle.Asn1.X509.X509CertificateStructure GetInstance(System.Object obj)
    // Offset: 0x1A0B2D0
    static Org::BouncyCastle::Asn1::X509::X509CertificateStructure* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1A0B374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateStructure* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::X509CertificateStructure::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateStructure*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.X509.TbsCertificateStructure get_TbsCertificate()
    // Offset: 0x1A0B4B8
    Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* get_TbsCertificate();
    // public System.Int32 get_Version()
    // Offset: 0x1A0B4C0
    int get_Version();
    // public Org.BouncyCastle.Asn1.DerInteger get_SerialNumber()
    // Offset: 0x1A0B4D8
    Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Issuer()
    // Offset: 0x1A0B4F4
    Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();
    // public Org.BouncyCastle.Asn1.X509.Time get_StartDate()
    // Offset: 0x1A0B510
    Org::BouncyCastle::Asn1::X509::Time* get_StartDate();
    // public Org.BouncyCastle.Asn1.X509.Time get_EndDate()
    // Offset: 0x1A0B52C
    Org::BouncyCastle::Asn1::X509::Time* get_EndDate();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Subject()
    // Offset: 0x1A0B548
    Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();
    // public Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo get_SubjectPublicKeyInfo()
    // Offset: 0x1A0B564
    Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_SignatureAlgorithm()
    // Offset: 0x1A0B580
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();
    // public Org.BouncyCastle.Asn1.DerBitString get_Signature()
    // Offset: 0x1A0B588
    Org::BouncyCastle::Asn1::DerBitString* get_Signature();
    // public System.Byte[] GetSignatureOctets()
    // Offset: 0x1A0B590
    ::Array<uint8_t>* GetSignatureOctets();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1A0B5B0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.X509CertificateStructure
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateStructure), 32 + sizeof(Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_X509_X509CertificateStructureSizeCheck;
  static_assert(sizeof(X509CertificateStructure) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, "Org.BouncyCastle.Asn1.X509", "X509CertificateStructure");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509CertificateStructure* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_TbsCertificate
// Il2CppName: get_TbsCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_TbsCertificate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "get_TbsCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_SerialNumber
// Il2CppName: get_SerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_SerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "get_SerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_Issuer
// Il2CppName: get_Issuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Name* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_Issuer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "get_Issuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_StartDate
// Il2CppName: get_StartDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::Time* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_StartDate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "get_StartDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_EndDate
// Il2CppName: get_EndDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::Time* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_EndDate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "get_EndDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_Subject
// Il2CppName: get_Subject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Name* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_Subject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "get_Subject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_SubjectPublicKeyInfo
// Il2CppName: get_SubjectPublicKeyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_SubjectPublicKeyInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "get_SubjectPublicKeyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_SignatureAlgorithm
// Il2CppName: get_SignatureAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_SignatureAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "get_SignatureAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_Signature
// Il2CppName: get_Signature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerBitString* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::get_Signature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "get_Signature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::GetSignatureOctets
// Il2CppName: GetSignatureOctets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::GetSignatureOctets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "GetSignatureOctets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509CertificateStructure::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::X509CertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::X509CertificateStructure::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
