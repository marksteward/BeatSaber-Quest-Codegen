// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IReturnToMenuController
#include "GlobalNamespace/IReturnToMenuController.hpp"
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
  // Autogenerated type: TutorialReturnToMenuController
  class TutorialReturnToMenuController : public UnityEngine::MonoBehaviour, public GlobalNamespace::IReturnToMenuController {
    public:
    // private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    // Offset: 0x18
    GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Void ReturnToMenu()
    // Offset: 0xC4A298
    // Implemented from: IReturnToMenuController
    // Base method: System.Void IReturnToMenuController::ReturnToMenu()
    void ReturnToMenu();
    // public System.Void .ctor()
    // Offset: 0xC4A2B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TutorialReturnToMenuController* New_ctor();
  }; // TutorialReturnToMenuController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialReturnToMenuController*, "", "TutorialReturnToMenuController");
#pragma pack(pop)
