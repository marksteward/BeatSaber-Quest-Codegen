// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: UnityEngine.GUISettings
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D656F8
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
    // static private System.Single Internal_GetCursorFlashSpeed()
    // Offset: 0x160BBD0
    static float Internal_GetCursorFlashSpeed();
    // public System.Boolean get_doubleClickSelectsWord()
    // Offset: 0x15FE718
    bool get_doubleClickSelectsWord();
    // public System.Boolean get_tripleClickSelectsLine()
    // Offset: 0x15FE7DC
    bool get_tripleClickSelectsLine();
    // public UnityEngine.Color get_cursorColor()
    // Offset: 0x160BC04
    UnityEngine::Color get_cursorColor();
    // public System.Single get_cursorFlashSpeed()
    // Offset: 0x160BC10
    float get_cursorFlashSpeed();
    // public UnityEngine.Color get_selectionColor()
    // Offset: 0x160BC54
    UnityEngine::Color get_selectionColor();
    // public System.Void .ctor()
    // Offset: 0x160BC60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUISettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUISettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUISettings*, creationType>()));
    }
  }; // UnityEngine.GUISettings
  static check_size<sizeof(GUISettings), 40 + sizeof(UnityEngine::Color)> __UnityEngine_GUISettingsSizeCheck;
  static_assert(sizeof(GUISettings) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUISettings*, "UnityEngine", "GUISettings");
#pragma pack(pop)
