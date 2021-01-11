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
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FadeOutOnSceneTransitionStart
  // [] Offset: FFFFFFFF
  class FadeOutOnSceneTransitionStart : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xDB0FF4
    // private FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // [InjectAttribute] Offset: 0xDB1004
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // Creating value type constructor for type: FadeOutOnSceneTransitionStart
    FadeOutOnSceneTransitionStart(GlobalNamespace::FadeInOutController* fadeInOut_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}) noexcept : fadeInOut{fadeInOut_}, gameScenesManager{gameScenesManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1989600
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1989694
    void OnDestroy();
    // private System.Void HandleGameScenesManagerTransitionDidStart(System.Single duration)
    // Offset: 0x1989770
    void HandleGameScenesManagerTransitionDidStart(float duration);
    // public System.Void .ctor()
    // Offset: 0x198978C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeOutOnSceneTransitionStart* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FadeOutOnSceneTransitionStart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeOutOnSceneTransitionStart*, creationType>()));
    }
  }; // FadeOutOnSceneTransitionStart
  static check_size<sizeof(FadeOutOnSceneTransitionStart), 32 + sizeof(GlobalNamespace::GameScenesManager*)> __GlobalNamespace_FadeOutOnSceneTransitionStartSizeCheck;
  static_assert(sizeof(FadeOutOnSceneTransitionStart) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeOutOnSceneTransitionStart*, "", "FadeOutOnSceneTransitionStart");
