// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerAcknowledgeMessage
#include "GlobalNamespace/BaseMasterServerAcknowledgeMessage.hpp"
// Including type: MasterServer.IHandshakeMessage
#include "MasterServer/IHandshakeMessage.hpp"
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
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.HandshakeMessageReceivedAcknowledge
  class HandshakeMessageReceivedAcknowledge : public GlobalNamespace::BaseMasterServerAcknowledgeMessage/*, public MasterServer::IHandshakeMessage*/ {
    public:
    // Creating value type constructor for type: HandshakeMessageReceivedAcknowledge
    HandshakeMessageReceivedAcknowledge() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IHandshakeMessage
    operator MasterServer::IHandshakeMessage() noexcept {
      return *reinterpret_cast<MasterServer::IHandshakeMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.HandshakeMessageReceivedAcknowledge> get_pool()
    // Offset: 0x12A8934
    static GlobalNamespace::PacketPool_1<MasterServer::HandshakeMessageReceivedAcknowledge*>* get_pool();
    // public override System.Void Release()
    // Offset: 0x12A897C
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Void BaseMasterServerResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12A89D8
    // Implemented from: BaseMasterServerAcknowledgeMessage
    // Base method: System.Void BaseMasterServerAcknowledgeMessage::.ctor()
    // Base method: System.Void BaseMasterServerResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandshakeMessageReceivedAcknowledge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::HandshakeMessageReceivedAcknowledge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandshakeMessageReceivedAcknowledge*, creationType>()));
    }
  }; // MasterServer.HandshakeMessageReceivedAcknowledge
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::HandshakeMessageReceivedAcknowledge*, "MasterServer", "HandshakeMessageReceivedAcknowledge");
