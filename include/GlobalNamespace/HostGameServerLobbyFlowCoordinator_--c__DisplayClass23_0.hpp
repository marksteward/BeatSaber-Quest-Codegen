// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HostGameServerLobbyFlowCoordinator
#include "GlobalNamespace/HostGameServerLobbyFlowCoordinator.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HostGameServerLobbyFlowCoordinator/<>c__DisplayClass23_0
  // [CompilerGeneratedAttribute] Offset: D3224C
  class HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0 : public ::Il2CppObject {
    public:
    // public HostGameServerLobbyFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::HostGameServerLobbyFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HostGameServerLobbyFlowCoordinator*) == 0x8);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x18
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass23_0
    $$c__DisplayClass23_0(GlobalNamespace::HostGameServerLobbyFlowCoordinator* $$4__this_ = {}, System::Action* finishedCallback_ = {}) noexcept : $$4__this{$$4__this_}, finishedCallback{finishedCallback_} {}
    // public System.Void .ctor()
    // Offset: 0xF721D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0*, creationType>()));
    }
  }; // HostGameServerLobbyFlowCoordinator/<>c__DisplayClass23_0
  #pragma pack(pop)
  static check_size<sizeof(HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0), 24 + sizeof(System::Action*)> __GlobalNamespace_HostGameServerLobbyFlowCoordinator_$$c__DisplayClass23_0SizeCheck;
  static_assert(sizeof(HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0*, "", "HostGameServerLobbyFlowCoordinator/<>c__DisplayClass23_0");
