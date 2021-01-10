// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.InputFieldView
#include "HMUI/InputFieldView.hpp"
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
  // Size: 0x49
  // Autogenerated type: HMUI.InputFieldViewStaticAnimations
  // [] Offset: FFFFFFFF
  class InputFieldViewStaticAnimations : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.InputFieldView _inputFieldView
    // Size: 0x8
    // Offset: 0x18
    HMUI::InputFieldView* inputFieldView;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // [SpaceAttribute] Offset: 0xDA7848
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
    // private UnityEngine.AnimationClip _selectedClip
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationClip* selectedClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private System.Boolean _didStart
    // Size: 0x1
    // Offset: 0x48
    bool didStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InputFieldViewStaticAnimations
    InputFieldViewStaticAnimations(HMUI::InputFieldView* inputFieldView_ = {}, UnityEngine::AnimationClip* normalClip_ = {}, UnityEngine::AnimationClip* highlightedClip_ = {}, UnityEngine::AnimationClip* pressedClip_ = {}, UnityEngine::AnimationClip* disabledClip_ = {}, UnityEngine::AnimationClip* selectedClip_ = {}, bool didStart_ = {}) noexcept : inputFieldView{inputFieldView_}, normalClip{normalClip_}, highlightedClip{highlightedClip_}, pressedClip{pressedClip_}, disabledClip{disabledClip_}, selectedClip{selectedClip_}, didStart{didStart_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x107A9EC
    void Awake();
    // protected System.Void Start()
    // Offset: 0x107AA7C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x107ABB8
    void OnEnable();
    // protected System.Void OnDestroy()
    // Offset: 0x107ABD4
    void OnDestroy();
    // private System.Void HandleInputFieldViewSelectionStateDidChange(HMUI.InputFieldView/SelectionState state)
    // Offset: 0x107AAA0
    void HandleInputFieldViewSelectionStateDidChange(HMUI::InputFieldView::SelectionState state);
    // public System.Void .ctor()
    // Offset: 0x107ACAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldViewStaticAnimations* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldViewStaticAnimations::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldViewStaticAnimations*, creationType>()));
    }
  }; // HMUI.InputFieldViewStaticAnimations
  static check_size<sizeof(InputFieldViewStaticAnimations), 72 + sizeof(bool)> __HMUI_InputFieldViewStaticAnimationsSizeCheck;
  static_assert(sizeof(InputFieldViewStaticAnimations) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldViewStaticAnimations*, "HMUI", "InputFieldViewStaticAnimations");
#pragma pack(pop)
