// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.NoTransitionsButton
#include "HMUI/NoTransitionsButton.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ButtonStaticAnimations
  class ButtonStaticAnimations : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.NoTransitionsButton _button
    // Size: 0x8
    // Offset: 0x18
    HMUI::NoTransitionsButton* button;
    // Field size check
    static_assert(sizeof(HMUI::NoTransitionsButton*) == 0x8);
    // [SpaceAttribute] Offset: 0xDF8F10
    // private UnityEngine.AnimationClip _normalClip
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationClip* normalClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _highlightedClip
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationClip* highlightedClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _pressedClip
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationClip* pressedClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _disabledClip
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationClip* disabledClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private System.Boolean _didStart
    // Size: 0x1
    // Offset: 0x40
    bool didStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ButtonStaticAnimations
    ButtonStaticAnimations(HMUI::NoTransitionsButton* button_ = {}, UnityEngine::AnimationClip* normalClip_ = {}, UnityEngine::AnimationClip* highlightedClip_ = {}, UnityEngine::AnimationClip* pressedClip_ = {}, UnityEngine::AnimationClip* disabledClip_ = {}, bool didStart_ = {}) noexcept : button{button_}, normalClip{normalClip_}, highlightedClip{highlightedClip_}, pressedClip{pressedClip_}, disabledClip{disabledClip_}, didStart{didStart_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x130BE08
    void Awake();
    // protected System.Void Start()
    // Offset: 0x130BE9C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x130BFD0
    void OnEnable();
    // protected System.Void OnDestroy()
    // Offset: 0x130BFEC
    void OnDestroy();
    // private System.Void HandleButtonSelectionStateDidChange(HMUI.NoTransitionsButton/SelectionState state)
    // Offset: 0x130BEC0
    void HandleButtonSelectionStateDidChange(HMUI::NoTransitionsButton::SelectionState state);
    // public System.Void .ctor()
    // Offset: 0x130C0C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonStaticAnimations* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ButtonStaticAnimations::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonStaticAnimations*, creationType>()));
    }
  }; // HMUI.ButtonStaticAnimations
  #pragma pack(pop)
  static check_size<sizeof(ButtonStaticAnimations), 64 + sizeof(bool)> __HMUI_ButtonStaticAnimationsSizeCheck;
  static_assert(sizeof(ButtonStaticAnimations) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ButtonStaticAnimations*, "HMUI", "ButtonStaticAnimations");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ButtonStaticAnimations::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonStaticAnimations::*)()>(&HMUI::ButtonStaticAnimations::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonStaticAnimations*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonStaticAnimations::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonStaticAnimations::*)()>(&HMUI::ButtonStaticAnimations::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonStaticAnimations*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonStaticAnimations::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonStaticAnimations::*)()>(&HMUI::ButtonStaticAnimations::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonStaticAnimations*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonStaticAnimations::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonStaticAnimations::*)()>(&HMUI::ButtonStaticAnimations::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonStaticAnimations*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonStaticAnimations::HandleButtonSelectionStateDidChange
// Il2CppName: HandleButtonSelectionStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonStaticAnimations::*)(HMUI::NoTransitionsButton::SelectionState)>(&HMUI::ButtonStaticAnimations::HandleButtonSelectionStateDidChange)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("HMUI", "NoTransitionsButton/SelectionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonStaticAnimations*), "HandleButtonSelectionStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonStaticAnimations::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
