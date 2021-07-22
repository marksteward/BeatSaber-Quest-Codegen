// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerReliableResponse
#include "MasterServer/IMasterServerReliableResponse.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IMasterServerAuthenticateRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class IMasterServerAuthenticateRequest : public ::Il2CppObject/*, public MasterServer::IMasterServerReliableResponse*/ {
    public:
    // Creating value type constructor for type: IMasterServerAuthenticateRequest
    IMasterServerAuthenticateRequest() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerReliableResponse
    operator MasterServer::IMasterServerReliableResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerReliableResponse*>(this);
    }
  }; // MasterServer.IMasterServerAuthenticateRequest
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IMasterServerAuthenticateRequest*, "MasterServer", "IMasterServerAuthenticateRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
