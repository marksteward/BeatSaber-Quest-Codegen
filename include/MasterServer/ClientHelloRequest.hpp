// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IHandshakeClientToServerMessage
#include "MasterServer/IHandshakeClientToServerMessage.hpp"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.ClientHelloRequest
  // [] Offset: FFFFFFFF
  class ClientHelloRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IHandshakeClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // public readonly System.Byte[] random
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* random;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: ClientHelloRequest
    ClientHelloRequest(::Array<uint8_t>* random_ = {}) noexcept : random{random_} {}
    // Creating interface conversion operator: operator MasterServer::IHandshakeClientToServerMessage
    operator MasterServer::IHandshakeClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IHandshakeClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.ClientHelloRequest> get_pool()
    // Offset: 0x1AD3F10
    static GlobalNamespace::PacketPool_1<MasterServer::ClientHelloRequest*>* get_pool();
    // public MasterServer.ClientHelloRequest Init(System.Byte[] random)
    // Offset: 0x1AD3F58
    MasterServer::ClientHelloRequest* Init(::Array<uint8_t>* random);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1AD3F9C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1AD3FD8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x1AD401C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1AD4078
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientHelloRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::ClientHelloRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientHelloRequest*, creationType>()));
    }
  }; // MasterServer.ClientHelloRequest
  static check_size<sizeof(ClientHelloRequest), 24 + sizeof(::Array<uint8_t>*)> __MasterServer_ClientHelloRequestSizeCheck;
  static_assert(sizeof(ClientHelloRequest) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ClientHelloRequest*, "MasterServer", "ClientHelloRequest");
