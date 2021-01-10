// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
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
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier
  // [] Offset: FFFFFFFF
  class FixedPointCombMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
    public:
    // Creating value type constructor for type: FixedPointCombMultiplier
    FixedPointCombMultiplier() noexcept {}
    // protected override Org.BouncyCastle.Math.EC.ECPoint MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1783900
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECMultiplier::MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::BigInteger* k);
    // public System.Void .ctor()
    // Offset: 0x1783D38
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: System.Void AbstractECMultiplier::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedPointCombMultiplier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedPointCombMultiplier*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointCombMultiplier");
#pragma pack(pop)
