// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Zenject.DefaultGameObjectParentInstaller/DefaultParentObjectDestroyer
#include "Zenject/DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.DefaultGameObjectParentInstaller/DefaultParentObjectDestroyer..ctor
Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer* Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::New_ctor(UnityEngine::GameObject* gameObject) {
  return THROW_UNLESS(il2cpp_utils::New<DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*>(gameObject));
}
// Autogenerated method: Zenject.DefaultGameObjectParentInstaller/DefaultParentObjectDestroyer.Dispose
void Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::System_IDisposable_Dispose() {
  Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::Dispose();
}
