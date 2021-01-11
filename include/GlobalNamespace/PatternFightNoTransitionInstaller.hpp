// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PatternFightScenesTransitionSetupDataSO
  class PatternFightScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PatternFightNoTransitionInstaller
  // [] Offset: FFFFFFFF
  class PatternFightNoTransitionInstaller : public Zenject::NoTransitionInstaller {
    public:
    // private PlayerSpecificSettings _playerSpecificSettings
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // [SpaceAttribute] Offset: 0xDD2E30
    // private PatternFightScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PatternFightScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PatternFightScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: PatternFightNoTransitionInstaller
    PatternFightNoTransitionInstaller(GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings_ = {}, GlobalNamespace::PatternFightScenesTransitionSetupDataSO* scenesTransitionSetupData_ = {}) noexcept : playerSpecificSettings{playerSpecificSettings_}, scenesTransitionSetupData{scenesTransitionSetupData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0xF046C4
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xF049A0
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PatternFightNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PatternFightNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PatternFightNoTransitionInstaller*, creationType>()));
    }
  }; // PatternFightNoTransitionInstaller
  static check_size<sizeof(PatternFightNoTransitionInstaller), 32 + sizeof(GlobalNamespace::PatternFightScenesTransitionSetupDataSO*)> __GlobalNamespace_PatternFightNoTransitionInstallerSizeCheck;
  static_assert(sizeof(PatternFightNoTransitionInstaller) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightNoTransitionInstaller*, "", "PatternFightNoTransitionInstaller");
