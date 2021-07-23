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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerPrepareForConnectionRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class DedicatedServerPrepareForConnectionRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IDedicatedServerServerToClientMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // public System.String id
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x30
    System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: DedicatedServerPrepareForConnectionRequest
    DedicatedServerPrepareForConnectionRequest(::Il2CppString* id_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, GlobalNamespace::ByteArrayNetSerializable* random_ = {}, GlobalNamespace::ByteArrayNetSerializable* publicKey_ = {}) noexcept : id{id_}, userId{userId_}, userName{userName_}, remoteEndPoint{remoteEndPoint_}, random{random_}, publicKey{publicKey_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerServerToClientMessage
    operator MasterServer::IDedicatedServerServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerServerToClientMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field: public System.String id
    ::Il2CppString* _get_id();
    // Set instance field: public System.String id
    void _set_id(::Il2CppString* value);
    // Get instance field: public System.String userId
    ::Il2CppString* _get_userId();
    // Set instance field: public System.String userId
    void _set_userId(::Il2CppString* value);
    // Get instance field: public System.String userName
    ::Il2CppString* _get_userName();
    // Set instance field: public System.String userName
    void _set_userName(::Il2CppString* value);
    // Get instance field: public System.Net.IPEndPoint remoteEndPoint
    System::Net::IPEndPoint* _get_remoteEndPoint();
    // Set instance field: public System.Net.IPEndPoint remoteEndPoint
    void _set_remoteEndPoint(System::Net::IPEndPoint* value);
    // Get instance field: public readonly ByteArrayNetSerializable random
    GlobalNamespace::ByteArrayNetSerializable* _get_random();
    // Set instance field: public readonly ByteArrayNetSerializable random
    void _set_random(GlobalNamespace::ByteArrayNetSerializable* value);
    // Get instance field: public readonly ByteArrayNetSerializable publicKey
    GlobalNamespace::ByteArrayNetSerializable* _get_publicKey();
    // Set instance field: public readonly ByteArrayNetSerializable publicKey
    void _set_publicKey(GlobalNamespace::ByteArrayNetSerializable* value);
    // static public PacketPool`1<MasterServer.DedicatedServerPrepareForConnectionRequest> get_pool()
    // Offset: 0x12D26AC
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerPrepareForConnectionRequest*>* get_pool();
    // public MasterServer.DedicatedServerPrepareForConnectionRequest Init(System.String id, System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.Byte[] random, System.Byte[] publicKey)
    // Offset: 0x12D26F4
    MasterServer::DedicatedServerPrepareForConnectionRequest* Init(::Il2CppString* id, ::Il2CppString* userId, ::Il2CppString* userName, System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey);
    // public System.Void .ctor()
    // Offset: 0x12D2928
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerPrepareForConnectionRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::DedicatedServerPrepareForConnectionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerPrepareForConnectionRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12D274C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12D2814
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12D28AC
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
  }; // MasterServer.DedicatedServerPrepareForConnectionRequest
  #pragma pack(pop)
  static check_size<sizeof(DedicatedServerPrepareForConnectionRequest), 64 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_DedicatedServerPrepareForConnectionRequestSizeCheck;
  static_assert(sizeof(DedicatedServerPrepareForConnectionRequest) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerPrepareForConnectionRequest*, "MasterServer", "DedicatedServerPrepareForConnectionRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerPrepareForConnectionRequest*>* (*)()>(&MasterServer::DedicatedServerPrepareForConnectionRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::DedicatedServerPrepareForConnectionRequest* (MasterServer::DedicatedServerPrepareForConnectionRequest::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, System::Net::IPEndPoint*, ::Array<uint8_t>*, ::Array<uint8_t>*)>(&MasterServer::DedicatedServerPrepareForConnectionRequest::Init)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* publicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, userId, userName, remoteEndPoint, random, publicKey});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::DedicatedServerPrepareForConnectionRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::DedicatedServerPrepareForConnectionRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionRequest::*)()>(&MasterServer::DedicatedServerPrepareForConnectionRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
