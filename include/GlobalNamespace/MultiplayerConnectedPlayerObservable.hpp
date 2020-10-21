// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IMultiplayerObservable
#include "GlobalNamespace/IMultiplayerObservable.hpp"
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
  // Autogenerated type: MultiplayerConnectedPlayerObservable
  class MultiplayerConnectedPlayerObservable : public ::Il2CppObject/*, public GlobalNamespace::IMultiplayerObservable*/ {
    public:
    // private readonly IConnectedPlayer _connectedPlayer
    // Offset: 0x10
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerObservable
    operator GlobalNamespace::IMultiplayerObservable() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerObservable*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::IConnectedPlayer*
    constexpr operator GlobalNamespace::IConnectedPlayer*() const noexcept {
      return connectedPlayer;
    }
    // public System.Void .ctor(IConnectedPlayer connectedPlayer)
    // Offset: 0x2062E4C
    static MultiplayerConnectedPlayerObservable* New_ctor(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // public System.Single get_offsetSyncTime()
    // Offset: 0x2062E80
    // Implemented from: IMultiplayerObservable
    // Base method: System.Single IMultiplayerObservable::get_offsetSyncTime()
    float get_offsetSyncTime();
    // public System.Boolean get_isFailed()
    // Offset: 0x2062F34
    // Implemented from: IMultiplayerObservable
    // Base method: System.Boolean IMultiplayerObservable::get_isFailed()
    bool get_isFailed();
  }; // MultiplayerConnectedPlayerObservable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerObservable*, "", "MultiplayerConnectedPlayerObservable");
#pragma pack(pop)