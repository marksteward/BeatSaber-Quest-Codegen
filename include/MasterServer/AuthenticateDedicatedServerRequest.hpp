// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IDedicatedServerMessage
#include "MasterServer/IDedicatedServerMessage.hpp"
// Including type: MasterServer.IMasterServerAuthenticateRequest
#include "MasterServer/IMasterServerAuthenticateRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.AuthenticateDedicatedServerRequest
  class AuthenticateDedicatedServerRequest : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IDedicatedServerMessage, public MasterServer::IMasterServerAuthenticateRequest*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDF10C0
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* dedicatedServerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly ByteArrayNetSerializable nonce
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ByteArrayNetSerializable* nonce;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable hash
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ByteArrayNetSerializable* hash;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public System.Int64 timestamp
    // Size: 0x8
    // Offset: 0x30
    int64_t timestamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: AuthenticateDedicatedServerRequest
    AuthenticateDedicatedServerRequest(::Il2CppString* dedicatedServerId_ = {}, GlobalNamespace::ByteArrayNetSerializable* nonce_ = {}, GlobalNamespace::ByteArrayNetSerializable* hash_ = {}, int64_t timestamp_ = {}) noexcept : dedicatedServerId{dedicatedServerId_}, nonce{nonce_}, hash{hash_}, timestamp{timestamp_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerMessage
    operator MasterServer::IDedicatedServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IMasterServerAuthenticateRequest
    operator MasterServer::IMasterServerAuthenticateRequest() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerAuthenticateRequest*>(this);
    }
    // static public PacketPool`1<MasterServer.AuthenticateDedicatedServerRequest> get_pool()
    // Offset: 0x133333C
    static GlobalNamespace::PacketPool_1<MasterServer::AuthenticateDedicatedServerRequest*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x1333384
    ::Il2CppString* get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x133338C
    void set_dedicatedServerId(::Il2CppString* value);
    // public MasterServer.AuthenticateDedicatedServerRequest Init(System.String dedicatedServerId, System.Byte[] nonce, System.Byte[] hash, System.Int64 timestamp)
    // Offset: 0x1333394
    MasterServer::AuthenticateDedicatedServerRequest* Init(::Il2CppString* dedicatedServerId, ::Array<uint8_t>* nonce, ::Array<uint8_t>* hash, int64_t timestamp);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x13333F0
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1333458
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x13334C8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x133353C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateDedicatedServerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::AuthenticateDedicatedServerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateDedicatedServerRequest*, creationType>()));
    }
  }; // MasterServer.AuthenticateDedicatedServerRequest
  #pragma pack(pop)
  static check_size<sizeof(AuthenticateDedicatedServerRequest), 48 + sizeof(int64_t)> __MasterServer_AuthenticateDedicatedServerRequestSizeCheck;
  static_assert(sizeof(AuthenticateDedicatedServerRequest) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateDedicatedServerRequest*, "MasterServer", "AuthenticateDedicatedServerRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::AuthenticateDedicatedServerRequest*>* (*)()>(&MasterServer::AuthenticateDedicatedServerRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerRequest::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::AuthenticateDedicatedServerRequest::*)()>(&MasterServer::AuthenticateDedicatedServerRequest::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerRequest*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerRequest::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerRequest::*)(::Il2CppString*)>(&MasterServer::AuthenticateDedicatedServerRequest::set_dedicatedServerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerRequest*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::AuthenticateDedicatedServerRequest* (MasterServer::AuthenticateDedicatedServerRequest::*)(::Il2CppString*, ::Array<uint8_t>*, ::Array<uint8_t>*, int64_t)>(&MasterServer::AuthenticateDedicatedServerRequest::Init)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nonce = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* hash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, nonce, hash, timestamp});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::AuthenticateDedicatedServerRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::AuthenticateDedicatedServerRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerRequest::*)()>(&MasterServer::AuthenticateDedicatedServerRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
