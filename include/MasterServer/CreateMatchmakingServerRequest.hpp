// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerServerToClientMessage
#include "MasterServer/IDedicatedServerServerToClientMessage.hpp"
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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
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
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.CreateMatchmakingServerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class CreateMatchmakingServerRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IDedicatedServerServerToClientMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // Nested type: MasterServer::CreateMatchmakingServerRequest::V4
    class V4;
    // public System.String secret
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Net.IPEndPoint userEndPoint
    // Size: 0x8
    // Offset: 0x48
    System::Net::IPEndPoint* userEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public readonly ByteArrayNetSerializable userRandom
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ByteArrayNetSerializable* userRandom;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable userPublicKey
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::ByteArrayNetSerializable* userPublicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x60
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // Creating value type constructor for type: CreateMatchmakingServerRequest
    CreateMatchmakingServerRequest(::Il2CppString* secret_ = {}, GlobalNamespace::BeatmapLevelSelectionMask selectionMask_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, System::Net::IPEndPoint* userEndPoint_ = {}, GlobalNamespace::ByteArrayNetSerializable* userRandom_ = {}, GlobalNamespace::ByteArrayNetSerializable* userPublicKey_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}) noexcept : secret{secret_}, selectionMask{selectionMask_}, userId{userId_}, userName{userName_}, userEndPoint{userEndPoint_}, userRandom{userRandom_}, userPublicKey{userPublicKey_}, configuration{configuration_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerServerToClientMessage
    operator MasterServer::IDedicatedServerServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerServerToClientMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field: public System.String secret
    ::Il2CppString* _get_secret();
    // Set instance field: public System.String secret
    void _set_secret(::Il2CppString* value);
    // Get instance field: public BeatmapLevelSelectionMask selectionMask
    GlobalNamespace::BeatmapLevelSelectionMask _get_selectionMask();
    // Set instance field: public BeatmapLevelSelectionMask selectionMask
    void _set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value);
    // Get instance field: public System.String userId
    ::Il2CppString* _get_userId();
    // Set instance field: public System.String userId
    void _set_userId(::Il2CppString* value);
    // Get instance field: public System.String userName
    ::Il2CppString* _get_userName();
    // Set instance field: public System.String userName
    void _set_userName(::Il2CppString* value);
    // Get instance field: public System.Net.IPEndPoint userEndPoint
    System::Net::IPEndPoint* _get_userEndPoint();
    // Set instance field: public System.Net.IPEndPoint userEndPoint
    void _set_userEndPoint(System::Net::IPEndPoint* value);
    // Get instance field: public readonly ByteArrayNetSerializable userRandom
    GlobalNamespace::ByteArrayNetSerializable* _get_userRandom();
    // Set instance field: public readonly ByteArrayNetSerializable userRandom
    void _set_userRandom(GlobalNamespace::ByteArrayNetSerializable* value);
    // Get instance field: public readonly ByteArrayNetSerializable userPublicKey
    GlobalNamespace::ByteArrayNetSerializable* _get_userPublicKey();
    // Set instance field: public readonly ByteArrayNetSerializable userPublicKey
    void _set_userPublicKey(GlobalNamespace::ByteArrayNetSerializable* value);
    // Get instance field: public GameplayServerConfiguration configuration
    GlobalNamespace::GameplayServerConfiguration _get_configuration();
    // Set instance field: public GameplayServerConfiguration configuration
    void _set_configuration(GlobalNamespace::GameplayServerConfiguration value);
    // static public IVersionedPacketPool`1<MasterServer.CreateMatchmakingServerRequest> get_pool()
    // Offset: 0x12D0ED8
    static GlobalNamespace::IVersionedPacketPool_1<MasterServer::CreateMatchmakingServerRequest*>* get_pool();
    // protected System.UInt32 get_version()
    // Offset: 0x12D0F20
    uint get_version();
    // public MasterServer.CreateMatchmakingServerRequest Init(System.String secret, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.String userId, System.String userName, System.Net.IPEndPoint userEndPoint, System.Byte[] userRandom, System.Byte[] userPublicKey)
    // Offset: 0x12D1264
    MasterServer::CreateMatchmakingServerRequest* Init(::Il2CppString* secret, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, ::Il2CppString* userId, ::Il2CppString* userName, System::Net::IPEndPoint* userEndPoint, ::Array<uint8_t>* userRandom, ::Array<uint8_t>* userPublicKey);
    // public System.Void .ctor()
    // Offset: 0x12D12DC
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateMatchmakingServerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::CreateMatchmakingServerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateMatchmakingServerRequest*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x12D0F28
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12D1004
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12D1124
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
  }; // MasterServer.CreateMatchmakingServerRequest
  #pragma pack(pop)
  static check_size<sizeof(CreateMatchmakingServerRequest), 96 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __MasterServer_CreateMatchmakingServerRequestSizeCheck;
  static_assert(sizeof(CreateMatchmakingServerRequest) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::CreateMatchmakingServerRequest*, "MasterServer", "CreateMatchmakingServerRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IVersionedPacketPool_1<MasterServer::CreateMatchmakingServerRequest*>* (*)()>(&MasterServer::CreateMatchmakingServerRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerRequest::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (MasterServer::CreateMatchmakingServerRequest::*)()>(&MasterServer::CreateMatchmakingServerRequest::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerRequest*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::CreateMatchmakingServerRequest* (MasterServer::CreateMatchmakingServerRequest::*)(::Il2CppString*, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, ::Il2CppString*, ::Il2CppString*, System::Net::IPEndPoint*, ::Array<uint8_t>*, ::Array<uint8_t>*)>(&MasterServer::CreateMatchmakingServerRequest::Init)> {
  static const MethodInfo* get() {
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* userRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* userPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secret, selectionMask, configuration, userId, userName, userEndPoint, userRandom, userPublicKey});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateMatchmakingServerRequest::*)()>(&MasterServer::CreateMatchmakingServerRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateMatchmakingServerRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::CreateMatchmakingServerRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateMatchmakingServerRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::CreateMatchmakingServerRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
