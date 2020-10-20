// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelRestartController
#include "GlobalNamespace/ILevelRestartController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialRestartController
  class TutorialRestartController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::ILevelRestartController*/ {
    public:
    // private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    // Offset: 0x18
    GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData;
    // Creating interface conversion operator: operator GlobalNamespace::ILevelRestartController
    operator GlobalNamespace::ILevelRestartController() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelRestartController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void RestartLevel()
    // Offset: 0x1FA1314
    // Implemented from: ILevelRestartController
    // Base method: System.Void ILevelRestartController::RestartLevel()
    void RestartLevel();
    // public System.Void .ctor()
    // Offset: 0x1FA1330
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TutorialRestartController* New_ctor();
  }; // TutorialRestartController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialRestartController*, "", "TutorialRestartController");
#pragma pack(pop)
