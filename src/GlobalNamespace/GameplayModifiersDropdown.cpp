// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayModifiersDropdown
#include "GlobalNamespace/GameplayModifiersDropdown.hpp"
// Including type: GameplayModifiersDropdown/<>c
#include "GlobalNamespace/GameplayModifiersDropdown_--c.hpp"
// Including type: HMUI.SimpleTextDropdown
#include "HMUI/SimpleTextDropdown.hpp"
// Including type: GameplayModifiersModelSO
#include "GlobalNamespace/GameplayModifiersModelSO.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: System.Tuple`2
#include "System/Tuple_2.hpp"
// Including type: HMUI.DropdownWithTableView
#include "HMUI/DropdownWithTableView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: GameplayModifiersDropdown.add_didSelectCellWithIdxEvent
void GlobalNamespace::GameplayModifiersDropdown::add_didSelectCellWithIdxEvent(System::Action_1<int>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectCellWithIdxEvent", value));
}
// Autogenerated method: GameplayModifiersDropdown.remove_didSelectCellWithIdxEvent
void GlobalNamespace::GameplayModifiersDropdown::remove_didSelectCellWithIdxEvent(System::Action_1<int>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectCellWithIdxEvent", value));
}
// Autogenerated method: GameplayModifiersDropdown.get_gameplayModifiersData
System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*>* GlobalNamespace::GameplayModifiersDropdown::get_gameplayModifiersData() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*>*>(this, "get_gameplayModifiersData")));
}
// Autogenerated method: GameplayModifiersDropdown.Start
void GlobalNamespace::GameplayModifiersDropdown::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: GameplayModifiersDropdown.OnDestroy
void GlobalNamespace::GameplayModifiersDropdown::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: GameplayModifiersDropdown.GetSelectedGameplayModifierMask
GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifiersDropdown::GetSelectedGameplayModifierMask() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::GameplayModifierMask>(this, "GetSelectedGameplayModifierMask"));
}
// Autogenerated method: GameplayModifiersDropdown.SelectCellWithGameplayModifierMask
void GlobalNamespace::GameplayModifiersDropdown::SelectCellWithGameplayModifierMask(GlobalNamespace::GameplayModifierMask gameplayModifierMask) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectCellWithGameplayModifierMask", gameplayModifierMask));
}
// Autogenerated method: GameplayModifiersDropdown.GetIdxForGameplayModifierMask
int GlobalNamespace::GameplayModifiersDropdown::GetIdxForGameplayModifierMask(GlobalNamespace::GameplayModifierMask gameplayModifierMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetIdxForGameplayModifierMask", gameplayModifierMask));
}
// Autogenerated method: GameplayModifiersDropdown.HandleSimpleTextDropdownDidSelectCellWithIdx
void GlobalNamespace::GameplayModifiersDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleSimpleTextDropdownDidSelectCellWithIdx", dropdownWithTableView, idx));
}
// Autogenerated method: GameplayModifiersDropdown.<get_gameplayModifiersData>b__7_0
System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>* GlobalNamespace::GameplayModifiersDropdown::$get_gameplayModifiersData$b__7_0(GlobalNamespace::GameplayModifierMask value) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*>(this, "<get_gameplayModifiersData>b__7_0", value)));
}
// Autogenerated method: GameplayModifiersDropdown..ctor
GlobalNamespace::GameplayModifiersDropdown* GlobalNamespace::GameplayModifiersDropdown::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<GameplayModifiersDropdown*>());
}