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
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: CutoutAnimateEffect
  class CutoutAnimateEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleDissolve
  // [] Offset: FFFFFFFF
  class ObstacleDissolve : public UnityEngine::MonoBehaviour {
    public:
    // private ObstacleController _obstacleController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ObstacleController* obstacleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleController*) == 0x8);
    // private CutoutAnimateEffect _cutoutAnimateEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CutoutAnimateEffect*) == 0x8);
    // Creating value type constructor for type: ObstacleDissolve
    ObstacleDissolve(GlobalNamespace::ObstacleController* obstacleController_ = {}, GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect_ = {}) noexcept : obstacleController{obstacleController_}, cutoutAnimateEffect{cutoutAnimateEffect_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x10034E0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x10035B8
    void OnDestroy();
    // private System.Void HandleObstacleDidInitEvent(ObstacleController obstacleController)
    // Offset: 0x10036D4
    void HandleObstacleDidInitEvent(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObcstacleDidStartDissolvingEvent(ObstacleController obstacleController, System.Single duration)
    // Offset: 0x10036F0
    void HandleObcstacleDidStartDissolvingEvent(GlobalNamespace::ObstacleController* obstacleController, float duration);
    // public System.Void .ctor()
    // Offset: 0x1003718
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleDissolve* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObstacleDissolve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleDissolve*, creationType>()));
    }
  }; // ObstacleDissolve
  static check_size<sizeof(ObstacleDissolve), 32 + sizeof(GlobalNamespace::CutoutAnimateEffect*)> __GlobalNamespace_ObstacleDissolveSizeCheck;
  static_assert(sizeof(ObstacleDissolve) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleDissolve*, "", "ObstacleDissolve");
