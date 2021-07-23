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
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Get instance field: private BoolSO _settingsValue
    GlobalNamespace::BoolSO* _get__settingsValue();
    // Set instance field: private BoolSO _settingsValue
    void _set__settingsValue(GlobalNamespace::BoolSO* value);
    // public System.Void .ctor()
    // Offset: 0x109EDCC
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
    // protected override System.Boolean GetInitValue()
    // Offset: 0x109ED14
    // Implemented from: SwitchSettingsController
    // Base method: System.Boolean SwitchSettingsController::GetInitValue()
    bool GetInitValue();
    // protected override System.Void ApplyValue(System.Boolean value)
    // Offset: 0x109ED64
    // Implemented from: SwitchSettingsController
    // Base method: System.Void SwitchSettingsController::ApplyValue(System.Boolean value)
    void ApplyValue(bool value);
  }; // BoolSettingsController
  #pragma pack(pop)
  static check_size<sizeof(BoolSettingsController), 40 + sizeof(GlobalNamespace::BoolSO*)> __GlobalNamespace_BoolSettingsControllerSizeCheck;
  static_assert(sizeof(BoolSettingsController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoolSettingsController*, "", "BoolSettingsController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BoolSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BoolSettingsController::GetInitValue
// Il2CppName: GetInitValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BoolSettingsController::*)()>(&GlobalNamespace::BoolSettingsController::GetInitValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoolSettingsController*), "GetInitValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoolSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoolSettingsController::*)(bool)>(&GlobalNamespace::BoolSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoolSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
