// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusConnectionManager
#include "GlobalNamespace/OculusConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusNetworkPlayerModel
  class OculusNetworkPlayerModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusConnectionManager/StartServerParams
  class OculusConnectionManager::StartServerParams : public ::Il2CppObject/*, public GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager*>*/ {
    public:
    // public OculusNetworkPlayerModel oculusNetworkPlayerModel
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* oculusNetworkPlayerModel;
    // Creating interface conversion operator: operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager*>
    operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager*>*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::OculusNetworkPlayerModel*
    constexpr operator GlobalNamespace::OculusNetworkPlayerModel*() const noexcept {
      return oculusNetworkPlayerModel;
    }
    // public System.Void .ctor()
    // Offset: 0x21039F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusConnectionManager::StartServerParams* New_ctor();
  }; // OculusConnectionManager/StartServerParams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusConnectionManager::StartServerParams*, "", "OculusConnectionManager/StartServerParams");
#pragma pack(pop)
