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
  // Forward declaring type: SpawnRotationChevron
  class SpawnRotationChevron;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SpawnChevronObjectPoolsInstaller
  class SpawnChevronObjectPoolsInstaller : public Zenject::MonoInstaller {
    public:
    // private SpawnRotationChevron _spawnRotationChevronPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SpawnRotationChevron* spawnRotationChevronPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SpawnRotationChevron*) == 0x8);
    // Creating value type constructor for type: SpawnChevronObjectPoolsInstaller
    SpawnChevronObjectPoolsInstaller(GlobalNamespace::SpawnRotationChevron* spawnRotationChevronPrefab_ = {}) noexcept : spawnRotationChevronPrefab{spawnRotationChevronPrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x1158E10
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1158E90
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnChevronObjectPoolsInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SpawnChevronObjectPoolsInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnChevronObjectPoolsInstaller*, creationType>()));
    }
  }; // SpawnChevronObjectPoolsInstaller
  #pragma pack(pop)
  static check_size<sizeof(SpawnChevronObjectPoolsInstaller), 32 + sizeof(GlobalNamespace::SpawnRotationChevron*)> __GlobalNamespace_SpawnChevronObjectPoolsInstallerSizeCheck;
  static_assert(sizeof(SpawnChevronObjectPoolsInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnChevronObjectPoolsInstaller*, "", "SpawnChevronObjectPoolsInstaller");
// Writing MetadataGetter for method: GlobalNamespace::SpawnChevronObjectPoolsInstaller::InstallBindings
// Il2CppName: InstallBindings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SpawnChevronObjectPoolsInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
