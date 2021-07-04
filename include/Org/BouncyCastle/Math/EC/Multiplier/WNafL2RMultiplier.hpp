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
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WNafL2RMultiplier
  class WNafL2RMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
    public:
    // Creating value type constructor for type: WNafL2RMultiplier
    WNafL2RMultiplier() noexcept {}
    // protected override Org.BouncyCastle.Math.EC.ECPoint MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1D25CB4
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECMultiplier::MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::BigInteger* k);
    // public System.Void .ctor()
    // Offset: 0x1D26478
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: System.Void AbstractECMultiplier::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WNafL2RMultiplier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WNafL2RMultiplier*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Multiplier.WNafL2RMultiplier
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafL2RMultiplier");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier::MultiplyPositive
// Il2CppName: MultiplyPositive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier::*)(Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier::MultiplyPositive)> {
  const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier*), "MultiplyPositive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
