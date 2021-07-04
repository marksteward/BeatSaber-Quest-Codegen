// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerInstaller
  class MultiplayerLocalActivePlayerInstaller : public Zenject::MonoInstaller {
    public:
    // [InjectAttribute] Offset: 0xE1D4C4
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalActivePlayerInstaller
    MultiplayerLocalActivePlayerInstaller(GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData_ = {}) noexcept : sceneSetupData{sceneSetupData_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x102DBEC
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x102DCB0
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerInstaller*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerInstaller), 32 + sizeof(GlobalNamespace::GameplayCoreSceneSetupData*)> __GlobalNamespace_MultiplayerLocalActivePlayerInstallerSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerInstaller*, "", "MultiplayerLocalActivePlayerInstaller");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInstaller::InstallBindings
// Il2CppName: InstallBindings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
