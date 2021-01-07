// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRUIControls.VRInputModule
#include "VRUIControls/VRInputModule.hpp"
// Including type: VRUIControls.VRPointer
#include "VRUIControls/VRPointer.hpp"
// Including type: Libraries.HM.HMLib.VR.HapticPresetSO
#include "Libraries/HM/HMLib/VR/HapticPresetSO.hpp"
// Including type: HapticFeedbackController
#include "GlobalNamespace/HapticFeedbackController.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
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
// Including type: System.Comparison`1
#include "System/Comparison_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.EventSystems.BaseEventData
#include "UnityEngine/EventSystems/BaseEventData.hpp"
// Including type: VRUIControls.MouseButtonEventData
#include "VRUIControls/MouseButtonEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kMouseLeftId
int VRUIControls::VRInputModule::_get_kMouseLeftId() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("_get_kMouseLeftId");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("VRUIControls", "VRInputModule", "kMouseLeftId"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kMouseLeftId
void VRUIControls::VRInputModule::_set_kMouseLeftId(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("_set_kMouseLeftId");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("VRUIControls", "VRInputModule", "kMouseLeftId", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kMinPressValue
float VRUIControls::VRInputModule::_get_kMinPressValue() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("_get_kMinPressValue");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("VRUIControls", "VRInputModule", "kMinPressValue"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kMinPressValue
void VRUIControls::VRInputModule::_set_kMinPressValue(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("_set_kMinPressValue");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("VRUIControls", "VRInputModule", "kMinPressValue", value));
}
// [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDB2270
// Autogenerated static field getter
// Get static field: static private readonly System.Comparison`1<UnityEngine.EventSystems.RaycastResult> _raycastComparer
System::Comparison_1<UnityEngine::EventSystems::RaycastResult>* VRUIControls::VRInputModule::_get__raycastComparer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("_get__raycastComparer");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Comparison_1<UnityEngine::EventSystems::RaycastResult>*>("VRUIControls", "VRInputModule", "_raycastComparer"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Comparison`1<UnityEngine.EventSystems.RaycastResult> _raycastComparer
void VRUIControls::VRInputModule::_set__raycastComparer(System::Comparison_1<UnityEngine::EventSystems::RaycastResult>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("_set__raycastComparer");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("VRUIControls", "VRInputModule", "_raycastComparer", value));
}
// Autogenerated method: VRUIControls.VRInputModule.get_useMouseForPressInput
bool VRUIControls::VRInputModule::get_useMouseForPressInput() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("get_useMouseForPressInput");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_useMouseForPressInput", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: VRUIControls.VRInputModule.set_useMouseForPressInput
void VRUIControls::VRInputModule::set_useMouseForPressInput(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("set_useMouseForPressInput");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_useMouseForPressInput", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: VRUIControls.VRInputModule.add_onProcessMousePressEvent
void VRUIControls::VRInputModule::add_onProcessMousePressEvent(System::Action_1<UnityEngine::GameObject*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("add_onProcessMousePressEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_onProcessMousePressEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: VRUIControls.VRInputModule.remove_onProcessMousePressEvent
void VRUIControls::VRInputModule::remove_onProcessMousePressEvent(System::Action_1<UnityEngine::GameObject*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("remove_onProcessMousePressEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_onProcessMousePressEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: VRUIControls.VRInputModule.GetPointerData
bool VRUIControls::VRInputModule::GetPointerData(int id, UnityEngine::EventSystems::PointerEventData*& data, bool create) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("GetPointerData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetPointerData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(id, data, create)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, id, data, create);
}
// Autogenerated method: VRUIControls.VRInputModule.GetMousePointerEventData
VRUIControls::MouseState* VRUIControls::VRInputModule::GetMousePointerEventData(int id) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("GetMousePointerEventData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetMousePointerEventData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(id)));
  return ::il2cpp_utils::RunMethodThrow<VRUIControls::MouseState*, false>(this, ___internal__method, id);
}
// Autogenerated method: VRUIControls.VRInputModule.GetLastPointerEventData
UnityEngine::EventSystems::PointerEventData* VRUIControls::VRInputModule::GetLastPointerEventData(int id) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("GetLastPointerEventData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetLastPointerEventData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(id)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::EventSystems::PointerEventData*, false>(this, ___internal__method, id);
}
// Autogenerated method: VRUIControls.VRInputModule.ShouldStartDrag
bool VRUIControls::VRInputModule::ShouldStartDrag(UnityEngine::Vector2 pressPos, UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("ShouldStartDrag");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ShouldStartDrag", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(pressPos, currentPos, threshold, useDragThreshold)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, pressPos, currentPos, threshold, useDragThreshold);
}
// Autogenerated method: VRUIControls.VRInputModule.ProcessMove
void VRUIControls::VRInputModule::ProcessMove(UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("ProcessMove");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ProcessMove", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(pointerEvent)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, pointerEvent);
}
// Autogenerated method: VRUIControls.VRInputModule.ProcessDrag
void VRUIControls::VRInputModule::ProcessDrag(UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("ProcessDrag");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ProcessDrag", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(pointerEvent)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, pointerEvent);
}
// Autogenerated method: VRUIControls.VRInputModule.ClearSelection
void VRUIControls::VRInputModule::ClearSelection() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("ClearSelection");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ClearSelection", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: VRUIControls.VRInputModule.DeselectIfSelectionChanged
void VRUIControls::VRInputModule::DeselectIfSelectionChanged(UnityEngine::GameObject* currentOverGo, UnityEngine::EventSystems::BaseEventData* pointerEvent) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("DeselectIfSelectionChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DeselectIfSelectionChanged", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(currentOverGo, pointerEvent)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, currentOverGo, pointerEvent);
}
// Autogenerated method: VRUIControls.VRInputModule.SendUpdateEventToSelectedObject
bool VRUIControls::VRInputModule::SendUpdateEventToSelectedObject() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("SendUpdateEventToSelectedObject");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SendUpdateEventToSelectedObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: VRUIControls.VRInputModule.ProcessMousePress
void VRUIControls::VRInputModule::ProcessMousePress(VRUIControls::MouseButtonEventData* data) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("ProcessMousePress");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ProcessMousePress", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(data)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, data);
}
// Autogenerated method: VRUIControls.VRInputModule.RaycastComparer
int VRUIControls::VRInputModule::RaycastComparer(UnityEngine::EventSystems::RaycastResult lhs, UnityEngine::EventSystems::RaycastResult rhs) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("RaycastComparer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("VRUIControls", "VRInputModule", "RaycastComparer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(lhs, rhs)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, lhs, rhs);
}
// Autogenerated method: VRUIControls.VRInputModule.OnDisable
void VRUIControls::VRInputModule::OnDisable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("OnDisable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDisable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: VRUIControls.VRInputModule.IsPointerOverGameObject
bool VRUIControls::VRInputModule::IsPointerOverGameObject(int pointerId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("IsPointerOverGameObject");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IsPointerOverGameObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(pointerId)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, pointerId);
}
// Autogenerated method: VRUIControls.VRInputModule.ToString
::Il2CppString* VRUIControls::VRInputModule::ToString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: VRUIControls.VRInputModule.Process
void VRUIControls::VRInputModule::Process() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("Process");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Process", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: VRUIControls.VRInputModule.HandlePointerExitAndEnter
void VRUIControls::VRInputModule::HandlePointerExitAndEnter(UnityEngine::EventSystems::PointerEventData* currentPointerData, UnityEngine::GameObject* newEnterTarget) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext("HandlePointerExitAndEnter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandlePointerExitAndEnter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(currentPointerData, newEnterTarget)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, currentPointerData, newEnterTarget);
}
// Autogenerated method: VRUIControls.VRInputModule..cctor
void VRUIControls::VRInputModule::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("VRUIControls").WithContext("VRInputModule").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("VRUIControls", "VRInputModule", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
