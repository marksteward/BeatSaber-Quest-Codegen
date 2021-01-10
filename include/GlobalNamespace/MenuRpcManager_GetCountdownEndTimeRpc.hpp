// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall
#include "GlobalNamespace/RemoteProcedureCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  // Autogenerated type: MenuRpcManager/GetCountdownEndTimeRpc
  // [] Offset: FFFFFFFF
  class MenuRpcManager::GetCountdownEndTimeRpc : public GlobalNamespace::RemoteProcedureCall {
    public:
    // Creating value type constructor for type: GetCountdownEndTimeRpc
    GetCountdownEndTimeRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1E48E34
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::GetCountdownEndTimeRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuRpcManager::GetCountdownEndTimeRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::GetCountdownEndTimeRpc*, creationType>()));
    }
  }; // MenuRpcManager/GetCountdownEndTimeRpc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::GetCountdownEndTimeRpc*, "", "MenuRpcManager/GetCountdownEndTimeRpc");
#pragma pack(pop)
