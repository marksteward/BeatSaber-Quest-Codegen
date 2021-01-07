// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BtsResultsEnvironmentController
#include "GlobalNamespace/BtsResultsEnvironmentController.hpp"
// Including type: BtsResultsEnvironmentController/BTSResultCharacterPlaceWithAnimation
#include "GlobalNamespace/BtsResultsEnvironmentController_BTSResultCharacterPlaceWithAnimation.hpp"
// Including type: BtsResultsEnvironmentController/<>c__DisplayClass5_0
#include "GlobalNamespace/BtsResultsEnvironmentController_--c__DisplayClass5_0.hpp"
// Including type: BtsResultsEnvironmentController/<DestroyCharactersDelayed>d__8
#include "GlobalNamespace/BtsResultsEnvironmentController_-DestroyCharactersDelayed-d__8.hpp"
// Including type: BTSCharacterDataModel
#include "GlobalNamespace/BTSCharacterDataModel.hpp"
// Including type: UnityEngine.Playables.PlayableDirector
#include "UnityEngine/Playables/PlayableDirector.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private BeatmapEventType kCharacterDisplayEventType
GlobalNamespace::BeatmapEventType GlobalNamespace::BtsResultsEnvironmentController::_get_kCharacterDisplayEventType() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BtsResultsEnvironmentController").WithContext("_get_kCharacterDisplayEventType");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<GlobalNamespace::BeatmapEventType>("", "BtsResultsEnvironmentController", "kCharacterDisplayEventType"));
}
// Autogenerated static field setter
// Set static field: static private BeatmapEventType kCharacterDisplayEventType
void GlobalNamespace::BtsResultsEnvironmentController::_set_kCharacterDisplayEventType(GlobalNamespace::BeatmapEventType value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BtsResultsEnvironmentController").WithContext("_set_kCharacterDisplayEventType");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BtsResultsEnvironmentController", "kCharacterDisplayEventType", value));
}
// Autogenerated method: BtsResultsEnvironmentController.DestroyCharactersDelayed
System::Collections::IEnumerator* GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersDelayed() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BtsResultsEnvironmentController").WithContext("DestroyCharactersDelayed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DestroyCharactersDelayed", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
}
// Autogenerated method: BtsResultsEnvironmentController.DestroyCharactersAndStopAnimations
void GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersAndStopAnimations() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BtsResultsEnvironmentController").WithContext("DestroyCharactersAndStopAnimations");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DestroyCharactersAndStopAnimations", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BtsResultsEnvironmentController.Setup
void GlobalNamespace::BtsResultsEnvironmentController::Setup(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BtsResultsEnvironmentController").WithContext("Setup");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Setup", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(difficultyBeatmap)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, difficultyBeatmap);
}
// Autogenerated method: BtsResultsEnvironmentController.Activate
void GlobalNamespace::BtsResultsEnvironmentController::Activate(bool immediately) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BtsResultsEnvironmentController").WithContext("Activate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Activate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(immediately)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, immediately);
}
// Autogenerated method: BtsResultsEnvironmentController.Deactivate
void GlobalNamespace::BtsResultsEnvironmentController::Deactivate(bool immediately) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BtsResultsEnvironmentController").WithContext("Deactivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Deactivate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(immediately)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, immediately);
}
