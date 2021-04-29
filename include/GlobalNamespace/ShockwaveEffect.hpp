// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IntSO
  class IntSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xBC
  #pragma pack(push, 1)
  // Autogenerated type: ShockwaveEffect
  class ShockwaveEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _shockwavePS
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ParticleSystem* shockwavePS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private IntSO _maxShockwaveParticles
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IntSO* maxShockwaveParticles;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntSO*) == 0x8);
    // private UnityEngine.ParticleSystem/EmitParams _shockwavePSEmitParams
    // Size: 0x8F
    // Offset: 0x28
    UnityEngine::ParticleSystem::EmitParams shockwavePSEmitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: shockwavePSEmitParams and: prevShockwaveParticleSpawnTime
    char __padding2[0x1] = {};
    // private System.Single _prevShockwaveParticleSpawnTime
    // Size: 0x4
    // Offset: 0xB8
    float prevShockwaveParticleSpawnTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ShockwaveEffect
    ShockwaveEffect(UnityEngine::ParticleSystem* shockwavePS_ = {}, GlobalNamespace::IntSO* maxShockwaveParticles_ = {}, UnityEngine::ParticleSystem::EmitParams shockwavePSEmitParams_ = {}, float prevShockwaveParticleSpawnTime_ = {}) noexcept : shockwavePS{shockwavePS_}, maxShockwaveParticles{maxShockwaveParticles_}, shockwavePSEmitParams{shockwavePSEmitParams_}, prevShockwaveParticleSpawnTime{prevShockwaveParticleSpawnTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x105CD18
    void Start();
    // public System.Void SpawnShockwave(UnityEngine.Vector3 pos)
    // Offset: 0x105CE2C
    void SpawnShockwave(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0x105CF04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShockwaveEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShockwaveEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShockwaveEffect*, creationType>()));
    }
  }; // ShockwaveEffect
  #pragma pack(pop)
  static check_size<sizeof(ShockwaveEffect), 184 + sizeof(float)> __GlobalNamespace_ShockwaveEffectSizeCheck;
  static_assert(sizeof(ShockwaveEffect) == 0xBC);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShockwaveEffect*, "", "ShockwaveEffect");
