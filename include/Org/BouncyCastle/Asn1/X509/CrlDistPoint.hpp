// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: DistributionPoint
  class DistributionPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x18
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.CrlDistPoint
  // [] Offset: FFFFFFFF
  class CrlDistPoint : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // readonly Org.BouncyCastle.Asn1.Asn1Sequence seq
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Sequence* seq;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Sequence*) == 0x8);
    // Creating value type constructor for type: CrlDistPoint
    CrlDistPoint(Org::BouncyCastle::Asn1::Asn1Sequence* seq_ = {}) noexcept : seq{seq_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::Asn1Sequence*
    constexpr operator Org::BouncyCastle::Asn1::Asn1Sequence*() const noexcept {
      return seq;
    }
    // static public Org.BouncyCastle.Asn1.X509.CrlDistPoint GetInstance(System.Object obj)
    // Offset: 0x157972C
    static Org::BouncyCastle::Asn1::X509::CrlDistPoint* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x15797E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrlDistPoint* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::CrlDistPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrlDistPoint*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.X509.DistributionPoint[] GetDistributionPoints()
    // Offset: 0x1579814
    ::Array<Org::BouncyCastle::Asn1::X509::DistributionPoint*>* GetDistributionPoints();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1579AA8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // public override System.String ToString()
    // Offset: 0x1579AB0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.X509.CrlDistPoint
  static check_size<sizeof(CrlDistPoint), 16 + sizeof(Org::BouncyCastle::Asn1::Asn1Sequence*)> __Org_BouncyCastle_Asn1_X509_CrlDistPointSizeCheck;
  static_assert(sizeof(CrlDistPoint) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::CrlDistPoint*, "Org.BouncyCastle.Asn1.X509", "CrlDistPoint");
#pragma pack(pop)
