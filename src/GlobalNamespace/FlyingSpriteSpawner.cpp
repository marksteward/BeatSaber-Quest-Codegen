// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: FlyingSpriteSpawner
#include "GlobalNamespace/FlyingSpriteSpawner.hpp"
// Including type: UnityEngine.Sprite
#include "UnityEngine/Sprite.hpp"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
// Including type: FlyingSpriteEffect/Pool
#include "GlobalNamespace/FlyingSpriteEffect_Pool.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: FlyingSpriteSpawner.SpawnFlyingSprite
void GlobalNamespace::FlyingSpriteSpawner::SpawnFlyingSprite(UnityEngine::Vector3 pos, UnityEngine::Quaternion rotation, UnityEngine::Quaternion inverseRotation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnFlyingSprite", pos, rotation, inverseRotation));
}
// Autogenerated method: FlyingSpriteSpawner.HandleFlyingSpriteEffectDidFinish
void GlobalNamespace::FlyingSpriteSpawner::HandleFlyingSpriteEffectDidFinish(GlobalNamespace::FlyingObjectEffect* flyingObjectEffect) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleFlyingSpriteEffectDidFinish", flyingObjectEffect));
}
// Autogenerated method: FlyingSpriteSpawner..ctor
GlobalNamespace::FlyingSpriteSpawner* GlobalNamespace::FlyingSpriteSpawner::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<FlyingSpriteSpawner*>());
}
