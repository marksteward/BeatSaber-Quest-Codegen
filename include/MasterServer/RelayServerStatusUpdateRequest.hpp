// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerClientToServerMessage
#include "MasterServer/IDedicatedServerClientToServerMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
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
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.RelayServerStatusUpdateRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class RelayServerStatusUpdateRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IDedicatedServerClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* dedicatedServerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    int64_t dedicatedServerCreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 currentPlayerCount
    // Size: 0x4
    // Offset: 0x30
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RelayServerStatusUpdateRequest
    RelayServerStatusUpdateRequest(::Il2CppString* dedicatedServerId_ = {}, int64_t dedicatedServerCreationTime_ = {}, ::Il2CppString* id_ = {}, int currentPlayerCount_ = {}) noexcept : dedicatedServerId{dedicatedServerId_}, dedicatedServerCreationTime{dedicatedServerCreationTime_}, id{id_}, currentPlayerCount{currentPlayerCount_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerClientToServerMessage
    operator MasterServer::IDedicatedServerClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.RelayServerStatusUpdateRequest> get_pool()
    // Offset: 0x12D6164
    static GlobalNamespace::PacketPool_1<MasterServer::RelayServerStatusUpdateRequest*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x12DB560
    ::Il2CppString* get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x12DB568
    void set_dedicatedServerId(::Il2CppString* value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x12DB570
    int64_t get_dedicatedServerCreationTime();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x12DB578
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.RelayServerStatusUpdateRequest Init(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.String id, System.Int32 currentPlayerCount)
    // Offset: 0x12DB6B8
    MasterServer::RelayServerStatusUpdateRequest* Init(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, int currentPlayerCount);
    // public System.Void .ctor()
    // Offset: 0x12DB6C8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RelayServerStatusUpdateRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::RelayServerStatusUpdateRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RelayServerStatusUpdateRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12DB580
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12DB5EC
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12DB65C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
  }; // MasterServer.RelayServerStatusUpdateRequest
  #pragma pack(pop)
  static check_size<sizeof(RelayServerStatusUpdateRequest), 48 + sizeof(int)> __MasterServer_RelayServerStatusUpdateRequestSizeCheck;
  static_assert(sizeof(RelayServerStatusUpdateRequest) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::RelayServerStatusUpdateRequest*, "MasterServer", "RelayServerStatusUpdateRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::RelayServerStatusUpdateRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::RelayServerStatusUpdateRequest*>* (*)()>(&MasterServer::RelayServerStatusUpdateRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::RelayServerStatusUpdateRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::RelayServerStatusUpdateRequest::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::RelayServerStatusUpdateRequest::*)()>(&MasterServer::RelayServerStatusUpdateRequest::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::RelayServerStatusUpdateRequest*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::RelayServerStatusUpdateRequest::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::RelayServerStatusUpdateRequest::*)(::Il2CppString*)>(&MasterServer::RelayServerStatusUpdateRequest::set_dedicatedServerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::RelayServerStatusUpdateRequest*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::RelayServerStatusUpdateRequest::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::RelayServerStatusUpdateRequest::*)()>(&MasterServer::RelayServerStatusUpdateRequest::get_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::RelayServerStatusUpdateRequest*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::RelayServerStatusUpdateRequest::set_dedicatedServerCreationTime
// Il2CppName: set_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::RelayServerStatusUpdateRequest::*)(int64_t)>(&MasterServer::RelayServerStatusUpdateRequest::set_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::RelayServerStatusUpdateRequest*), "set_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::RelayServerStatusUpdateRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::RelayServerStatusUpdateRequest* (MasterServer::RelayServerStatusUpdateRequest::*)(::Il2CppString*, int64_t, ::Il2CppString*, int)>(&MasterServer::RelayServerStatusUpdateRequest::Init)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* currentPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::RelayServerStatusUpdateRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime, id, currentPlayerCount});
  }
};
// Writing MetadataGetter for method: MasterServer::RelayServerStatusUpdateRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::RelayServerStatusUpdateRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::RelayServerStatusUpdateRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::RelayServerStatusUpdateRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::RelayServerStatusUpdateRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::RelayServerStatusUpdateRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::RelayServerStatusUpdateRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::RelayServerStatusUpdateRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::RelayServerStatusUpdateRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::RelayServerStatusUpdateRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::RelayServerStatusUpdateRequest::*)()>(&MasterServer::RelayServerStatusUpdateRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::RelayServerStatusUpdateRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
