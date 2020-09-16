// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: CommandBufferOwners
#include "GlobalNamespace/CommandBufferOwners.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: UnityEngine.Rendering.CommandBuffer
#include "UnityEngine/Rendering/CommandBuffer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: CommandBufferOwners.AddOwner
void GlobalNamespace::CommandBufferOwners::AddOwner(UnityEngine::Object* owner) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddOwner", owner));
}
// Autogenerated method: CommandBufferOwners.RemoveOwner
void GlobalNamespace::CommandBufferOwners::RemoveOwner(UnityEngine::Object* owner) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveOwner", owner));
}
// Autogenerated method: CommandBufferOwners.ContainsOwner
bool GlobalNamespace::CommandBufferOwners::ContainsOwner(UnityEngine::Object* owner) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ContainsOwner", owner));
}
// Autogenerated method: CommandBufferOwners.get_NumberOfOwners
int GlobalNamespace::CommandBufferOwners::get_NumberOfOwners() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_NumberOfOwners"));
}
// Autogenerated method: CommandBufferOwners..ctor
GlobalNamespace::CommandBufferOwners* GlobalNamespace::CommandBufferOwners::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<CommandBufferOwners*>());
}
