// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall`1
#include "GlobalNamespace/RemoteProcedureCall_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MenuRpcManager/LevelLoadSuccessRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuRpcManager::LevelLoadSuccessRpc : public GlobalNamespace::RemoteProcedureCall_1<::Il2CppString*> {
    public:
    // Creating value type constructor for type: LevelLoadSuccessRpc
    LevelLoadSuccessRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x153526C
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::LevelLoadSuccessRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuRpcManager::LevelLoadSuccessRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::LevelLoadSuccessRpc*, creationType>()));
    }
  }; // MenuRpcManager/LevelLoadSuccessRpc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::LevelLoadSuccessRpc*, "", "MenuRpcManager/LevelLoadSuccessRpc");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuRpcManager::LevelLoadSuccessRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
