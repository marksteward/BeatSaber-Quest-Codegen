// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: BeatmapObjectExecutionRating
#include "GlobalNamespace/BeatmapObjectExecutionRating.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Including type: GameplayModifiersModelSO
#include "GlobalNamespace/GameplayModifiersModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LevelCompletionResults..ctor
GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::New_ctor(int levelNotesCount, ::Array<GlobalNamespace::BeatmapObjectExecutionRating*>* beatmapObjectExecutionRatings, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, int rawScore, int modifiedScore, int maxCombo, ::Array<float>* saberActivityValues, float leftSaberMovementDistance, float rightSaberMovementDistance, ::Array<float>* handActivityValues, float leftHandMovementDistance, float rightHandMovementDistance, float songDuration, GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType, GlobalNamespace::LevelCompletionResults::LevelEndAction levelEndAction, float energy, float songTime) {
  return THROW_UNLESS(il2cpp_utils::New<LevelCompletionResults*>(levelNotesCount, beatmapObjectExecutionRatings, gameplayModifiers, gameplayModifiersModel, rawScore, modifiedScore, maxCombo, saberActivityValues, leftSaberMovementDistance, rightSaberMovementDistance, handActivityValues, leftHandMovementDistance, rightHandMovementDistance, songDuration, levelEndStateType, levelEndAction, energy, songTime));
}
