// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OverrideEnvironmentSettings
#include "GlobalNamespace/OverrideEnvironmentSettings.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: EnvironmentTypeSO
#include "GlobalNamespace/EnvironmentTypeSO.hpp"
// Including type: EnvironmentInfoSO
#include "GlobalNamespace/EnvironmentInfoSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OverrideEnvironmentSettings.SetEnvironmentInfoForType
void GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType(GlobalNamespace::EnvironmentTypeSO* environmentType, GlobalNamespace::EnvironmentInfoSO* environmentInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetEnvironmentInfoForType", environmentType, environmentInfo));
}
// Autogenerated method: OverrideEnvironmentSettings.GetOverrideEnvironmentInfoForType
GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType(GlobalNamespace::EnvironmentTypeSO* environmentType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::EnvironmentInfoSO*>(this, "GetOverrideEnvironmentInfoForType", environmentType));
}
// Autogenerated method: OverrideEnvironmentSettings..ctor
GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::OverrideEnvironmentSettings::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<OverrideEnvironmentSettings*>());
}
