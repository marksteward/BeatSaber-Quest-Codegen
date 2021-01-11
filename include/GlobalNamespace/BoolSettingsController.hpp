// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SwitchSettingsController
#include "GlobalNamespace/SwitchSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BoolSettingsController
  // [] Offset: FFFFFFFF
  class BoolSettingsController : public GlobalNamespace::SwitchSettingsController {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    // private BoolSO _settingsValue
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BoolSO* settingsValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // Creating value type constructor for type: BoolSettingsController
    BoolSettingsController(GlobalNamespace::BoolSO* settingsValue_ = {}) noexcept : settingsValue{settingsValue_} {}
    // protected override System.Boolean GetInitValue()
    // Offset: 0x1A3182C
    // Implemented from: SwitchSettingsController
    // Base method: System.Boolean SwitchSettingsController::GetInitValue()
    bool GetInitValue();
    // protected override System.Void ApplyValue(System.Boolean value)
    // Offset: 0x1A3187C
    // Implemented from: SwitchSettingsController
    // Base method: System.Void SwitchSettingsController::ApplyValue(System.Boolean value)
    void ApplyValue(bool value);
    // public System.Void .ctor()
    // Offset: 0x1A318E4
    // Implemented from: SwitchSettingsController
    // Base method: System.Void SwitchSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoolSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BoolSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoolSettingsController*, creationType>()));
    }
  }; // BoolSettingsController
  static check_size<sizeof(BoolSettingsController), 40 + sizeof(GlobalNamespace::BoolSO*)> __GlobalNamespace_BoolSettingsControllerSizeCheck;
  static_assert(sizeof(BoolSettingsController) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoolSettingsController*, "", "BoolSettingsController");
