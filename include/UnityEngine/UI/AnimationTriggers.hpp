// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x38
  // Autogenerated type: UnityEngine.UI.AnimationTriggers
  // [] Offset: FFFFFFFF
  class AnimationTriggers : public ::Il2CppObject {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xD7DAEC
    // private System.String m_NormalTrigger
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_NormalTrigger;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD7DB38
    // private System.String m_HighlightedTrigger
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_HighlightedTrigger;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD7DB84
    // private System.String m_PressedTrigger
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_PressedTrigger;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD7DBD0
    // private System.String m_SelectedTrigger
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_SelectedTrigger;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD7DC1C
    // private System.String m_DisabledTrigger
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_DisabledTrigger;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AnimationTriggers
    AnimationTriggers(::Il2CppString* m_NormalTrigger_ = {}, ::Il2CppString* m_HighlightedTrigger_ = {}, ::Il2CppString* m_PressedTrigger_ = {}, ::Il2CppString* m_SelectedTrigger_ = {}, ::Il2CppString* m_DisabledTrigger_ = {}) noexcept : m_NormalTrigger{m_NormalTrigger_}, m_HighlightedTrigger{m_HighlightedTrigger_}, m_PressedTrigger{m_PressedTrigger_}, m_SelectedTrigger{m_SelectedTrigger_}, m_DisabledTrigger{m_DisabledTrigger_} {}
    // static field const value: static private System.String kDefaultNormalAnimName
    static constexpr const char* kDefaultNormalAnimName = "Normal";
    // Get static field: static private System.String kDefaultNormalAnimName
    static ::Il2CppString* _get_kDefaultNormalAnimName();
    // Set static field: static private System.String kDefaultNormalAnimName
    static void _set_kDefaultNormalAnimName(::Il2CppString* value);
    // static field const value: static private System.String kDefaultHighlightedAnimName
    static constexpr const char* kDefaultHighlightedAnimName = "Highlighted";
    // Get static field: static private System.String kDefaultHighlightedAnimName
    static ::Il2CppString* _get_kDefaultHighlightedAnimName();
    // Set static field: static private System.String kDefaultHighlightedAnimName
    static void _set_kDefaultHighlightedAnimName(::Il2CppString* value);
    // static field const value: static private System.String kDefaultPressedAnimName
    static constexpr const char* kDefaultPressedAnimName = "Pressed";
    // Get static field: static private System.String kDefaultPressedAnimName
    static ::Il2CppString* _get_kDefaultPressedAnimName();
    // Set static field: static private System.String kDefaultPressedAnimName
    static void _set_kDefaultPressedAnimName(::Il2CppString* value);
    // static field const value: static private System.String kDefaultSelectedAnimName
    static constexpr const char* kDefaultSelectedAnimName = "Selected";
    // Get static field: static private System.String kDefaultSelectedAnimName
    static ::Il2CppString* _get_kDefaultSelectedAnimName();
    // Set static field: static private System.String kDefaultSelectedAnimName
    static void _set_kDefaultSelectedAnimName(::Il2CppString* value);
    // static field const value: static private System.String kDefaultDisabledAnimName
    static constexpr const char* kDefaultDisabledAnimName = "Disabled";
    // Get static field: static private System.String kDefaultDisabledAnimName
    static ::Il2CppString* _get_kDefaultDisabledAnimName();
    // Set static field: static private System.String kDefaultDisabledAnimName
    static void _set_kDefaultDisabledAnimName(::Il2CppString* value);
    // public System.String get_normalTrigger()
    // Offset: 0x1155B68
    ::Il2CppString* get_normalTrigger();
    // public System.Void set_normalTrigger(System.String value)
    // Offset: 0x1155B70
    void set_normalTrigger(::Il2CppString* value);
    // public System.String get_highlightedTrigger()
    // Offset: 0x1155B78
    ::Il2CppString* get_highlightedTrigger();
    // public System.Void set_highlightedTrigger(System.String value)
    // Offset: 0x1155B80
    void set_highlightedTrigger(::Il2CppString* value);
    // public System.String get_pressedTrigger()
    // Offset: 0x1155B88
    ::Il2CppString* get_pressedTrigger();
    // public System.Void set_pressedTrigger(System.String value)
    // Offset: 0x1155B90
    void set_pressedTrigger(::Il2CppString* value);
    // public System.String get_selectedTrigger()
    // Offset: 0x1155B98
    ::Il2CppString* get_selectedTrigger();
    // public System.Void set_selectedTrigger(System.String value)
    // Offset: 0x1155BA0
    void set_selectedTrigger(::Il2CppString* value);
    // public System.String get_disabledTrigger()
    // Offset: 0x1155BA8
    ::Il2CppString* get_disabledTrigger();
    // public System.Void set_disabledTrigger(System.String value)
    // Offset: 0x1155BB0
    void set_disabledTrigger(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1155BB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationTriggers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::AnimationTriggers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationTriggers*, creationType>()));
    }
  }; // UnityEngine.UI.AnimationTriggers
  static check_size<sizeof(AnimationTriggers), 48 + sizeof(::Il2CppString*)> __UnityEngine_UI_AnimationTriggersSizeCheck;
  static_assert(sizeof(AnimationTriggers) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::AnimationTriggers*, "UnityEngine.UI", "AnimationTriggers");
#pragma pack(pop)
