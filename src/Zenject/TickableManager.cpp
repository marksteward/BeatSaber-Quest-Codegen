// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Zenject.TickableManager
#include "Zenject/TickableManager.hpp"
// Including type: Zenject.TickableManager/<>c__DisplayClass17_0
#include "Zenject/TickableManager_--c__DisplayClass17_0.hpp"
// Including type: Zenject.TickableManager/<>c
#include "Zenject/TickableManager_--c.hpp"
// Including type: Zenject.TickableManager/<>c__DisplayClass18_0
#include "Zenject/TickableManager_--c__DisplayClass18_0.hpp"
// Including type: Zenject.TickableManager/<>c__DisplayClass19_0
#include "Zenject/TickableManager_--c__DisplayClass19_0.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: Zenject.IFixedTickable
#include "Zenject/IFixedTickable.hpp"
// Including type: Zenject.ILateTickable
#include "Zenject/ILateTickable.hpp"
// Including type: ModestTree.Util.ValuePair`2
#include "ModestTree/Util/ValuePair_2.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.TickablesTaskUpdater
#include "Zenject/TickablesTaskUpdater.hpp"
// Including type: Zenject.FixedTickablesTaskUpdater
#include "Zenject/FixedTickablesTaskUpdater.hpp"
// Including type: Zenject.LateTickablesTaskUpdater
#include "Zenject/LateTickablesTaskUpdater.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.TickableManager.get_Tickables
System::Collections::Generic::IEnumerable_1<Zenject::ITickable*>* Zenject::TickableManager::get_Tickables() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<Zenject::ITickable*>*>(this, "get_Tickables"));
}
// Autogenerated method: Zenject.TickableManager.get_IsPaused
bool Zenject::TickableManager::get_IsPaused() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsPaused"));
}
// Autogenerated method: Zenject.TickableManager.set_IsPaused
void Zenject::TickableManager::set_IsPaused(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsPaused", value));
}
// Autogenerated method: Zenject.TickableManager.Initialize
void Zenject::TickableManager::Initialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize"));
}
// Autogenerated method: Zenject.TickableManager.InitFixedTickables
void Zenject::TickableManager::InitFixedTickables() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitFixedTickables"));
}
// Autogenerated method: Zenject.TickableManager.InitTickables
void Zenject::TickableManager::InitTickables() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitTickables"));
}
// Autogenerated method: Zenject.TickableManager.InitLateTickables
void Zenject::TickableManager::InitLateTickables() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitLateTickables"));
}
// Autogenerated method: Zenject.TickableManager.Add
void Zenject::TickableManager::Add(Zenject::ITickable* tickable, int priority) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", tickable, priority));
}
// Autogenerated method: Zenject.TickableManager.Add
void Zenject::TickableManager::Add(Zenject::ITickable* tickable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", tickable));
}
// Autogenerated method: Zenject.TickableManager.AddLate
void Zenject::TickableManager::AddLate(Zenject::ILateTickable* tickable, int priority) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddLate", tickable, priority));
}
// Autogenerated method: Zenject.TickableManager.AddLate
void Zenject::TickableManager::AddLate(Zenject::ILateTickable* tickable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddLate", tickable));
}
// Autogenerated method: Zenject.TickableManager.AddFixed
void Zenject::TickableManager::AddFixed(Zenject::IFixedTickable* tickable, int priority) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddFixed", tickable, priority));
}
// Autogenerated method: Zenject.TickableManager.AddFixed
void Zenject::TickableManager::AddFixed(Zenject::IFixedTickable* tickable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddFixed", tickable));
}
// Autogenerated method: Zenject.TickableManager.Remove
void Zenject::TickableManager::Remove(Zenject::ITickable* tickable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Remove", tickable));
}
// Autogenerated method: Zenject.TickableManager.RemoveLate
void Zenject::TickableManager::RemoveLate(Zenject::ILateTickable* tickable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveLate", tickable));
}
// Autogenerated method: Zenject.TickableManager.RemoveFixed
void Zenject::TickableManager::RemoveFixed(Zenject::IFixedTickable* tickable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveFixed", tickable));
}
// Autogenerated method: Zenject.TickableManager.Update
void Zenject::TickableManager::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: Zenject.TickableManager.FixedUpdate
void Zenject::TickableManager::FixedUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixedUpdate"));
}
// Autogenerated method: Zenject.TickableManager.LateUpdate
void Zenject::TickableManager::LateUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LateUpdate"));
}
// Autogenerated method: Zenject.TickableManager..ctor
Zenject::TickableManager* Zenject::TickableManager::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<TickableManager*>());
}
