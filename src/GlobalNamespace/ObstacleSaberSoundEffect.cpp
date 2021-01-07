// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ObstacleSaberSoundEffect
#include "GlobalNamespace/ObstacleSaberSoundEffect.hpp"
// Including type: ObstacleSaberSparkleEffectManager
#include "GlobalNamespace/ObstacleSaberSparkleEffectManager.hpp"
// Including type: UnityEngine.AudioSource
#include "UnityEngine/AudioSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kSmooth
float GlobalNamespace::ObstacleSaberSoundEffect::_get_kSmooth() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ObstacleSaberSoundEffect").WithContext("_get_kSmooth");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "ObstacleSaberSoundEffect", "kSmooth"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kSmooth
void GlobalNamespace::ObstacleSaberSoundEffect::_set_kSmooth(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ObstacleSaberSoundEffect").WithContext("_set_kSmooth");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ObstacleSaberSoundEffect", "kSmooth", value));
}
// Autogenerated method: ObstacleSaberSoundEffect.Awake
void GlobalNamespace::ObstacleSaberSoundEffect::Awake() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ObstacleSaberSoundEffect").WithContext("Awake");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ObstacleSaberSoundEffect.OnDestroy
void GlobalNamespace::ObstacleSaberSoundEffect::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ObstacleSaberSoundEffect").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ObstacleSaberSoundEffect.LateUpdate
void GlobalNamespace::ObstacleSaberSoundEffect::LateUpdate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ObstacleSaberSoundEffect").WithContext("LateUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LateUpdate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ObstacleSaberSoundEffect.HandleSparkleEffectDidStart
void GlobalNamespace::ObstacleSaberSoundEffect::HandleSparkleEffectDidStart(GlobalNamespace::SaberType saberType) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ObstacleSaberSoundEffect").WithContext("HandleSparkleEffectDidStart");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleSparkleEffectDidStart", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(saberType)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, saberType);
}
// Autogenerated method: ObstacleSaberSoundEffect.HandleSparkleEffecDidEnd
void GlobalNamespace::ObstacleSaberSoundEffect::HandleSparkleEffecDidEnd(GlobalNamespace::SaberType saberType) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ObstacleSaberSoundEffect").WithContext("HandleSparkleEffecDidEnd");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleSparkleEffecDidEnd", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(saberType)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, saberType);
}
