// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TabBarViewController
#include "GlobalNamespace/TabBarViewController.hpp"
// Including type: TabBarViewController/TabBarItem
#include "GlobalNamespace/TabBarViewController_TabBarItem.hpp"
// Including type: HMUI.TextSegmentedControl
#include "HMUI/TextSegmentedControl.hpp"
// Including type: UnityEngine.UI.ContentSizeFitter
#include "UnityEngine/UI/ContentSizeFitter.hpp"
// Including type: HMUI.SegmentedControl
#include "HMUI/SegmentedControl.hpp"
// Including type: HMUI.ViewController/ActivationType
#include "HMUI/ViewController_ActivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TabBarViewController.set_sizeToFit
void GlobalNamespace::TabBarViewController::set_sizeToFit(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_sizeToFit", value));
}
// Autogenerated method: TabBarViewController.get_sizeToFit
bool GlobalNamespace::TabBarViewController::get_sizeToFit() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_sizeToFit"));
}
// Autogenerated method: TabBarViewController.get_selectedCellNumber
int GlobalNamespace::TabBarViewController::get_selectedCellNumber() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_selectedCellNumber"));
}
// Autogenerated method: TabBarViewController.Setup
void GlobalNamespace::TabBarViewController::Setup(::Array<GlobalNamespace::TabBarViewController::TabBarItem*>* items) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Setup", items));
}
// Autogenerated method: TabBarViewController.SelectItem
void GlobalNamespace::TabBarViewController::SelectItem(int index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectItem", index));
}
// Autogenerated method: TabBarViewController.Clear
void GlobalNamespace::TabBarViewController::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: TabBarViewController.HandleDidSelectCell
void GlobalNamespace::TabBarViewController::HandleDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellNumber) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDidSelectCell", segmentedControl, cellNumber));
}
// Autogenerated method: TabBarViewController.DidActivate
void GlobalNamespace::TabBarViewController::DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, activationType));
}
// Autogenerated method: TabBarViewController.OnDestroy
void GlobalNamespace::TabBarViewController::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: TabBarViewController..ctor
GlobalNamespace::TabBarViewController* GlobalNamespace::TabBarViewController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<TabBarViewController*>());
}
