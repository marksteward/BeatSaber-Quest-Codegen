// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerReliableResponse
#include "MasterServer/IMasterServerReliableResponse.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: IMasterServerReliableRequest because it is already included!
  // Skipping declaration: IMasterServerResponse because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BaseMasterServerReliableResponse
  // [] Offset: FFFFFFFF
  class BaseMasterServerReliableResponse : public ::Il2CppObject/*, public MasterServer::IMasterServerReliableResponse*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDAA0C4
    // private System.UInt32 <requestId>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint requestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDAA0D4
    // private System.UInt32 <responseId>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    uint responseId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: BaseMasterServerReliableResponse
    BaseMasterServerReliableResponse(uint requestId_ = {}, uint responseId_ = {}) noexcept : requestId{requestId_}, responseId{responseId_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerReliableResponse
    operator MasterServer::IMasterServerReliableResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerReliableResponse*>(this);
    }
    // private System.Void set_requestId(System.UInt32 value)
    // Offset: 0x1B43694
    void set_requestId(uint value);
    // private System.Void set_responseId(System.UInt32 value)
    // Offset: 0x1B436A4
    void set_responseId(uint value);
    // public System.UInt32 get_requestId()
    // Offset: 0x1B4368C
    // Implemented from: MasterServer.IMasterServerReliableRequest
    // Base method: System.UInt32 IMasterServerReliableRequest::get_requestId()
    uint get_requestId();
    // public System.UInt32 get_responseId()
    // Offset: 0x1B4369C
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.UInt32 IMasterServerResponse::get_responseId()
    uint get_responseId();
    // public System.Byte get_resultCode()
    // Offset: 0x1B436AC
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.Byte IMasterServerResponse::get_resultCode()
    uint8_t get_resultCode();
    // public System.String get_resultCodeString()
    // Offset: 0x1B436B4
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.String IMasterServerResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1B436FC
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1B43740
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0xFFFFFFFF
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // private MasterServer.IMasterServerReliableRequest MasterServer.IMasterServerReliableRequest.WithRequestId(System.UInt32 requestId)
    // Offset: 0x1B43788
    // Implemented from: MasterServer.IMasterServerReliableRequest
    // Base method: MasterServer.IMasterServerReliableRequest IMasterServerReliableRequest::WithRequestId(System.UInt32 requestId)
    MasterServer::IMasterServerReliableRequest* MasterServer_IMasterServerReliableRequest_WithRequestId(uint requestId);
    // private MasterServer.IMasterServerResponse MasterServer.IMasterServerResponse.WithResponseId(System.UInt32 responseId)
    // Offset: 0x1B43790
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: MasterServer.IMasterServerResponse IMasterServerResponse::WithResponseId(System.UInt32 responseId)
    MasterServer::IMasterServerResponse* MasterServer_IMasterServerResponse_WithResponseId(uint responseId);
    // private MasterServer.IMasterServerReliableResponse MasterServer.IMasterServerReliableResponse.WithRequestAndResponseId(System.UInt32 requestId, System.UInt32 responseId)
    // Offset: 0x1B43798
    // Implemented from: MasterServer.IMasterServerReliableResponse
    // Base method: MasterServer.IMasterServerReliableResponse IMasterServerReliableResponse::WithRequestAndResponseId(System.UInt32 requestId, System.UInt32 responseId)
    MasterServer::IMasterServerReliableResponse* MasterServer_IMasterServerReliableResponse_WithRequestAndResponseId(uint requestId, uint responseId);
    // protected System.Void .ctor()
    // Offset: 0x1B437A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMasterServerReliableResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseMasterServerReliableResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMasterServerReliableResponse*, creationType>()));
    }
  }; // BaseMasterServerReliableResponse
  static check_size<sizeof(BaseMasterServerReliableResponse), 20 + sizeof(uint)> __GlobalNamespace_BaseMasterServerReliableResponseSizeCheck;
  static_assert(sizeof(BaseMasterServerReliableResponse) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMasterServerReliableResponse*, "", "BaseMasterServerReliableResponse");
