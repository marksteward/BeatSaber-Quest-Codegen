// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Including type: MultiplayerAvatarData
#include "GlobalNamespace/MultiplayerAvatarData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuRpcManager
  class MenuRpcManager;
  // Forward declaring type: GameplayRpcManager
  class GameplayRpcManager;
  // Forward declaring type: MockMultiplayerSessionManager
  class MockMultiplayerSessionManager;
  // Forward declaring type: AvatarPartsModel
  class AvatarPartsModel;
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
  // Forward declaring type: NoteMissInfoNetSerializable
  class NoteMissInfoNetSerializable;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x108
  // Autogenerated type: MockPlayer
  // [] Offset: FFFFFFFF
  class MockPlayer : public ::Il2CppObject/*, public GlobalNamespace::IConnectedPlayer, public GlobalNamespace::INetworkPlayer*/ {
    public:
    // private System.Boolean _isMe
    // Size: 0x1
    // Offset: 0x10
    bool isMe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isMe and: userName
    char __padding0[0x7] = {};
    // private System.String _userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _userId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _sortIndex
    // Size: 0x4
    // Offset: 0x28
    int sortIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _latency
    // Size: 0x4
    // Offset: 0x2C
    float latency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _scoreGainCurve
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationCurve* scoreGainCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9948
    // private System.Int32 <currentPartySize>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    int currentPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC9958
    // private System.Int32 <maxPartySize>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    int maxPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC9968
    // private BeatmapDifficultyMask <difficulties>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    GlobalNamespace::BeatmapDifficultyMask difficulties;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: difficulties and: modifiers
    char __padding8[0x1] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC9978
    // private GameplayModifierMask <modifiers>k__BackingField
    // Size: 0x2
    // Offset: 0x42
    GlobalNamespace::GameplayModifierMask modifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierMask) == 0x2);
    // Padding between fields: modifiers and: songPacks
    char __padding9[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC9988
    // private SongPackMask <songPacks>k__BackingField
    // Size: 0x10
    // Offset: 0x48
    GlobalNamespace::SongPackMask songPacks;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xDC9998
    // private System.Boolean <isMyPartyOwner>k__BackingField
    // Size: 0x1
    // Offset: 0x58
    bool isMyPartyOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC99A8
    // private System.Boolean <isOpenParty>k__BackingField
    // Size: 0x1
    // Offset: 0x59
    bool isOpenParty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC99B8
    // private System.Boolean <requiresPassword>k__BackingField
    // Size: 0x1
    // Offset: 0x5A
    bool requiresPassword;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC99C8
    // private System.Boolean <isWaitingOnJoin>k__BackingField
    // Size: 0x1
    // Offset: 0x5B
    bool isWaitingOnJoin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC99D8
    // private System.Boolean <canInvite>k__BackingField
    // Size: 0x1
    // Offset: 0x5C
    bool canInvite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC99E8
    // private System.Boolean <isWaitingOnInvite>k__BackingField
    // Size: 0x1
    // Offset: 0x5D
    bool isWaitingOnInvite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC99F8
    // private System.Boolean <canKick>k__BackingField
    // Size: 0x1
    // Offset: 0x5E
    bool canKick;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC9A08
    // private System.Boolean <canLeave>k__BackingField
    // Size: 0x1
    // Offset: 0x5F
    bool canLeave;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC9A18
    // private System.Boolean <canBlock>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool canBlock;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC9A28
    // private System.Boolean <canUnblock>k__BackingField
    // Size: 0x1
    // Offset: 0x61
    bool canUnblock;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC9A38
    // private System.Boolean <isConnectionOwner>k__BackingField
    // Size: 0x1
    // Offset: 0x62
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC9A48
    // private System.Boolean <isKicked>k__BackingField
    // Size: 0x1
    // Offset: 0x63
    bool isKicked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isKicked and: menuRpcManager
    char __padding22[0x4] = {};
    // private MenuRpcManager _menuRpcManager
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MenuRpcManager* menuRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuRpcManager*) == 0x8);
    // private GameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::GameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayRpcManager*) == 0x8);
    // private System.Boolean _isConnected
    // Size: 0x1
    // Offset: 0x78
    bool isConnected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isReady
    // Size: 0x1
    // Offset: 0x79
    bool isReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isReady and: multiplayerAvatarData
    char __padding26[0x6] = {};
    // private MultiplayerAvatarData _multiplayerAvatarData
    // Size: 0x70
    // Offset: 0x80
    GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerAvatarData) == 0x70);
    // private MockMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::MockMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockMultiplayerSessionManager*) == 0x8);
    // private AvatarPartsModel _avatarPartsModel
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::AvatarPartsModel* avatarPartsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartsModel*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.String> _playerState
    // Size: 0x8
    // Offset: 0x100
    System::Collections::Generic::HashSet_1<::Il2CppString*>* playerState;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: MockPlayer
    MockPlayer(bool isMe_ = {}, ::Il2CppString* userName_ = {}, ::Il2CppString* userId_ = {}, int sortIndex_ = {}, float latency_ = {}, UnityEngine::AnimationCurve* scoreGainCurve_ = {}, int currentPartySize_ = {}, int maxPartySize_ = {}, GlobalNamespace::BeatmapDifficultyMask difficulties_ = {}, GlobalNamespace::GameplayModifierMask modifiers_ = {}, GlobalNamespace::SongPackMask songPacks_ = {}, bool isMyPartyOwner_ = {}, bool isOpenParty_ = {}, bool requiresPassword_ = {}, bool isWaitingOnJoin_ = {}, bool canInvite_ = {}, bool isWaitingOnInvite_ = {}, bool canKick_ = {}, bool canLeave_ = {}, bool canBlock_ = {}, bool canUnblock_ = {}, bool isConnectionOwner_ = {}, bool isKicked_ = {}, GlobalNamespace::MenuRpcManager* menuRpcManager_ = {}, GlobalNamespace::GameplayRpcManager* gameplayRpcManager_ = {}, bool isConnected_ = {}, bool isReady_ = {}, GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData_ = {}, GlobalNamespace::MockMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::AvatarPartsModel* avatarPartsModel_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* playerState_ = {}) noexcept : isMe{isMe_}, userName{userName_}, userId{userId_}, sortIndex{sortIndex_}, latency{latency_}, scoreGainCurve{scoreGainCurve_}, currentPartySize{currentPartySize_}, maxPartySize{maxPartySize_}, difficulties{difficulties_}, modifiers{modifiers_}, songPacks{songPacks_}, isMyPartyOwner{isMyPartyOwner_}, isOpenParty{isOpenParty_}, requiresPassword{requiresPassword_}, isWaitingOnJoin{isWaitingOnJoin_}, canInvite{canInvite_}, isWaitingOnInvite{isWaitingOnInvite_}, canKick{canKick_}, canLeave{canLeave_}, canBlock{canBlock_}, canUnblock{canUnblock_}, isConnectionOwner{isConnectionOwner_}, isKicked{isKicked_}, menuRpcManager{menuRpcManager_}, gameplayRpcManager{gameplayRpcManager_}, isConnected{isConnected_}, isReady{isReady_}, multiplayerAvatarData{multiplayerAvatarData_}, multiplayerSessionManager{multiplayerSessionManager_}, avatarPartsModel{avatarPartsModel_}, playerState{playerState_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnectedPlayer
    operator GlobalNamespace::IConnectedPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectedPlayer*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayer
    operator GlobalNamespace::INetworkPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayer*>(this);
    }
    // public UnityEngine.AnimationCurve get_scoreGainCurve()
    // Offset: 0x1026734
    UnityEngine::AnimationCurve* get_scoreGainCurve();
    // public System.Void set_isMe(System.Boolean value)
    // Offset: 0x1026744
    void set_isMe(bool value);
    // public System.Boolean get_isReady()
    // Offset: 0x1026750
    bool get_isReady();
    // public System.Void set_isReady(System.Boolean value)
    // Offset: 0x1026758
    void set_isReady(bool value);
    // public System.Void set_currentPartySize(System.Int32 value)
    // Offset: 0x1026794
    void set_currentPartySize(int value);
    // public System.Void set_maxPartySize(System.Int32 value)
    // Offset: 0x10267A4
    void set_maxPartySize(int value);
    // public System.Void set_difficulties(BeatmapDifficultyMask value)
    // Offset: 0x10267B4
    void set_difficulties(GlobalNamespace::BeatmapDifficultyMask value);
    // public System.Void set_modifiers(GameplayModifierMask value)
    // Offset: 0x10267C4
    void set_modifiers(GlobalNamespace::GameplayModifierMask value);
    // public System.Void set_songPacks(SongPackMask value)
    // Offset: 0x10267D8
    void set_songPacks(GlobalNamespace::SongPackMask value);
    // public System.Void set_isMyPartyOwner(System.Boolean value)
    // Offset: 0x10267E8
    void set_isMyPartyOwner(bool value);
    // public System.Void set_isOpenParty(System.Boolean value)
    // Offset: 0x10267FC
    void set_isOpenParty(bool value);
    // public System.Void set_userId(System.String value)
    // Offset: 0x1026810
    void set_userId(::Il2CppString* value);
    // public System.Void set_userName(System.String value)
    // Offset: 0x1026820
    void set_userName(::Il2CppString* value);
    // public System.Void set_currentLatency(System.Single value)
    // Offset: 0x1026830
    void set_currentLatency(float value);
    // public System.Void set_isConnected(System.Boolean value)
    // Offset: 0x1026880
    void set_isConnected(bool value);
    // protected System.Void set_isPlayer(System.Boolean value)
    // Offset: 0x10268E4
    void set_isPlayer(bool value);
    // public System.Boolean get_wantsToPlayNextLevel()
    // Offset: 0x1026944
    bool get_wantsToPlayNextLevel();
    // public System.Void set_wantsToPlayNextLevel(System.Boolean value)
    // Offset: 0x1026994
    void set_wantsToPlayNextLevel(bool value);
    // public System.Boolean get_isLeftHanded()
    // Offset: 0x10269F4
    bool get_isLeftHanded();
    // public System.Void set_isLeftHanded(System.Boolean value)
    // Offset: 0x1026A44
    void set_isLeftHanded(bool value);
    // protected System.Void set_isDedicatedServer(System.Boolean value)
    // Offset: 0x1026AA4
    void set_isDedicatedServer(bool value);
    // protected System.Void set_isSpectating(System.Boolean value)
    // Offset: 0x1026B54
    void set_isSpectating(bool value);
    // public System.Void set_requiresPassword(System.Boolean value)
    // Offset: 0x1026BC4
    void set_requiresPassword(bool value);
    // public System.Void set_isWaitingOnJoin(System.Boolean value)
    // Offset: 0x1026BD8
    void set_isWaitingOnJoin(bool value);
    // public System.Void set_canInvite(System.Boolean value)
    // Offset: 0x1026BEC
    void set_canInvite(bool value);
    // public System.Void set_isWaitingOnInvite(System.Boolean value)
    // Offset: 0x1026C00
    void set_isWaitingOnInvite(bool value);
    // public System.Void set_canKick(System.Boolean value)
    // Offset: 0x1026C14
    void set_canKick(bool value);
    // public System.Void set_canLeave(System.Boolean value)
    // Offset: 0x1026C28
    void set_canLeave(bool value);
    // public System.Void set_canBlock(System.Boolean value)
    // Offset: 0x1026C3C
    void set_canBlock(bool value);
    // public System.Void set_canUnblock(System.Boolean value)
    // Offset: 0x1026C50
    void set_canUnblock(bool value);
    // public System.Void set_isConnectionOwner(System.Boolean value)
    // Offset: 0x1026C64
    void set_isConnectionOwner(bool value);
    // public System.Boolean get_wasActiveAtLevelStart()
    // Offset: 0x1026C70
    bool get_wasActiveAtLevelStart();
    // public System.Void set_wasActiveAtLevelStart(System.Boolean value)
    // Offset: 0x1026CC0
    void set_wasActiveAtLevelStart(bool value);
    // public System.Boolean get_isActive()
    // Offset: 0x1026D20
    bool get_isActive();
    // public System.Void set_isActive(System.Boolean value)
    // Offset: 0x1026D70
    void set_isActive(bool value);
    // public System.Boolean get_finishedLevel()
    // Offset: 0x1026DD0
    bool get_finishedLevel();
    // public System.Void set_finishedLevel(System.Boolean value)
    // Offset: 0x1026E20
    void set_finishedLevel(bool value);
    // public System.Void set_sortIndex(System.Int32 value)
    // Offset: 0x1026E88
    void set_sortIndex(int value);
    // public System.Void set_isKicked(System.Boolean value)
    // Offset: 0x1026E98
    void set_isKicked(bool value);
    // public System.Void SetState(System.String state, System.Boolean value)
    // Offset: 0x1025680
    void SetState(::Il2CppString* state, bool value);
    // public System.Void Init(MockMultiplayerSessionManager multiplayerSessionManager, AvatarPartsModel avatarPartsModel)
    // Offset: 0x102724C
    void Init(GlobalNamespace::MockMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::AvatarPartsModel* avatarPartsModel);
    // public System.Void Connect(MockMultiplayerSessionManager multiplayerSessionManagerMock)
    // Offset: 0x1027624
    void Connect(GlobalNamespace::MockMultiplayerSessionManager* multiplayerSessionManagerMock);
    // public System.Void Disconnect()
    // Offset: 0x1027988
    void Disconnect();
    // private System.Void HandleGetIsReady(System.String u)
    // Offset: 0x1027CE8
    void HandleGetIsReady(::Il2CppString* u);
    // private System.Void HandleGetIsEntitledToLevel(System.String u, System.String level)
    // Offset: 0x1027D0C
    void HandleGetIsEntitledToLevel(::Il2CppString* u, ::Il2CppString* level);
    // private System.Void HandleGetIsInLobby(System.String u)
    // Offset: 0x1027D30
    void HandleGetIsInLobby(::Il2CppString* u);
    // private System.Void HandleNoteCut(System.String u, System.Single st, System.Single t, NoteCutInfoNetSerializable nc)
    // Offset: 0x1027D74
    void HandleNoteCut(::Il2CppString* u, float st, float t, GlobalNamespace::NoteCutInfoNetSerializable* nc);
    // private System.Void HandleNoteMissed(System.String u, System.Single st, System.Single t, NoteMissInfoNetSerializable nc)
    // Offset: 0x1027EA4
    void HandleNoteMissed(::Il2CppString* u, float st, float t, GlobalNamespace::NoteMissInfoNetSerializable* nc);
    // private System.Void HandleLevelFinished(System.String user, LevelCompletionResults results)
    // Offset: 0x1027FD4
    void HandleLevelFinished(::Il2CppString* user, GlobalNamespace::LevelCompletionResults* results);
    // private System.Void HandleGetGameplaySceneReady(System.String user)
    // Offset: 0x1027FD8
    void HandleGetGameplaySceneReady(::Il2CppString* user);
    // private System.Void HandleSetGameplaySceneReady(System.String user)
    // Offset: 0x10281A4
    void HandleSetGameplaySceneReady(::Il2CppString* user);
    // private System.Void HandleGetGameplaySongReady(System.String user)
    // Offset: 0x10282B8
    void HandleGetGameplaySongReady(::Il2CppString* user);
    // private System.Void HandleSetGameplaySongReady(System.String user)
    // Offset: 0x1028454
    void HandleSetGameplaySongReady(::Il2CppString* user);
    // private System.Void HandleLevelEndedEarly(System.String user)
    // Offset: 0x1028568
    void HandleLevelEndedEarly(::Il2CppString* user);
    // public System.Boolean get_isMe()
    // Offset: 0x102673C
    // Implemented from: IConnectedPlayer
    // Base method: System.Boolean IConnectedPlayer::get_isMe()
    // Base method: System.Boolean INetworkPlayer::get_isMe()
    bool get_isMe();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x102678C
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_currentPartySize()
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x102679C
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_maxPartySize()
    int get_maxPartySize();
    // public BeatmapDifficultyMask get_difficulties()
    // Offset: 0x10267AC
    // Implemented from: INetworkPlayer
    // Base method: BeatmapDifficultyMask INetworkPlayer::get_difficulties()
    GlobalNamespace::BeatmapDifficultyMask get_difficulties();
    // public GameplayModifierMask get_modifiers()
    // Offset: 0x10267BC
    // Implemented from: INetworkPlayer
    // Base method: GameplayModifierMask INetworkPlayer::get_modifiers()
    GlobalNamespace::GameplayModifierMask get_modifiers();
    // public SongPackMask get_songPacks()
    // Offset: 0x10267CC
    // Implemented from: INetworkPlayer
    // Base method: SongPackMask INetworkPlayer::get_songPacks()
    GlobalNamespace::SongPackMask get_songPacks();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0x10267E0
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMyPartyOwner()
    bool get_isMyPartyOwner();
    // public System.Boolean get_isOpenParty()
    // Offset: 0x10267F4
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isOpenParty()
    bool get_isOpenParty();
    // public System.String get_userId()
    // Offset: 0x1026808
    // Implemented from: IConnectedPlayer
    // Base method: System.String IConnectedPlayer::get_userId()
    // Base method: System.String INetworkPlayer::get_userId()
    ::Il2CppString* get_userId();
    // Creating proxy method: GlobalNamespace_INetworkPlayer_get_userId
    // Maps to method: get_userId
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userId();
    // public System.String get_userName()
    // Offset: 0x1026818
    // Implemented from: IConnectedPlayer
    // Base method: System.String IConnectedPlayer::get_userName()
    // Base method: System.String INetworkPlayer::get_userName()
    ::Il2CppString* get_userName();
    // Creating proxy method: GlobalNamespace_INetworkPlayer_get_userName
    // Maps to method: get_userName
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userName();
    // public System.Single get_currentLatency()
    // Offset: 0x1026828
    // Implemented from: IConnectedPlayer
    // Base method: System.Single IConnectedPlayer::get_currentLatency()
    float get_currentLatency();
    // public System.Single get_offsetSyncTime()
    // Offset: 0x1026838
    // Implemented from: IConnectedPlayer
    // Base method: System.Single IConnectedPlayer::get_offsetSyncTime()
    float get_offsetSyncTime();
    // public System.Boolean get_isConnected()
    // Offset: 0x1024060
    // Implemented from: IConnectedPlayer
    // Base method: System.Boolean IConnectedPlayer::get_isConnected()
    // Base method: System.Boolean INetworkPlayer::get_isConnected()
    bool get_isConnected();
    // public DisconnectedReason get_disconnectedReason()
    // Offset: 0x102688C
    // Implemented from: IConnectedPlayer
    // Base method: DisconnectedReason IConnectedPlayer::get_disconnectedReason()
    GlobalNamespace::DisconnectedReason get_disconnectedReason();
    // public System.Boolean get_isPlayer()
    // Offset: 0x1026894
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isPlayer()
    bool get_isPlayer();
    // public System.Boolean get_isDedicatedServer()
    // Offset: 0x1023F90
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isDedicatedServer()
    bool get_isDedicatedServer();
    // public System.Boolean get_isSpectating()
    // Offset: 0x1026B04
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isSpectating()
    bool get_isSpectating();
    // public System.Boolean get_canJoin()
    // Offset: 0x1026BB4
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canJoin()
    bool get_canJoin();
    // public System.Boolean get_requiresPassword()
    // Offset: 0x1026BBC
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_requiresPassword()
    bool get_requiresPassword();
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0x1026BD0
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnJoin()
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0x1026BE4
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canInvite()
    bool get_canInvite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0x1026BF8
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnInvite()
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0x1026C0C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canKick()
    bool get_canKick();
    // public System.Boolean get_canLeave()
    // Offset: 0x1026C20
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canLeave()
    bool get_canLeave();
    // public System.Boolean get_canBlock()
    // Offset: 0x1026C34
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canBlock()
    bool get_canBlock();
    // public System.Boolean get_canUnblock()
    // Offset: 0x1026C48
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canUnblock()
    bool get_canUnblock();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x1026C5C
    // Implemented from: IConnectedPlayer
    // Base method: System.Boolean IConnectedPlayer::get_isConnectionOwner()
    bool get_isConnectionOwner();
    // public System.Int32 get_sortIndex()
    // Offset: 0x1026E80
    // Implemented from: IConnectedPlayer
    // Base method: System.Int32 IConnectedPlayer::get_sortIndex()
    int get_sortIndex();
    // public System.Boolean get_isKicked()
    // Offset: 0x1026E90
    // Implemented from: IConnectedPlayer
    // Base method: System.Boolean IConnectedPlayer::get_isKicked()
    bool get_isKicked();
    // public MultiplayerAvatarData get_multiplayerAvatarData()
    // Offset: 0x1026EA4
    // Implemented from: IConnectedPlayer
    // Base method: MultiplayerAvatarData IConnectedPlayer::get_multiplayerAvatarData()
    GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData();
    // public System.Void .ctor()
    // Offset: 0x1026EB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayer*, creationType>()));
    }
    // public System.Boolean HasState(System.String state)
    // Offset: 0x1025714
    // Implemented from: IConnectedPlayer
    // Base method: System.Boolean IConnectedPlayer::HasState(System.String state)
    bool HasState(::Il2CppString* state);
    // public System.Void Unblock()
    // Offset: 0x1026F48
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Unblock()
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0x1026FA8
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendJoinResponse(System.Boolean accept)
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0x1027008
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendInviteResponse(System.Boolean accept)
    void SendInviteResponse(bool accept);
    // public System.Void Block()
    // Offset: 0x1027068
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Block()
    void Block();
    // public System.Void Leave()
    // Offset: 0x10270C8
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Leave()
    void Leave();
    // public System.Void Kick()
    // Offset: 0x10270CC
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Kick()
    void Kick();
    // public System.Void Invite()
    // Offset: 0x102712C
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Invite()
    void Invite();
    // public System.Void Join(System.String password)
    // Offset: 0x102718C
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join(System.String password)
    void Join(::Il2CppString* password);
    // public System.Void Join()
    // Offset: 0x10271EC
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join()
    void Join();
  }; // MockPlayer
  static check_size<sizeof(MockPlayer), 256 + sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*)> __GlobalNamespace_MockPlayerSizeCheck;
  static_assert(sizeof(MockPlayer) == 0x108);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayer*, "", "MockPlayer");
#pragma pack(pop)
