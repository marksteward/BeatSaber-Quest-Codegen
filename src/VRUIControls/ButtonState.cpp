// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: VRUIControls.ButtonState
#include "VRUIControls/ButtonState.hpp"
// Including type: VRUIControls.MouseButtonEventData
#include "VRUIControls/MouseButtonEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: VRUIControls.ButtonState.get_eventData
VRUIControls::MouseButtonEventData* VRUIControls::ButtonState::get_eventData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<VRUIControls::MouseButtonEventData*>(this, "get_eventData"));
}
// Autogenerated method: VRUIControls.ButtonState.set_eventData
void VRUIControls::ButtonState::set_eventData(VRUIControls::MouseButtonEventData* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_eventData", value));
}
// Autogenerated method: VRUIControls.ButtonState.get_button
UnityEngine::EventSystems::PointerEventData::InputButton VRUIControls::ButtonState::get_button() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::EventSystems::PointerEventData::InputButton>(this, "get_button"));
}
// Autogenerated method: VRUIControls.ButtonState.set_button
void VRUIControls::ButtonState::set_button(UnityEngine::EventSystems::PointerEventData::InputButton value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_button", value));
}
// Autogenerated method: VRUIControls.ButtonState.get_pressedValue
float VRUIControls::ButtonState::get_pressedValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_pressedValue"));
}
// Autogenerated method: VRUIControls.ButtonState.set_pressedValue
void VRUIControls::ButtonState::set_pressedValue(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_pressedValue", value));
}
// Autogenerated method: VRUIControls.ButtonState..ctor
VRUIControls::ButtonState* VRUIControls::ButtonState::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ButtonState*>());
}
