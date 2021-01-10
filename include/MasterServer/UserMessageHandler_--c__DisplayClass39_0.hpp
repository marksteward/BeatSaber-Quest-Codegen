// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.UserMessageHandler
#include "MasterServer/UserMessageHandler.hpp"
// Including type: GameplayServerFilter
#include "GlobalNamespace/GameplayServerFilter.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: PublicServerInfo
#include "GlobalNamespace/PublicServerInfo.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x70
  // Autogenerated type: MasterServer.UserMessageHandler/<>c__DisplayClass39_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA9D74
  class UserMessageHandler::$$c__DisplayClass39_0 : public ::Il2CppObject {
    public:
    // Nested type: MasterServer::UserMessageHandler::$$c__DisplayClass39_0::$$GetPublicServers$b__0$d
    struct $$GetPublicServers$b__0$d;
    // public MasterServer.UserMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    MasterServer::UserMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::UserMessageHandler*) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 offset
    // Size: 0x4
    // Offset: 0x28
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x2C
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public GameplayServerFilter filter
    // Size: 0x28
    // Offset: 0x30
    GlobalNamespace::GameplayServerFilter filter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerFilter) == 0x28);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x58
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public System.Action`1<System.Collections.Generic.IReadOnlyList`1<PublicServerInfo>> onSuccess
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>*>* onSuccess;
    // Field size check
    static_assert(sizeof(System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>*>*) == 0x8);
    // public System.Action`1<ConnectionFailedReason> onFailure
    // Size: 0x8
    // Offset: 0x68
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* onFailure;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass39_0
    $$c__DisplayClass39_0(MasterServer::UserMessageHandler* $$4__this_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, int offset_ = {}, int count_ = {}, GlobalNamespace::GameplayServerFilter filter_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>*>* onSuccess_ = {}, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onFailure_ = {}) noexcept : $$4__this{$$4__this_}, userId{userId_}, userName{userName_}, offset{offset_}, count{count_}, filter{filter_}, cancellationToken{cancellationToken_}, onSuccess{onSuccess_}, onFailure{onFailure_} {}
    // System.Threading.Tasks.Task <GetPublicServers>b__0()
    // Offset: 0x1AE3398
    System::Threading::Tasks::Task* $GetPublicServers$b__0();
    // public System.Void .ctor()
    // Offset: 0x1AE17FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMessageHandler::$$c__DisplayClass39_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserMessageHandler::$$c__DisplayClass39_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMessageHandler::$$c__DisplayClass39_0*, creationType>()));
    }
  }; // MasterServer.UserMessageHandler/<>c__DisplayClass39_0
  static check_size<sizeof(UserMessageHandler::$$c__DisplayClass39_0), 104 + sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*)> __MasterServer_UserMessageHandler_$$c__DisplayClass39_0SizeCheck;
  static_assert(sizeof(UserMessageHandler::$$c__DisplayClass39_0) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$$c__DisplayClass39_0*, "MasterServer", "UserMessageHandler/<>c__DisplayClass39_0");
#pragma pack(pop)
