// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: CustomBeatmapLevel
#include "GlobalNamespace/CustomBeatmapLevel.hpp"
// Including type: BeatmapLevelData
#include "GlobalNamespace/BeatmapLevelData.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Including type: UnityEngine.Texture2D
#include "UnityEngine/Texture2D.hpp"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: CustomBeatmapLevel..ctor
GlobalNamespace::CustomBeatmapLevel* GlobalNamespace::CustomBeatmapLevel::New_ctor(GlobalNamespace::CustomPreviewBeatmapLevel* customPreviewBeatmapLevel, UnityEngine::AudioClip* previewAudioClip, UnityEngine::Texture2D* coverImageTexture2D) {
  return THROW_UNLESS(il2cpp_utils::New<CustomBeatmapLevel*>(customPreviewBeatmapLevel, previewAudioClip, coverImageTexture2D));
}
// Autogenerated method: CustomBeatmapLevel.SetBeatmapLevelData
void GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData(GlobalNamespace::BeatmapLevelData* beatmapLevelData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetBeatmapLevelData", beatmapLevelData));
}
// Autogenerated method: CustomBeatmapLevel.get_beatmapLevelData
GlobalNamespace::IBeatmapLevelData* GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IBeatmapLevelData*>(this, "get_beatmapLevelData"));
}
