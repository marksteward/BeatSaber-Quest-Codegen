// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IFlyingObjectEffectDidFinishEvent
#include "GlobalNamespace/IFlyingObjectEffectDidFinishEvent.hpp"
// Including type: FlyingScoreEffect
#include "GlobalNamespace/FlyingScoreEffect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FlyingScoreSpawner
  class FlyingScoreSpawner : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IFlyingObjectEffectDidFinishEvent*/ {
    public:
    // Nested type: GlobalNamespace::FlyingScoreSpawner::SpawnPosition
    struct SpawnPosition;
    // Nested type: GlobalNamespace::FlyingScoreSpawner::InitData
    class InitData;
    // [InjectAttribute] Offset: 0xD393EC
    // private readonly FlyingScoreEffect/Pool _flyingScoreEffectPool
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FlyingScoreEffect::Pool* flyingScoreEffectPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlyingScoreEffect::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0xD393FC
    // private readonly FlyingScoreSpawner/InitData _initData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FlyingScoreSpawner::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlyingScoreSpawner::InitData*) == 0x8);
    // Creating value type constructor for type: FlyingScoreSpawner
    FlyingScoreSpawner(GlobalNamespace::FlyingScoreEffect::Pool* flyingScoreEffectPool_ = {}, GlobalNamespace::FlyingScoreSpawner::InitData* initData_ = {}) noexcept : flyingScoreEffectPool{flyingScoreEffectPool_}, initData{initData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IFlyingObjectEffectDidFinishEvent
    operator GlobalNamespace::IFlyingObjectEffectDidFinishEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SpawnFlyingScore(in NoteCutInfo noteCutInfo, System.Int32 noteLineIndex, System.Int32 multiplier, UnityEngine.Vector3 pos, UnityEngine.Quaternion rotation, UnityEngine.Quaternion inverseRotation, UnityEngine.Color color)
    // Offset: 0xF58080
    void SpawnFlyingScore(GlobalNamespace::NoteCutInfo& noteCutInfo, int noteLineIndex, int multiplier, UnityEngine::Vector3 pos, UnityEngine::Quaternion rotation, UnityEngine::Quaternion inverseRotation, UnityEngine::Color color);
    // public System.Void HandleFlyingObjectEffectDidFinish(FlyingObjectEffect flyingObjectEffect)
    // Offset: 0xF58374
    void HandleFlyingObjectEffectDidFinish(GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);
    // public System.Void .ctor()
    // Offset: 0xF58490
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingScoreSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingScoreSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingScoreSpawner*, creationType>()));
    }
  }; // FlyingScoreSpawner
  #pragma pack(pop)
  static check_size<sizeof(FlyingScoreSpawner), 32 + sizeof(GlobalNamespace::FlyingScoreSpawner::InitData*)> __GlobalNamespace_FlyingScoreSpawnerSizeCheck;
  static_assert(sizeof(FlyingScoreSpawner) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreSpawner*, "", "FlyingScoreSpawner");
