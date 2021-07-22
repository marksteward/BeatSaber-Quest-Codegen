// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserServerStatusUpdateResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class UserServerStatusUpdateResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IUserServerToClientMessage*/ {
    public:
    // Nested type: MasterServer::UserServerStatusUpdateResponse::Result
    struct Result;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.UserServerStatusUpdateResponse/MasterServer.Result
    // [TokenAttribute] Offset: FFFFFFFF
    struct Result/*, public System::Enum*/ {
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // Creating value type constructor for type: Result
      constexpr Result(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.UserServerStatusUpdateResponse/MasterServer.Result Success
      static constexpr const uint8_t Success = 0u;
      // Get static field: static public MasterServer.UserServerStatusUpdateResponse/MasterServer.Result Success
      static MasterServer::UserServerStatusUpdateResponse::Result _get_Success();
      // Set static field: static public MasterServer.UserServerStatusUpdateResponse/MasterServer.Result Success
      static void _set_Success(MasterServer::UserServerStatusUpdateResponse::Result value);
      // static field const value: static public MasterServer.UserServerStatusUpdateResponse/MasterServer.Result SecretNotUnique
      static constexpr const uint8_t SecretNotUnique = 1u;
      // Get static field: static public MasterServer.UserServerStatusUpdateResponse/MasterServer.Result SecretNotUnique
      static MasterServer::UserServerStatusUpdateResponse::Result _get_SecretNotUnique();
      // Set static field: static public MasterServer.UserServerStatusUpdateResponse/MasterServer.Result SecretNotUnique
      static void _set_SecretNotUnique(MasterServer::UserServerStatusUpdateResponse::Result value);
      // static field const value: static public MasterServer.UserServerStatusUpdateResponse/MasterServer.Result UnknownError
      static constexpr const uint8_t UnknownError = 2u;
      // Get static field: static public MasterServer.UserServerStatusUpdateResponse/MasterServer.Result UnknownError
      static MasterServer::UserServerStatusUpdateResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.UserServerStatusUpdateResponse/MasterServer.Result UnknownError
      static void _set_UnknownError(MasterServer::UserServerStatusUpdateResponse::Result value);
    }; // MasterServer.UserServerStatusUpdateResponse/MasterServer.Result
    #pragma pack(pop)
    static check_size<sizeof(UserServerStatusUpdateResponse::Result), 0 + sizeof(uint8_t)> __MasterServer_UserServerStatusUpdateResponse_ResultSizeCheck;
    static_assert(sizeof(UserServerStatusUpdateResponse::Result) == 0x1);
    // public MasterServer.UserServerStatusUpdateResponse/MasterServer.Result result
    // Size: 0x1
    // Offset: 0x18
    MasterServer::UserServerStatusUpdateResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::UserServerStatusUpdateResponse::Result) == 0x1);
    // Padding between fields: result and: remoteEndPoint
    char __padding0[0x7] = {};
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x20
    System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UserServerStatusUpdateResponse
    UserServerStatusUpdateResponse(MasterServer::UserServerStatusUpdateResponse::Result result_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, ::Il2CppString* code_ = {}) noexcept : result{result_}, remoteEndPoint{remoteEndPoint_}, code{code_} {}
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.UserServerStatusUpdateResponse> get_pool()
    // Offset: 0x152BA30
    static GlobalNamespace::PacketPool_1<MasterServer::UserServerStatusUpdateResponse*>* get_pool();
    // public MasterServer.UserServerStatusUpdateResponse InitForFailure(MasterServer.UserServerStatusUpdateResponse/MasterServer.Result result)
    // Offset: 0x152BB10
    MasterServer::UserServerStatusUpdateResponse* InitForFailure(MasterServer::UserServerStatusUpdateResponse::Result result);
    // public MasterServer.UserServerStatusUpdateResponse InitForSuccess(System.Net.IPEndPoint remoteEndPoint, System.String code)
    // Offset: 0x152BBA8
    MasterServer::UserServerStatusUpdateResponse* InitForSuccess(System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* code);
    // public override System.Byte get_resultCode()
    // Offset: 0x152BA78
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x152BA80
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Void .ctor()
    // Offset: 0x152BCE8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserServerStatusUpdateResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserServerStatusUpdateResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserServerStatusUpdateResponse*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x152BBB4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x152BC24
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x152BC8C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
  }; // MasterServer.UserServerStatusUpdateResponse
  #pragma pack(pop)
  static check_size<sizeof(UserServerStatusUpdateResponse), 40 + sizeof(::Il2CppString*)> __MasterServer_UserServerStatusUpdateResponseSizeCheck;
  static_assert(sizeof(UserServerStatusUpdateResponse) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserServerStatusUpdateResponse*, "MasterServer", "UserServerStatusUpdateResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserServerStatusUpdateResponse::Result, "MasterServer", "UserServerStatusUpdateResponse/Result");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::UserServerStatusUpdateResponse*>* (*)()>(&MasterServer::UserServerStatusUpdateResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateResponse::InitForFailure
// Il2CppName: InitForFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::UserServerStatusUpdateResponse* (MasterServer::UserServerStatusUpdateResponse::*)(MasterServer::UserServerStatusUpdateResponse::Result)>(&MasterServer::UserServerStatusUpdateResponse::InitForFailure)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("MasterServer", "UserServerStatusUpdateResponse/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateResponse*), "InitForFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateResponse::InitForSuccess
// Il2CppName: InitForSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::UserServerStatusUpdateResponse* (MasterServer::UserServerStatusUpdateResponse::*)(System::Net::IPEndPoint*, ::Il2CppString*)>(&MasterServer::UserServerStatusUpdateResponse::InitForSuccess)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateResponse*), "InitForSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, code});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (MasterServer::UserServerStatusUpdateResponse::*)()>(&MasterServer::UserServerStatusUpdateResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::UserServerStatusUpdateResponse::*)()>(&MasterServer::UserServerStatusUpdateResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserServerStatusUpdateResponse::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::UserServerStatusUpdateResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserServerStatusUpdateResponse::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::UserServerStatusUpdateResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::UserServerStatusUpdateResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserServerStatusUpdateResponse::*)()>(&MasterServer::UserServerStatusUpdateResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserServerStatusUpdateResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
