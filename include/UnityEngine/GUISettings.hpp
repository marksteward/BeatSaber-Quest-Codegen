// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUISettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D9AF10
  class GUISettings : public ::Il2CppObject {
    public:
    // private System.Boolean m_DoubleClickSelectsWord
    // Size: 0x1
    // Offset: 0x10
    bool m_DoubleClickSelectsWord;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_TripleClickSelectsLine
    // Size: 0x1
    // Offset: 0x11
    bool m_TripleClickSelectsLine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_TripleClickSelectsLine and: m_CursorColor
    char __padding1[0x2] = {};
    // private UnityEngine.Color m_CursorColor
    // Size: 0x10
    // Offset: 0x14
    UnityEngine::Color m_CursorColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single m_CursorFlashSpeed
    // Size: 0x4
    // Offset: 0x24
    float m_CursorFlashSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color m_SelectionColor
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color m_SelectionColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: GUISettings
    GUISettings(bool m_DoubleClickSelectsWord_ = {}, bool m_TripleClickSelectsLine_ = {}, UnityEngine::Color m_CursorColor_ = {}, float m_CursorFlashSpeed_ = {}, UnityEngine::Color m_SelectionColor_ = {}) noexcept : m_DoubleClickSelectsWord{m_DoubleClickSelectsWord_}, m_TripleClickSelectsLine{m_TripleClickSelectsLine_}, m_CursorColor{m_CursorColor_}, m_CursorFlashSpeed{m_CursorFlashSpeed_}, m_SelectionColor{m_SelectionColor_} {}
    // Get instance field: private System.Boolean m_DoubleClickSelectsWord
    bool _get_m_DoubleClickSelectsWord();
    // Set instance field: private System.Boolean m_DoubleClickSelectsWord
    void _set_m_DoubleClickSelectsWord(bool value);
    // Get instance field: private System.Boolean m_TripleClickSelectsLine
    bool _get_m_TripleClickSelectsLine();
    // Set instance field: private System.Boolean m_TripleClickSelectsLine
    void _set_m_TripleClickSelectsLine(bool value);
    // Get instance field: private UnityEngine.Color m_CursorColor
    UnityEngine::Color _get_m_CursorColor();
    // Set instance field: private UnityEngine.Color m_CursorColor
    void _set_m_CursorColor(UnityEngine::Color value);
    // Get instance field: private System.Single m_CursorFlashSpeed
    float _get_m_CursorFlashSpeed();
    // Set instance field: private System.Single m_CursorFlashSpeed
    void _set_m_CursorFlashSpeed(float value);
    // Get instance field: private UnityEngine.Color m_SelectionColor
    UnityEngine::Color _get_m_SelectionColor();
    // Set instance field: private UnityEngine.Color m_SelectionColor
    void _set_m_SelectionColor(UnityEngine::Color value);
    // public System.Boolean get_doubleClickSelectsWord()
    // Offset: 0x1A9D1A0
    bool get_doubleClickSelectsWord();
    // public System.Boolean get_tripleClickSelectsLine()
    // Offset: 0x1A9D264
    bool get_tripleClickSelectsLine();
    // public UnityEngine.Color get_cursorColor()
    // Offset: 0x1AAA1E0
    UnityEngine::Color get_cursorColor();
    // public System.Single get_cursorFlashSpeed()
    // Offset: 0x1AAA1EC
    float get_cursorFlashSpeed();
    // public UnityEngine.Color get_selectionColor()
    // Offset: 0x1AAA230
    UnityEngine::Color get_selectionColor();
    // static private System.Single Internal_GetCursorFlashSpeed()
    // Offset: 0x1AAA1AC
    static float Internal_GetCursorFlashSpeed();
    // public System.Void .ctor()
    // Offset: 0x1AAA23C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUISettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUISettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUISettings*, creationType>()));
    }
  }; // UnityEngine.GUISettings
  #pragma pack(pop)
  static check_size<sizeof(GUISettings), 40 + sizeof(UnityEngine::Color)> __UnityEngine_GUISettingsSizeCheck;
  static_assert(sizeof(GUISettings) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUISettings*, "UnityEngine", "GUISettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUISettings::get_doubleClickSelectsWord
// Il2CppName: get_doubleClickSelectsWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::GUISettings::*)()>(&UnityEngine::GUISettings::get_doubleClickSelectsWord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "get_doubleClickSelectsWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::get_tripleClickSelectsLine
// Il2CppName: get_tripleClickSelectsLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::GUISettings::*)()>(&UnityEngine::GUISettings::get_tripleClickSelectsLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "get_tripleClickSelectsLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::get_cursorColor
// Il2CppName: get_cursorColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::GUISettings::*)()>(&UnityEngine::GUISettings::get_cursorColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "get_cursorColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::get_cursorFlashSpeed
// Il2CppName: get_cursorFlashSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::GUISettings::*)()>(&UnityEngine::GUISettings::get_cursorFlashSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "get_cursorFlashSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::get_selectionColor
// Il2CppName: get_selectionColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::GUISettings::*)()>(&UnityEngine::GUISettings::get_selectionColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "get_selectionColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::Internal_GetCursorFlashSpeed
// Il2CppName: Internal_GetCursorFlashSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::GUISettings::Internal_GetCursorFlashSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "Internal_GetCursorFlashSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
