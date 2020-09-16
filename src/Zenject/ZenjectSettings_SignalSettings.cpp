// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Zenject.ZenjectSettings/SignalSettings
#include "Zenject/ZenjectSettings_SignalSettings.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public Zenject.ZenjectSettings/SignalSettings Default
Zenject::ZenjectSettings::SignalSettings* Zenject::ZenjectSettings::SignalSettings::_get_Default() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::ZenjectSettings::SignalSettings*>("Zenject", "ZenjectSettings/SignalSettings", "Default"));
}
// Autogenerated static field setter
// Set static field: static public Zenject.ZenjectSettings/SignalSettings Default
void Zenject::ZenjectSettings::SignalSettings::_set_Default(Zenject::ZenjectSettings::SignalSettings* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "ZenjectSettings/SignalSettings", "Default", value));
}
// Autogenerated method: Zenject.ZenjectSettings/SignalSettings..ctor
Zenject::ZenjectSettings::SignalSettings* Zenject::ZenjectSettings::SignalSettings::New_ctor(Zenject::SignalDefaultSyncModes defaultSyncMode, Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse, bool requireStrictUnsubscribe, int defaultAsyncTickPriority) {
  return THROW_UNLESS(il2cpp_utils::New<ZenjectSettings::SignalSettings*>(defaultSyncMode, missingHandlerDefaultResponse, requireStrictUnsubscribe, defaultAsyncTickPriority));
}
// Autogenerated method: Zenject.ZenjectSettings/SignalSettings.get_DefaultAsyncTickPriority
int Zenject::ZenjectSettings::SignalSettings::get_DefaultAsyncTickPriority() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_DefaultAsyncTickPriority"));
}
// Autogenerated method: Zenject.ZenjectSettings/SignalSettings.get_DefaultSyncMode
Zenject::SignalDefaultSyncModes Zenject::ZenjectSettings::SignalSettings::get_DefaultSyncMode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::SignalDefaultSyncModes>(this, "get_DefaultSyncMode"));
}
// Autogenerated method: Zenject.ZenjectSettings/SignalSettings.get_MissingHandlerDefaultResponse
Zenject::SignalMissingHandlerResponses Zenject::ZenjectSettings::SignalSettings::get_MissingHandlerDefaultResponse() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::SignalMissingHandlerResponses>(this, "get_MissingHandlerDefaultResponse"));
}
// Autogenerated method: Zenject.ZenjectSettings/SignalSettings.get_RequireStrictUnsubscribe
bool Zenject::ZenjectSettings::SignalSettings::get_RequireStrictUnsubscribe() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_RequireStrictUnsubscribe"));
}
// Autogenerated method: Zenject.ZenjectSettings/SignalSettings..cctor
void Zenject::ZenjectSettings::SignalSettings::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject", "ZenjectSettings/SignalSettings", ".cctor"));
}
// Autogenerated method: Zenject.ZenjectSettings/SignalSettings..ctor
Zenject::ZenjectSettings::SignalSettings* Zenject::ZenjectSettings::SignalSettings::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ZenjectSettings::SignalSettings*>());
}
