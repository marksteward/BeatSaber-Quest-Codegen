// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: MenuRpcManager/InvalidateLevelEntitlementStatusesRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuRpcManager::InvalidateLevelEntitlementStatusesRpc : public GlobalNamespace::RemoteProcedureCall {
    public:
    // Creating value type constructor for type: InvalidateLevelEntitlementStatusesRpc
    InvalidateLevelEntitlementStatusesRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1535214
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::InvalidateLevelEntitlementStatusesRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuRpcManager::InvalidateLevelEntitlementStatusesRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::InvalidateLevelEntitlementStatusesRpc*, creationType>()));
    }
  }; // MenuRpcManager/InvalidateLevelEntitlementStatusesRpc
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::InvalidateLevelEntitlementStatusesRpc*, "", "MenuRpcManager/InvalidateLevelEntitlementStatusesRpc");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuRpcManager::InvalidateLevelEntitlementStatusesRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
