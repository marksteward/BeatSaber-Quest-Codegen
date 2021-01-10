// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IDedicatedServerClientToServerMessage
#include "MasterServer/IDedicatedServerClientToServerMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
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
  // Size: 0x50
  // Autogenerated type: MasterServer.GetAvailableRelayServerResponse
  // [] Offset: FFFFFFFF
  class GetAvailableRelayServerResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IDedicatedServerClientToServerMessage*/ {
    public:
    // Nested type: MasterServer::GetAvailableRelayServerResponse::Result
    struct Result;
    // Size: 0x4
    // Autogenerated type: MasterServer.GetAvailableRelayServerResponse/Result
    // [] Offset: FFFFFFFF
    struct Result/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.GetAvailableRelayServerResponse/Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.GetAvailableRelayServerResponse/Result Success
      static MasterServer::GetAvailableRelayServerResponse::Result _get_Success();
      // Set static field: static public MasterServer.GetAvailableRelayServerResponse/Result Success
      static void _set_Success(MasterServer::GetAvailableRelayServerResponse::Result value);
      // static field const value: static public MasterServer.GetAvailableRelayServerResponse/Result NoRelaysAvailable
      static constexpr const int NoRelaysAvailable = 1;
      // Get static field: static public MasterServer.GetAvailableRelayServerResponse/Result NoRelaysAvailable
      static MasterServer::GetAvailableRelayServerResponse::Result _get_NoRelaysAvailable();
      // Set static field: static public MasterServer.GetAvailableRelayServerResponse/Result NoRelaysAvailable
      static void _set_NoRelaysAvailable(MasterServer::GetAvailableRelayServerResponse::Result value);
      // static field const value: static public MasterServer.GetAvailableRelayServerResponse/Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.GetAvailableRelayServerResponse/Result UnknownError
      static MasterServer::GetAvailableRelayServerResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.GetAvailableRelayServerResponse/Result UnknownError
      static void _set_UnknownError(MasterServer::GetAvailableRelayServerResponse::Result value);
    }; // MasterServer.GetAvailableRelayServerResponse/Result
    static check_size<sizeof(GetAvailableRelayServerResponse::Result), 0 + sizeof(int)> __MasterServer_GetAvailableRelayServerResponse_ResultSizeCheck;
    static_assert(sizeof(GetAvailableRelayServerResponse::Result) == 0x4);
    // public MasterServer.GetAvailableRelayServerResponse/Result result
    // Size: 0x4
    // Offset: 0x18
    MasterServer::GetAvailableRelayServerResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::GetAvailableRelayServerResponse::Result) == 0x4);
    // Padding between fields: result and: dedicatedServerId
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDAA4D4
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* dedicatedServerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDAA4E4
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    int64_t dedicatedServerCreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 port
    // Size: 0x4
    // Offset: 0x38
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: random
    char __padding4[0x4] = {};
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: GetAvailableRelayServerResponse
    GetAvailableRelayServerResponse(MasterServer::GetAvailableRelayServerResponse::Result result_ = {}, ::Il2CppString* dedicatedServerId_ = {}, int64_t dedicatedServerCreationTime_ = {}, ::Il2CppString* id_ = {}, int port_ = {}, GlobalNamespace::ByteArrayNetSerializable* random_ = {}, GlobalNamespace::ByteArrayNetSerializable* publicKey_ = {}) noexcept : result{result_}, dedicatedServerId{dedicatedServerId_}, dedicatedServerCreationTime{dedicatedServerCreationTime_}, id{id_}, port{port_}, random{random_}, publicKey{publicKey_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerClientToServerMessage
    operator MasterServer::IDedicatedServerClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerClientToServerMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.GetAvailableRelayServerResponse> get_pool()
    // Offset: 0x1AD633C
    static GlobalNamespace::PacketPool_1<MasterServer::GetAvailableRelayServerResponse*>* get_pool();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x1AD6424
    void set_dedicatedServerId(::Il2CppString* value);
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x1AD6434
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.GetAvailableRelayServerResponse InitForFailure(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, MasterServer.GetAvailableRelayServerResponse/Result result)
    // Offset: 0x1AD6690
    MasterServer::GetAvailableRelayServerResponse* InitForFailure(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, MasterServer::GetAvailableRelayServerResponse::Result result);
    // public MasterServer.GetAvailableRelayServerResponse InitForSuccess(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.String id, System.Int32 port, System.Byte[] random, System.Byte[] publicKey)
    // Offset: 0x1AD66D0
    MasterServer::GetAvailableRelayServerResponse* InitForSuccess(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, int port, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey);
    // public override System.Byte get_resultCode()
    // Offset: 0x1AD6384
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x1AD638C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.String get_dedicatedServerId()
    // Offset: 0x1AD641C
    // Implemented from: MasterServer.IDedicatedServerClientToServerMessage
    // Base method: System.String IDedicatedServerClientToServerMessage::get_dedicatedServerId()
    ::Il2CppString* get_dedicatedServerId();
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x1AD642C
    // Implemented from: MasterServer.IDedicatedServerClientToServerMessage
    // Base method: System.Int64 IDedicatedServerClientToServerMessage::get_dedicatedServerCreationTime()
    int64_t get_dedicatedServerCreationTime();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1AD643C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1AD652C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x1AD6614
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1AD6770
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetAvailableRelayServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::GetAvailableRelayServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetAvailableRelayServerResponse*, creationType>()));
    }
  }; // MasterServer.GetAvailableRelayServerResponse
  static check_size<sizeof(GetAvailableRelayServerResponse), 72 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_GetAvailableRelayServerResponseSizeCheck;
  static_assert(sizeof(GetAvailableRelayServerResponse) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetAvailableRelayServerResponse*, "MasterServer", "GetAvailableRelayServerResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetAvailableRelayServerResponse::Result, "MasterServer", "GetAvailableRelayServerResponse/Result");
#pragma pack(pop)
