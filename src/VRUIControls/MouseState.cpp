// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: VRUIControls.MouseState
#include "VRUIControls/MouseState.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: VRUIControls.ButtonState
#include "VRUIControls/ButtonState.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine/EventSystems/PointerEventData_FramePressState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: VRUIControls.MouseState.AnyPressesThisFrame
bool VRUIControls::MouseState::AnyPressesThisFrame() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AnyPressesThisFrame"));
}
// Autogenerated method: VRUIControls.MouseState.AnyReleasesThisFrame
bool VRUIControls::MouseState::AnyReleasesThisFrame() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AnyReleasesThisFrame"));
}
// Autogenerated method: VRUIControls.MouseState.GetButtonState
VRUIControls::ButtonState* VRUIControls::MouseState::GetButtonState(UnityEngine::EventSystems::PointerEventData::InputButton button) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<VRUIControls::ButtonState*>(this, "GetButtonState", button));
}
// Autogenerated method: VRUIControls.MouseState.SetButtonState
void VRUIControls::MouseState::SetButtonState(UnityEngine::EventSystems::PointerEventData::InputButton button, UnityEngine::EventSystems::PointerEventData::FramePressState stateForMouseButton, UnityEngine::EventSystems::PointerEventData* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetButtonState", button, stateForMouseButton, data));
}
// Autogenerated method: VRUIControls.MouseState..ctor
VRUIControls::MouseState* VRUIControls::MouseState::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MouseState*>());
}
