// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Including type: UnityEngine.Playables.PlayableBinding/CreateOutputMethod
#include "UnityEngine/Playables/PlayableBinding_CreateOutputMethod.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: UnityEngine.Playables.PlayableOutput
#include "UnityEngine/Playables/PlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly UnityEngine.Playables.PlayableBinding[] None
::Array<UnityEngine::Playables::PlayableBinding>* UnityEngine::Playables::PlayableBinding::_get_None() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableBinding").WithContext("_get_None");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<UnityEngine::Playables::PlayableBinding>*>("UnityEngine.Playables", "PlayableBinding", "None"));
}
// Autogenerated static field setter
// Set static field: static public readonly UnityEngine.Playables.PlayableBinding[] None
void UnityEngine::Playables::PlayableBinding::_set_None(::Array<UnityEngine::Playables::PlayableBinding>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableBinding").WithContext("_set_None");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Playables", "PlayableBinding", "None", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.Double DefaultDuration
double UnityEngine::Playables::PlayableBinding::_get_DefaultDuration() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableBinding").WithContext("_get_DefaultDuration");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("UnityEngine.Playables", "PlayableBinding", "DefaultDuration"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Double DefaultDuration
void UnityEngine::Playables::PlayableBinding::_set_DefaultDuration(double value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableBinding").WithContext("_set_DefaultDuration");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Playables", "PlayableBinding", "DefaultDuration", value));
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding.get_streamName
::Il2CppString* UnityEngine::Playables::PlayableBinding::get_streamName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableBinding").WithContext("get_streamName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_streamName", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding.get_sourceObject
UnityEngine::Object* UnityEngine::Playables::PlayableBinding::get_sourceObject() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableBinding").WithContext("get_sourceObject");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_sourceObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Object*, false>(*this, ___internal__method);
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding.CreateOutput
UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableBinding::CreateOutput(UnityEngine::Playables::PlayableGraph graph) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableBinding").WithContext("CreateOutput");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "CreateOutput", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(graph)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::PlayableOutput, false>(*this, ___internal__method, graph);
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding.CreateInternal
UnityEngine::Playables::PlayableBinding UnityEngine::Playables::PlayableBinding::CreateInternal(::Il2CppString* name, UnityEngine::Object* sourceObject, System::Type* sourceType, UnityEngine::Playables::PlayableBinding::CreateOutputMethod* createFunction) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableBinding").WithContext("CreateInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableBinding", "CreateInternal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(name, sourceObject, sourceType, createFunction)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::PlayableBinding, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, name, sourceObject, sourceType, createFunction);
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding..cctor
void UnityEngine::Playables::PlayableBinding::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableBinding").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableBinding", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
