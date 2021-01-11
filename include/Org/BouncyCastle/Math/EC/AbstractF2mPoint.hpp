// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECPointBase
#include "Org/BouncyCastle/Math/EC/ECPointBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Skipping declaration: ECPoint because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractF2mPoint
  // [] Offset: FFFFFFFF
  class AbstractF2mPoint : public Org::BouncyCastle::Math::EC::ECPointBase {
    public:
    // Creating value type constructor for type: AbstractF2mPoint
    AbstractF2mPoint() noexcept {}
    // public Org.BouncyCastle.Math.EC.AbstractF2mPoint TauPow(System.Int32 pow)
    // Offset: 0x176D9C8
    Org::BouncyCastle::Math::EC::AbstractF2mPoint* TauPow(int pow);
    // protected System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x176CE20
    // Implemented from: Org.BouncyCastle.Math.EC.ECPointBase
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractF2mPoint* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::AbstractF2mPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractF2mPoint*, creationType>(curve, x, y, withCompression)));
    }
    // protected System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x176CE2C
    // Implemented from: Org.BouncyCastle.Math.EC.ECPointBase
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractF2mPoint* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::AbstractF2mPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractF2mPoint*, creationType>(curve, x, y, zs, withCompression)));
    }
    // protected override System.Boolean SatisfiesCurveEquation()
    // Offset: 0x176CE38
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Boolean ECPoint::SatisfiesCurveEquation()
    bool SatisfiesCurveEquation();
    // protected override System.Boolean SatisfiesOrder()
    // Offset: 0x176D29C
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Boolean ECPoint::SatisfiesOrder()
    bool SatisfiesOrder();
    // public override Org.BouncyCastle.Math.EC.ECPoint ScaleX(Org.BouncyCastle.Math.EC.ECFieldElement scale)
    // Offset: 0x176D5AC
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::ScaleX(Org.BouncyCastle.Math.EC.ECFieldElement scale)
    Org::BouncyCastle::Math::EC::ECPoint* ScaleX(Org::BouncyCastle::Math::EC::ECFieldElement* scale);
    // public override Org.BouncyCastle.Math.EC.ECPoint ScaleY(Org.BouncyCastle.Math.EC.ECFieldElement scale)
    // Offset: 0x176D85C
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::ScaleY(Org.BouncyCastle.Math.EC.ECFieldElement scale)
    Org::BouncyCastle::Math::EC::ECPoint* ScaleY(Org::BouncyCastle::Math::EC::ECFieldElement* scale);
    // public override Org.BouncyCastle.Math.EC.ECPoint Subtract(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x176D958
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Subtract(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* Subtract(Org::BouncyCastle::Math::EC::ECPoint* b);
  }; // Org.BouncyCastle.Math.EC.AbstractF2mPoint
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractF2mPoint*, "Org.BouncyCastle.Math.EC", "AbstractF2mPoint");
