// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
#include "Org/BouncyCastle/Math/EC/Multiplier/AbstractECMultiplier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: AbstractF2mPoint
  class AbstractF2mPoint;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Forward declaring type: ZTauElement
  class ZTauElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier
  class WTauNafMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafCallback
    class WTauNafCallback;
    // Creating value type constructor for type: WTauNafMultiplier
    WTauNafMultiplier() noexcept {}
    // Get static field: static readonly System.String PRECOMP_NAME
    static ::Il2CppString* _get_PRECOMP_NAME();
    // Set static field: static readonly System.String PRECOMP_NAME
    static void _set_PRECOMP_NAME(::Il2CppString* value);
    // private Org.BouncyCastle.Math.EC.AbstractF2mPoint MultiplyWTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint p, Org.BouncyCastle.Math.EC.Abc.ZTauElement lambda, System.SByte a, System.SByte mu)
    // Offset: 0x1D28638
    Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyWTnaf(Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t a, int8_t mu);
    // static private Org.BouncyCastle.Math.EC.AbstractF2mPoint MultiplyFromWTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint p, System.SByte[] u)
    // Offset: 0x1D28794
    static Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromWTnaf(Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::Array<int8_t>* u);
    // static private System.Void .cctor()
    // Offset: 0x1D28C10
    static void _cctor();
    // protected override Org.BouncyCastle.Math.EC.ECPoint MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint point, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1D2845C
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECMultiplier::MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint point, Org.BouncyCastle.Math.BigInteger k)
    Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint* point, Org::BouncyCastle::Math::BigInteger* k);
    // public System.Void .ctor()
    // Offset: 0x1D28C6C
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: System.Void AbstractECMultiplier::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WTauNafMultiplier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WTauNafMultiplier*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf
// Il2CppName: MultiplyWTnaf
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf
// Il2CppName: MultiplyFromWTnaf
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive
// Il2CppName: MultiplyPositive
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
