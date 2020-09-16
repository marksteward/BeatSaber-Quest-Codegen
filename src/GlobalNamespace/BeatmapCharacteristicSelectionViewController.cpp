// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BeatmapCharacteristicSelectionViewController
#include "GlobalNamespace/BeatmapCharacteristicSelectionViewController.hpp"
// Including type: HMUI.IconSegmentedControl
#include "HMUI/IconSegmentedControl.hpp"
// Including type: BeatmapCharacteristicCollectionSO
#include "GlobalNamespace/BeatmapCharacteristicCollectionSO.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: HMUI.ViewController/ActivationType
#include "HMUI/ViewController_ActivationType.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: HMUI.SegmentedControl
#include "HMUI/SegmentedControl.hpp"
// Including type: HMUI.ViewController/DeactivationType
#include "HMUI/ViewController_DeactivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapCharacteristicSelectionViewController.add_didSelectBeatmapCharacteristicEvent
void GlobalNamespace::BeatmapCharacteristicSelectionViewController::add_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSelectionViewController*, GlobalNamespace::BeatmapCharacteristicSO*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectBeatmapCharacteristicEvent", value));
}
// Autogenerated method: BeatmapCharacteristicSelectionViewController.remove_didSelectBeatmapCharacteristicEvent
void GlobalNamespace::BeatmapCharacteristicSelectionViewController::remove_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSelectionViewController*, GlobalNamespace::BeatmapCharacteristicSO*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectBeatmapCharacteristicEvent", value));
}
// Autogenerated method: BeatmapCharacteristicSelectionViewController.get_selectedBeatmapCharacteristic
GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::BeatmapCharacteristicSelectionViewController::get_selectedBeatmapCharacteristic() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapCharacteristicSO*>(this, "get_selectedBeatmapCharacteristic"));
}
// Autogenerated method: BeatmapCharacteristicSelectionViewController.Init
void GlobalNamespace::BeatmapCharacteristicSelectionViewController::Init() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init"));
}
// Autogenerated method: BeatmapCharacteristicSelectionViewController.HandleBeatmapCharacteristicSegmentedControlDidSelectCell
void GlobalNamespace::BeatmapCharacteristicSelectionViewController::HandleBeatmapCharacteristicSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellNumber) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBeatmapCharacteristicSegmentedControlDidSelectCell", segmentedControl, cellNumber));
}
// Autogenerated method: BeatmapCharacteristicSelectionViewController.DidActivate
void GlobalNamespace::BeatmapCharacteristicSelectionViewController::DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, activationType));
}
// Autogenerated method: BeatmapCharacteristicSelectionViewController.DidDeactivate
void GlobalNamespace::BeatmapCharacteristicSelectionViewController::DidDeactivate(HMUI::ViewController::DeactivationType deactivationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidDeactivate", deactivationType));
}
// Autogenerated method: BeatmapCharacteristicSelectionViewController..ctor
GlobalNamespace::BeatmapCharacteristicSelectionViewController* GlobalNamespace::BeatmapCharacteristicSelectionViewController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BeatmapCharacteristicSelectionViewController*>());
}
