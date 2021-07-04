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
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LobbyAvatarInstaller
  class LobbyAvatarInstaller : public Zenject::MonoInstaller {
    public:
    // [InjectAttribute] Offset: 0xE159F0
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // Creating value type constructor for type: LobbyAvatarInstaller
    LobbyAvatarInstaller(GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}) noexcept : connectedPlayer{connectedPlayer_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x1205FF0
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x120604C
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyAvatarInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyAvatarInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyAvatarInstaller*, creationType>()));
    }
  }; // LobbyAvatarInstaller
  #pragma pack(pop)
  static check_size<sizeof(LobbyAvatarInstaller), 32 + sizeof(GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_LobbyAvatarInstallerSizeCheck;
  static_assert(sizeof(LobbyAvatarInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyAvatarInstaller*, "", "LobbyAvatarInstaller");
// Writing MetadataGetter for method: GlobalNamespace::LobbyAvatarInstaller::InstallBindings
// Il2CppName: InstallBindings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyAvatarInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
