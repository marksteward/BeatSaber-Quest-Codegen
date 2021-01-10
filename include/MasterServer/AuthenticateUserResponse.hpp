// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Including type: MasterServer.IMasterServerAuthenticateResponse
#include "MasterServer/IMasterServerAuthenticateResponse.hpp"
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
  // Autogenerated type: MasterServer.AuthenticateUserResponse
  // [] Offset: FFFFFFFF
  class AuthenticateUserResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IUserServerToClientMessage, public MasterServer::IMasterServerAuthenticateResponse*/ {
    public:
    // Nested type: MasterServer::AuthenticateUserResponse::Result
    struct Result;
    // Size: 0x4
    // Autogenerated type: MasterServer.AuthenticateUserResponse/Result
    // [] Offset: FFFFFFFF
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
      // static field const value: static public MasterServer.AuthenticateUserResponse/Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.AuthenticateUserResponse/Result Success
      static MasterServer::AuthenticateUserResponse::Result _get_Success();
      // Set static field: static public MasterServer.AuthenticateUserResponse/Result Success
      static void _set_Success(MasterServer::AuthenticateUserResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateUserResponse/Result Failed
      static constexpr const int Failed = 1;
      // Get static field: static public MasterServer.AuthenticateUserResponse/Result Failed
      static MasterServer::AuthenticateUserResponse::Result _get_Failed();
      // Set static field: static public MasterServer.AuthenticateUserResponse/Result Failed
      static void _set_Failed(MasterServer::AuthenticateUserResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateUserResponse/Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.AuthenticateUserResponse/Result UnknownError
      static MasterServer::AuthenticateUserResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.AuthenticateUserResponse/Result UnknownError
      static void _set_UnknownError(MasterServer::AuthenticateUserResponse::Result value);
    }; // MasterServer.AuthenticateUserResponse/Result
    static check_size<sizeof(AuthenticateUserResponse::Result), 0 + sizeof(int)> __MasterServer_AuthenticateUserResponse_ResultSizeCheck;
    static_assert(sizeof(AuthenticateUserResponse::Result) == 0x4);
    // public MasterServer.AuthenticateUserResponse/Result result
    // Size: 0x4
    // Offset: 0x18
    MasterServer::AuthenticateUserResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::AuthenticateUserResponse::Result) == 0x4);
    // Creating value type constructor for type: AuthenticateUserResponse
    AuthenticateUserResponse(MasterServer::AuthenticateUserResponse::Result result_ = {}) noexcept : result{result_} {}
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IMasterServerAuthenticateResponse
    operator MasterServer::IMasterServerAuthenticateResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerAuthenticateResponse*>(this);
    }
    // Creating conversion operator: operator MasterServer::AuthenticateUserResponse::Result
    constexpr operator MasterServer::AuthenticateUserResponse::Result() const noexcept {
      return result;
    }
    // static public PacketPool`1<MasterServer.AuthenticateUserResponse> get_pool()
    // Offset: 0x1B52C54
    static GlobalNamespace::PacketPool_1<MasterServer::AuthenticateUserResponse*>* get_pool();
    // public MasterServer.AuthenticateUserResponse Init(MasterServer.AuthenticateUserResponse/Result result)
    // Offset: 0x1B52D44
    MasterServer::AuthenticateUserResponse* Init(MasterServer::AuthenticateUserResponse::Result result);
    // public override System.Byte get_resultCode()
    // Offset: 0x1B52C9C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x1B52CA4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Boolean get_isAuthenticated()
    // Offset: 0x1B52D34
    // Implemented from: MasterServer.IMasterServerAuthenticateResponse
    // Base method: System.Boolean IMasterServerAuthenticateResponse::get_isAuthenticated()
    bool get_isAuthenticated();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1B52D4C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1B52D84
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x1B52DC4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1B52E20
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateUserResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::AuthenticateUserResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateUserResponse*, creationType>()));
    }
  }; // MasterServer.AuthenticateUserResponse
  static check_size<sizeof(AuthenticateUserResponse), 24 + sizeof(MasterServer::AuthenticateUserResponse::Result)> __MasterServer_AuthenticateUserResponseSizeCheck;
  static_assert(sizeof(AuthenticateUserResponse) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateUserResponse*, "MasterServer", "AuthenticateUserResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateUserResponse::Result, "MasterServer", "AuthenticateUserResponse/Result");
#pragma pack(pop)
