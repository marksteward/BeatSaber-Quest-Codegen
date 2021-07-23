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
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
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
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass34_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
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
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x58
    GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x70
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // public System.Action`2<System.Net.IPEndPoint,System.String> onSuccess
    // Size: 0x8
    // Offset: 0x88
    System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>* onSuccess;
    // Field size check
    static_assert(sizeof(System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass34_0
    $$c__DisplayClass34_0(MasterServer::UserMessageHandler* $$4__this_ = {}, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onBroadcastFailed_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, ::Il2CppString* secret_ = {}, int currentPlayerCount_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* serverName_ = {}, ::Il2CppString* password_ = {}, GlobalNamespace::BeatmapLevelSelectionMask selectionMask_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}, System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>* onSuccess_ = {}) noexcept : $$4__this{$$4__this_}, onBroadcastFailed{onBroadcastFailed_}, userId{userId_}, userName{userName_}, secret{secret_}, currentPlayerCount{currentPlayerCount_}, cancellationToken{cancellationToken_}, serverName{serverName_}, password{password_}, selectionMask{selectionMask_}, configuration{configuration_}, onSuccess{onSuccess_} {}
    // Get instance field: public MasterServer.UserMessageHandler <>4__this
    MasterServer::UserMessageHandler* _get_$$4__this();
    // Set instance field: public MasterServer.UserMessageHandler <>4__this
    void _set_$$4__this(MasterServer::UserMessageHandler* value);
    // Get instance field: public System.Action`1<ConnectionFailedReason> onBroadcastFailed
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* _get_onBroadcastFailed();
    // Set instance field: public System.Action`1<ConnectionFailedReason> onBroadcastFailed
    void _set_onBroadcastFailed(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // Get instance field: public System.String userId
    ::Il2CppString* _get_userId();
    // Set instance field: public System.String userId
    void _set_userId(::Il2CppString* value);
    // Get instance field: public System.String userName
    ::Il2CppString* _get_userName();
    // Set instance field: public System.String userName
    void _set_userName(::Il2CppString* value);
    // Get instance field: public System.String secret
    ::Il2CppString* _get_secret();
    // Set instance field: public System.String secret
    void _set_secret(::Il2CppString* value);
    // Get instance field: public System.Int32 currentPlayerCount
    int _get_currentPlayerCount();
    // Set instance field: public System.Int32 currentPlayerCount
    void _set_currentPlayerCount(int value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // Get instance field: public System.String serverName
    ::Il2CppString* _get_serverName();
    // Set instance field: public System.String serverName
    void _set_serverName(::Il2CppString* value);
    // Get instance field: public System.String password
    ::Il2CppString* _get_password();
    // Set instance field: public System.String password
    void _set_password(::Il2CppString* value);
    // Get instance field: public BeatmapLevelSelectionMask selectionMask
    GlobalNamespace::BeatmapLevelSelectionMask _get_selectionMask();
    // Set instance field: public BeatmapLevelSelectionMask selectionMask
    void _set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value);
    // Get instance field: public GameplayServerConfiguration configuration
    GlobalNamespace::GameplayServerConfiguration _get_configuration();
    // Set instance field: public GameplayServerConfiguration configuration
    void _set_configuration(GlobalNamespace::GameplayServerConfiguration value);
    // Get instance field: public System.Action`2<System.Net.IPEndPoint,System.String> onSuccess
    System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>* _get_onSuccess();
    // Set instance field: public System.Action`2<System.Net.IPEndPoint,System.String> onSuccess
    void _set_onSuccess(System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>* value);
    // System.Void <StartBroadcastingServer>b__0(ConnectionFailedReason result)
    // Offset: 0x12DD8F4
    void $StartBroadcastingServer$b__0(GlobalNamespace::ConnectionFailedReason result);
    // System.Threading.Tasks.Task <StartBroadcastingServer>b__1()
    // Offset: 0x12DD984
    System::Threading::Tasks::Task* $StartBroadcastingServer$b__1();
    // public System.Void .ctor()
    // Offset: 0x12DD14C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMessageHandler::$$c__DisplayClass34_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserMessageHandler::$$c__DisplayClass34_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMessageHandler::$$c__DisplayClass34_0*, creationType>()));
    }
  }; // MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass34_0
  #pragma pack(pop)
  static check_size<sizeof(UserMessageHandler::$$c__DisplayClass34_0), 136 + sizeof(System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>*)> __MasterServer_UserMessageHandler_$$c__DisplayClass34_0SizeCheck;
  static_assert(sizeof(UserMessageHandler::$$c__DisplayClass34_0) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$$c__DisplayClass34_0*, "MasterServer", "UserMessageHandler/<>c__DisplayClass34_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass34_0::$StartBroadcastingServer$b__0
// Il2CppName: <StartBroadcastingServer>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::$$c__DisplayClass34_0::*)(GlobalNamespace::ConnectionFailedReason)>(&MasterServer::UserMessageHandler::$$c__DisplayClass34_0::$StartBroadcastingServer$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::$$c__DisplayClass34_0*), "<StartBroadcastingServer>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass34_0::$StartBroadcastingServer$b__1
// Il2CppName: <StartBroadcastingServer>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::UserMessageHandler::$$c__DisplayClass34_0::*)()>(&MasterServer::UserMessageHandler::$$c__DisplayClass34_0::$StartBroadcastingServer$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::$$c__DisplayClass34_0*), "<StartBroadcastingServer>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass34_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
