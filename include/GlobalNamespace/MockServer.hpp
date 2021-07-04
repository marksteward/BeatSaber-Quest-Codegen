// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockPlayer
#include "GlobalNamespace/MockPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerFiniteStateMachine
  class GameplayServerFiniteStateMachine;
  // Forward declaring type: MockServerSettings
  class MockServerSettings;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: AvatarPartsModel
  class AvatarPartsModel;
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: NodePoseSyncStateManager
  class NodePoseSyncStateManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: MockServer
  class MockServer : public GlobalNamespace::MockPlayer {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE1DAB4
    // private System.Action joinedEvent
    // Size: 0x8
    // Offset: 0xD0
    System::Action* joinedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private GameplayServerFiniteStateMachine _fsm
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::GameplayServerFiniteStateMachine* fsm;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerFiniteStateMachine*) == 0x8);
    // Creating value type constructor for type: MockServer
    MockServer(System::Action* joinedEvent_ = {}, GlobalNamespace::GameplayServerFiniteStateMachine* fsm_ = {}) noexcept : joinedEvent{joinedEvent_}, fsm{fsm_} {}
    // public System.Void add_joinedEvent(System.Action value)
    // Offset: 0x1142668
    void add_joinedEvent(System::Action* value);
    // public System.Void remove_joinedEvent(System.Action value)
    // Offset: 0x114270C
    void remove_joinedEvent(System::Action* value);
    // public System.Void .ctor(MockServerSettings settings, System.Boolean isLocalPlayer)
    // Offset: 0x11424A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockServer* New_ctor(GlobalNamespace::MockServerSettings* settings, bool isLocalPlayer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockServer*, creationType>(settings, isLocalPlayer)));
    }
    // public System.Void SetConfiguration(GameplayServerConfiguration configuration)
    // Offset: 0x11427E0
    void SetConfiguration(GlobalNamespace::GameplayServerConfiguration configuration);
    // public override System.Boolean get_canJoin()
    // Offset: 0x11427B0
    // Implemented from: MockPlayer
    // Base method: System.Boolean MockPlayer::get_canJoin()
    bool get_canJoin();
    // public override System.Void Join()
    // Offset: 0x11427B8
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Join()
    void Join();
    // public override System.Void Join(System.String password)
    // Offset: 0x11427CC
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Join(System.String password)
    void Join(::Il2CppString* password);
    // public override System.Void Connect(IMultiplayerSessionManager multiplayerSessionManager, AvatarPartsModel avatarPartsModel, BeatmapLevelsModel beatmapLevelsModel, NodePoseSyncStateManager nodePoseSyncStateManager)
    // Offset: 0x11427FC
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Connect(IMultiplayerSessionManager multiplayerSessionManager, AvatarPartsModel avatarPartsModel, BeatmapLevelsModel beatmapLevelsModel, NodePoseSyncStateManager nodePoseSyncStateManager)
    void Connect(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::AvatarPartsModel* avatarPartsModel, GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);
    // public override System.Void Disconnect()
    // Offset: 0x114291C
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Disconnect()
    void Disconnect();
  }; // MockServer
  #pragma pack(pop)
  static check_size<sizeof(MockServer), 216 + sizeof(GlobalNamespace::GameplayServerFiniteStateMachine*)> __GlobalNamespace_MockServerSizeCheck;
  static_assert(sizeof(MockServer) == 0xE0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockServer*, "", "MockServer");
// Writing MetadataGetter for method: GlobalNamespace::MockServer::add_joinedEvent
// Il2CppName: add_joinedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockServer::*)(System::Action*)>(&GlobalNamespace::MockServer::add_joinedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockServer*), "add_joinedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockServer::remove_joinedEvent
// Il2CppName: remove_joinedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockServer::*)(System::Action*)>(&GlobalNamespace::MockServer::remove_joinedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockServer*), "remove_joinedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockServer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockServer::SetConfiguration
// Il2CppName: SetConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockServer::*)(GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::MockServer::SetConfiguration)> {
  const MethodInfo* get() {
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockServer*), "SetConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockServer::get_canJoin
// Il2CppName: get_canJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockServer::*)()>(&GlobalNamespace::MockServer::get_canJoin)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockServer*), "get_canJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockServer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockServer::*)()>(&GlobalNamespace::MockServer::Join)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockServer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockServer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockServer::*)(::Il2CppString*)>(&GlobalNamespace::MockServer::Join)> {
  const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockServer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockServer::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockServer::*)(GlobalNamespace::IMultiplayerSessionManager*, GlobalNamespace::AvatarPartsModel*, GlobalNamespace::BeatmapLevelsModel*, GlobalNamespace::NodePoseSyncStateManager*)>(&GlobalNamespace::MockServer::Connect)> {
  const MethodInfo* get() {
    static auto* multiplayerSessionManager = &::il2cpp_utils::GetClassFromName("", "IMultiplayerSessionManager")->byval_arg;
    static auto* avatarPartsModel = &::il2cpp_utils::GetClassFromName("", "AvatarPartsModel")->byval_arg;
    static auto* beatmapLevelsModel = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelsModel")->byval_arg;
    static auto* nodePoseSyncStateManager = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncStateManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockServer*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerSessionManager, avatarPartsModel, beatmapLevelsModel, nodePoseSyncStateManager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockServer::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockServer::*)()>(&GlobalNamespace::MockServer::Disconnect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockServer*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
