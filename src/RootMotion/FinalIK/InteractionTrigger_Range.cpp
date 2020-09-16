// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.InteractionTrigger/Range
#include "RootMotion/FinalIK/InteractionTrigger_Range.hpp"
// Including type: RootMotion.FinalIK.InteractionTrigger/Range/Interaction
#include "RootMotion/FinalIK/InteractionTrigger_Range_Interaction.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: RootMotion.FinalIK.InteractionTrigger/CharacterPosition
#include "RootMotion/FinalIK/InteractionTrigger_CharacterPosition.hpp"
// Including type: RootMotion.FinalIK.InteractionTrigger/CameraPosition
#include "RootMotion/FinalIK/InteractionTrigger_CameraPosition.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.InteractionTrigger/Range.IsInRange
bool RootMotion::FinalIK::InteractionTrigger::Range::IsInRange(UnityEngine::Transform* character, UnityEngine::Transform* raycastFrom, UnityEngine::RaycastHit raycastHit, UnityEngine::Transform* trigger, float& maxError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsInRange", character, raycastFrom, raycastHit, trigger, maxError));
}
// Autogenerated method: RootMotion.FinalIK.InteractionTrigger/Range..ctor
RootMotion::FinalIK::InteractionTrigger::Range* RootMotion::FinalIK::InteractionTrigger::Range::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<InteractionTrigger::Range*>());
}
