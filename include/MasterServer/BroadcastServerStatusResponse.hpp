// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.BroadcastServerStatusResponse
  class BroadcastServerStatusResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IUserServerToClientMessage*/ {
    public:
    // Nested type: MasterServer::BroadcastServerStatusResponse::Result
    struct Result;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.BroadcastServerStatusResponse/Result
    struct Result/*, public System::Enum*/ {
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // Creating value type constructor for type: Result
      constexpr Result(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
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
    #pragma pack(pop)
    static check_size<sizeof(BroadcastServerStatusResponse::Result), 0 + sizeof(uint8_t)> __MasterServer_BroadcastServerStatusResponse_ResultSizeCheck;
    static_assert(sizeof(BroadcastServerStatusResponse::Result) == 0x1);
    // public MasterServer.BroadcastServerStatusResponse/Result result
    // Size: 0x1
    // Offset: 0x18
    MasterServer::BroadcastServerStatusResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::BroadcastServerStatusResponse::Result) == 0x1);
    // Padding between fields: result and: remoteEndPoint
    char __padding0[0x7] = {};
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x20
    System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: BroadcastServerStatusResponse
    BroadcastServerStatusResponse(MasterServer::BroadcastServerStatusResponse::Result result_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, ::Il2CppString* code_ = {}) noexcept : result{result_}, remoteEndPoint{remoteEndPoint_}, code{code_} {}
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.BroadcastServerStatusResponse> get_pool()
    // Offset: 0x12A5A50
    static GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerStatusResponse*>* get_pool();
    // public MasterServer.BroadcastServerStatusResponse InitForFailure(MasterServer.BroadcastServerStatusResponse/Result result)
    // Offset: 0x12A5B30
    MasterServer::BroadcastServerStatusResponse* InitForFailure(MasterServer::BroadcastServerStatusResponse::Result result);
    // public MasterServer.BroadcastServerStatusResponse InitForSuccess(System.Net.IPEndPoint remoteEndPoint, System.String code)
    // Offset: 0x12A5BC8
    MasterServer::BroadcastServerStatusResponse* InitForSuccess(System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* code);
    // public override System.Byte get_resultCode()
    // Offset: 0x12A5A98
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x12A5AA0
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12A5BD4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12A5C44
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12A5CAC
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12A5D08
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BroadcastServerStatusResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BroadcastServerStatusResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BroadcastServerStatusResponse*, creationType>()));
    }
  }; // MasterServer.BroadcastServerStatusResponse
  #pragma pack(pop)
  static check_size<sizeof(BroadcastServerStatusResponse), 40 + sizeof(::Il2CppString*)> __MasterServer_BroadcastServerStatusResponseSizeCheck;
  static_assert(sizeof(BroadcastServerStatusResponse) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BroadcastServerStatusResponse*, "MasterServer", "BroadcastServerStatusResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BroadcastServerStatusResponse::Result, "MasterServer", "BroadcastServerStatusResponse/Result");
