// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IDedicatedServerClientToServerMessage
#include "MasterServer/IDedicatedServerClientToServerMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
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
  // Autogenerated type: MasterServer.GetAvailableRelayServerResponse
  class GetAvailableRelayServerResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IDedicatedServerClientToServerMessage*/ {
    public:
    // Nested type: MasterServer::GetAvailableRelayServerResponse::Result
    struct Result;
    // Autogenerated type: MasterServer.GetAvailableRelayServerResponse/Result
    struct Result : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
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
    // public MasterServer.GetAvailableRelayServerResponse/Result result
    // Offset: 0x18
    MasterServer::GetAvailableRelayServerResponse::Result result;
    // private System.String <dedicatedServerId>k__BackingField
    // Offset: 0x20
    ::Il2CppString* dedicatedServerId;
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Offset: 0x28
    int64_t dedicatedServerCreationTime;
    // public System.String id
    // Offset: 0x30
    ::Il2CppString* id;
    // public System.Int32 port
    // Offset: 0x38
    int port;
    // public readonly ByteArrayNetSerializable random
    // Offset: 0x40
    GlobalNamespace::ByteArrayNetSerializable* random;
    // public readonly ByteArrayNetSerializable publicKey
    // Offset: 0x48
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerClientToServerMessage
    operator MasterServer::IDedicatedServerClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerClientToServerMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.GetAvailableRelayServerResponse> get_pool()
    // Offset: 0x211FD34
    static GlobalNamespace::PacketPool_1<MasterServer::GetAvailableRelayServerResponse*>* get_pool();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x211FE1C
    void set_dedicatedServerId(::Il2CppString* value);
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x211FE2C
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.GetAvailableRelayServerResponse InitForFailure(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, MasterServer.GetAvailableRelayServerResponse/Result result)
    // Offset: 0x2120088
    MasterServer::GetAvailableRelayServerResponse* InitForFailure(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, MasterServer::GetAvailableRelayServerResponse::Result result);
    // public MasterServer.GetAvailableRelayServerResponse InitForSuccess(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.String id, System.Int32 port, System.Byte[] random, System.Byte[] publicKey)
    // Offset: 0x21200C8
    MasterServer::GetAvailableRelayServerResponse* InitForSuccess(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, int port, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey);
    // public override System.Byte get_resultCode()
    // Offset: 0x211FD7C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x211FD84
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.String get_dedicatedServerId()
    // Offset: 0x211FE14
    // Implemented from: MasterServer.IDedicatedServerClientToServerMessage
    // Base method: System.String IDedicatedServerClientToServerMessage::get_dedicatedServerId()
    ::Il2CppString* get_dedicatedServerId();
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x211FE24
    // Implemented from: MasterServer.IDedicatedServerClientToServerMessage
    // Base method: System.Int64 IDedicatedServerClientToServerMessage::get_dedicatedServerCreationTime()
    int64_t get_dedicatedServerCreationTime();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x211FE34
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x211FF24
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x212000C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x2120168
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    static GetAvailableRelayServerResponse* New_ctor();
  }; // MasterServer.GetAvailableRelayServerResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetAvailableRelayServerResponse*, "MasterServer", "GetAvailableRelayServerResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetAvailableRelayServerResponse::Result, "MasterServer", "GetAvailableRelayServerResponse/Result");
#pragma pack(pop)