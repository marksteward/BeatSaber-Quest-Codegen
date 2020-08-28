// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: FlyingScoreEffect
#include "GlobalNamespace/FlyingScoreEffect.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Skipping declaration: FlyingObjectEffect because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
  // Skipping declaration: Color because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FlyingScoreSpawner
  class FlyingScoreSpawner : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FlyingScoreSpawner::SpawnPosition
    struct SpawnPosition;
    // Nested type: GlobalNamespace::FlyingScoreSpawner::InitData
    class InitData;
    // private FlyingScoreEffect/Pool _flyingScoreEffectPool
    // Offset: 0x18
    GlobalNamespace::FlyingScoreEffect::Pool* flyingScoreEffectPool;
    // private FlyingScoreSpawner/InitData _initData
    // Offset: 0x20
    GlobalNamespace::FlyingScoreSpawner::InitData* initData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Void SpawnFlyingScore(NoteCutInfo noteCutInfo, System.Int32 noteLineIndex, System.Int32 multiplier, UnityEngine.Vector3 pos, UnityEngine.Quaternion rotation, UnityEngine.Quaternion inverseRotation, UnityEngine.Color color)
    // Offset: 0xBF099C
    void SpawnFlyingScore(GlobalNamespace::NoteCutInfo* noteCutInfo, int noteLineIndex, int multiplier, UnityEngine::Vector3 pos, UnityEngine::Quaternion rotation, UnityEngine::Quaternion inverseRotation, UnityEngine::Color color);
    // private System.Void HandleFlyingScoreEffectDidFinish(FlyingObjectEffect flyingObjectEffect)
    // Offset: 0xBF0C60
    void HandleFlyingScoreEffectDidFinish(GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);
    // public System.Void .ctor()
    // Offset: 0xBF0D44
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlyingScoreSpawner* New_ctor();
  }; // FlyingScoreSpawner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreSpawner*, "", "FlyingScoreSpawner");
#pragma pack(pop)
