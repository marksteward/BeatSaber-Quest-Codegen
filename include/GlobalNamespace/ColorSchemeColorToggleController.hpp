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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemeColorToggleController
  class ColorSchemeColorToggleController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Graphic[] _colorGraphics
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::UI::Graphic*>* colorGraphics;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::UI::Graphic*>*) == 0x8);
    // private UnityEngine.UI.Toggle _toggle
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Toggle* toggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // Creating value type constructor for type: ColorSchemeColorToggleController
    ColorSchemeColorToggleController(::Array<UnityEngine::UI::Graphic*>* colorGraphics_ = {}, UnityEngine::UI::Toggle* toggle_ = {}) noexcept : colorGraphics{colorGraphics_}, toggle{toggle_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.UI.Toggle get_toggle()
    // Offset: 0x1191DDC
    UnityEngine::UI::Toggle* get_toggle();
    // public UnityEngine.Color get_color()
    // Offset: 0x1191DE4
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1191E28
    void set_color(UnityEngine::Color value);
    // public System.Void .ctor()
    // Offset: 0x1191ECC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemeColorToggleController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSchemeColorToggleController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemeColorToggleController*, creationType>()));
    }
  }; // ColorSchemeColorToggleController
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemeColorToggleController), 32 + sizeof(UnityEngine::UI::Toggle*)> __GlobalNamespace_ColorSchemeColorToggleControllerSizeCheck;
  static_assert(sizeof(ColorSchemeColorToggleController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeColorToggleController*, "", "ColorSchemeColorToggleController");
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorToggleController::get_toggle
// Il2CppName: get_toggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Toggle* (GlobalNamespace::ColorSchemeColorToggleController::*)()>(&GlobalNamespace::ColorSchemeColorToggleController::get_toggle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorToggleController*), "get_toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorToggleController::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorSchemeColorToggleController::*)()>(&GlobalNamespace::ColorSchemeColorToggleController::get_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorToggleController*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorToggleController::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorToggleController::*)(UnityEngine::Color)>(&GlobalNamespace::ColorSchemeColorToggleController::set_color)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorToggleController*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorToggleController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
