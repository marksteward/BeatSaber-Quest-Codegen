// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
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
  // Autogenerated type: MasterServer.BroadcastServerStatusResponse
  class BroadcastServerStatusResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IUserServerToClientMessage*/ {
    public:
    // Nested type: MasterServer::BroadcastServerStatusResponse::Result
    struct Result;
    // Autogenerated type: MasterServer.BroadcastServerStatusResponse/Result
    struct Result : public System::Enum {
      public:
      // public System.Byte value__
      // Offset: 0x0
      uint8_t value;
      // Creating value type constructor for type: Result
      constexpr Result(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.BroadcastServerStatusResponse/Result Success
      static constexpr const uint8_t Success = 0u;
      // Get static field: static public MasterServer.BroadcastServerStatusResponse/Result Success
      static MasterServer::BroadcastServerStatusResponse::Result _get_Success();
      // Set static field: static public MasterServer.BroadcastServerStatusResponse/Result Success
      static void _set_Success(MasterServer::BroadcastServerStatusResponse::Result value);
      // static field const value: static public MasterServer.BroadcastServerStatusResponse/Result SecretNotUnique
      static constexpr const uint8_t SecretNotUnique = 1u;
      // Get static field: static public MasterServer.BroadcastServerStatusResponse/Result SecretNotUnique
      static MasterServer::BroadcastServerStatusResponse::Result _get_SecretNotUnique();
      // Set static field: static public MasterServer.BroadcastServerStatusResponse/Result SecretNotUnique
      static void _set_SecretNotUnique(MasterServer::BroadcastServerStatusResponse::Result value);
      // static field const value: static public MasterServer.BroadcastServerStatusResponse/Result UnknownError
      static constexpr const uint8_t UnknownError = 2u;
      // Get static field: static public MasterServer.BroadcastServerStatusResponse/Result UnknownError
      static MasterServer::BroadcastServerStatusResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.BroadcastServerStatusResponse/Result UnknownError
      static void _set_UnknownError(MasterServer::BroadcastServerStatusResponse::Result value);
    }; // MasterServer.BroadcastServerStatusResponse/Result
    // public MasterServer.BroadcastServerStatusResponse/Result result
    // Offset: 0x18
    MasterServer::BroadcastServerStatusResponse::Result result;
    // public System.Net.IPEndPoint remoteEndPoint
    // Offset: 0x20
    System::Net::IPEndPoint* remoteEndPoint;
    // public System.String code
    // Offset: 0x28
    ::Il2CppString* code;
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.BroadcastServerStatusResponse> get_pool()
    // Offset: 0x211D548
    static GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerStatusResponse*>* get_pool();
    // public MasterServer.BroadcastServerStatusResponse InitForFailure(MasterServer.BroadcastServerStatusResponse/Result result)
    // Offset: 0x211D628
    MasterServer::BroadcastServerStatusResponse* InitForFailure(MasterServer::BroadcastServerStatusResponse::Result result);
    // public MasterServer.BroadcastServerStatusResponse InitForSuccess(System.Net.IPEndPoint remoteEndPoint, System.String code)
    // Offset: 0x211D6C0
    MasterServer::BroadcastServerStatusResponse* InitForSuccess(System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* code);
    // public override System.Byte get_resultCode()
    // Offset: 0x211D590
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x211D598
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x211D700
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x211D770
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x211D7F8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x211D854
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    static BroadcastServerStatusResponse* New_ctor();
  }; // MasterServer.BroadcastServerStatusResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BroadcastServerStatusResponse*, "MasterServer", "BroadcastServerStatusResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BroadcastServerStatusResponse::Result, "MasterServer", "BroadcastServerStatusResponse/Result");
#pragma pack(pop)