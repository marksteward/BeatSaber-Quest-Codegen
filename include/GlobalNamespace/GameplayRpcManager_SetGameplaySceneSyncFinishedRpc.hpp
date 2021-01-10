// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: RemoteProcedureCall`1
#include "GlobalNamespace/RemoteProcedureCall_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayersAtGameStartNetSerializable
  class PlayersAtGameStartNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GameplayRpcManager/SetGameplaySceneSyncFinishedRpc
  // [] Offset: FFFFFFFF
  class GameplayRpcManager::SetGameplaySceneSyncFinishedRpc : public GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::PlayersAtGameStartNetSerializable*> {
    public:
    // Creating value type constructor for type: SetGameplaySceneSyncFinishedRpc
    SetGameplaySceneSyncFinishedRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1B4D804
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayRpcManager::SetGameplaySceneSyncFinishedRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinishedRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayRpcManager::SetGameplaySceneSyncFinishedRpc*, creationType>()));
    }
  }; // GameplayRpcManager/SetGameplaySceneSyncFinishedRpc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinishedRpc*, "", "GameplayRpcManager/SetGameplaySceneSyncFinishedRpc");
