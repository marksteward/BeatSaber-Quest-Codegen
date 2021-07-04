// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.CreateMatchmakingServerRequest
#include "MasterServer/CreateMatchmakingServerRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.CreateMatchmakingServerRequest/V3
  class CreateMatchmakingServerRequest::V3 : public MasterServer::CreateMatchmakingServerRequest {
    public:
    // Creating value type constructor for type: V3
    V3() noexcept {}
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12D9BBC
    // Implemented from: MasterServer.CreateMatchmakingServerRequest
    // Base method: System.Void CreateMatchmakingServerRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12D9C80
    // Implemented from: MasterServer.CreateMatchmakingServerRequest
    // Base method: System.Void CreateMatchmakingServerRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x12D9D18
    // Implemented from: MasterServer.CreateMatchmakingServerRequest
    // Base method: System.Void CreateMatchmakingServerRequest::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateMatchmakingServerRequest::V3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::CreateMatchmakingServerRequest::V3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateMatchmakingServerRequest::V3*, creationType>()));
    }
  }; // MasterServer.CreateMatchmakingServerRequest/V3
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::CreateMatchmakingServerRequest::V3*, "MasterServer", "CreateMatchmakingServerRequest/V3");
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerRequest::V3::Serialize
// Il2CppName: Serialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerRequest::V3::Deserialize
// Il2CppName: Deserialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerRequest::V3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
