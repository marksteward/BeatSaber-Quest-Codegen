// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.ToggleWithCallbacks
#include "HMUI/ToggleWithCallbacks.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Color because it is already included!
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.AnimatedSwitchView
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [RequireComponent] Offset: DE2368
  class AnimatedSwitchView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::AnimatedSwitchView::ColorBlock
    class ColorBlock;
    // Nested type: HMUI::AnimatedSwitchView::AnimationState
    struct AnimationState;
    // Nested type: HMUI::AnimatedSwitchView::GetColorDelegate
    class GetColorDelegate;
    // Nested type: HMUI::AnimatedSwitchView::$$c
    class $$c;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.AnimatedSwitchView/HMUI.AnimationState
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct AnimationState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: AnimationState
      constexpr AnimationState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState Idle
      static constexpr const int Idle = 0;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState Idle
      static HMUI::AnimatedSwitchView::AnimationState _get_Idle();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState Idle
      static void _set_Idle(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOn
      static constexpr const int SwitchingOn = 1;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOn
      static HMUI::AnimatedSwitchView::AnimationState _get_SwitchingOn();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOn
      static void _set_SwitchingOn(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOff
      static constexpr const int SwitchingOff = 2;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOff
      static HMUI::AnimatedSwitchView::AnimationState _get_SwitchingOff();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOff
      static void _set_SwitchingOff(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOn
      static constexpr const int HighlightingOn = 4;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOn
      static HMUI::AnimatedSwitchView::AnimationState _get_HighlightingOn();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOn
      static void _set_HighlightingOn(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOff
      static constexpr const int HighlightingOff = 8;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOff
      static HMUI::AnimatedSwitchView::AnimationState _get_HighlightingOff();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOff
      static void _set_HighlightingOff(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOn
      static constexpr const int DisablingOn = 16;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOn
      static HMUI::AnimatedSwitchView::AnimationState _get_DisablingOn();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOn
      static void _set_DisablingOn(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOff
      static constexpr const int DisablingOff = 32;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOff
      static HMUI::AnimatedSwitchView::AnimationState _get_DisablingOff();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOff
      static void _set_DisablingOff(HMUI::AnimatedSwitchView::AnimationState value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // HMUI.AnimatedSwitchView/HMUI.AnimationState
    #pragma pack(pop)
    static check_size<sizeof(AnimatedSwitchView::AnimationState), 0 + sizeof(int)> __HMUI_AnimatedSwitchView_AnimationStateSizeCheck;
    static_assert(sizeof(AnimatedSwitchView::AnimationState) == 0x4);
    // private UnityEngine.RectTransform _knobRectTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* knobRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xDE3798
    // private HMUI.ImageView _backgroundImage
    // Size: 0x8
    // Offset: 0x20
    HMUI::ImageView* backgroundImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private HMUI.ImageView _knobImage
    // Size: 0x8
    // Offset: 0x28
    HMUI::ImageView* knobImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private TMPro.TextMeshProUGUI _onText
    // Size: 0x8
    // Offset: 0x30
    TMPro::TextMeshProUGUI* onText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _offText
    // Size: 0x8
    // Offset: 0x38
    TMPro::TextMeshProUGUI* offText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0xDE3800
    // private System.Single _switchAnimationSmooth
    // Size: 0x4
    // Offset: 0x40
    float switchAnimationSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disableAnimationDuration
    // Size: 0x4
    // Offset: 0x44
    float disableAnimationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _highlightAnimationDuration
    // Size: 0x4
    // Offset: 0x48
    float highlightAnimationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDE3858
    // private System.Single _horizontalStretchAmount
    // Size: 0x4
    // Offset: 0x4C
    float horizontalStretchAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _verticalStretchAmount
    // Size: 0x4
    // Offset: 0x50
    float verticalStretchAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: verticalStretchAmount and: onColors
    char __padding9[0x4] = {};
    // [SpaceAttribute] Offset: 0xDE38A0
    // private HMUI.AnimatedSwitchView/HMUI.ColorBlock _onColors
    // Size: 0x8
    // Offset: 0x58
    HMUI::AnimatedSwitchView::ColorBlock* onColors;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::ColorBlock*) == 0x8);
    // private HMUI.AnimatedSwitchView/HMUI.ColorBlock _offColors
    // Size: 0x8
    // Offset: 0x60
    HMUI::AnimatedSwitchView::ColorBlock* offColors;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::ColorBlock*) == 0x8);
    // private HMUI.AnimatedSwitchView/HMUI.ColorBlock _onHighlightedColors
    // Size: 0x8
    // Offset: 0x68
    HMUI::AnimatedSwitchView::ColorBlock* onHighlightedColors;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::ColorBlock*) == 0x8);
    // private HMUI.AnimatedSwitchView/HMUI.ColorBlock _offHighlightedColors
    // Size: 0x8
    // Offset: 0x70
    HMUI::AnimatedSwitchView::ColorBlock* offHighlightedColors;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::ColorBlock*) == 0x8);
    // private HMUI.AnimatedSwitchView/HMUI.ColorBlock _disabledColors
    // Size: 0x8
    // Offset: 0x78
    HMUI::AnimatedSwitchView::ColorBlock* disabledColors;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::ColorBlock*) == 0x8);
    // private HMUI.AnimatedSwitchView/HMUI.AnimationState _animationState
    // Size: 0x4
    // Offset: 0x80
    HMUI::AnimatedSwitchView::AnimationState animationState;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::AnimationState) == 0x4);
    // private System.Single _switchAmount
    // Size: 0x4
    // Offset: 0x84
    float switchAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _highlightAmount
    // Size: 0x4
    // Offset: 0x88
    float highlightAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disabledAmount
    // Size: 0x4
    // Offset: 0x8C
    float disabledAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _originalKnobWidth
    // Size: 0x4
    // Offset: 0x90
    float originalKnobWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _originalKnobHeight
    // Size: 0x4
    // Offset: 0x94
    float originalKnobHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private HMUI.ToggleWithCallbacks _toggle
    // Size: 0x8
    // Offset: 0x98
    HMUI::ToggleWithCallbacks* toggle;
    // Field size check
    static_assert(sizeof(HMUI::ToggleWithCallbacks*) == 0x8);
    // Creating value type constructor for type: AnimatedSwitchView
    AnimatedSwitchView(UnityEngine::RectTransform* knobRectTransform_ = {}, HMUI::ImageView* backgroundImage_ = {}, HMUI::ImageView* knobImage_ = {}, TMPro::TextMeshProUGUI* onText_ = {}, TMPro::TextMeshProUGUI* offText_ = {}, float switchAnimationSmooth_ = {}, float disableAnimationDuration_ = {}, float highlightAnimationDuration_ = {}, float horizontalStretchAmount_ = {}, float verticalStretchAmount_ = {}, HMUI::AnimatedSwitchView::ColorBlock* onColors_ = {}, HMUI::AnimatedSwitchView::ColorBlock* offColors_ = {}, HMUI::AnimatedSwitchView::ColorBlock* onHighlightedColors_ = {}, HMUI::AnimatedSwitchView::ColorBlock* offHighlightedColors_ = {}, HMUI::AnimatedSwitchView::ColorBlock* disabledColors_ = {}, HMUI::AnimatedSwitchView::AnimationState animationState_ = {}, float switchAmount_ = {}, float highlightAmount_ = {}, float disabledAmount_ = {}, float originalKnobWidth_ = {}, float originalKnobHeight_ = {}, HMUI::ToggleWithCallbacks* toggle_ = {}) noexcept : knobRectTransform{knobRectTransform_}, backgroundImage{backgroundImage_}, knobImage{knobImage_}, onText{onText_}, offText{offText_}, switchAnimationSmooth{switchAnimationSmooth_}, disableAnimationDuration{disableAnimationDuration_}, highlightAnimationDuration{highlightAnimationDuration_}, horizontalStretchAmount{horizontalStretchAmount_}, verticalStretchAmount{verticalStretchAmount_}, onColors{onColors_}, offColors{offColors_}, onHighlightedColors{onHighlightedColors_}, offHighlightedColors{offHighlightedColors_}, disabledColors{disabledColors_}, animationState{animationState_}, switchAmount{switchAmount_}, highlightAmount{highlightAmount_}, disabledAmount{disabledAmount_}, originalKnobWidth{originalKnobWidth_}, originalKnobHeight{originalKnobHeight_}, toggle{toggle_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.RectTransform _knobRectTransform
    UnityEngine::RectTransform* _get__knobRectTransform();
    // Set instance field: private UnityEngine.RectTransform _knobRectTransform
    void _set__knobRectTransform(UnityEngine::RectTransform* value);
    // Get instance field: private HMUI.ImageView _backgroundImage
    HMUI::ImageView* _get__backgroundImage();
    // Set instance field: private HMUI.ImageView _backgroundImage
    void _set__backgroundImage(HMUI::ImageView* value);
    // Get instance field: private HMUI.ImageView _knobImage
    HMUI::ImageView* _get__knobImage();
    // Set instance field: private HMUI.ImageView _knobImage
    void _set__knobImage(HMUI::ImageView* value);
    // Get instance field: private TMPro.TextMeshProUGUI _onText
    TMPro::TextMeshProUGUI* _get__onText();
    // Set instance field: private TMPro.TextMeshProUGUI _onText
    void _set__onText(TMPro::TextMeshProUGUI* value);
    // Get instance field: private TMPro.TextMeshProUGUI _offText
    TMPro::TextMeshProUGUI* _get__offText();
    // Set instance field: private TMPro.TextMeshProUGUI _offText
    void _set__offText(TMPro::TextMeshProUGUI* value);
    // Get instance field: private System.Single _switchAnimationSmooth
    float _get__switchAnimationSmooth();
    // Set instance field: private System.Single _switchAnimationSmooth
    void _set__switchAnimationSmooth(float value);
    // Get instance field: private System.Single _disableAnimationDuration
    float _get__disableAnimationDuration();
    // Set instance field: private System.Single _disableAnimationDuration
    void _set__disableAnimationDuration(float value);
    // Get instance field: private System.Single _highlightAnimationDuration
    float _get__highlightAnimationDuration();
    // Set instance field: private System.Single _highlightAnimationDuration
    void _set__highlightAnimationDuration(float value);
    // Get instance field: private System.Single _horizontalStretchAmount
    float _get__horizontalStretchAmount();
    // Set instance field: private System.Single _horizontalStretchAmount
    void _set__horizontalStretchAmount(float value);
    // Get instance field: private System.Single _verticalStretchAmount
    float _get__verticalStretchAmount();
    // Set instance field: private System.Single _verticalStretchAmount
    void _set__verticalStretchAmount(float value);
    // Get instance field: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _onColors
    HMUI::AnimatedSwitchView::ColorBlock* _get__onColors();
    // Set instance field: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _onColors
    void _set__onColors(HMUI::AnimatedSwitchView::ColorBlock* value);
    // Get instance field: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _offColors
    HMUI::AnimatedSwitchView::ColorBlock* _get__offColors();
    // Set instance field: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _offColors
    void _set__offColors(HMUI::AnimatedSwitchView::ColorBlock* value);
    // Get instance field: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _onHighlightedColors
    HMUI::AnimatedSwitchView::ColorBlock* _get__onHighlightedColors();
    // Set instance field: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _onHighlightedColors
    void _set__onHighlightedColors(HMUI::AnimatedSwitchView::ColorBlock* value);
    // Get instance field: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _offHighlightedColors
    HMUI::AnimatedSwitchView::ColorBlock* _get__offHighlightedColors();
    // Set instance field: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _offHighlightedColors
    void _set__offHighlightedColors(HMUI::AnimatedSwitchView::ColorBlock* value);
    // Get instance field: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _disabledColors
    HMUI::AnimatedSwitchView::ColorBlock* _get__disabledColors();
    // Set instance field: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _disabledColors
    void _set__disabledColors(HMUI::AnimatedSwitchView::ColorBlock* value);
    // Get instance field: private HMUI.AnimatedSwitchView/HMUI.AnimationState _animationState
    HMUI::AnimatedSwitchView::AnimationState _get__animationState();
    // Set instance field: private HMUI.AnimatedSwitchView/HMUI.AnimationState _animationState
    void _set__animationState(HMUI::AnimatedSwitchView::AnimationState value);
    // Get instance field: private System.Single _switchAmount
    float _get__switchAmount();
    // Set instance field: private System.Single _switchAmount
    void _set__switchAmount(float value);
    // Get instance field: private System.Single _highlightAmount
    float _get__highlightAmount();
    // Set instance field: private System.Single _highlightAmount
    void _set__highlightAmount(float value);
    // Get instance field: private System.Single _disabledAmount
    float _get__disabledAmount();
    // Set instance field: private System.Single _disabledAmount
    void _set__disabledAmount(float value);
    // Get instance field: private System.Single _originalKnobWidth
    float _get__originalKnobWidth();
    // Set instance field: private System.Single _originalKnobWidth
    void _set__originalKnobWidth(float value);
    // Get instance field: private System.Single _originalKnobHeight
    float _get__originalKnobHeight();
    // Set instance field: private System.Single _originalKnobHeight
    void _set__originalKnobHeight(float value);
    // Get instance field: private HMUI.ToggleWithCallbacks _toggle
    HMUI::ToggleWithCallbacks* _get__toggle();
    // Set instance field: private HMUI.ToggleWithCallbacks _toggle
    void _set__toggle(HMUI::ToggleWithCallbacks* value);
    // protected System.Void Awake()
    // Offset: 0x1301F4C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1301FA4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13026AC
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x13027E4
    void Update();
    // private System.Void LerpPosition(System.Single switchAmount)
    // Offset: 0x130263C
    void LerpPosition(float switchAmount);
    // private System.Void LerpStretch(System.Single switchAmount)
    // Offset: 0x1302C44
    void LerpStretch(float switchAmount);
    // private System.Void LerpColors(System.Single switchAmount, System.Single highlightAmount, System.Single disabledAmount)
    // Offset: 0x130212C
    void LerpColors(float switchAmount, float highlightAmount, float disabledAmount);
    // private UnityEngine.Color LerpColor(System.Single switchAmount, System.Single highlightAmount, System.Single disabledAmount, HMUI.AnimatedSwitchView/HMUI.GetColorDelegate getColorDelegate)
    // Offset: 0x1302D28
    UnityEngine::Color LerpColor(float switchAmount, float highlightAmount, float disabledAmount, HMUI::AnimatedSwitchView::GetColorDelegate* getColorDelegate);
    // private System.Void HandleOnValueChanged(System.Boolean value)
    // Offset: 0x130329C
    void HandleOnValueChanged(bool value);
    // private System.Void HandleStateDidChange(HMUI.ToggleWithCallbacks/HMUI.SelectionState selectionState)
    // Offset: 0x13032C4
    void HandleStateDidChange(HMUI::ToggleWithCallbacks::SelectionState selectionState);
    // public System.Void .ctor()
    // Offset: 0x13033C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedSwitchView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::AnimatedSwitchView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedSwitchView*, creationType>()));
    }
  }; // HMUI.AnimatedSwitchView
  #pragma pack(pop)
  static check_size<sizeof(AnimatedSwitchView), 152 + sizeof(HMUI::ToggleWithCallbacks*)> __HMUI_AnimatedSwitchViewSizeCheck;
  static_assert(sizeof(AnimatedSwitchView) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView*, "HMUI", "AnimatedSwitchView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView::AnimationState, "HMUI", "AnimatedSwitchView/AnimationState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)()>(&HMUI::AnimatedSwitchView::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)()>(&HMUI::AnimatedSwitchView::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)()>(&HMUI::AnimatedSwitchView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)()>(&HMUI::AnimatedSwitchView::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::LerpPosition
// Il2CppName: LerpPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)(float)>(&HMUI::AnimatedSwitchView::LerpPosition)> {
  static const MethodInfo* get() {
    static auto* switchAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "LerpPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{switchAmount});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::LerpStretch
// Il2CppName: LerpStretch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)(float)>(&HMUI::AnimatedSwitchView::LerpStretch)> {
  static const MethodInfo* get() {
    static auto* switchAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "LerpStretch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{switchAmount});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::LerpColors
// Il2CppName: LerpColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)(float, float, float)>(&HMUI::AnimatedSwitchView::LerpColors)> {
  static const MethodInfo* get() {
    static auto* switchAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* highlightAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* disabledAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "LerpColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{switchAmount, highlightAmount, disabledAmount});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::LerpColor
// Il2CppName: LerpColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::AnimatedSwitchView::*)(float, float, float, HMUI::AnimatedSwitchView::GetColorDelegate*)>(&HMUI::AnimatedSwitchView::LerpColor)> {
  static const MethodInfo* get() {
    static auto* switchAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* highlightAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* disabledAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* getColorDelegate = &::il2cpp_utils::GetClassFromName("HMUI", "AnimatedSwitchView/GetColorDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "LerpColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{switchAmount, highlightAmount, disabledAmount, getColorDelegate});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::HandleOnValueChanged
// Il2CppName: HandleOnValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)(bool)>(&HMUI::AnimatedSwitchView::HandleOnValueChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "HandleOnValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::HandleStateDidChange
// Il2CppName: HandleStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)(HMUI::ToggleWithCallbacks::SelectionState)>(&HMUI::AnimatedSwitchView::HandleStateDidChange)> {
  static const MethodInfo* get() {
    static auto* selectionState = &::il2cpp_utils::GetClassFromName("HMUI", "ToggleWithCallbacks/SelectionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "HandleStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectionState});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
