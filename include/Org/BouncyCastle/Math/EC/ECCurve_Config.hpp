// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ECEndomorphism
  class ECEndomorphism;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x30
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECCurve/Config
  // [] Offset: FFFFFFFF
  class ECCurve::Config : public ::Il2CppObject {
    public:
    // protected Org.BouncyCastle.Math.EC.ECCurve outer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECCurve* outer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECCurve*) == 0x8);
    // protected System.Int32 coord
    // Size: 0x4
    // Offset: 0x18
    int coord;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: coord and: endomorphism
    char __padding1[0x4] = {};
    // protected Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier multiplier
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*) == 0x8);
    // Creating value type constructor for type: Config
    Config(Org::BouncyCastle::Math::EC::ECCurve* outer_ = {}, int coord_ = {}, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism_ = {}, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier_ = {}) noexcept : outer{outer_}, coord{coord_}, endomorphism{endomorphism_}, multiplier{multiplier_} {}
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve outer, System.Int32 coord, Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism, Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier multiplier)
    // Offset: 0x193991C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECCurve::Config* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* outer, int coord, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::ECCurve::Config::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECCurve::Config*, creationType>(outer, coord, endomorphism, multiplier)));
    }
    // public Org.BouncyCastle.Math.EC.ECCurve/Config SetEndomorphism(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism)
    // Offset: 0x193B080
    Org::BouncyCastle::Math::EC::ECCurve::Config* SetEndomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism);
    // public Org.BouncyCastle.Math.EC.ECCurve Create()
    // Offset: 0x193B0A8
    Org::BouncyCastle::Math::EC::ECCurve* Create();
  }; // Org.BouncyCastle.Math.EC.ECCurve/Config
  static check_size<sizeof(ECCurve::Config), 40 + sizeof(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*)> __Org_BouncyCastle_Math_EC_ECCurve_ConfigSizeCheck;
  static_assert(sizeof(ECCurve::Config) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECCurve::Config*, "Org.BouncyCastle.Math.EC", "ECCurve/Config");
#pragma pack(pop)
