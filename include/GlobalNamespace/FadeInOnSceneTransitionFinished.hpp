// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: FadeInOnSceneTransitionFinished
  // [] Offset: FFFFFFFF
  class FadeInOnSceneTransitionFinished : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3
    class $FadeInAfterSceneTransitionCoroutine$d__3;
    // [InjectAttribute] Offset: 0xDB0FC4
    // private FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // [InjectAttribute] Offset: 0xDB0FD4
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // Creating value type constructor for type: FadeInOnSceneTransitionFinished
    FadeInOnSceneTransitionFinished(GlobalNamespace::FadeInOutController* fadeInOut_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}) noexcept : fadeInOut{fadeInOut_}, gameScenesManager{gameScenesManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x19893A8
    void OnEnable();
    // private System.Collections.IEnumerator FadeInAfterSceneTransitionCoroutine()
    // Offset: 0x19893FC
    System::Collections::IEnumerator* FadeInAfterSceneTransitionCoroutine();
    // public System.Void .ctor()
    // Offset: 0x19894A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeInOnSceneTransitionFinished* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FadeInOnSceneTransitionFinished::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeInOnSceneTransitionFinished*, creationType>()));
    }
  }; // FadeInOnSceneTransitionFinished
  static check_size<sizeof(FadeInOnSceneTransitionFinished), 32 + sizeof(GlobalNamespace::GameScenesManager*)> __GlobalNamespace_FadeInOnSceneTransitionFinishedSizeCheck;
  static_assert(sizeof(FadeInOnSceneTransitionFinished) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeInOnSceneTransitionFinished*, "", "FadeInOnSceneTransitionFinished");
#pragma pack(pop)
