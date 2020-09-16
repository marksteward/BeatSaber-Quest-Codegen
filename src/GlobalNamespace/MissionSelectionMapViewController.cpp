// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MissionSelectionMapViewController
#include "GlobalNamespace/MissionSelectionMapViewController.hpp"
// Including type: HMUI.ScrollView
#include "HMUI/ScrollView.hpp"
// Including type: MissionNodeSelectionManager
#include "GlobalNamespace/MissionNodeSelectionManager.hpp"
// Including type: MissionMapAnimationController
#include "GlobalNamespace/MissionMapAnimationController.hpp"
// Including type: SongPreviewPlayer
#include "GlobalNamespace/SongPreviewPlayer.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: MissionNode
#include "GlobalNamespace/MissionNode.hpp"
// Including type: MissionNodeVisualController
#include "GlobalNamespace/MissionNodeVisualController.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: HMUI.ViewController/ActivationType
#include "HMUI/ViewController_ActivationType.hpp"
// Including type: HMUI.ViewController/DeactivationType
#include "HMUI/ViewController_DeactivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MissionSelectionMapViewController.add_didSelectMissionLevelEvent
void GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent(System::Action_2<GlobalNamespace::MissionSelectionMapViewController*, GlobalNamespace::MissionNode*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectMissionLevelEvent", value));
}
// Autogenerated method: MissionSelectionMapViewController.remove_didSelectMissionLevelEvent
void GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent(System::Action_2<GlobalNamespace::MissionSelectionMapViewController*, GlobalNamespace::MissionNode*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectMissionLevelEvent", value));
}
// Autogenerated method: MissionSelectionMapViewController.get_animatedUpdateIsRequired
bool GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_animatedUpdateIsRequired"));
}
// Autogenerated method: MissionSelectionMapViewController.HandleMissionNodeSelectionManagerDidSelectMissionNode
void GlobalNamespace::MissionSelectionMapViewController::HandleMissionNodeSelectionManagerDidSelectMissionNode(GlobalNamespace::MissionNodeVisualController* missionNodeVisualController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleMissionNodeSelectionManagerDidSelectMissionNode", missionNodeVisualController));
}
// Autogenerated method: MissionSelectionMapViewController.ShowMissionClearedAnimation
void GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation(System::Action* finishCallback) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ShowMissionClearedAnimation", finishCallback));
}
// Autogenerated method: MissionSelectionMapViewController.DeselectSelectedNode
void GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DeselectSelectedNode"));
}
// Autogenerated method: MissionSelectionMapViewController.DidActivate
void GlobalNamespace::MissionSelectionMapViewController::DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, activationType));
}
// Autogenerated method: MissionSelectionMapViewController.DidDeactivate
void GlobalNamespace::MissionSelectionMapViewController::DidDeactivate(HMUI::ViewController::DeactivationType deactivationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidDeactivate", deactivationType));
}
// Autogenerated method: MissionSelectionMapViewController..ctor
GlobalNamespace::MissionSelectionMapViewController* GlobalNamespace::MissionSelectionMapViewController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MissionSelectionMapViewController*>());
}
