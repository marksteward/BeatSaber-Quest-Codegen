// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IDedicatedServerMessage
#include "MasterServer/IDedicatedServerMessage.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IDedicatedServerServerToClientMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IDedicatedServerServerToClientMessage : public ::Il2CppObject/*, public MasterServer::IDedicatedServerMessage*/ {
    public:
    // Creating value type constructor for type: IDedicatedServerServerToClientMessage
    IDedicatedServerServerToClientMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerMessage
    operator MasterServer::IDedicatedServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerMessage*>(this);
    }
  }; // MasterServer.IDedicatedServerServerToClientMessage
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IDedicatedServerServerToClientMessage*, "MasterServer", "IDedicatedServerServerToClientMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
