// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BaseMasterServerMultipartMessage
#include "MasterServer/BaseMasterServerMultipartMessage.hpp"
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
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMultipartMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class UserMultipartMessage : public MasterServer::BaseMasterServerMultipartMessage/*, public MasterServer::IUserMessage*/ {
    public:
    // Creating value type constructor for type: UserMultipartMessage
    UserMultipartMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IUserMessage
    operator MasterServer::IUserMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.UserMultipartMessage> get_pool()
    // Offset: 0x152AF7C
    static GlobalNamespace::PacketPool_1<MasterServer::UserMultipartMessage*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x152B020
    // Implemented from: MasterServer.BaseMasterServerMultipartMessage
    // Base method: System.Void BaseMasterServerMultipartMessage::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMultipartMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserMultipartMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMultipartMessage*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x152AFC4
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
  }; // MasterServer.UserMultipartMessage
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMultipartMessage*, "MasterServer", "UserMultipartMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMultipartMessage::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::UserMultipartMessage*>* (*)()>(&MasterServer::UserMultipartMessage::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMultipartMessage*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMultipartMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::UserMultipartMessage::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMultipartMessage::*)()>(&MasterServer::UserMultipartMessage::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMultipartMessage*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
