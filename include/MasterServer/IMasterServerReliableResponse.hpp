// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.IMasterServerReliableRequest
#include "MasterServer/IMasterServerReliableRequest.hpp"
// Including type: MasterServer.IMasterServerResponse
#include "MasterServer/IMasterServerResponse.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IMasterServerReliableResponse
  class IMasterServerReliableResponse/*, public MasterServer::IMasterServerReliableRequest, public MasterServer::IMasterServerResponse*/ {
    public:
    // Creating value type constructor for type: IMasterServerReliableResponse
    IMasterServerReliableResponse() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerReliableRequest
    operator MasterServer::IMasterServerReliableRequest() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerReliableRequest*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IMasterServerResponse
    operator MasterServer::IMasterServerResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerResponse*>(this);
    }
    // public MasterServer.IMasterServerReliableResponse WithRequestAndResponseId(System.UInt32 requestId, System.UInt32 responseId)
    // Offset: 0xFFFFFFFF
    MasterServer::IMasterServerReliableResponse* WithRequestAndResponseId(uint requestId, uint responseId);
  }; // MasterServer.IMasterServerReliableResponse
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IMasterServerReliableResponse*, "MasterServer", "IMasterServerReliableResponse");
// Writing MetadataGetter for method: MasterServer::IMasterServerReliableResponse::WithRequestAndResponseId
// Il2CppName: WithRequestAndResponseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::IMasterServerReliableResponse* (MasterServer::IMasterServerReliableResponse::*)(uint, uint)>(&MasterServer::IMasterServerReliableResponse::WithRequestAndResponseId)> {
  const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* responseId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerReliableResponse*), "WithRequestAndResponseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId, responseId});
  }
};
