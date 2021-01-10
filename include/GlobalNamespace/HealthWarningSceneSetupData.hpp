// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  // Autogenerated type: HealthWarningSceneSetupData
  // [] Offset: FFFFFFFF
  class HealthWarningSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // private ScenesTransitionSetupDataSO _nextScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: HealthWarningSceneSetupData
    HealthWarningSceneSetupData(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData_ = {}) noexcept : nextScenesTransitionSetupData{nextScenesTransitionSetupData_} {}
    // Creating conversion operator: operator GlobalNamespace::ScenesTransitionSetupDataSO*
    constexpr operator GlobalNamespace::ScenesTransitionSetupDataSO*() const noexcept {
      return nextScenesTransitionSetupData;
    }
    // public ScenesTransitionSetupDataSO get_nextScenesTransitionSetupData()
    // Offset: 0xF13C74
    GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData();
    // public System.Void .ctor(ScenesTransitionSetupDataSO nextScenesTransitionSetupData)
    // Offset: 0xF13C7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningSceneSetupData* New_ctor(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningSceneSetupData*, creationType>(nextScenesTransitionSetupData)));
    }
  }; // HealthWarningSceneSetupData
  static check_size<sizeof(HealthWarningSceneSetupData), 16 + sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*)> __GlobalNamespace_HealthWarningSceneSetupDataSizeCheck;
  static_assert(sizeof(HealthWarningSceneSetupData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningSceneSetupData*, "", "HealthWarningSceneSetupData");
#pragma pack(pop)
