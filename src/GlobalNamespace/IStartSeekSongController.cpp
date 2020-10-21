// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: IStartSeekSongController
#include "GlobalNamespace/IStartSeekSongController.hpp"
// Including type: UnityEngine.WaitUntil
#include "UnityEngine/WaitUntil.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: IStartSeekSongController.get_waitUntilIsReadyToStartTheSong
UnityEngine::WaitUntil* GlobalNamespace::IStartSeekSongController::get_waitUntilIsReadyToStartTheSong() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::WaitUntil*>(this, "get_waitUntilIsReadyToStartTheSong"));
}
// Autogenerated method: IStartSeekSongController.StartSong
void GlobalNamespace::IStartSeekSongController::StartSong(float offsetTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartSong", offsetTime));
}
// Autogenerated method: IStartSeekSongController.SeekTo
void GlobalNamespace::IStartSeekSongController::SeekTo(float songTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SeekTo", songTime));
}