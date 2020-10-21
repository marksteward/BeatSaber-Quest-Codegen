// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerAvatarData
  struct MultiplayerAvatarData;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IConnectedPlayer
  class IConnectedPlayer {
    public:
    // public System.Boolean get_isMe()
    // Offset: 0xFFFFFFFF
    bool get_isMe();
    // public System.String get_userId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userName();
    // public System.Single get_currentLatency()
    // Offset: 0xFFFFFFFF
    float get_currentLatency();
    // public System.Boolean get_isConnected()
    // Offset: 0xFFFFFFFF
    bool get_isConnected();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0xFFFFFFFF
    bool get_isConnectionOwner();
    // public System.Single get_offsetSyncTime()
    // Offset: 0xFFFFFFFF
    float get_offsetSyncTime();
    // public System.Int32 get_sortIndex()
    // Offset: 0xFFFFFFFF
    int get_sortIndex();
    // public System.Boolean get_isKicked()
    // Offset: 0xFFFFFFFF
    bool get_isKicked();
    // public MultiplayerAvatarData get_multiplayerAvatarData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData();
    // public System.Boolean HasState(System.String state)
    // Offset: 0xFFFFFFFF
    bool HasState(::Il2CppString* state);
  }; // IConnectedPlayer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IConnectedPlayer*, "", "IConnectedPlayer");
#pragma pack(pop)