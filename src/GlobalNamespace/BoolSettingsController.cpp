// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BoolSettingsController
#include "GlobalNamespace/BoolSettingsController.hpp"
// Including type: BoolSO
#include "GlobalNamespace/BoolSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BoolSettingsController.GetInitValue
bool GlobalNamespace::BoolSettingsController::GetInitValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetInitValue"));
}
// Autogenerated method: BoolSettingsController.ApplyValue
void GlobalNamespace::BoolSettingsController::ApplyValue(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyValue", value));
}
// Autogenerated method: BoolSettingsController.TextForValue
::Il2CppString* GlobalNamespace::BoolSettingsController::TextForValue(bool value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "TextForValue", value));
}
// Autogenerated method: BoolSettingsController..ctor
GlobalNamespace::BoolSettingsController* GlobalNamespace::BoolSettingsController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BoolSettingsController*>());
}
