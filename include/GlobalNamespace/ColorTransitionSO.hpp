// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseTransitionSO
#include "GlobalNamespace/BaseTransitionSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ColorTransitionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorTransitionSO : public GlobalNamespace::BaseTransitionSO {
    public:
    // private ColorSO _normalColor
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSO* normalColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightedColor
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ColorSO* highlightedColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _pressedColor
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSO* pressedColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _disabledColor
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorSO* disabledColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _selectedColor
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ColorSO* selectedColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _selectedAndHighlightedColor
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ColorSO* selectedAndHighlightedColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // Creating value type constructor for type: ColorTransitionSO
    ColorTransitionSO(GlobalNamespace::ColorSO* normalColor_ = {}, GlobalNamespace::ColorSO* highlightedColor_ = {}, GlobalNamespace::ColorSO* pressedColor_ = {}, GlobalNamespace::ColorSO* disabledColor_ = {}, GlobalNamespace::ColorSO* selectedColor_ = {}, GlobalNamespace::ColorSO* selectedAndHighlightedColor_ = {}) noexcept : normalColor{normalColor_}, highlightedColor{highlightedColor_}, pressedColor{pressedColor_}, disabledColor{disabledColor_}, selectedColor{selectedColor_}, selectedAndHighlightedColor{selectedAndHighlightedColor_} {}
    // Get instance field: private ColorSO _normalColor
    GlobalNamespace::ColorSO* _get__normalColor();
    // Set instance field: private ColorSO _normalColor
    void _set__normalColor(GlobalNamespace::ColorSO* value);
    // Get instance field: private ColorSO _highlightedColor
    GlobalNamespace::ColorSO* _get__highlightedColor();
    // Set instance field: private ColorSO _highlightedColor
    void _set__highlightedColor(GlobalNamespace::ColorSO* value);
    // Get instance field: private ColorSO _pressedColor
    GlobalNamespace::ColorSO* _get__pressedColor();
    // Set instance field: private ColorSO _pressedColor
    void _set__pressedColor(GlobalNamespace::ColorSO* value);
    // Get instance field: private ColorSO _disabledColor
    GlobalNamespace::ColorSO* _get__disabledColor();
    // Set instance field: private ColorSO _disabledColor
    void _set__disabledColor(GlobalNamespace::ColorSO* value);
    // Get instance field: private ColorSO _selectedColor
    GlobalNamespace::ColorSO* _get__selectedColor();
    // Set instance field: private ColorSO _selectedColor
    void _set__selectedColor(GlobalNamespace::ColorSO* value);
    // Get instance field: private ColorSO _selectedAndHighlightedColor
    GlobalNamespace::ColorSO* _get__selectedAndHighlightedColor();
    // Set instance field: private ColorSO _selectedAndHighlightedColor
    void _set__selectedAndHighlightedColor(GlobalNamespace::ColorSO* value);
    // public UnityEngine.Color get_normalColor()
    // Offset: 0x1EFD3B8
    UnityEngine::Color get_normalColor();
    // public UnityEngine.Color get_highlightedColor()
    // Offset: 0x1EFD61C
    UnityEngine::Color get_highlightedColor();
    // public UnityEngine.Color get_pressedColor()
    // Offset: 0x1EFD660
    UnityEngine::Color get_pressedColor();
    // public UnityEngine.Color get_disabledColor()
    // Offset: 0x1EFD6A4
    UnityEngine::Color get_disabledColor();
    // public UnityEngine.Color get_selectedColor()
    // Offset: 0x1EFD6E8
    UnityEngine::Color get_selectedColor();
    // public UnityEngine.Color get_selectedAndHighlightedColor()
    // Offset: 0x1EFD72C
    UnityEngine::Color get_selectedAndHighlightedColor();
    // public System.Void .ctor()
    // Offset: 0x1F01448
    // Implemented from: BaseTransitionSO
    // Base method: System.Void BaseTransitionSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorTransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTransitionSO*, creationType>()));
    }
  }; // ColorTransitionSO
  #pragma pack(pop)
  static check_size<sizeof(ColorTransitionSO), 72 + sizeof(GlobalNamespace::ColorSO*)> __GlobalNamespace_ColorTransitionSOSizeCheck;
  static_assert(sizeof(ColorTransitionSO) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorTransitionSO*, "", "ColorTransitionSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_normalColor
// Il2CppName: get_normalColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_normalColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_normalColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_highlightedColor
// Il2CppName: get_highlightedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_highlightedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_highlightedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_pressedColor
// Il2CppName: get_pressedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_pressedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_pressedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_disabledColor
// Il2CppName: get_disabledColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_disabledColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_disabledColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_selectedColor
// Il2CppName: get_selectedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_selectedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_selectedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_selectedAndHighlightedColor
// Il2CppName: get_selectedAndHighlightedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_selectedAndHighlightedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_selectedAndHighlightedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
