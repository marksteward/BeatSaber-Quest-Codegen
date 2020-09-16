// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Zenject.SubContainerCreatorByNewPrefabDynamicContext
#include "Zenject/SubContainerCreatorByNewPrefabDynamicContext.hpp"
// Including type: Zenject.IPrefabProvider
#include "Zenject/IPrefabProvider.hpp"
// Including type: Zenject.GameObjectCreationParameters
#include "Zenject/GameObjectCreationParameters.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SubContainerCreatorByNewPrefabDynamicContext..ctor
Zenject::SubContainerCreatorByNewPrefabDynamicContext* Zenject::SubContainerCreatorByNewPrefabDynamicContext::New_ctor(Zenject::DiContainer* container, Zenject::IPrefabProvider* prefabProvider, Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  return THROW_UNLESS(il2cpp_utils::New<SubContainerCreatorByNewPrefabDynamicContext*>(container, prefabProvider, gameObjectBindInfo));
}
// Autogenerated method: Zenject.SubContainerCreatorByNewPrefabDynamicContext.CreateGameObject
UnityEngine::GameObject* Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject(bool& shouldMakeActive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>(this, "CreateGameObject", shouldMakeActive));
}
