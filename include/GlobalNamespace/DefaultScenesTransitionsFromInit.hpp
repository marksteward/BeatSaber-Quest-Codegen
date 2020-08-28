// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HealthWarningScenesTransitionSetupDataSO
  class HealthWarningScenesTransitionSetupDataSO;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: ShaderWarmupScenesTransitionSetupDataSO
  class ShaderWarmupScenesTransitionSetupDataSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DefaultScenesTransitionsFromInit
  class DefaultScenesTransitionsFromInit : public UnityEngine::MonoBehaviour {
    public:
    // private HealthWarningScenesTransitionSetupDataSO _healthWarningScenesTransitionSetupData
    // Offset: 0x18
    GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* healthWarningScenesTransitionSetupData;
    // private MenuScenesTransitionSetupDataSO _mainMenuScenesTransitionSetupData
    // Offset: 0x20
    GlobalNamespace::MenuScenesTransitionSetupDataSO* mainMenuScenesTransitionSetupData;
    // private ShaderWarmupScenesTransitionSetupDataSO _shaderWarmupScenesTransitionSetupData
    // Offset: 0x28
    GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO* shaderWarmupScenesTransitionSetupData;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x30
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public MenuScenesTransitionSetupDataSO get_mainMenuScenesTransitionSetupData()
    // Offset: 0xBE698C
    GlobalNamespace::MenuScenesTransitionSetupDataSO* get_mainMenuScenesTransitionSetupData();
    // public System.Void TransitionToNextScene(System.Boolean goStraightToMenu)
    // Offset: 0xBE6994
    void TransitionToNextScene(bool goStraightToMenu);
    // public System.Void .ctor()
    // Offset: 0xBE6A84
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DefaultScenesTransitionsFromInit* New_ctor();
  }; // DefaultScenesTransitionsFromInit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DefaultScenesTransitionsFromInit*, "", "DefaultScenesTransitionsFromInit");
#pragma pack(pop)
