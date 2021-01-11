// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.UserMessageHandler
#include "MasterServer/UserMessageHandler.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: DiscoveryPolicy
#include "GlobalNamespace/DiscoveryPolicy.hpp"
// Including type: InvitePolicy
#include "GlobalNamespace/InvitePolicy.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
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
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMessageHandler/<>c__DisplayClass34_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA9D54
  class UserMessageHandler::$$c__DisplayClass34_0 : public ::Il2CppObject {
    public:
    // Nested type: MasterServer::UserMessageHandler::$$c__DisplayClass34_0::$$StartBroadcastingServer$b__1$d
    struct $$StartBroadcastingServer$b__1$d;
    // public MasterServer.UserMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    MasterServer::UserMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::UserMessageHandler*) == 0x8);
    // public System.Action`1<ConnectionFailedReason> onBroadcastFailed
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* onBroadcastFailed;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*) == 0x8);
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
    // public System.String secret
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 currentPlayerCount
    // Size: 0x4
    // Offset: 0x38
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentPlayerCount and: cancellationToken
    char __padding5[0x4] = {};
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x40
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public System.String serverName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* serverName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String password
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 maxPlayerCount
    // Size: 0x4
    // Offset: 0x58
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public DiscoveryPolicy discoveryPolicy
    // Size: 0x1
    // Offset: 0x5C
    GlobalNamespace::DiscoveryPolicy discoveryPolicy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DiscoveryPolicy) == 0x1);
    // Padding between fields: discoveryPolicy and: invitePolicy
    char __padding10[0x3] = {};
    // public InvitePolicy invitePolicy
    // Size: 0x4
    // Offset: 0x60
    GlobalNamespace::InvitePolicy invitePolicy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::InvitePolicy) == 0x4);
    // Padding between fields: invitePolicy and: configuration
    char __padding11[0x4] = {};
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x68
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // public System.Action`2<System.Net.IPEndPoint,System.String> onSuccess
    // Size: 0x8
    // Offset: 0x80
    System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>* onSuccess;
    // Field size check
    static_assert(sizeof(System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass34_0
    $$c__DisplayClass34_0(MasterServer::UserMessageHandler* $$4__this_ = {}, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onBroadcastFailed_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, ::Il2CppString* secret_ = {}, int currentPlayerCount_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* serverName_ = {}, ::Il2CppString* password_ = {}, int maxPlayerCount_ = {}, GlobalNamespace::DiscoveryPolicy discoveryPolicy_ = {}, GlobalNamespace::InvitePolicy invitePolicy_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}, System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>* onSuccess_ = {}) noexcept : $$4__this{$$4__this_}, onBroadcastFailed{onBroadcastFailed_}, userId{userId_}, userName{userName_}, secret{secret_}, currentPlayerCount{currentPlayerCount_}, cancellationToken{cancellationToken_}, serverName{serverName_}, password{password_}, maxPlayerCount{maxPlayerCount_}, discoveryPolicy{discoveryPolicy_}, invitePolicy{invitePolicy_}, configuration{configuration_}, onSuccess{onSuccess_} {}
    // System.Void <StartBroadcastingServer>b__0(ConnectionFailedReason result)
    // Offset: 0x1AE1B64
    void $StartBroadcastingServer$b__0(GlobalNamespace::ConnectionFailedReason result);
    // System.Threading.Tasks.Task <StartBroadcastingServer>b__1()
    // Offset: 0x1AE1BF4
    System::Threading::Tasks::Task* $StartBroadcastingServer$b__1();
    // public System.Void .ctor()
    // Offset: 0x1AE1198
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMessageHandler::$$c__DisplayClass34_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserMessageHandler::$$c__DisplayClass34_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMessageHandler::$$c__DisplayClass34_0*, creationType>()));
    }
  }; // MasterServer.UserMessageHandler/<>c__DisplayClass34_0
  static check_size<sizeof(UserMessageHandler::$$c__DisplayClass34_0), 128 + sizeof(System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>*)> __MasterServer_UserMessageHandler_$$c__DisplayClass34_0SizeCheck;
  static_assert(sizeof(UserMessageHandler::$$c__DisplayClass34_0) == 0x88);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$$c__DisplayClass34_0*, "MasterServer", "UserMessageHandler/<>c__DisplayClass34_0");
