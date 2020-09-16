// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: HMUI.ScreenSystem
#include "HMUI/ScreenSystem.hpp"
// Including type: HMUI.Screen
#include "HMUI/Screen.hpp"
// Including type: UnityEngine.UI.Button
#include "UnityEngine/UI/Button.hpp"
// Including type: ScreenBackButtonAnimationController
#include "GlobalNamespace/ScreenBackButtonAnimationController.hpp"
// Including type: HMUI.TitleViewController
#include "HMUI/TitleViewController.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: HMUI.ButtonBinder
#include "HMUI/ButtonBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.ScreenSystem.get_titleViewController
HMUI::TitleViewController* HMUI::ScreenSystem::get_titleViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TitleViewController*>(this, "get_titleViewController"));
}
// Autogenerated method: HMUI.ScreenSystem.get_mainScreen
HMUI::Screen* HMUI::ScreenSystem::get_mainScreen() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::Screen*>(this, "get_mainScreen"));
}
// Autogenerated method: HMUI.ScreenSystem.get_leftScreen
HMUI::Screen* HMUI::ScreenSystem::get_leftScreen() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::Screen*>(this, "get_leftScreen"));
}
// Autogenerated method: HMUI.ScreenSystem.get_rightScreen
HMUI::Screen* HMUI::ScreenSystem::get_rightScreen() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::Screen*>(this, "get_rightScreen"));
}
// Autogenerated method: HMUI.ScreenSystem.get_bottomScreen
HMUI::Screen* HMUI::ScreenSystem::get_bottomScreen() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::Screen*>(this, "get_bottomScreen"));
}
// Autogenerated method: HMUI.ScreenSystem.get_topScreen
HMUI::Screen* HMUI::ScreenSystem::get_topScreen() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::Screen*>(this, "get_topScreen"));
}
// Autogenerated method: HMUI.ScreenSystem.add_backButtonWasPressedEvent
void HMUI::ScreenSystem::add_backButtonWasPressedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_backButtonWasPressedEvent", value));
}
// Autogenerated method: HMUI.ScreenSystem.remove_backButtonWasPressedEvent
void HMUI::ScreenSystem::remove_backButtonWasPressedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_backButtonWasPressedEvent", value));
}
// Autogenerated method: HMUI.ScreenSystem.Awake
void HMUI::ScreenSystem::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: HMUI.ScreenSystem.OnDestroy
void HMUI::ScreenSystem::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: HMUI.ScreenSystem.BackButtonPush
void HMUI::ScreenSystem::BackButtonPush(bool show) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BackButtonPush", show));
}
// Autogenerated method: HMUI.ScreenSystem.BackButtonPop
void HMUI::ScreenSystem::BackButtonPop(bool show) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BackButtonPop", show));
}
// Autogenerated method: HMUI.ScreenSystem.<Awake>b__25_0
void HMUI::ScreenSystem::$Awake$b__25_0() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<Awake>b__25_0"));
}
// Autogenerated method: HMUI.ScreenSystem..ctor
HMUI::ScreenSystem* HMUI::ScreenSystem::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ScreenSystem*>());
}
