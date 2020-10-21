// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MultiplayerConnectedPlayerFacade
#include "GlobalNamespace/MultiplayerConnectedPlayerFacade.hpp"
// Including type: MultiplayerConnectedPlayerFacade/Factory
#include "GlobalNamespace/MultiplayerConnectedPlayerFacade_Factory.hpp"
// Including type: MultiplayerConnectedPlayerSongTimeSyncController
#include "GlobalNamespace/MultiplayerConnectedPlayerSongTimeSyncController.hpp"
// Including type: MultiplayerConnectedPlayerIntroAnimator
#include "GlobalNamespace/MultiplayerConnectedPlayerIntroAnimator.hpp"
// Including type: IMultiplayerConnectedPlayerOutroAnimator
#include "GlobalNamespace/IMultiplayerConnectedPlayerOutroAnimator.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: MultiplayerConnectedPlayerScoreDiffText
#include "GlobalNamespace/MultiplayerConnectedPlayerScoreDiffText.hpp"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerConnectedPlayerFacade.get_introAnimator
GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* GlobalNamespace::MultiplayerConnectedPlayerFacade::get_introAnimator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>(this, "get_introAnimator"));
}
// Autogenerated method: MultiplayerConnectedPlayerFacade.get_outroAnimator
GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator* GlobalNamespace::MultiplayerConnectedPlayerFacade::get_outroAnimator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator*>(this, "get_outroAnimator"));
}
// Autogenerated method: MultiplayerConnectedPlayerFacade.get_scoreDiffText
GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText* GlobalNamespace::MultiplayerConnectedPlayerFacade::get_scoreDiffText() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*>(this, "get_scoreDiffText"));
}
// Autogenerated method: MultiplayerConnectedPlayerFacade.SetSongStartSyncTime
void GlobalNamespace::MultiplayerConnectedPlayerFacade::SetSongStartSyncTime(float songStartSyncTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetSongStartSyncTime", songStartSyncTime));
}
// Autogenerated method: MultiplayerConnectedPlayerFacade.PauseSpawning
void GlobalNamespace::MultiplayerConnectedPlayerFacade::PauseSpawning() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PauseSpawning"));
}
// Autogenerated method: MultiplayerConnectedPlayerFacade.ResumeSpawning
void GlobalNamespace::MultiplayerConnectedPlayerFacade::ResumeSpawning() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResumeSpawning"));
}
// Autogenerated method: MultiplayerConnectedPlayerFacade.__ForceStopSong
void GlobalNamespace::MultiplayerConnectedPlayerFacade::__ForceStopSong() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "__ForceStopSong"));
}
// Autogenerated method: MultiplayerConnectedPlayerFacade..ctor
GlobalNamespace::MultiplayerConnectedPlayerFacade* GlobalNamespace::MultiplayerConnectedPlayerFacade::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MultiplayerConnectedPlayerFacade*>());
}