// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ConnectedPlayerManager
#include "GlobalNamespace/ConnectedPlayerManager.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
// Including type: PlayerStateHash
#include "GlobalNamespace/PlayerStateHash.hpp"
// Including type: MultiplayerAvatarData
#include "GlobalNamespace/MultiplayerAvatarData.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnection
  class IConnection;
  // Forward declaring type: RollingAverage
  class RollingAverage;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerManager/ConnectedPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectedPlayerManager::ConnectedPlayer : public ::Il2CppObject/*, public GlobalNamespace::IConnectedPlayer*/ {
    public:
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _isMe
    // Size: 0x1
    // Offset: 0x20
    bool isMe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Boolean _isConnectionOwner
    // Size: 0x1
    // Offset: 0x21
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConnectionOwner and: manager
    char __padding3[0x6] = {};
    // private readonly ConnectedPlayerManager _manager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ConnectedPlayerManager* manager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConnectedPlayerManager*) == 0x8);
    // private readonly IConnection _connection
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IConnection* connection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnection*) == 0x8);
    // private readonly ConnectedPlayerManager/ConnectedPlayer _parent
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* parent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*) == 0x8);
    // private readonly System.Byte _connectionId
    // Size: 0x1
    // Offset: 0x40
    uint8_t connectionId;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private readonly System.Byte _remoteConnectionId
    // Size: 0x1
    // Offset: 0x41
    uint8_t remoteConnectionId;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: remoteConnectionId and: sortIndex
    char __padding8[0x2] = {};
    // private System.Int32 _sortIndex
    // Size: 0x4
    // Offset: 0x44
    int sortIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _isConnected
    // Size: 0x1
    // Offset: 0x48
    bool isConnected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConnected and: disconnectedReason
    char __padding10[0x3] = {};
    // private DisconnectedReason _disconnectedReason
    // Size: 0x4
    // Offset: 0x4C
    GlobalNamespace::DisconnectedReason disconnectedReason;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DisconnectedReason) == 0x4);
    // private System.Boolean _isKicked
    // Size: 0x1
    // Offset: 0x50
    bool isKicked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isKicked and: playerState
    char __padding12[0x7] = {};
    // private PlayerStateHash _playerState
    // Size: 0x10
    // Offset: 0x58
    GlobalNamespace::PlayerStateHash playerState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerStateHash) == 0x10);
    // private MultiplayerAvatarData _playerAvatar
    // Size: 0x70
    // Offset: 0x68
    GlobalNamespace::MultiplayerAvatarData playerAvatar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerAvatarData) == 0x70);
    // private readonly RollingAverage _latency
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::RollingAverage* latency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RollingAverage*) == 0x8);
    // Creating value type constructor for type: ConnectedPlayer
    ConnectedPlayer(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool isMe_ = {}, bool isConnectionOwner_ = {}, GlobalNamespace::ConnectedPlayerManager* manager_ = {}, GlobalNamespace::IConnection* connection_ = {}, GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* parent_ = {}, uint8_t connectionId_ = {}, uint8_t remoteConnectionId_ = {}, int sortIndex_ = {}, bool isConnected_ = {}, GlobalNamespace::DisconnectedReason disconnectedReason_ = {}, bool isKicked_ = {}, GlobalNamespace::PlayerStateHash playerState_ = {}, GlobalNamespace::MultiplayerAvatarData playerAvatar_ = {}, GlobalNamespace::RollingAverage* latency_ = {}) noexcept : userId{userId_}, userName{userName_}, isMe{isMe_}, isConnectionOwner{isConnectionOwner_}, manager{manager_}, connection{connection_}, parent{parent_}, connectionId{connectionId_}, remoteConnectionId{remoteConnectionId_}, sortIndex{sortIndex_}, isConnected{isConnected_}, disconnectedReason{disconnectedReason_}, isKicked{isKicked_}, playerState{playerState_}, playerAvatar{playerAvatar_}, latency{latency_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnectedPlayer
    operator GlobalNamespace::IConnectedPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectedPlayer*>(this);
    }
    // static field const value: static private System.Single kFixedOffset
    static constexpr const float kFixedOffset = 0.06;
    // Get static field: static private System.Single kFixedOffset
    static float _get_kFixedOffset();
    // Set static field: static private System.Single kFixedOffset
    static void _set_kFixedOffset(float value);
    // public IConnection get_connection()
    // Offset: 0x12C00DC
    GlobalNamespace::IConnection* get_connection();
    // public System.Byte get_connectionId()
    // Offset: 0x12C00E4
    uint8_t get_connectionId();
    // public System.Byte get_remoteConnectionId()
    // Offset: 0x12C00EC
    uint8_t get_remoteConnectionId();
    // public System.Boolean get_isConnected()
    // Offset: 0x12C00F4
    bool get_isConnected();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x12C00FC
    bool get_isConnectionOwner();
    // public System.Boolean get_isKicked()
    // Offset: 0x12C0104
    bool get_isKicked();
    // public DisconnectedReason get_disconnectedReason()
    // Offset: 0x12C010C
    GlobalNamespace::DisconnectedReason get_disconnectedReason();
    // public System.Int32 get_sortIndex()
    // Offset: 0x12C0114
    int get_sortIndex();
    // public System.String get_userId()
    // Offset: 0x12C011C
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x12C0124
    ::Il2CppString* get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0x12C012C
    bool get_isMe();
    // public System.Single get_currentLatency()
    // Offset: 0x12BEC38
    float get_currentLatency();
    // public System.Single get_offsetSyncTime()
    // Offset: 0x12C0134
    float get_offsetSyncTime();
    // public MultiplayerAvatarData get_multiplayerAvatarData()
    // Offset: 0x12C0208
    GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData();
    // public System.Boolean get_isDirectConnection()
    // Offset: 0x12BB298
    bool get_isDirectConnection();
    // private System.Void .ctor(ConnectedPlayerManager manager, System.Byte connectionId, System.Byte remoteConnectionId, IConnection connection, ConnectedPlayerManager/ConnectedPlayer parent, System.String userId, System.String userName, System.Boolean isConnectionOwner, System.Boolean isMe)
    // Offset: 0x12C0218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayerManager::ConnectedPlayer* New_ctor(GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId, GlobalNamespace::IConnection* connection, GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* parent, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner, bool isMe) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayerManager::ConnectedPlayer*, creationType>(manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner, isMe)));
    }
    // static public ConnectedPlayerManager/ConnectedPlayer CreateLocalPlayer(ConnectedPlayerManager manager, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x12BD930
    static GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* CreateLocalPlayer(GlobalNamespace::ConnectedPlayerManager* manager, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner);
    // static public ConnectedPlayerManager/ConnectedPlayer CreateDirectlyConnectedPlayer(ConnectedPlayerManager manager, System.Byte connectionId, IConnection connection)
    // Offset: 0x12BE950
    static GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* CreateDirectlyConnectedPlayer(GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, GlobalNamespace::IConnection* connection);
    // static public ConnectedPlayerManager/ConnectedPlayer CreateRemoteConnectedPlayer(ConnectedPlayerManager manager, System.Byte connectionId, ConnectedPlayerManager/PlayerConnectedPacket packet, ConnectedPlayerManager/ConnectedPlayer parent)
    // Offset: 0x12BF51C
    static GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* CreateRemoteConnectedPlayer(GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket* packet, GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* parent);
    // public ConnectedPlayerManager/PlayerConnectedPacket GetPlayerConnectedPacket()
    // Offset: 0x12BB114
    GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket* GetPlayerConnectedPacket();
    // public ConnectedPlayerManager/PlayerIdentityPacket GetPlayerIdentityPacket()
    // Offset: 0x12BB408
    GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket* GetPlayerIdentityPacket();
    // public ConnectedPlayerManager/PlayerStatePacket GetPlayerStatePacket()
    // Offset: 0x12BE590
    GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket* GetPlayerStatePacket();
    // public ConnectedPlayerManager/PlayerAvatarPacket GetPlayerAvatarPacket()
    // Offset: 0x12BE6A4
    GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket* GetPlayerAvatarPacket();
    // public ConnectedPlayerManager/PlayerSortOrderPacket GetPlayerSortOrderPacket()
    // Offset: 0x12BB398
    GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket* GetPlayerSortOrderPacket();
    // public System.Void Disconnect(DisconnectedReason disconnectedReason)
    // Offset: 0x12BAA84
    void Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // public System.Void UpdateLatency(System.Single latency)
    // Offset: 0x12BEC1C
    void UpdateLatency(float latency);
    // public System.Boolean UpdateSortIndex(System.Int32 index)
    // Offset: 0x12BE828
    bool UpdateSortIndex(int index);
    // public System.Void SetKicked()
    // Offset: 0x12BE4A8
    void SetKicked();
    // public System.Void UpdateIdentity(ConnectedPlayerManager/PlayerIdentityPacket packet)
    // Offset: 0x12BF750
    void UpdateIdentity(GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket* packet);
    // public System.Void UpdateState(ConnectedPlayerManager/PlayerStatePacket packet)
    // Offset: 0x12BF848
    void UpdateState(GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket* packet);
    // public System.Void UpdateAvatar(ConnectedPlayerManager/PlayerAvatarPacket packet)
    // Offset: 0x12BF934
    void UpdateAvatar(GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket* packet);
    // public System.Boolean HasState(System.String state)
    // Offset: 0x12C0394
    bool HasState(::Il2CppString* state);
    // public System.Void SetPlayerState(PlayerStateHash playerState)
    // Offset: 0x12C03A0
    void SetPlayerState(GlobalNamespace::PlayerStateHash playerState);
    // public System.Void SetPlayerAvatar(MultiplayerAvatarData avatarData)
    // Offset: 0x12C03A8
    void SetPlayerAvatar(GlobalNamespace::MultiplayerAvatarData avatarData);
    // public override System.String ToString()
    // Offset: 0x12C03C4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // ConnectedPlayerManager/ConnectedPlayer
  #pragma pack(pop)
  static check_size<sizeof(ConnectedPlayerManager::ConnectedPlayer), 216 + sizeof(GlobalNamespace::RollingAverage*)> __GlobalNamespace_ConnectedPlayerManager_ConnectedPlayerSizeCheck;
  static_assert(sizeof(ConnectedPlayerManager::ConnectedPlayer) == 0xE0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*, "", "ConnectedPlayerManager/ConnectedPlayer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_connection
// Il2CppName: get_connection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnection* (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_connection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_connection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_connectionId
// Il2CppName: get_connectionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_connectionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_connectionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_remoteConnectionId
// Il2CppName: get_remoteConnectionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_remoteConnectionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_remoteConnectionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_isConnected
// Il2CppName: get_isConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_isConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_isConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_isConnectionOwner
// Il2CppName: get_isConnectionOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_isConnectionOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_isConnectionOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_isKicked
// Il2CppName: get_isKicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_isKicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_isKicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_disconnectedReason
// Il2CppName: get_disconnectedReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::DisconnectedReason (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_disconnectedReason)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_disconnectedReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_sortIndex
// Il2CppName: get_sortIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_sortIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_sortIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_isMe
// Il2CppName: get_isMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_isMe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_isMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_currentLatency
// Il2CppName: get_currentLatency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_currentLatency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_currentLatency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_offsetSyncTime
// Il2CppName: get_offsetSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_offsetSyncTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_offsetSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_multiplayerAvatarData
// Il2CppName: get_multiplayerAvatarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerAvatarData (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_multiplayerAvatarData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_multiplayerAvatarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_isDirectConnection
// Il2CppName: get_isDirectConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::get_isDirectConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "get_isDirectConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::CreateLocalPlayer
// Il2CppName: CreateLocalPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* (*)(GlobalNamespace::ConnectedPlayerManager*, ::Il2CppString*, ::Il2CppString*, bool)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::CreateLocalPlayer)> {
  static const MethodInfo* get() {
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "ConnectedPlayerManager")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "CreateLocalPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manager, userId, userName, isConnectionOwner});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::CreateDirectlyConnectedPlayer
// Il2CppName: CreateDirectlyConnectedPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* (*)(GlobalNamespace::ConnectedPlayerManager*, uint8_t, GlobalNamespace::IConnection*)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::CreateDirectlyConnectedPlayer)> {
  static const MethodInfo* get() {
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "ConnectedPlayerManager")->byval_arg;
    static auto* connectionId = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* connection = &::il2cpp_utils::GetClassFromName("", "IConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "CreateDirectlyConnectedPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manager, connectionId, connection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::CreateRemoteConnectedPlayer
// Il2CppName: CreateRemoteConnectedPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* (*)(GlobalNamespace::ConnectedPlayerManager*, uint8_t, GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*, GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::CreateRemoteConnectedPlayer)> {
  static const MethodInfo* get() {
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "ConnectedPlayerManager")->byval_arg;
    static auto* connectionId = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* packet = &::il2cpp_utils::GetClassFromName("", "ConnectedPlayerManager/PlayerConnectedPacket")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("", "ConnectedPlayerManager/ConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "CreateRemoteConnectedPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manager, connectionId, packet, parent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::GetPlayerConnectedPacket
// Il2CppName: GetPlayerConnectedPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket* (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::GetPlayerConnectedPacket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "GetPlayerConnectedPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::GetPlayerIdentityPacket
// Il2CppName: GetPlayerIdentityPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket* (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::GetPlayerIdentityPacket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "GetPlayerIdentityPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::GetPlayerStatePacket
// Il2CppName: GetPlayerStatePacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket* (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::GetPlayerStatePacket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "GetPlayerStatePacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::GetPlayerAvatarPacket
// Il2CppName: GetPlayerAvatarPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket* (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::GetPlayerAvatarPacket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "GetPlayerAvatarPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::GetPlayerSortOrderPacket
// Il2CppName: GetPlayerSortOrderPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket* (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::GetPlayerSortOrderPacket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "GetPlayerSortOrderPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::Disconnect)> {
  static const MethodInfo* get() {
    static auto* disconnectedReason = &::il2cpp_utils::GetClassFromName("", "DisconnectedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disconnectedReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::UpdateLatency
// Il2CppName: UpdateLatency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)(float)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::UpdateLatency)> {
  static const MethodInfo* get() {
    static auto* latency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "UpdateLatency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{latency});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::UpdateSortIndex
// Il2CppName: UpdateSortIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)(int)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::UpdateSortIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "UpdateSortIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::SetKicked
// Il2CppName: SetKicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::SetKicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "SetKicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::UpdateIdentity
// Il2CppName: UpdateIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)(GlobalNamespace::ConnectedPlayerManager::PlayerIdentityPacket*)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::UpdateIdentity)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("", "ConnectedPlayerManager/PlayerIdentityPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "UpdateIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::UpdateState
// Il2CppName: UpdateState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)(GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket*)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::UpdateState)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("", "ConnectedPlayerManager/PlayerStatePacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "UpdateState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::UpdateAvatar
// Il2CppName: UpdateAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)(GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket*)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::UpdateAvatar)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("", "ConnectedPlayerManager/PlayerAvatarPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "UpdateAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::HasState
// Il2CppName: HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)(::Il2CppString*)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::HasState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::SetPlayerState
// Il2CppName: SetPlayerState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)(GlobalNamespace::PlayerStateHash)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::SetPlayerState)> {
  static const MethodInfo* get() {
    static auto* playerState = &::il2cpp_utils::GetClassFromName("", "PlayerStateHash")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "SetPlayerState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::SetPlayerAvatar
// Il2CppName: SetPlayerAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)(GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::SetPlayerAvatar)> {
  static const MethodInfo* get() {
    static auto* avatarData = &::il2cpp_utils::GetClassFromName("", "MultiplayerAvatarData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "SetPlayerAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatarData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::*)()>(&GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
