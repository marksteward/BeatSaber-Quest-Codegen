// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UnifiedNetworkPlayerModel/UnifiedNetworkServer
  class UnifiedNetworkPlayerModel::UnifiedNetworkServer : public ::Il2CppObject/*, public GlobalNamespace::INetworkPlayer*/ {
    public:
    // private readonly UnifiedNetworkPlayerModel _playerModel
    // Offset: 0x10
    GlobalNamespace::UnifiedNetworkPlayerModel* playerModel;
    // private readonly System.String _code
    // Offset: 0x18
    ::Il2CppString* code;
    // private System.String _serverName
    // Offset: 0x20
    ::Il2CppString* serverName;
    // private System.Boolean _hasPassword
    // Offset: 0x28
    bool hasPassword;
    // private System.Int32 _currentPlayerCount
    // Offset: 0x2C
    int currentPlayerCount;
    // private System.Int32 _maxPlayerCount
    // Offset: 0x30
    int maxPlayerCount;
    // private BeatmapDifficultyMask _difficulties
    // Offset: 0x34
    GlobalNamespace::BeatmapDifficultyMask difficulties;
    // private GameplayModifierMask _modifiers
    // Offset: 0x36
    GlobalNamespace::GameplayModifierMask modifiers;
    // private SongPackMask _songPacks
    // Offset: 0x38
    GlobalNamespace::SongPackMask songPacks;
    // private System.Single _lastUpdateTime
    // Offset: 0x48
    float lastUpdateTime;
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayer
    operator GlobalNamespace::INetworkPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayer*>(this);
    }
    // public System.Void .ctor(UnifiedNetworkPlayerModel playerModel, System.String code)
    // Offset: 0x21E48A0
    static UnifiedNetworkPlayerModel::UnifiedNetworkServer* New_ctor(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel, ::Il2CppString* code);
    // public System.Void Update(System.String serverName, System.Boolean hasPassword, System.Int32 currentPlayerCount, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0x21E48F0
    void Update(::Il2CppString* serverName, bool hasPassword, int currentPlayerCount, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.String get_code()
    // Offset: 0x21E6B38
    ::Il2CppString* get_code();
    // public System.String get_serverName()
    // Offset: 0x21E6B48
    ::Il2CppString* get_serverName();
    // public System.Boolean get_hasTimedOut()
    // Offset: 0x21E6BA4
    bool get_hasTimedOut();
    // private System.String INetworkPlayer.get_userId()
    // Offset: 0x21E6B30
    // Implemented from: INetworkPlayer
    // Base method: System.String INetworkPlayer::get_userId()
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userId();
    // private System.String INetworkPlayer.get_userName()
    // Offset: 0x21E6B40
    // Implemented from: INetworkPlayer
    // Base method: System.String INetworkPlayer::get_userName()
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0x21E6B50
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMe()
    bool get_isMe();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x21E6B58
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_currentPartySize()
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x21E6B60
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_maxPartySize()
    int get_maxPartySize();
    // public BeatmapDifficultyMask get_difficulties()
    // Offset: 0x21E6B68
    // Implemented from: INetworkPlayer
    // Base method: BeatmapDifficultyMask INetworkPlayer::get_difficulties()
    GlobalNamespace::BeatmapDifficultyMask get_difficulties();
    // public GameplayModifierMask get_modifiers()
    // Offset: 0x21E6B70
    // Implemented from: INetworkPlayer
    // Base method: GameplayModifierMask INetworkPlayer::get_modifiers()
    GlobalNamespace::GameplayModifierMask get_modifiers();
    // public SongPackMask get_songPacks()
    // Offset: 0x21E6B78
    // Implemented from: INetworkPlayer
    // Base method: SongPackMask INetworkPlayer::get_songPacks()
    GlobalNamespace::SongPackMask get_songPacks();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0x21E6B84
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMyPartyOwner()
    bool get_isMyPartyOwner();
    // public System.Boolean get_isOpenParty()
    // Offset: 0x21E6B8C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isOpenParty()
    bool get_isOpenParty();
    // public System.Boolean get_isConnected()
    // Offset: 0x21E6B9C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isConnected()
    bool get_isConnected();
    // public System.Boolean get_isPlayer()
    // Offset: 0x21E6BD8
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isPlayer()
    bool get_isPlayer();
    // public System.Boolean get_isSpectating()
    // Offset: 0x21E6BE0
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isSpectating()
    bool get_isSpectating();
    // public System.Boolean get_isDedicatedServer()
    // Offset: 0x21E6BE8
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isDedicatedServer()
    bool get_isDedicatedServer();
    // public System.Boolean get_canJoin()
    // Offset: 0x21E6BF0
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canJoin()
    bool get_canJoin();
    // public System.Void Join()
    // Offset: 0x21E6BF8
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join()
    void Join();
    // public System.Boolean get_requiresPassword()
    // Offset: 0x21E6C20
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_requiresPassword()
    bool get_requiresPassword();
    // public System.Void Join(System.String password)
    // Offset: 0x21E6C28
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join(System.String password)
    void Join(::Il2CppString* password);
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0x21E6C50
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnJoin()
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0x21E6C58
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canInvite()
    bool get_canInvite();
    // public System.Void Invite()
    // Offset: 0x21E6C60
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Invite()
    void Invite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0x21E6C64
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnInvite()
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0x21E6C6C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canKick()
    bool get_canKick();
    // public System.Void Kick()
    // Offset: 0x21E6C74
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Kick()
    void Kick();
    // public System.Boolean get_canLeave()
    // Offset: 0x21E6C78
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canLeave()
    bool get_canLeave();
    // public System.Void Leave()
    // Offset: 0x21E6C80
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Leave()
    void Leave();
    // public System.Boolean get_canBlock()
    // Offset: 0x21E6C84
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canBlock()
    bool get_canBlock();
    // public System.Void Block()
    // Offset: 0x21E6C8C
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Block()
    void Block();
    // public System.Boolean get_canUnblock()
    // Offset: 0x21E6C90
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canUnblock()
    bool get_canUnblock();
    // public System.Void Unblock()
    // Offset: 0x21E6C98
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Unblock()
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0x21E6C9C
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendJoinResponse(System.Boolean accept)
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0x21E6CA0
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendInviteResponse(System.Boolean accept)
    void SendInviteResponse(bool accept);
  }; // UnifiedNetworkPlayerModel/UnifiedNetworkServer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*, "", "UnifiedNetworkPlayerModel/UnifiedNetworkServer");
#pragma pack(pop)
