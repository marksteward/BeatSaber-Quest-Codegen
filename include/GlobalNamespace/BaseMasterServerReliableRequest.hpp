// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerReliableRequest
#include "MasterServer/IMasterServerReliableRequest.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: BaseMasterServerReliableRequest
  // [] Offset: FFFFFFFF
  class BaseMasterServerReliableRequest : public ::Il2CppObject/*, public MasterServer::IMasterServerReliableRequest*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDAA0B4
    // private System.UInt32 <requestId>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint requestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: BaseMasterServerReliableRequest
    BaseMasterServerReliableRequest(uint requestId_ = {}) noexcept : requestId{requestId_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerReliableRequest
    operator MasterServer::IMasterServerReliableRequest() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerReliableRequest*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return requestId;
    }
    // private System.Void set_requestId(System.UInt32 value)
    // Offset: 0x1B4361C
    void set_requestId(uint value);
    // public System.UInt32 get_requestId()
    // Offset: 0x1B43614
    // Implemented from: MasterServer.IMasterServerReliableRequest
    // Base method: System.UInt32 IMasterServerReliableRequest::get_requestId()
    uint get_requestId();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1B43624
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1B43648
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0xFFFFFFFF
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // private MasterServer.IMasterServerReliableRequest MasterServer.IMasterServerReliableRequest.WithRequestId(System.UInt32 requestId)
    // Offset: 0x1B4367C
    // Implemented from: MasterServer.IMasterServerReliableRequest
    // Base method: MasterServer.IMasterServerReliableRequest IMasterServerReliableRequest::WithRequestId(System.UInt32 requestId)
    MasterServer::IMasterServerReliableRequest* MasterServer_IMasterServerReliableRequest_WithRequestId(uint requestId);
    // protected System.Void .ctor()
    // Offset: 0x1B43684
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMasterServerReliableRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseMasterServerReliableRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMasterServerReliableRequest*, creationType>()));
    }
  }; // BaseMasterServerReliableRequest
  static check_size<sizeof(BaseMasterServerReliableRequest), 16 + sizeof(uint)> __GlobalNamespace_BaseMasterServerReliableRequestSizeCheck;
  static_assert(sizeof(BaseMasterServerReliableRequest) == 0x14);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMasterServerReliableRequest*, "", "BaseMasterServerReliableRequest");
