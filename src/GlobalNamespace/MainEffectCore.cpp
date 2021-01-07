// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MainEffectCore
#include "GlobalNamespace/MainEffectCore.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDB11EC
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _baseColorBoostID
int GlobalNamespace::MainEffectCore::_get__baseColorBoostID() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MainEffectCore").WithContext("_get__baseColorBoostID");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "MainEffectCore", "_baseColorBoostID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _baseColorBoostID
void GlobalNamespace::MainEffectCore::_set__baseColorBoostID(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MainEffectCore").WithContext("_set__baseColorBoostID");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "MainEffectCore", "_baseColorBoostID", value));
}
// [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDB11FC
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _baseColorBoostThresholdID
int GlobalNamespace::MainEffectCore::_get__baseColorBoostThresholdID() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MainEffectCore").WithContext("_get__baseColorBoostThresholdID");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "MainEffectCore", "_baseColorBoostThresholdID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _baseColorBoostThresholdID
void GlobalNamespace::MainEffectCore::_set__baseColorBoostThresholdID(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MainEffectCore").WithContext("_set__baseColorBoostThresholdID");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "MainEffectCore", "_baseColorBoostThresholdID", value));
}
// Autogenerated method: MainEffectCore.SetGlobalShaderValues
void GlobalNamespace::MainEffectCore::SetGlobalShaderValues(float baseColorBoost, float baseColorBoostThreshold) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MainEffectCore").WithContext("SetGlobalShaderValues");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "MainEffectCore", "SetGlobalShaderValues", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(baseColorBoost, baseColorBoostThreshold)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, baseColorBoost, baseColorBoostThreshold);
}
// Autogenerated method: MainEffectCore..cctor
void GlobalNamespace::MainEffectCore::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MainEffectCore").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "MainEffectCore", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
