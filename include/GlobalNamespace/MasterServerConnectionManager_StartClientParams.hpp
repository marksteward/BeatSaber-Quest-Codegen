// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
#include "GlobalNamespace/MasterServerConnectionManager_MasterServerConnectionManagerParamsBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerConnectionManager/StartClientParams
  // [] Offset: FFFFFFFF
  class MasterServerConnectionManager::StartClientParams : public GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase {
    public:
    // Creating value type constructor for type: StartClientParams
    StartClientParams() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1AE71EC
    // Implemented from: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
    // Base method: System.Void MasterServerConnectionManagerParamsBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerConnectionManager::StartClientParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerConnectionManager::StartClientParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerConnectionManager::StartClientParams*, creationType>()));
    }
  }; // MasterServerConnectionManager/StartClientParams
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerConnectionManager::StartClientParams*, "", "MasterServerConnectionManager/StartClientParams");
