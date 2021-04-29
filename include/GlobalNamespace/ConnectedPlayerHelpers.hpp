// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerHelpers
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ConnectedPlayerHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ConnectedPlayerHelpers
    ConnectedPlayerHelpers() noexcept {}
    // static public System.Boolean WantsToPlayNextLevel(IConnectedPlayer connectedPlayer)
    // Offset: 0x122A830
    static bool WantsToPlayNextLevel(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean WasActiveAtLevelStart(IConnectedPlayer connectedPlayer)
    // Offset: 0x122A8F0
    static bool WasActiveAtLevelStart(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsActive(IConnectedPlayer connectedPlayer)
    // Offset: 0x122A9B0
    static bool IsActive(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean HasFinishedLevel(IConnectedPlayer connectedPlayer)
    // Offset: 0x122AA70
    static bool HasFinishedLevel(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsActiveOrFinished(IConnectedPlayer connectedPlayer)
    // Offset: 0x122AB30
    static bool IsActiveOrFinished(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsFailed(IConnectedPlayer connectedPlayer)
    // Offset: 0x122AB68
    static bool IsFailed(GlobalNamespace::IConnectedPlayer* connectedPlayer);
  }; // ConnectedPlayerHelpers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerHelpers*, "", "ConnectedPlayerHelpers");
