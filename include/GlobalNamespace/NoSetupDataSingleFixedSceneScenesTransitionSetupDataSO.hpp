// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/SingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  // Autogenerated type: NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
  // [] Offset: FFFFFFFF
  class NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // Creating value type constructor for type: NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
    NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO() noexcept {}
    // public System.Void Init()
    // Offset: 0x1037BDC
    void Init();
    // public System.Void .ctor()
    // Offset: 0x1037D04
    // Implemented from: SingleFixedSceneScenesTransitionSetupDataSO
    // Base method: System.Void SingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*, "", "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO");
#pragma pack(pop)
