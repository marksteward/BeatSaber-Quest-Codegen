// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerUnreliableMessage
#include "MasterServer/IMasterServerUnreliableMessage.hpp"
// Including type: MasterServer.IUserClientToServerMessage
#include "MasterServer/IUserClientToServerMessage.hpp"
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
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserServerHeartbeatRequest
  class UserServerHeartbeatRequest : public ::Il2CppObject/*, public MasterServer::IMasterServerUnreliableMessage, public MasterServer::IUserClientToServerMessage*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDF1210
    // private System.String <userId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF1220
    // private System.String <userName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String secret
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 currentPlayerCount
    // Size: 0x4
    // Offset: 0x28
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UserServerHeartbeatRequest
    UserServerHeartbeatRequest(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, ::Il2CppString* secret_ = {}, int currentPlayerCount_ = {}) noexcept : userId{userId_}, userName{userName_}, secret{secret_}, currentPlayerCount{currentPlayerCount_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerUnreliableMessage
    operator MasterServer::IMasterServerUnreliableMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IUserClientToServerMessage
    operator MasterServer::IUserClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserClientToServerMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.UserServerHeartbeatRequest> get_pool()
    // Offset: 0x14F8B60
    static GlobalNamespace::PacketPool_1<MasterServer::UserServerHeartbeatRequest*>* get_pool();
    // public System.String get_userId()
    // Offset: 0x14F8BA8
    ::Il2CppString* get_userId();
    // private System.Void set_userId(System.String value)
    // Offset: 0x14F8BB0
    void set_userId(::Il2CppString* value);
    // public System.String get_userName()
    // Offset: 0x14F8BB8
    ::Il2CppString* get_userName();
    // private System.Void set_userName(System.String value)
    // Offset: 0x14F8BC0
    void set_userName(::Il2CppString* value);
    // public MasterServer.UserServerHeartbeatRequest Init(System.String userId, System.String userName, System.String secret, System.Int32 currentPlayerCount)
    // Offset: 0x14F8BC8
    MasterServer::UserServerHeartbeatRequest* Init(::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, int currentPlayerCount);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x14F8BD8
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x14F8C3C
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x14F8CA4
    void Release();
    // public System.Void .ctor()
    // Offset: 0x14F8D00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserServerHeartbeatRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserServerHeartbeatRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserServerHeartbeatRequest*, creationType>()));
    }
  }; // MasterServer.UserServerHeartbeatRequest
  #pragma pack(pop)
  static check_size<sizeof(UserServerHeartbeatRequest), 40 + sizeof(int)> __MasterServer_UserServerHeartbeatRequestSizeCheck;
  static_assert(sizeof(UserServerHeartbeatRequest) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserServerHeartbeatRequest*, "MasterServer", "UserServerHeartbeatRequest");
// Writing MetadataGetter for method: MasterServer::UserServerHeartbeatRequest::get_pool
// Il2CppName: get_pool
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::UserServerHeartbeatRequest::get_userId
// Il2CppName: get_userId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::UserServerHeartbeatRequest::set_userId
// Il2CppName: set_userId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::UserServerHeartbeatRequest::get_userName
// Il2CppName: get_userName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::UserServerHeartbeatRequest::set_userName
// Il2CppName: set_userName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::UserServerHeartbeatRequest::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::UserServerHeartbeatRequest::Serialize
// Il2CppName: Serialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::UserServerHeartbeatRequest::Deserialize
// Il2CppName: Deserialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::UserServerHeartbeatRequest::Release
// Il2CppName: Release
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::UserServerHeartbeatRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
