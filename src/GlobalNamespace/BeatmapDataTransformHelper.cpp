// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BeatmapDataTransformHelper
#include "GlobalNamespace/BeatmapDataTransformHelper.hpp"
// Including type: IReadonlyBeatmapData
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Including type: PracticeSettings
#include "GlobalNamespace/PracticeSettings.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapDataTransformHelper.CreateTransformedBeatmapData
GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapData(GlobalNamespace::IReadonlyBeatmapData* beatmapData, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PracticeSettings* practiceSettings, bool leftHanded, bool staticLights) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IReadonlyBeatmapData*>("", "BeatmapDataTransformHelper", "CreateTransformedBeatmapData", beatmapData, gameplayModifiers, practiceSettings, leftHanded, staticLights));
}
// Autogenerated method: BeatmapDataTransformHelper..ctor
GlobalNamespace::BeatmapDataTransformHelper* GlobalNamespace::BeatmapDataTransformHelper::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BeatmapDataTransformHelper*>());
}