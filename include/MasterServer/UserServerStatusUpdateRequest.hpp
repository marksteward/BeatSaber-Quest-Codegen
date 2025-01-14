// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IUserClientToServerMessage
#include "MasterServer/IUserClientToServerMessage.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
  // Forward declaring type: IVersionedPacketPool`1<T>
  template<typename T>
  class IVersionedPacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserServerStatusUpdateRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class UserServerStatusUpdateRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IUserClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // Nested type: MasterServer::UserServerStatusUpdateRequest::V4
    class V4;
    // private System.String <userId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <userName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String serverName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* serverName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String secret
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String password
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 currentPlayerCount
    // Size: 0x4
    // Offset: 0x40
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentPlayerCount and: selectionMask
    char __padding5[0x4] = {};
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x48
    GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x70
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // Creating value type constructor for type: UserServerStatusUpdateRequest
    UserServerStatusUpdateRequest(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, ::Il2CppString* serverName_ = {}, ::Il2CppString* secret_ = {}, ::Il2CppString* password_ = {}, int currentPlayerCount_ = {}, GlobalNamespace::BeatmapLevelSelectionMask selectionMask_ = {}, GlobalNamespace::ByteArrayNetSerializable* random_ = {}, GlobalNamespace::ByteArrayNetSerializable* publicKey_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}) noexcept : userId{userId_}, userName{userName_}, serverName{serverName_}, secret{secret_}, password{password_}, currentPlayerCount{currentPlayerCount_}, selectionMask{selectionMask_}, random{random_}, publicKey{publicKey_}, configuration{configuration_} {}
    // Creating interface conversion operator: operator MasterServer::IUserClientToServerMessage
    operator MasterServer::IUserClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field: private System.String <userId>k__BackingField
    ::Il2CppString* _get_$userId$k__BackingField();
    // Set instance field: private System.String <userId>k__BackingField
    void _set_$userId$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.String <userName>k__BackingField
    ::Il2CppString* _get_$userName$k__BackingField();
    // Set instance field: private System.String <userName>k__BackingField
    void _set_$userName$k__BackingField(::Il2CppString* value);
    // Get instance field: public System.String serverName
    ::Il2CppString* _get_serverName();
    // Set instance field: public System.String serverName
    void _set_serverName(::Il2CppString* value);
    // Get instance field: public System.String secret
    ::Il2CppString* _get_secret();
    // Set instance field: public System.String secret
    void _set_secret(::Il2CppString* value);
    // Get instance field: public System.String password
    ::Il2CppString* _get_password();
    // Set instance field: public System.String password
    void _set_password(::Il2CppString* value);
    // Get instance field: public System.Int32 currentPlayerCount
    int _get_currentPlayerCount();
    // Set instance field: public System.Int32 currentPlayerCount
    void _set_currentPlayerCount(int value);
    // Get instance field: public BeatmapLevelSelectionMask selectionMask
    GlobalNamespace::BeatmapLevelSelectionMask _get_selectionMask();
    // Set instance field: public BeatmapLevelSelectionMask selectionMask
    void _set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value);
    // Get instance field: public readonly ByteArrayNetSerializable random
    GlobalNamespace::ByteArrayNetSerializable* _get_random();
    // Set instance field: public readonly ByteArrayNetSerializable random
    void _set_random(GlobalNamespace::ByteArrayNetSerializable* value);
    // Get instance field: public readonly ByteArrayNetSerializable publicKey
    GlobalNamespace::ByteArrayNetSerializable* _get_publicKey();
    // Set instance field: public readonly ByteArrayNetSerializable publicKey
    void _set_publicKey(GlobalNamespace::ByteArrayNetSerializable* value);
    // Get instance field: public GameplayServerConfiguration configuration
    GlobalNamespace::GameplayServerConfiguration _get_configuration();
    // Set instance field: public GameplayServerConfiguration configuration
    void _set_configuration(GlobalNamespace::GameplayServerConfiguration value);
    // static public IVersionedPacketPool`1<MasterServer.UserServerStatusUpdateRequest> get_pool()
    // Offset: 0x2137AC8
    static GlobalNamespace::IVersionedPacketPool_1<MasterServer::UserServerStatusUpdateRequest*>* get_pool();
    // public System.String get_userId()
    // Offset: 0x2137B10
    ::Il2CppString* get_userId();
    // private System.Void set_userId(System.String value)
    // Offset: 0x2137B18
    void set_userId(::Il2CppString* value);
    // public System.String get_userName()
    // Offset: 0x2137B20
    ::Il2CppString* get_userName();
    // private System.Void set_userName(System.String value)
    // Offset: 0x2137B28
    void set_userName(::Il2CppString* value);
    // protected System.UInt32 get_version()
    // Offset: 0x2137B30
    uint get_version();
    // public MasterServer.UserServerStatusUpdateRequest Init(System.String serverName, System.String userId, System.String userName, System.String secret, System.String password, System.Byte[] random, System.Byte[] publicKey, System.Int32 currentPlayerCount, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration)
    // Offset: 0x2137ECC
    MasterServer::UserServerStatusUpdateRequest* Init(::Il2CppString* serverName, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, ::Il2CppString* password, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, int currentPlayerCount, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.Void .ctor()
    // Offset: 0x2137F58
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserServerStatusUpdateRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserServerStatusUpdateRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserServerStatusUpdateRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2137B38
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2137C6C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x2137DF0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
  }; // MasterServer.UserServerStatusUpdateRequest
  #pragma pack(pop)
  static check_size<sizeof(UserServerStatusUpdateRequest), 112 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __MasterServer_UserServerStatusUpdateRequestSizeCheck;
  static_assert(sizeof(UserServerStatusUpdateRequest) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserServerStatusUpdateRequest*, "MasterServer", "UserServerStatusUpdateRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IVersionedPacketPool_1<MasterServer::UserServerStatusUpdateRequest*>* (*)()>(&MasterServer::UserServerStatusUpdateRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::UserServerStatusUpdateRequest::*)()>(&MasterServer::UserServerStatusUpdateRequest::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateRequest*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::set_userId
// Il2CppName: set_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserServerStatusUpdateRequest::*)(::Il2CppString*)>(&MasterServer::UserServerStatusUpdateRequest::set_userId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateRequest*), "set_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::UserServerStatusUpdateRequest::*)()>(&MasterServer::UserServerStatusUpdateRequest::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateRequest*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::set_userName
// Il2CppName: set_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserServerStatusUpdateRequest::*)(::Il2CppString*)>(&MasterServer::UserServerStatusUpdateRequest::set_userName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateRequest*), "set_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (MasterServer::UserServerStatusUpdateRequest::*)()>(&MasterServer::UserServerStatusUpdateRequest::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateRequest*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::UserServerStatusUpdateRequest* (MasterServer::UserServerStatusUpdateRequest::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Array<uint8_t>*, ::Array<uint8_t>*, int, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&MasterServer::UserServerStatusUpdateRequest::Init)> {
  static const MethodInfo* get() {
    static auto* serverName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* publicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* currentPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverName, userId, userName, secret, password, random, publicKey, currentPlayerCount, selectionMask, configuration});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserServerStatusUpdateRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::UserServerStatusUpdateRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserServerStatusUpdateRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::UserServerStatusUpdateRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserServerStatusUpdateRequest::*)()>(&MasterServer::UserServerStatusUpdateRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
