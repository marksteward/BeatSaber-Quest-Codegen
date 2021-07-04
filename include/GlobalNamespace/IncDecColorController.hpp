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
  // Forward declaring type: ColorStepValuePicker
  class ColorStepValuePicker;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: IncDecColorController
  class IncDecColorController : public UnityEngine::MonoBehaviour {
    public:
    // private ColorStepValuePicker _stepValuePicker
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorStepValuePicker* stepValuePicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorStepValuePicker*) == 0x8);
    // Creating value type constructor for type: IncDecColorController
    IncDecColorController(GlobalNamespace::ColorStepValuePicker* stepValuePicker_ = {}) noexcept : stepValuePicker{stepValuePicker_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void set_enableDec(System.Boolean value)
    // Offset: 0x10C4114
    void set_enableDec(bool value);
    // protected System.Void set_enableInc(System.Boolean value)
    // Offset: 0x10C4134
    void set_enableInc(bool value);
    // protected System.Void set_color(UnityEngine.Color value)
    // Offset: 0x10C4154
    void set_color(UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0x10C4170
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x10C4234
    void OnDestroy();
    // protected System.Void IncButtonPressed()
    // Offset: 0xFFFFFFFF
    void IncButtonPressed();
    // protected System.Void DecButtonPressed()
    // Offset: 0xFFFFFFFF
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0x10C433C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IncDecColorController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IncDecColorController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IncDecColorController*, creationType>()));
    }
  }; // IncDecColorController
  #pragma pack(pop)
  static check_size<sizeof(IncDecColorController), 24 + sizeof(GlobalNamespace::ColorStepValuePicker*)> __GlobalNamespace_IncDecColorControllerSizeCheck;
  static_assert(sizeof(IncDecColorController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IncDecColorController*, "", "IncDecColorController");
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::set_enableDec
// Il2CppName: set_enableDec
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::set_enableInc
// Il2CppName: set_enableInc
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::set_color
// Il2CppName: set_color
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::IncButtonPressed
// Il2CppName: IncButtonPressed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::DecButtonPressed
// Il2CppName: DecButtonPressed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
