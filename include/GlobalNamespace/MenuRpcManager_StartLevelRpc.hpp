// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall`3
#include "GlobalNamespace/RemoteProcedureCall_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MenuRpcManager/StartLevelRpc
  // [] Offset: FFFFFFFF
  class MenuRpcManager::StartLevelRpc : public GlobalNamespace::RemoteProcedureCall_3<GlobalNamespace::BeatmapIdentifierNetSerializable*, GlobalNamespace::GameplayModifiers*, float> {
    public:
    // Creating value type constructor for type: StartLevelRpc
    StartLevelRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1E4928C
    // Implemented from: RemoteProcedureCall`3
    // Base method: System.Void RemoteProcedureCall_3::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::StartLevelRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuRpcManager::StartLevelRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::StartLevelRpc*, creationType>()));
    }
  }; // MenuRpcManager/StartLevelRpc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::StartLevelRpc*, "", "MenuRpcManager/StartLevelRpc");
