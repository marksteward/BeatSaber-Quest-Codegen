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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: TextFadeTransitions
  class TextFadeTransitions : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TextFadeTransitions::State
    struct State;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: TextFadeTransitions/State
    struct State/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public TextFadeTransitions/State NotInTransition
      static constexpr const int NotInTransition = 0;
      // Get static field: static public TextFadeTransitions/State NotInTransition
      static GlobalNamespace::TextFadeTransitions::State _get_NotInTransition();
      // Set static field: static public TextFadeTransitions/State NotInTransition
      static void _set_NotInTransition(GlobalNamespace::TextFadeTransitions::State value);
      // static field const value: static public TextFadeTransitions/State FadingOut
      static constexpr const int FadingOut = 1;
      // Get static field: static public TextFadeTransitions/State FadingOut
      static GlobalNamespace::TextFadeTransitions::State _get_FadingOut();
      // Set static field: static public TextFadeTransitions/State FadingOut
      static void _set_FadingOut(GlobalNamespace::TextFadeTransitions::State value);
      // static field const value: static public TextFadeTransitions/State FadingIn
      static constexpr const int FadingIn = 2;
      // Get static field: static public TextFadeTransitions/State FadingIn
      static GlobalNamespace::TextFadeTransitions::State _get_FadingIn();
      // Set static field: static public TextFadeTransitions/State FadingIn
      static void _set_FadingIn(GlobalNamespace::TextFadeTransitions::State value);
    }; // TextFadeTransitions/State
    #pragma pack(pop)
    static check_size<sizeof(TextFadeTransitions::State), 0 + sizeof(int)> __GlobalNamespace_TextFadeTransitions_StateSizeCheck;
    static_assert(sizeof(TextFadeTransitions::State) == 0x4);
    // private TMPro.TextMeshProUGUI _textLabel
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* textLabel;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [TooltipAttribute] Offset: 0xE1FC60
    // private UnityEngine.CanvasGroup _canvasGroup
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private System.Single _fadeDuration
    // Size: 0x4
    // Offset: 0x28
    float fadeDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private TextFadeTransitions/State _state
    // Size: 0x4
    // Offset: 0x2C
    GlobalNamespace::TextFadeTransitions::State state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TextFadeTransitions::State) == 0x4);
    // private System.String _nextText
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* nextText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _fade
    // Size: 0x4
    // Offset: 0x38
    float fade;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TextFadeTransitions
    TextFadeTransitions(TMPro::TextMeshProUGUI* textLabel_ = {}, UnityEngine::CanvasGroup* canvasGroup_ = {}, float fadeDuration_ = {}, GlobalNamespace::TextFadeTransitions::State state_ = {}, ::Il2CppString* nextText_ = {}, float fade_ = {}) noexcept : textLabel{textLabel_}, canvasGroup{canvasGroup_}, fadeDuration{fadeDuration_}, state{state_}, nextText{nextText_}, fade{fade_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1118620
    void Awake();
    // protected System.Void Update()
    // Offset: 0x1118784
    void Update();
    // private System.Void RefreshState()
    // Offset: 0x1118788
    void RefreshState();
    // private System.Void RefreshTextAlpha()
    // Offset: 0x111869C
    void RefreshTextAlpha();
    // public System.Void ShowText(System.String text)
    // Offset: 0x1118914
    void ShowText(::Il2CppString* text);
    // public System.Void .ctor()
    // Offset: 0x1118980
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextFadeTransitions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TextFadeTransitions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextFadeTransitions*, creationType>()));
    }
  }; // TextFadeTransitions
  #pragma pack(pop)
  static check_size<sizeof(TextFadeTransitions), 56 + sizeof(float)> __GlobalNamespace_TextFadeTransitionsSizeCheck;
  static_assert(sizeof(TextFadeTransitions) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextFadeTransitions*, "", "TextFadeTransitions");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextFadeTransitions::State, "", "TextFadeTransitions/State");
// Writing MetadataGetter for method: GlobalNamespace::TextFadeTransitions::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextFadeTransitions::*)()>(&GlobalNamespace::TextFadeTransitions::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextFadeTransitions*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextFadeTransitions::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextFadeTransitions::*)()>(&GlobalNamespace::TextFadeTransitions::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextFadeTransitions*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextFadeTransitions::RefreshState
// Il2CppName: RefreshState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextFadeTransitions::*)()>(&GlobalNamespace::TextFadeTransitions::RefreshState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextFadeTransitions*), "RefreshState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextFadeTransitions::RefreshTextAlpha
// Il2CppName: RefreshTextAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextFadeTransitions::*)()>(&GlobalNamespace::TextFadeTransitions::RefreshTextAlpha)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextFadeTransitions*), "RefreshTextAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextFadeTransitions::ShowText
// Il2CppName: ShowText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextFadeTransitions::*)(::Il2CppString*)>(&GlobalNamespace::TextFadeTransitions::ShowText)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextFadeTransitions*), "ShowText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextFadeTransitions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
