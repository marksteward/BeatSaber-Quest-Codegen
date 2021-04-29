// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerUnreliableMessage
#include "MasterServer/IMasterServerUnreliableMessage.hpp"
// Including type: MasterServer.IDedicatedServerServerToClientMessage
#include "MasterServer/IDedicatedServerServerToClientMessage.hpp"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerHeartbeatResponse
  class DedicatedServerHeartbeatResponse : public ::Il2CppObject/*, public MasterServer::IMasterServerUnreliableMessage, public MasterServer::IDedicatedServerServerToClientMessage*/ {
    public:
    // Creating value type constructor for type: DedicatedServerHeartbeatResponse
    DedicatedServerHeartbeatResponse() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerUnreliableMessage
    operator MasterServer::IMasterServerUnreliableMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerServerToClientMessage
    operator MasterServer::IDedicatedServerServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerServerToClientMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.DedicatedServerHeartbeatResponse> get_pool()
    // Offset: 0x12A6E68
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerHeartbeatResponse*>* get_pool();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12A6EB0
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12A6EB4
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x12A6EB8
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12A6F14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerHeartbeatResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::DedicatedServerHeartbeatResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerHeartbeatResponse*, creationType>()));
    }
  }; // MasterServer.DedicatedServerHeartbeatResponse
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerHeartbeatResponse*, "MasterServer", "DedicatedServerHeartbeatResponse");
