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
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TutorialRestartController
  class TutorialRestartController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::ILevelRestartController*/ {
    public:
    // private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: TutorialRestartController
    TutorialRestartController(GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData_ = {}) noexcept : tutorialSceneSetupData{tutorialSceneSetupData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILevelRestartController
    operator GlobalNamespace::ILevelRestartController() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelRestartController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void RestartLevel()
    // Offset: 0x111F56C
    void RestartLevel();
    // public System.Void .ctor()
    // Offset: 0x111F588
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialRestartController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialRestartController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialRestartController*, creationType>()));
    }
  }; // TutorialRestartController
  #pragma pack(pop)
  static check_size<sizeof(TutorialRestartController), 24 + sizeof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*)> __GlobalNamespace_TutorialRestartControllerSizeCheck;
  static_assert(sizeof(TutorialRestartController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialRestartController*, "", "TutorialRestartController");
// Writing MetadataGetter for method: GlobalNamespace::TutorialRestartController::RestartLevel
// Il2CppName: RestartLevel
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TutorialRestartController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
