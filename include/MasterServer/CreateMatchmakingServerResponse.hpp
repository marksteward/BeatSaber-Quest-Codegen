// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IDedicatedServerClientToServerMessage
#include "MasterServer/IDedicatedServerClientToServerMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
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
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
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
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.CreateMatchmakingServerResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class CreateMatchmakingServerResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IDedicatedServerClientToServerMessage*/ {
    public:
    // Nested type: MasterServer::CreateMatchmakingServerResponse::Result
    struct Result;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.CreateMatchmakingServerResponse/MasterServer.Result
    // [TokenAttribute] Offset: FFFFFFFF
    struct Result/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result Success
      static MasterServer::CreateMatchmakingServerResponse::Result _get_Success();
      // Set static field: static public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result Success
      static void _set_Success(MasterServer::CreateMatchmakingServerResponse::Result value);
      // static field const value: static public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result NoAvailableServerSlots
      static constexpr const int NoAvailableServerSlots = 1;
      // Get static field: static public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result NoAvailableServerSlots
      static MasterServer::CreateMatchmakingServerResponse::Result _get_NoAvailableServerSlots();
      // Set static field: static public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result NoAvailableServerSlots
      static void _set_NoAvailableServerSlots(MasterServer::CreateMatchmakingServerResponse::Result value);
      // static field const value: static public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result UnknownError
      static MasterServer::CreateMatchmakingServerResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result UnknownError
      static void _set_UnknownError(MasterServer::CreateMatchmakingServerResponse::Result value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // MasterServer.CreateMatchmakingServerResponse/MasterServer.Result
    #pragma pack(pop)
    static check_size<sizeof(CreateMatchmakingServerResponse::Result), 0 + sizeof(int)> __MasterServer_CreateMatchmakingServerResponse_ResultSizeCheck;
    static_assert(sizeof(CreateMatchmakingServerResponse::Result) == 0x4);
    // public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result result
    // Size: 0x4
    // Offset: 0x18
    MasterServer::CreateMatchmakingServerResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::CreateMatchmakingServerResponse::Result) == 0x4);
    // Padding between fields: result and: dedicatedServerId
    char __padding0[0x4] = {};
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* dedicatedServerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    int64_t dedicatedServerCreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 port
    // Size: 0x4
    // Offset: 0x38
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxPlayerCount
    // Size: 0x4
    // Offset: 0x3C
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: CreateMatchmakingServerResponse
    CreateMatchmakingServerResponse(MasterServer::CreateMatchmakingServerResponse::Result result_ = {}, ::Il2CppString* dedicatedServerId_ = {}, int64_t dedicatedServerCreationTime_ = {}, ::Il2CppString* id_ = {}, int port_ = {}, int maxPlayerCount_ = {}, GlobalNamespace::ByteArrayNetSerializable* random_ = {}, GlobalNamespace::ByteArrayNetSerializable* publicKey_ = {}) noexcept : result{result_}, dedicatedServerId{dedicatedServerId_}, dedicatedServerCreationTime{dedicatedServerCreationTime_}, id{id_}, port{port_}, maxPlayerCount{maxPlayerCount_}, random{random_}, publicKey{publicKey_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerClientToServerMessage
    operator MasterServer::IDedicatedServerClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerClientToServerMessage*>(this);
    }
    // Get instance field: public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result result
    MasterServer::CreateMatchmakingServerResponse::Result _get_result();
    // Set instance field: public MasterServer.CreateMatchmakingServerResponse/MasterServer.Result result
    void _set_result(MasterServer::CreateMatchmakingServerResponse::Result value);
    // Get instance field: private System.String <dedicatedServerId>k__BackingField
    ::Il2CppString* _get_$dedicatedServerId$k__BackingField();
    // Set instance field: private System.String <dedicatedServerId>k__BackingField
    void _set_$dedicatedServerId$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.Int64 <dedicatedServerCreationTime>k__BackingField
    int64_t _get_$dedicatedServerCreationTime$k__BackingField();
    // Set instance field: private System.Int64 <dedicatedServerCreationTime>k__BackingField
    void _set_$dedicatedServerCreationTime$k__BackingField(int64_t value);
    // Get instance field: public System.String id
    ::Il2CppString* _get_id();
    // Set instance field: public System.String id
    void _set_id(::Il2CppString* value);
    // Get instance field: public System.Int32 port
    int _get_port();
    // Set instance field: public System.Int32 port
    void _set_port(int value);
    // Get instance field: public System.Int32 maxPlayerCount
    int _get_maxPlayerCount();
    // Set instance field: public System.Int32 maxPlayerCount
    void _set_maxPlayerCount(int value);
    // Get instance field: public readonly ByteArrayNetSerializable random
    GlobalNamespace::ByteArrayNetSerializable* _get_random();
    // Set instance field: public readonly ByteArrayNetSerializable random
    void _set_random(GlobalNamespace::ByteArrayNetSerializable* value);
    // Get instance field: public readonly ByteArrayNetSerializable publicKey
    GlobalNamespace::ByteArrayNetSerializable* _get_publicKey();
    // Set instance field: public readonly ByteArrayNetSerializable publicKey
    void _set_publicKey(GlobalNamespace::ByteArrayNetSerializable* value);
    // static public PacketPool`1<MasterServer.CreateMatchmakingServerResponse> get_pool()
    // Offset: 0x12D1418
    static GlobalNamespace::PacketPool_1<MasterServer::CreateMatchmakingServerResponse*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x12D14F8
    ::Il2CppString* get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x12D1500
    void set_dedicatedServerId(::Il2CppString* value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x12D1508
    int64_t get_dedicatedServerCreationTime();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x12D1510
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.CreateMatchmakingServerResponse InitForFailure(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, MasterServer.CreateMatchmakingServerResponse/MasterServer.Result result)
    // Offset: 0x12D1760
    MasterServer::CreateMatchmakingServerResponse* InitForFailure(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, MasterServer::CreateMatchmakingServerResponse::Result result);
    // public MasterServer.CreateMatchmakingServerResponse InitForSuccess(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.String id, System.Int32 port, System.Byte[] random, System.Byte[] publicKey, System.Int32 maxPlayerCount)
    // Offset: 0x12D176C
    MasterServer::CreateMatchmakingServerResponse* InitForSuccess(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, int port, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, int maxPlayerCount);
    // public override System.Byte get_resultCode()
    // Offset: 0x12D1460
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x12D1468
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Void .ctor()
    // Offset: 0x12D17CC
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateMatchmakingServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::CreateMatchmakingServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateMatchmakingServerResponse*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12D1518
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12D1618
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12D16E4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
  }; // MasterServer.CreateMatchmakingServerResponse
  #pragma pack(pop)
  static check_size<sizeof(CreateMatchmakingServerResponse), 72 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_CreateMatchmakingServerResponseSizeCheck;
  static_assert(sizeof(CreateMatchmakingServerResponse) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::CreateMatchmakingServerResponse*, "MasterServer", "CreateMatchmakingServerResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::CreateMatchmakingServerResponse::Result, "MasterServer", "CreateMatchmakingServerResponse/Result");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::CreateMatchmakingServerResponse*>* (*)()>(&MasterServer::CreateMatchmakingServerResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::CreateMatchmakingServerResponse::*)()>(&MasterServer::CreateMatchmakingServerResponse::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateMatchmakingServerResponse::*)(::Il2CppString*)>(&MasterServer::CreateMatchmakingServerResponse::set_dedicatedServerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::CreateMatchmakingServerResponse::*)()>(&MasterServer::CreateMatchmakingServerResponse::get_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::set_dedicatedServerCreationTime
// Il2CppName: set_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateMatchmakingServerResponse::*)(int64_t)>(&MasterServer::CreateMatchmakingServerResponse::set_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "set_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::InitForFailure
// Il2CppName: InitForFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::CreateMatchmakingServerResponse* (MasterServer::CreateMatchmakingServerResponse::*)(::Il2CppString*, int64_t, MasterServer::CreateMatchmakingServerResponse::Result)>(&MasterServer::CreateMatchmakingServerResponse::InitForFailure)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("MasterServer", "CreateMatchmakingServerResponse/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "InitForFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime, result});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::InitForSuccess
// Il2CppName: InitForSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::CreateMatchmakingServerResponse* (MasterServer::CreateMatchmakingServerResponse::*)(::Il2CppString*, int64_t, ::Il2CppString*, int, ::Array<uint8_t>*, ::Array<uint8_t>*, int)>(&MasterServer::CreateMatchmakingServerResponse::InitForSuccess)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* publicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* maxPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "InitForSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime, id, port, random, publicKey, maxPlayerCount});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (MasterServer::CreateMatchmakingServerResponse::*)()>(&MasterServer::CreateMatchmakingServerResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::CreateMatchmakingServerResponse::*)()>(&MasterServer::CreateMatchmakingServerResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateMatchmakingServerResponse::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::CreateMatchmakingServerResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateMatchmakingServerResponse::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::CreateMatchmakingServerResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateMatchmakingServerResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateMatchmakingServerResponse::*)()>(&MasterServer::CreateMatchmakingServerResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateMatchmakingServerResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
