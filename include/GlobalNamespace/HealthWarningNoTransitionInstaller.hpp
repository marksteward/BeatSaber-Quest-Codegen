// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HealthWarningSceneSetupData
  class HealthWarningSceneSetupData;
  // Forward declaring type: HealthWarningScenesTransitionSetupDataSO
  class HealthWarningScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HealthWarningNoTransitionInstaller
  class HealthWarningNoTransitionInstaller : public Zenject::NoTransitionInstaller {
    public:
    // private HealthWarningSceneSetupData _healthWarningSceneSetupData
    // Offset: 0x18
    GlobalNamespace::HealthWarningSceneSetupData* healthWarningSceneSetupData;
    // private HealthWarningScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Offset: 0x20
    GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0xB445AC
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xB445FC
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HealthWarningNoTransitionInstaller* New_ctor();
  }; // HealthWarningNoTransitionInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningNoTransitionInstaller*, "", "HealthWarningNoTransitionInstaller");
#pragma pack(pop)
