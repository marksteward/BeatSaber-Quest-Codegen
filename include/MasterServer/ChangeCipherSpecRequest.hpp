// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IHandshakeServerToClientMessage
#include "MasterServer/IHandshakeServerToClientMessage.hpp"
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.ChangeCipherSpecRequest
  class ChangeCipherSpecRequest : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IHandshakeServerToClientMessage*/ {
    public:
    // Creating value type constructor for type: ChangeCipherSpecRequest
    ChangeCipherSpecRequest() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IHandshakeServerToClientMessage
    operator MasterServer::IHandshakeServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IHandshakeServerToClientMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.ChangeCipherSpecRequest> get_pool()
    // Offset: 0x12A5D10
    static GlobalNamespace::PacketPool_1<MasterServer::ChangeCipherSpecRequest*>* get_pool();
    // public override System.Void Release()
    // Offset: 0x12A5D58
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12A5DB4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChangeCipherSpecRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::ChangeCipherSpecRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChangeCipherSpecRequest*, creationType>()));
    }
  }; // MasterServer.ChangeCipherSpecRequest
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ChangeCipherSpecRequest*, "MasterServer", "ChangeCipherSpecRequest");
