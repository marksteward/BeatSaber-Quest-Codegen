// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.IMasterServerResponse
#include "MasterServer/IMasterServerResponse.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IMasterServerAcknowledgeMessage
  // [] Offset: FFFFFFFF
  class IMasterServerAcknowledgeMessage/*, public MasterServer::IMasterServerResponse*/ {
    public:
    // Creating value type constructor for type: IMasterServerAcknowledgeMessage
    IMasterServerAcknowledgeMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerResponse
    operator MasterServer::IMasterServerResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerResponse*>(this);
    }
    // public System.Boolean get_messageHandled()
    // Offset: 0xFFFFFFFF
    bool get_messageHandled();
  }; // MasterServer.IMasterServerAcknowledgeMessage
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IMasterServerAcknowledgeMessage*, "MasterServer", "IMasterServerAcknowledgeMessage");
