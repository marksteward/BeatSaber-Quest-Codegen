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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ShaderWarmupSceneSetupData
  class ShaderWarmupSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  // Autogenerated type: ShaderWarmupScenesTransitionSetupDataSO
  // [] Offset: FFFFFFFF
  class ShaderWarmupScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // Creating value type constructor for type: ShaderWarmupScenesTransitionSetupDataSO
    ShaderWarmupScenesTransitionSetupDataSO() noexcept {}
    // public System.Void Init(ShaderWarmupSceneSetupData shaderWarmupSceneSetupData)
    // Offset: 0xFCD554
    void Init(GlobalNamespace::ShaderWarmupSceneSetupData* shaderWarmupSceneSetupData);
    // public System.Void .ctor()
    // Offset: 0xFCD55C
    // Implemented from: SingleFixedSceneScenesTransitionSetupDataSO
    // Base method: System.Void SingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderWarmupScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderWarmupScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // ShaderWarmupScenesTransitionSetupDataSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*, "", "ShaderWarmupScenesTransitionSetupDataSO");
#pragma pack(pop)
