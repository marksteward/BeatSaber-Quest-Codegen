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
  // Forward declaring type: DerGeneralizedTime
  class DerGeneralizedTime;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod
  // [] Offset: FFFFFFFF
  class AttCertValidityPeriod : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerGeneralizedTime notBeforeTime
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerGeneralizedTime* notBeforeTime;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerGeneralizedTime*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerGeneralizedTime notAfterTime
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerGeneralizedTime* notAfterTime;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerGeneralizedTime*) == 0x8);
    // Creating value type constructor for type: AttCertValidityPeriod
    AttCertValidityPeriod(Org::BouncyCastle::Asn1::DerGeneralizedTime* notBeforeTime_ = {}, Org::BouncyCastle::Asn1::DerGeneralizedTime* notAfterTime_ = {}) noexcept : notBeforeTime{notBeforeTime_}, notAfterTime{notAfterTime_} {}
    // static public Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod GetInstance(System.Object obj)
    // Offset: 0x157759C
    static Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x157771C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttCertValidityPeriod* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttCertValidityPeriod*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.DerGeneralizedTime get_NotBeforeTime()
    // Offset: 0x1577868
    Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotBeforeTime();
    // public Org.BouncyCastle.Asn1.DerGeneralizedTime get_NotAfterTime()
    // Offset: 0x1577870
    Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotAfterTime();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1577878
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod
  static check_size<sizeof(AttCertValidityPeriod), 24 + sizeof(Org::BouncyCastle::Asn1::DerGeneralizedTime*)> __Org_BouncyCastle_Asn1_X509_AttCertValidityPeriodSizeCheck;
  static_assert(sizeof(AttCertValidityPeriod) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*, "Org.BouncyCastle.Asn1.X509", "AttCertValidityPeriod");
