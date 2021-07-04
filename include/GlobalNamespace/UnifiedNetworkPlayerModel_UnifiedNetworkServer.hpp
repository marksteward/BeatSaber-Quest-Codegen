// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/UnifiedNetworkServer
  class UnifiedNetworkPlayerModel::UnifiedNetworkServer : public ::Il2CppObject/*, public GlobalNamespace::INetworkPlayer*/ {
    public:
    // private readonly UnifiedNetworkPlayerModel _playerModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::UnifiedNetworkPlayerModel* playerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private readonly System.String _code
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _serverName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* serverName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _hasPassword
    // Size: 0x1
    // Offset: 0x28
    bool hasPassword;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasPassword and: currentPlayerCount
    char __padding3[0x3] = {};
    // private System.Int32 _currentPlayerCount
    // Size: 0x4
    // Offset: 0x2C
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxPlayerCount
    // Size: 0x4
    // Offset: 0x30
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private BeatmapDifficultyMask _difficulties
    // Size: 0x1
    // Offset: 0x34
    GlobalNamespace::BeatmapDifficultyMask difficulties;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: difficulties and: modifiers
    char __padding6[0x1] = {};
    // private GameplayModifierMask _modifiers
    // Size: 0x2
    // Offset: 0x36
    GlobalNamespace::GameplayModifierMask modifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierMask) == 0x2);
    // private SongPackMask _songPacks
    // Size: 0x10
    // Offset: 0x38
    GlobalNamespace::SongPackMask songPacks;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // private System.Single _lastUpdateTime
    // Size: 0x4
    // Offset: 0x48
    float lastUpdateTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: UnifiedNetworkServer
    UnifiedNetworkServer(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel_ = {}, ::Il2CppString* code_ = {}, ::Il2CppString* serverName_ = {}, bool hasPassword_ = {}, int currentPlayerCount_ = {}, int maxPlayerCount_ = {}, GlobalNamespace::BeatmapDifficultyMask difficulties_ = {}, GlobalNamespace::GameplayModifierMask modifiers_ = {}, GlobalNamespace::SongPackMask songPacks_ = {}, float lastUpdateTime_ = {}) noexcept : playerModel{playerModel_}, code{code_}, serverName{serverName_}, hasPassword{hasPassword_}, currentPlayerCount{currentPlayerCount_}, maxPlayerCount{maxPlayerCount_}, difficulties{difficulties_}, modifiers{modifiers_}, songPacks{songPacks_}, lastUpdateTime{lastUpdateTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayer
    operator GlobalNamespace::INetworkPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayer*>(this);
    }
    // public System.Void .ctor(UnifiedNetworkPlayerModel playerModel, System.String code)
    // Offset: 0x1127638
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::UnifiedNetworkServer* New_ctor(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel, ::Il2CppString* code) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::UnifiedNetworkServer*, creationType>(playerModel, code)));
    }
    // public System.Void Update(System.String serverName, System.Boolean hasPassword, System.Int32 currentPlayerCount, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0x1127670
    void Update(::Il2CppString* serverName, bool hasPassword, int currentPlayerCount, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // private System.String INetworkPlayer.get_userId()
    // Offset: 0x1129624
    ::Il2CppString* INetworkPlayer_get_userId();
    // public System.String get_code()
    // Offset: 0x112962C
    ::Il2CppString* get_code();
    // private System.String INetworkPlayer.get_userName()
    // Offset: 0x1129634
    ::Il2CppString* INetworkPlayer_get_userName();
    // public System.String get_serverName()
    // Offset: 0x112963C
    ::Il2CppString* get_serverName();
    // public System.Boolean get_isMe()
    // Offset: 0x1129644
    bool get_isMe();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x112964C
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x1129654
    int get_maxPartySize();
    // public BeatmapDifficultyMask get_difficulties()
    // Offset: 0x112965C
    GlobalNamespace::BeatmapDifficultyMask get_difficulties();
    // public GameplayModifierMask get_modifiers()
    // Offset: 0x1129664
    GlobalNamespace::GameplayModifierMask get_modifiers();
    // public SongPackMask get_songPacks()
    // Offset: 0x112966C
    GlobalNamespace::SongPackMask get_songPacks();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0x1129678
    bool get_isMyPartyOwner();
    // public System.Boolean get_isOpenParty()
    // Offset: 0x1129680
    bool get_isOpenParty();
    // public System.Boolean get_isConnected()
    // Offset: 0x1129690
    bool get_isConnected();
    // public System.Boolean get_hasTimedOut()
    // Offset: 0x1125174
    bool get_hasTimedOut();
    // public System.Boolean get_isPlayer()
    // Offset: 0x1129698
    bool get_isPlayer();
    // public System.Boolean get_isSpectating()
    // Offset: 0x11296A0
    bool get_isSpectating();
    // public System.Boolean get_isDedicatedServer()
    // Offset: 0x11296A8
    bool get_isDedicatedServer();
    // public System.Boolean get_canJoin()
    // Offset: 0x11296B0
    bool get_canJoin();
    // public System.Void Join()
    // Offset: 0x11296B8
    void Join();
    // public System.Boolean get_requiresPassword()
    // Offset: 0x11296DC
    bool get_requiresPassword();
    // public System.Void Join(System.String password)
    // Offset: 0x11296E4
    void Join(::Il2CppString* password);
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0x1129708
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0x1129710
    bool get_canInvite();
    // public System.Void Invite()
    // Offset: 0x1129718
    void Invite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0x112971C
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0x1129724
    bool get_canKick();
    // public System.Void Kick()
    // Offset: 0x112972C
    void Kick();
    // public System.Boolean get_canLeave()
    // Offset: 0x1129730
    bool get_canLeave();
    // public System.Void Leave()
    // Offset: 0x1129738
    void Leave();
    // public System.Boolean get_canBlock()
    // Offset: 0x112973C
    bool get_canBlock();
    // public System.Void Block()
    // Offset: 0x1129744
    void Block();
    // public System.Boolean get_canUnblock()
    // Offset: 0x1129748
    bool get_canUnblock();
    // public System.Void Unblock()
    // Offset: 0x1129750
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0x1129754
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0x1129758
    void SendInviteResponse(bool accept);
  }; // UnifiedNetworkPlayerModel/UnifiedNetworkServer
  #pragma pack(pop)
  static check_size<sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkServer), 72 + sizeof(float)> __GlobalNamespace_UnifiedNetworkPlayerModel_UnifiedNetworkServerSizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkServer) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*, "", "UnifiedNetworkPlayerModel/UnifiedNetworkServer");
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::INetworkPlayer_get_userId
// Il2CppName: INetworkPlayer.get_userId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_code
// Il2CppName: get_code
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::INetworkPlayer_get_userName
// Il2CppName: INetworkPlayer.get_userName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_serverName
// Il2CppName: get_serverName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isMe
// Il2CppName: get_isMe
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_currentPartySize
// Il2CppName: get_currentPartySize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_maxPartySize
// Il2CppName: get_maxPartySize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_difficulties
// Il2CppName: get_difficulties
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_modifiers
// Il2CppName: get_modifiers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_songPacks
// Il2CppName: get_songPacks
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isMyPartyOwner
// Il2CppName: get_isMyPartyOwner
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isOpenParty
// Il2CppName: get_isOpenParty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isConnected
// Il2CppName: get_isConnected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_hasTimedOut
// Il2CppName: get_hasTimedOut
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isPlayer
// Il2CppName: get_isPlayer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isSpectating
// Il2CppName: get_isSpectating
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isDedicatedServer
// Il2CppName: get_isDedicatedServer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canJoin
// Il2CppName: get_canJoin
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Join
// Il2CppName: Join
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_requiresPassword
// Il2CppName: get_requiresPassword
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Join
// Il2CppName: Join
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isWaitingOnJoin
// Il2CppName: get_isWaitingOnJoin
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canInvite
// Il2CppName: get_canInvite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Invite
// Il2CppName: Invite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isWaitingOnInvite
// Il2CppName: get_isWaitingOnInvite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canKick
// Il2CppName: get_canKick
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Kick
// Il2CppName: Kick
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canLeave
// Il2CppName: get_canLeave
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Leave
// Il2CppName: Leave
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canBlock
// Il2CppName: get_canBlock
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Block
// Il2CppName: Block
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canUnblock
// Il2CppName: get_canUnblock
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Unblock
// Il2CppName: Unblock
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::SendJoinResponse
// Il2CppName: SendJoinResponse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::SendInviteResponse
// Il2CppName: SendInviteResponse
// Cannot perform method pointer template specialization from operators!
