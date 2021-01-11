// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BloomFogEnvironment
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: DA3E50
  class BloomFogEnvironment : public UnityEngine::MonoBehaviour {
    public:
    // private BloomFogSO _bloomFog
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomFogSO* bloomFog;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xDA4430
    // private BloomFogEnvironmentParams _fog0Params
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BloomFogEnvironmentParams* fog0Params;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    // private BloomFogEnvironmentParams _fog1Params
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BloomFogEnvironmentParams* fog1Params;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    // Creating value type constructor for type: BloomFogEnvironment
    BloomFogEnvironment(GlobalNamespace::BloomFogSO* bloomFog_ = {}, GlobalNamespace::BloomFogEnvironmentParams* fog0Params_ = {}, GlobalNamespace::BloomFogEnvironmentParams* fog1Params_ = {}) noexcept : bloomFog{bloomFog_}, fog0Params{fog0Params_}, fog1Params{fog1Params_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x1873398
    void OnEnable();
    // protected System.Void OnValidate()
    // Offset: 0x1873448
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x18737B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomFogEnvironment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFogEnvironment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomFogEnvironment*, creationType>()));
    }
  }; // BloomFogEnvironment
  static check_size<sizeof(BloomFogEnvironment), 40 + sizeof(GlobalNamespace::BloomFogEnvironmentParams*)> __GlobalNamespace_BloomFogEnvironmentSizeCheck;
  static_assert(sizeof(BloomFogEnvironment) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogEnvironment*, "", "BloomFogEnvironment");
