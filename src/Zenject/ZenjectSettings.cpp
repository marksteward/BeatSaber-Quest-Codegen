// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Zenject.ZenjectSettings
#include "Zenject/ZenjectSettings.hpp"
// Including type: Zenject.ZenjectSettings/SignalSettings
#include "Zenject/ZenjectSettings_SignalSettings.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public Zenject.ZenjectSettings Default
Zenject::ZenjectSettings* Zenject::ZenjectSettings::_get_Default() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::ZenjectSettings*>("Zenject", "ZenjectSettings", "Default"));
}
// Autogenerated static field setter
// Set static field: static public Zenject.ZenjectSettings Default
void Zenject::ZenjectSettings::_set_Default(Zenject::ZenjectSettings* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "ZenjectSettings", "Default", value));
}
// Autogenerated method: Zenject.ZenjectSettings..ctor
Zenject::ZenjectSettings* Zenject::ZenjectSettings::New_ctor(Zenject::ValidationErrorResponses validationErrorResponse, Zenject::RootResolveMethods validationRootResolveMethod, bool displayWarningWhenResolvingDuringInstall, bool ensureDeterministicDestructionOrderOnApplicationQuit, Zenject::ZenjectSettings::SignalSettings* signalSettings) {
  return THROW_UNLESS(il2cpp_utils::New<ZenjectSettings*>(validationErrorResponse, validationRootResolveMethod, displayWarningWhenResolvingDuringInstall, ensureDeterministicDestructionOrderOnApplicationQuit, signalSettings));
}
// Autogenerated method: Zenject.ZenjectSettings.get_Signals
Zenject::ZenjectSettings::SignalSettings* Zenject::ZenjectSettings::get_Signals() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ZenjectSettings::SignalSettings*>(this, "get_Signals"));
}
// Autogenerated method: Zenject.ZenjectSettings.get_ValidationErrorResponse
Zenject::ValidationErrorResponses Zenject::ZenjectSettings::get_ValidationErrorResponse() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ValidationErrorResponses>(this, "get_ValidationErrorResponse"));
}
// Autogenerated method: Zenject.ZenjectSettings.get_ValidationRootResolveMethod
Zenject::RootResolveMethods Zenject::ZenjectSettings::get_ValidationRootResolveMethod() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::RootResolveMethods>(this, "get_ValidationRootResolveMethod"));
}
// Autogenerated method: Zenject.ZenjectSettings.get_DisplayWarningWhenResolvingDuringInstall
bool Zenject::ZenjectSettings::get_DisplayWarningWhenResolvingDuringInstall() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_DisplayWarningWhenResolvingDuringInstall"));
}
// Autogenerated method: Zenject.ZenjectSettings.get_EnsureDeterministicDestructionOrderOnApplicationQuit
bool Zenject::ZenjectSettings::get_EnsureDeterministicDestructionOrderOnApplicationQuit() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_EnsureDeterministicDestructionOrderOnApplicationQuit"));
}
// Autogenerated method: Zenject.ZenjectSettings..cctor
void Zenject::ZenjectSettings::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject", "ZenjectSettings", ".cctor"));
}
// Autogenerated method: Zenject.ZenjectSettings..ctor
Zenject::ZenjectSettings* Zenject::ZenjectSettings::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ZenjectSettings*>());
}
