// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Math.EC.Endo.EndoUtilities/MapPointCallback
#include "Org/BouncyCastle/Math/EC/Endo/EndoUtilities_MapPointCallback.hpp"
// Including type: Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
#include "Org/BouncyCastle/Math/EC/Endo/ECEndomorphism.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
// Including type: Org.BouncyCastle.Math.EC.Endo.EndoPreCompInfo
#include "Org/BouncyCastle/Math/EC/Endo/EndoPreCompInfo.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
#include "Org/BouncyCastle/Math/EC/Multiplier/PreCompInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Math.EC.Endo.EndoUtilities/MapPointCallback..ctor
Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback* Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::New_ctor(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, Org::BouncyCastle::Math::EC::ECPoint* point) {
  return THROW_UNLESS(il2cpp_utils::New<EndoUtilities::MapPointCallback*>(endomorphism, point));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Endo.EndoUtilities/MapPointCallback.CheckExisting
bool Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::CheckExisting(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo* existingEndo, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CheckExisting", existingEndo, endomorphism));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Endo.EndoUtilities/MapPointCallback.Precompute
Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this, "Precompute", existing));
}