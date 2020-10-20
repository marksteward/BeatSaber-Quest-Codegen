// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities
#include "Org/BouncyCastle/Math/EC/Multiplier/WNafUtilities.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
#include "Org/BouncyCastle/Math/EC/Multiplier/IPreCompCallback.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/ConfigureBasepointCallback
  class WNafUtilities::ConfigureBasepointCallback : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*/ {
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECCurve m_curve
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECCurve* m_curve;
    // private readonly System.Int32 m_confWidth
    // Offset: 0x18
    int m_confWidth;
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
    operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, System.Int32 confWidth)
    // Offset: 0x18F611C
    static WNafUtilities::ConfigureBasepointCallback* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, int confWidth);
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x18F6E94
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
    // Base method: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo IPreCompCallback::Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
  }; // Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/ConfigureBasepointCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/ConfigureBasepointCallback");
#pragma pack(pop)
