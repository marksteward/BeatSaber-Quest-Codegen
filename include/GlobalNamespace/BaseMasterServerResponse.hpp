// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerResponse
#include "MasterServer/IMasterServerResponse.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BaseMasterServerResponse
  class BaseMasterServerResponse : public ::Il2CppObject/*, public MasterServer::IMasterServerResponse*/ {
    public:
    // private System.UInt32 <responseId>k__BackingField
    // Offset: 0x10
    uint responseId;
    // Creating interface conversion operator: operator MasterServer::IMasterServerResponse
    operator MasterServer::IMasterServerResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerResponse*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return responseId;
    }
    // private System.Void set_responseId(System.UInt32 value)
    // Offset: 0x2155CDC
    void set_responseId(uint value);
    // public System.UInt32 get_responseId()
    // Offset: 0x2155CD4
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.UInt32 IMasterServerResponse::get_responseId()
    uint get_responseId();
    // public System.Byte get_resultCode()
    // Offset: 0x2155CE4
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.Byte IMasterServerResponse::get_resultCode()
    uint8_t get_resultCode();
    // public System.String get_resultCodeString()
    // Offset: 0x2155CEC
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.String IMasterServerResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2155A8C
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2155AFC
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
    // private MasterServer.IMasterServerResponse MasterServer.IMasterServerResponse.WithResponseId(System.UInt32 responseId)
    // Offset: 0x2155D34
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: MasterServer.IMasterServerResponse IMasterServerResponse::WithResponseId(System.UInt32 responseId)
    MasterServer::IMasterServerResponse* MasterServer_IMasterServerResponse_WithResponseId(uint responseId);
    // protected System.Void .ctor()
    // Offset: 0x2155B38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BaseMasterServerResponse* New_ctor();
  }; // BaseMasterServerResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMasterServerResponse*, "", "BaseMasterServerResponse");
#pragma pack(pop)
