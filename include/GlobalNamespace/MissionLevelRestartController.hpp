// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelRestartController
#include "GlobalNamespace/ILevelRestartController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelRestartController
  class MissionLevelRestartController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::ILevelRestartController*/ {
    public:
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    // Creating value type constructor for type: MissionLevelRestartController
    MissionLevelRestartController(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelSceneSetupData_ = {}, GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults_ = {}, GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager_ = {}) noexcept : missionLevelSceneSetupData{missionLevelSceneSetupData_}, prepareLevelCompletionResults{prepareLevelCompletionResults_}, missionObjectiveCheckersManager{missionObjectiveCheckersManager_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILevelRestartController
    operator GlobalNamespace::ILevelRestartController() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelRestartController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void RestartLevel()
    // Offset: 0x10967DC
    void RestartLevel();
    // public System.Void .ctor()
    // Offset: 0x1096888
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelRestartController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelRestartController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelRestartController*, creationType>()));
    }
  }; // MissionLevelRestartController
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelRestartController), 40 + sizeof(GlobalNamespace::MissionObjectiveCheckersManager*)> __GlobalNamespace_MissionLevelRestartControllerSizeCheck;
  static_assert(sizeof(MissionLevelRestartController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelRestartController*, "", "MissionLevelRestartController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelRestartController::RestartLevel
// Il2CppName: RestartLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelRestartController::*)()>(&GlobalNamespace::MissionLevelRestartController::RestartLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelRestartController*), "RestartLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelRestartController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
