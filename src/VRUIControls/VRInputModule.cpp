// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRUIControls.VRInputModule
#include "VRUIControls/VRInputModule.hpp"
// Including type: VRUIControls.VRPointer
#include "VRUIControls/VRPointer.hpp"
// Including type: VRPlatformHelper
#include "GlobalNamespace/VRPlatformHelper.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: VRUIControls.MouseState
#include "VRUIControls/MouseState.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: UnityEngine.EventSystems.BaseEventData
#include "UnityEngine/EventSystems/BaseEventData.hpp"
// Including type: VRUIControls.MouseButtonEventData
#include "VRUIControls/MouseButtonEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Int32 kMouseLeftId
int VRUIControls::VRInputModule::_get_kMouseLeftId() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("VRUIControls", "VRInputModule", "kMouseLeftId"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kMouseLeftId
void VRUIControls::VRInputModule::_set_kMouseLeftId(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("VRUIControls", "VRInputModule", "kMouseLeftId", value));
}
// Autogenerated static field getter
// Get static field: static public System.Single kMinPressValue
float VRUIControls::VRInputModule::_get_kMinPressValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("VRUIControls", "VRInputModule", "kMinPressValue"));
}
// Autogenerated static field setter
// Set static field: static public System.Single kMinPressValue
void VRUIControls::VRInputModule::_set_kMinPressValue(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("VRUIControls", "VRInputModule", "kMinPressValue", value));
}
// Autogenerated method: VRUIControls.VRInputModule.get_useMouseForPressInput
bool VRUIControls::VRInputModule::get_useMouseForPressInput() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_useMouseForPressInput"));
}
// Autogenerated method: VRUIControls.VRInputModule.set_useMouseForPressInput
void VRUIControls::VRInputModule::set_useMouseForPressInput(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_useMouseForPressInput", value));
}
// Autogenerated method: VRUIControls.VRInputModule.GetPointerData
bool VRUIControls::VRInputModule::GetPointerData(int id, UnityEngine::EventSystems::PointerEventData*& data, bool create) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetPointerData", id, data, create));
}
// Autogenerated method: VRUIControls.VRInputModule.GetMousePointerEventData
VRUIControls::MouseState* VRUIControls::VRInputModule::GetMousePointerEventData(int id) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<VRUIControls::MouseState*>(this, "GetMousePointerEventData", id));
}
// Autogenerated method: VRUIControls.VRInputModule.GetLastPointerEventData
UnityEngine::EventSystems::PointerEventData* VRUIControls::VRInputModule::GetLastPointerEventData(int id) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::EventSystems::PointerEventData*>(this, "GetLastPointerEventData", id));
}
// Autogenerated method: VRUIControls.VRInputModule.ShouldStartDrag
bool VRUIControls::VRInputModule::ShouldStartDrag(UnityEngine::Vector2 pressPos, UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ShouldStartDrag", pressPos, currentPos, threshold, useDragThreshold));
}
// Autogenerated method: VRUIControls.VRInputModule.ProcessMove
void VRUIControls::VRInputModule::ProcessMove(UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessMove", pointerEvent));
}
// Autogenerated method: VRUIControls.VRInputModule.ProcessDrag
void VRUIControls::VRInputModule::ProcessDrag(UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessDrag", pointerEvent));
}
// Autogenerated method: VRUIControls.VRInputModule.ClearSelection
void VRUIControls::VRInputModule::ClearSelection() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearSelection"));
}
// Autogenerated method: VRUIControls.VRInputModule.DeselectIfSelectionChanged
void VRUIControls::VRInputModule::DeselectIfSelectionChanged(UnityEngine::GameObject* currentOverGo, UnityEngine::EventSystems::BaseEventData* pointerEvent) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DeselectIfSelectionChanged", currentOverGo, pointerEvent));
}
// Autogenerated method: VRUIControls.VRInputModule.SendUpdateEventToSelectedObject
bool VRUIControls::VRInputModule::SendUpdateEventToSelectedObject() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SendUpdateEventToSelectedObject"));
}
// Autogenerated method: VRUIControls.VRInputModule.ProcessMousePress
void VRUIControls::VRInputModule::ProcessMousePress(VRUIControls::MouseButtonEventData* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessMousePress", data));
}
// Autogenerated method: VRUIControls.VRInputModule.IsPointerOverGameObject
bool VRUIControls::VRInputModule::IsPointerOverGameObject(int pointerId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsPointerOverGameObject", pointerId));
}
// Autogenerated method: VRUIControls.VRInputModule.ToString
::Il2CppString* VRUIControls::VRInputModule::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
// Autogenerated method: VRUIControls.VRInputModule.Process
void VRUIControls::VRInputModule::Process() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Process"));
}
// Autogenerated method: VRUIControls.VRInputModule.HandlePointerExitAndEnter
void VRUIControls::VRInputModule::HandlePointerExitAndEnter(UnityEngine::EventSystems::PointerEventData* currentPointerData, UnityEngine::GameObject* newEnterTarget) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePointerExitAndEnter", currentPointerData, newEnterTarget));
}
// Autogenerated method: VRUIControls.VRInputModule..ctor
VRUIControls::VRInputModule* VRUIControls::VRInputModule::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<VRInputModule*>());
}
