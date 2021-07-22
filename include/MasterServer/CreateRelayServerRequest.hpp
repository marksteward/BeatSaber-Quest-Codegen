// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerServerToClientMessage
#include "MasterServer/IDedicatedServerServerToClientMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
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
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.CreateRelayServerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class CreateRelayServerRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IDedicatedServerServerToClientMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // public System.String secret
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String ownerUserId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* ownerUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String ownerUserName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* ownerUserName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Net.IPEndPoint ownerEndPoint
    // Size: 0x8
    // Offset: 0x30
    System::Net::IPEndPoint* ownerEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public readonly ByteArrayNetSerializable ownerRandom
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ByteArrayNetSerializable* ownerRandom;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable ownerPublicKey
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ByteArrayNetSerializable* ownerPublicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public System.String clientUserId
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* clientUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String clientUserName
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* clientUserName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Net.IPEndPoint clientEndPoint
    // Size: 0x8
    // Offset: 0x58
    System::Net::IPEndPoint* clientEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public readonly ByteArrayNetSerializable clientRandom
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::ByteArrayNetSerializable* clientRandom;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable clientPublicKey
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::ByteArrayNetSerializable* clientPublicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: CreateRelayServerRequest
    CreateRelayServerRequest(::Il2CppString* secret_ = {}, ::Il2CppString* ownerUserId_ = {}, ::Il2CppString* ownerUserName_ = {}, System::Net::IPEndPoint* ownerEndPoint_ = {}, GlobalNamespace::ByteArrayNetSerializable* ownerRandom_ = {}, GlobalNamespace::ByteArrayNetSerializable* ownerPublicKey_ = {}, ::Il2CppString* clientUserId_ = {}, ::Il2CppString* clientUserName_ = {}, System::Net::IPEndPoint* clientEndPoint_ = {}, GlobalNamespace::ByteArrayNetSerializable* clientRandom_ = {}, GlobalNamespace::ByteArrayNetSerializable* clientPublicKey_ = {}) noexcept : secret{secret_}, ownerUserId{ownerUserId_}, ownerUserName{ownerUserName_}, ownerEndPoint{ownerEndPoint_}, ownerRandom{ownerRandom_}, ownerPublicKey{ownerPublicKey_}, clientUserId{clientUserId_}, clientUserName{clientUserName_}, clientEndPoint{clientEndPoint_}, clientRandom{clientRandom_}, clientPublicKey{clientPublicKey_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerServerToClientMessage
    operator MasterServer::IDedicatedServerServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerServerToClientMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.CreateRelayServerRequest> get_pool()
    // Offset: 0x12D1880
    static GlobalNamespace::PacketPool_1<MasterServer::CreateRelayServerRequest*>* get_pool();
    // public MasterServer.CreateRelayServerRequest Init(System.String secret, System.String ownerUserId, System.String ownerUserName, System.Net.IPEndPoint ownerEndPoint, System.Byte[] ownerRandom, System.Byte[] ownerPublicKey, System.String clientUserId, System.String clientUserName, System.Net.IPEndPoint clientEndPoint, System.Byte[] clientRandom, System.Byte[] clientPublicKey)
    // Offset: 0x12D1B70
    MasterServer::CreateRelayServerRequest* Init(::Il2CppString* secret, ::Il2CppString* ownerUserId, ::Il2CppString* ownerUserName, System::Net::IPEndPoint* ownerEndPoint, ::Array<uint8_t>* ownerRandom, ::Array<uint8_t>* ownerPublicKey, ::Il2CppString* clientUserId, ::Il2CppString* clientUserName, System::Net::IPEndPoint* clientEndPoint, ::Array<uint8_t>* clientRandom, ::Array<uint8_t>* clientPublicKey);
    // public System.Void .ctor()
    // Offset: 0x12D1C10
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateRelayServerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::CreateRelayServerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateRelayServerRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12D18C8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12D19E0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12D1AD4
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
  }; // MasterServer.CreateRelayServerRequest
  #pragma pack(pop)
  static check_size<sizeof(CreateRelayServerRequest), 104 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_CreateRelayServerRequestSizeCheck;
  static_assert(sizeof(CreateRelayServerRequest) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::CreateRelayServerRequest*, "MasterServer", "CreateRelayServerRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::CreateRelayServerRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::CreateRelayServerRequest*>* (*)()>(&MasterServer::CreateRelayServerRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateRelayServerRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateRelayServerRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::CreateRelayServerRequest* (MasterServer::CreateRelayServerRequest::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, System::Net::IPEndPoint*, ::Array<uint8_t>*, ::Array<uint8_t>*, ::Il2CppString*, ::Il2CppString*, System::Net::IPEndPoint*, ::Array<uint8_t>*, ::Array<uint8_t>*)>(&MasterServer::CreateRelayServerRequest::Init)> {
  static const MethodInfo* get() {
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ownerUserId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ownerUserName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ownerEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* ownerRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ownerPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* clientUserId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* clientUserName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* clientEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* clientRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* clientPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateRelayServerRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secret, ownerUserId, ownerUserName, ownerEndPoint, ownerRandom, ownerPublicKey, clientUserId, clientUserName, clientEndPoint, clientRandom, clientPublicKey});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateRelayServerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::CreateRelayServerRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateRelayServerRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::CreateRelayServerRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateRelayServerRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateRelayServerRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateRelayServerRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::CreateRelayServerRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateRelayServerRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateRelayServerRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateRelayServerRequest::*)()>(&MasterServer::CreateRelayServerRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateRelayServerRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
