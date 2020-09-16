// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SceneContextRegistry
#include "Zenject/SceneContextRegistry.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: Zenject.SceneContext
#include "Zenject/SceneContext.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SceneContextRegistry.get_SceneContexts
System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* Zenject::SceneContextRegistry::get_SceneContexts() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>*>(this, "get_SceneContexts"));
}
// Autogenerated method: Zenject.SceneContextRegistry.Add
void Zenject::SceneContextRegistry::Add(Zenject::SceneContext* context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", context));
}
// Autogenerated method: Zenject.SceneContextRegistry.GetSceneContextForScene
Zenject::SceneContext* Zenject::SceneContextRegistry::GetSceneContextForScene(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::SceneContext*>(this, "GetSceneContextForScene", name));
}
// Autogenerated method: Zenject.SceneContextRegistry.GetSceneContextForScene
Zenject::SceneContext* Zenject::SceneContextRegistry::GetSceneContextForScene(UnityEngine::SceneManagement::Scene scene) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::SceneContext*>(this, "GetSceneContextForScene", scene));
}
// Autogenerated method: Zenject.SceneContextRegistry.TryGetSceneContextForScene
Zenject::SceneContext* Zenject::SceneContextRegistry::TryGetSceneContextForScene(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::SceneContext*>(this, "TryGetSceneContextForScene", name));
}
// Autogenerated method: Zenject.SceneContextRegistry.TryGetSceneContextForScene
Zenject::SceneContext* Zenject::SceneContextRegistry::TryGetSceneContextForScene(UnityEngine::SceneManagement::Scene scene) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::SceneContext*>(this, "TryGetSceneContextForScene", scene));
}
// Autogenerated method: Zenject.SceneContextRegistry.GetContainerForScene
Zenject::DiContainer* Zenject::SceneContextRegistry::GetContainerForScene(UnityEngine::SceneManagement::Scene scene) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "GetContainerForScene", scene));
}
// Autogenerated method: Zenject.SceneContextRegistry.TryGetContainerForScene
Zenject::DiContainer* Zenject::SceneContextRegistry::TryGetContainerForScene(UnityEngine::SceneManagement::Scene scene) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "TryGetContainerForScene", scene));
}
// Autogenerated method: Zenject.SceneContextRegistry.Remove
void Zenject::SceneContextRegistry::Remove(Zenject::SceneContext* context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Remove", context));
}
// Autogenerated method: Zenject.SceneContextRegistry..ctor
Zenject::SceneContextRegistry* Zenject::SceneContextRegistry::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SceneContextRegistry*>());
}
