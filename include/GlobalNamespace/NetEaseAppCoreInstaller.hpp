// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: NetEaseAppCoreInstaller
  // [] Offset: FFFFFFFF
  class NetEaseAppCoreInstaller : public Zenject::MonoInstaller {
    public:
    // private NetEaseManager _netEaseManagerPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NetEaseManager* netEaseManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseManager*) == 0x8);
    // Creating value type constructor for type: NetEaseAppCoreInstaller
    NetEaseAppCoreInstaller(GlobalNamespace::NetEaseManager* netEaseManagerPrefab_ = {}) noexcept : netEaseManagerPrefab{netEaseManagerPrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0xFD672C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xFD67A0
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEaseAppCoreInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetEaseAppCoreInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseAppCoreInstaller*, creationType>()));
    }
  }; // NetEaseAppCoreInstaller
  static check_size<sizeof(NetEaseAppCoreInstaller), 32 + sizeof(GlobalNamespace::NetEaseManager*)> __GlobalNamespace_NetEaseAppCoreInstallerSizeCheck;
  static_assert(sizeof(NetEaseAppCoreInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseAppCoreInstaller*, "", "NetEaseAppCoreInstaller");
#pragma pack(pop)
