// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IMasterServerAuthenticateResponse
#include "MasterServer/IMasterServerAuthenticateResponse.hpp"
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
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.AuthenticateUserResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticateUserResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IMasterServerAuthenticateResponse, public MasterServer::IUserServerToClientMessage*/ {
    public:
    // Nested type: MasterServer::AuthenticateUserResponse::Result
    struct Result;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.AuthenticateUserResponse/MasterServer.Result
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
      // static field const value: static public MasterServer.AuthenticateUserResponse/MasterServer.Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.AuthenticateUserResponse/MasterServer.Result Success
      static MasterServer::AuthenticateUserResponse::Result _get_Success();
      // Set static field: static public MasterServer.AuthenticateUserResponse/MasterServer.Result Success
      static void _set_Success(MasterServer::AuthenticateUserResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateUserResponse/MasterServer.Result Failed
      static constexpr const int Failed = 1;
      // Get static field: static public MasterServer.AuthenticateUserResponse/MasterServer.Result Failed
      static MasterServer::AuthenticateUserResponse::Result _get_Failed();
      // Set static field: static public MasterServer.AuthenticateUserResponse/MasterServer.Result Failed
      static void _set_Failed(MasterServer::AuthenticateUserResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateUserResponse/MasterServer.Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.AuthenticateUserResponse/MasterServer.Result UnknownError
      static MasterServer::AuthenticateUserResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.AuthenticateUserResponse/MasterServer.Result UnknownError
      static void _set_UnknownError(MasterServer::AuthenticateUserResponse::Result value);
    }; // MasterServer.AuthenticateUserResponse/MasterServer.Result
    #pragma pack(pop)
    static check_size<sizeof(AuthenticateUserResponse::Result), 0 + sizeof(int)> __MasterServer_AuthenticateUserResponse_ResultSizeCheck;
    static_assert(sizeof(AuthenticateUserResponse::Result) == 0x4);
    // public MasterServer.AuthenticateUserResponse/MasterServer.Result result
    // Size: 0x4
    // Offset: 0x18
    MasterServer::AuthenticateUserResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::AuthenticateUserResponse::Result) == 0x4);
    // Creating value type constructor for type: AuthenticateUserResponse
    AuthenticateUserResponse(MasterServer::AuthenticateUserResponse::Result result_ = {}) noexcept : result{result_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerAuthenticateResponse
    operator MasterServer::IMasterServerAuthenticateResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerAuthenticateResponse*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // Creating conversion operator: operator MasterServer::AuthenticateUserResponse::Result
    constexpr operator MasterServer::AuthenticateUserResponse::Result() const noexcept {
      return result;
    }
    // static public PacketPool`1<MasterServer.AuthenticateUserResponse> get_pool()
    // Offset: 0x12CB3B4
    static GlobalNamespace::PacketPool_1<MasterServer::AuthenticateUserResponse*>* get_pool();
    // public System.Boolean get_isAuthenticated()
    // Offset: 0x12CB494
    bool get_isAuthenticated();
    // public MasterServer.AuthenticateUserResponse Init(MasterServer.AuthenticateUserResponse/MasterServer.Result result)
    // Offset: 0x12CB4A4
    MasterServer::AuthenticateUserResponse* Init(MasterServer::AuthenticateUserResponse::Result result);
    // public override System.Byte get_resultCode()
    // Offset: 0x12CB3FC
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x12CB404
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Void .ctor()
    // Offset: 0x12CB580
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateUserResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::AuthenticateUserResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateUserResponse*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12CB4AC
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12CB4E4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12CB524
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
  }; // MasterServer.AuthenticateUserResponse
  #pragma pack(pop)
  static check_size<sizeof(AuthenticateUserResponse), 24 + sizeof(MasterServer::AuthenticateUserResponse::Result)> __MasterServer_AuthenticateUserResponseSizeCheck;
  static_assert(sizeof(AuthenticateUserResponse) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateUserResponse*, "MasterServer", "AuthenticateUserResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateUserResponse::Result, "MasterServer", "AuthenticateUserResponse/Result");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::AuthenticateUserResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::AuthenticateUserResponse*>* (*)()>(&MasterServer::AuthenticateUserResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserResponse::get_isAuthenticated
// Il2CppName: get_isAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::AuthenticateUserResponse::*)()>(&MasterServer::AuthenticateUserResponse::get_isAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserResponse*), "get_isAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserResponse::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::AuthenticateUserResponse* (MasterServer::AuthenticateUserResponse::*)(MasterServer::AuthenticateUserResponse::Result)>(&MasterServer::AuthenticateUserResponse::Init)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("MasterServer", "AuthenticateUserResponse/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserResponse*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (MasterServer::AuthenticateUserResponse::*)()>(&MasterServer::AuthenticateUserResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::AuthenticateUserResponse::*)()>(&MasterServer::AuthenticateUserResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::AuthenticateUserResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateUserResponse::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::AuthenticateUserResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateUserResponse::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::AuthenticateUserResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateUserResponse::*)()>(&MasterServer::AuthenticateUserResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
