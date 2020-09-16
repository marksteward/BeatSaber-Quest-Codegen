// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReactionVRIK/PositionOffset
#include "RootMotion/FinalIK/HitReactionVRIK_PositionOffset.hpp"
// Including type: RootMotion.FinalIK.HitReactionVRIK/PositionOffset/PositionOffsetLink
#include "RootMotion/FinalIK/HitReactionVRIK_PositionOffset_PositionOffsetLink.hpp"
// Including type: UnityEngine.AnimationCurve
#include "UnityEngine/AnimationCurve.hpp"
// Including type: RootMotion.FinalIK.VRIK
#include "RootMotion/FinalIK/VRIK.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.HitReactionVRIK/PositionOffset.GetLength
float RootMotion::FinalIK::HitReactionVRIK::PositionOffset::GetLength(::Array<UnityEngine::AnimationCurve*>* curves) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetLength", curves));
}
// Autogenerated method: RootMotion.FinalIK.HitReactionVRIK/PositionOffset.CrossFadeStart
void RootMotion::FinalIK::HitReactionVRIK::PositionOffset::CrossFadeStart() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CrossFadeStart"));
}
// Autogenerated method: RootMotion.FinalIK.HitReactionVRIK/PositionOffset.OnApply
void RootMotion::FinalIK::HitReactionVRIK::PositionOffset::OnApply(RootMotion::FinalIK::VRIK* ik, ::Array<UnityEngine::AnimationCurve*>* curves, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnApply", ik, curves, weight));
}
// Autogenerated method: RootMotion.FinalIK.HitReactionVRIK/PositionOffset..ctor
RootMotion::FinalIK::HitReactionVRIK::PositionOffset* RootMotion::FinalIK::HitReactionVRIK::PositionOffset::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<HitReactionVRIK::PositionOffset*>());
}
