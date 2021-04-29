// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StepValuePicker
  class StepValuePicker;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: IncDecSettingsController
  class IncDecSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private StepValuePicker _stepValuePicker
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::StepValuePicker* stepValuePicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StepValuePicker*) == 0x8);
    // Creating value type constructor for type: IncDecSettingsController
    IncDecSettingsController(GlobalNamespace::StepValuePicker* stepValuePicker_ = {}) noexcept : stepValuePicker{stepValuePicker_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void set_enableDec(System.Boolean value)
    // Offset: 0xF75A80
    void set_enableDec(bool value);
    // protected System.Void set_enableInc(System.Boolean value)
    // Offset: 0xF75AA0
    void set_enableInc(bool value);
    // protected System.Void set_text(System.String value)
    // Offset: 0xF75AC0
    void set_text(::Il2CppString* value);
    // protected System.Void Awake()
    // Offset: 0xF75ADC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF75BA0
    void OnDestroy();
    // protected System.Void IncButtonPressed()
    // Offset: 0xFFFFFFFF
    void IncButtonPressed();
    // protected System.Void DecButtonPressed()
    // Offset: 0xFFFFFFFF
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0xF75CA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IncDecSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IncDecSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IncDecSettingsController*, creationType>()));
    }
  }; // IncDecSettingsController
  #pragma pack(pop)
  static check_size<sizeof(IncDecSettingsController), 24 + sizeof(GlobalNamespace::StepValuePicker*)> __GlobalNamespace_IncDecSettingsControllerSizeCheck;
  static_assert(sizeof(IncDecSettingsController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IncDecSettingsController*, "", "IncDecSettingsController");
