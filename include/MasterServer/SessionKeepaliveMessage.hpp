// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerUnreliableMessage
#include "MasterServer/IMasterServerUnreliableMessage.hpp"
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
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
  // Autogenerated type: MasterServer.SessionKeepaliveMessage
  class SessionKeepaliveMessage : public ::Il2CppObject/*, public MasterServer::IMasterServerUnreliableMessage, public MasterServer::IUserMessage*/ {
    public:
    // Creating value type constructor for type: SessionKeepaliveMessage
    SessionKeepaliveMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerUnreliableMessage
    operator MasterServer::IMasterServerUnreliableMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IUserMessage
    operator MasterServer::IUserMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.SessionKeepaliveMessage> get_pool()
    // Offset: 0x12DDC84
    static GlobalNamespace::PacketPool_1<MasterServer::SessionKeepaliveMessage*>* get_pool();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12E4E08
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12E4E0C
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x12DDDE0
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12E4E10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionKeepaliveMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::SessionKeepaliveMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionKeepaliveMessage*, creationType>()));
    }
  }; // MasterServer.SessionKeepaliveMessage
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::SessionKeepaliveMessage*, "MasterServer", "SessionKeepaliveMessage");
// Writing MetadataGetter for method: MasterServer::SessionKeepaliveMessage::get_pool
// Il2CppName: get_pool
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::SessionKeepaliveMessage::Serialize
// Il2CppName: Serialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::SessionKeepaliveMessage::Deserialize
// Il2CppName: Deserialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::SessionKeepaliveMessage::Release
// Il2CppName: Release
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::SessionKeepaliveMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
