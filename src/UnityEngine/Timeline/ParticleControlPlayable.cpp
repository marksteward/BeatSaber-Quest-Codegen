// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.Timeline.ParticleControlPlayable
#include "UnityEngine/Timeline/ParticleControlPlayable.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: UnityEngine.Playables.ScriptPlayable`1
#include "UnityEngine/Playables/ScriptPlayable_1.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Including type: UnityEngine.Playables.FrameData
#include "UnityEngine/Playables/FrameData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kUnsetTime
float UnityEngine::Timeline::ParticleControlPlayable::_get_kUnsetTime() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("ParticleControlPlayable").WithContext("_get_kUnsetTime");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("UnityEngine.Timeline", "ParticleControlPlayable", "kUnsetTime"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kUnsetTime
void UnityEngine::Timeline::ParticleControlPlayable::_set_kUnsetTime(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("ParticleControlPlayable").WithContext("_set_kUnsetTime");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "ParticleControlPlayable", "kUnsetTime", value));
}
// Autogenerated method: UnityEngine.Timeline.ParticleControlPlayable.Create
UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ParticleControlPlayable*> UnityEngine::Timeline::ParticleControlPlayable::Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::ParticleSystem* component, uint randomSeed) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("ParticleControlPlayable").WithContext("Create");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Timeline", "ParticleControlPlayable", "Create", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(graph, component, randomSeed)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ParticleControlPlayable*>, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, graph, component, randomSeed);
}
// Autogenerated method: UnityEngine.Timeline.ParticleControlPlayable.get_particleSystem
UnityEngine::ParticleSystem* UnityEngine::Timeline::ParticleControlPlayable::get_particleSystem() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("ParticleControlPlayable").WithContext("get_particleSystem");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_particleSystem", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::ParticleSystem*, false>(this, ___internal__method);
}
// Autogenerated method: UnityEngine.Timeline.ParticleControlPlayable.set_particleSystem
void UnityEngine::Timeline::ParticleControlPlayable::set_particleSystem(UnityEngine::ParticleSystem* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("ParticleControlPlayable").WithContext("set_particleSystem");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_particleSystem", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: UnityEngine.Timeline.ParticleControlPlayable.Initialize
void UnityEngine::Timeline::ParticleControlPlayable::Initialize(UnityEngine::ParticleSystem* ps, uint randomSeed) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("ParticleControlPlayable").WithContext("Initialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Initialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(ps, randomSeed)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, ps, randomSeed);
}
// Autogenerated method: UnityEngine.Timeline.ParticleControlPlayable.SetRandomSeed
void UnityEngine::Timeline::ParticleControlPlayable::SetRandomSeed() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("ParticleControlPlayable").WithContext("SetRandomSeed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetRandomSeed", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: UnityEngine.Timeline.ParticleControlPlayable.PrepareFrame
void UnityEngine::Timeline::ParticleControlPlayable::PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData data) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("ParticleControlPlayable").WithContext("PrepareFrame");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PrepareFrame", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(playable, data)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, playable, data);
}
// Autogenerated method: UnityEngine.Timeline.ParticleControlPlayable.OnBehaviourPlay
void UnityEngine::Timeline::ParticleControlPlayable::OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("ParticleControlPlayable").WithContext("OnBehaviourPlay");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnBehaviourPlay", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(playable, info)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, playable, info);
}
// Autogenerated method: UnityEngine.Timeline.ParticleControlPlayable.OnBehaviourPause
void UnityEngine::Timeline::ParticleControlPlayable::OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("ParticleControlPlayable").WithContext("OnBehaviourPause");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnBehaviourPause", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(playable, info)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, playable, info);
}
