// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
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
  // Autogenerated type: MasterServer.PrepareForConnectionRequest
  class PrepareForConnectionRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IUserServerToClientMessage*/ {
    public:
    // public System.String userId
    // Offset: 0x18
    ::Il2CppString* userId;
    // public System.String userName
    // Offset: 0x20
    ::Il2CppString* userName;
    // public System.Net.IPEndPoint remoteEndPoint
    // Offset: 0x28
    System::Net::IPEndPoint* remoteEndPoint;
    // public readonly ByteArrayNetSerializable random
    // Offset: 0x30
    GlobalNamespace::ByteArrayNetSerializable* random;
    // public readonly ByteArrayNetSerializable publicKey
    // Offset: 0x38
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // public System.Boolean isConnectionOwner
    // Offset: 0x40
    bool isConnectionOwner;
    // public System.Boolean isDedicatedServer
    // Offset: 0x41
    bool isDedicatedServer;
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.PrepareForConnectionRequest> get_pool()
    // Offset: 0x2122750
    static GlobalNamespace::PacketPool_1<MasterServer::PrepareForConnectionRequest*>* get_pool();
    // public MasterServer.PrepareForConnectionRequest Init(System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.Byte[] random, System.Byte[] publicKey, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer)
    // Offset: 0x21283B4
    MasterServer::PrepareForConnectionRequest* Init(::Il2CppString* userId, ::Il2CppString* userName, System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, bool isConnectionOwner, bool isDedicatedServer);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x212846C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2128514
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x21285E8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x2128664
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    static PrepareForConnectionRequest* New_ctor();
  }; // MasterServer.PrepareForConnectionRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::PrepareForConnectionRequest*, "MasterServer", "PrepareForConnectionRequest");
#pragma pack(pop)