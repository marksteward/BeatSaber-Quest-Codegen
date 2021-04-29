// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.SelectableCell
#include "HMUI/SelectableCell.hpp"
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
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SelectableCellStaticAnimations
  class SelectableCellStaticAnimations : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.SelectableCell _selectableCell
    // Size: 0x8
    // Offset: 0x18
    HMUI::SelectableCell* selectableCell;
    // Field size check
    static_assert(sizeof(HMUI::SelectableCell*) == 0x8);
    // [SpaceAttribute] Offset: 0xD181C0
    // private UnityEngine.AnimationClip _normalAnimationClip
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationClip* normalAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _highlightedAnimationClip
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationClip* highlightedAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _selectedAnimationClip
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationClip* selectedAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _selectedAndHighlightedAnimationClip
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationClip* selectedAndHighlightedAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // Creating value type constructor for type: SelectableCellStaticAnimations
    SelectableCellStaticAnimations(HMUI::SelectableCell* selectableCell_ = {}, UnityEngine::AnimationClip* normalAnimationClip_ = {}, UnityEngine::AnimationClip* highlightedAnimationClip_ = {}, UnityEngine::AnimationClip* selectedAnimationClip_ = {}, UnityEngine::AnimationClip* selectedAndHighlightedAnimationClip_ = {}) noexcept : selectableCell{selectableCell_}, normalAnimationClip{normalAnimationClip_}, highlightedAnimationClip{highlightedAnimationClip_}, selectedAnimationClip{selectedAnimationClip_}, selectedAndHighlightedAnimationClip{selectedAndHighlightedAnimationClip_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x121FFFC
    void Awake();
    // protected System.Void Start()
    // Offset: 0x12200D4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1220148
    void OnDestroy();
    // private System.Void HandleSelectionDidChange(HMUI.SelectableCell selectableCell, HMUI.SelectableCell/TransitionType transitionType, System.Object changeOwner)
    // Offset: 0x1220220
    void HandleSelectionDidChange(HMUI::SelectableCell* selectableCell, HMUI::SelectableCell::TransitionType transitionType, ::Il2CppObject* changeOwner);
    // private System.Void HandleHighlightDidChange(HMUI.SelectableCell selectableCell, HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x1220224
    void HandleHighlightDidChange(HMUI::SelectableCell* selectableCell, HMUI::SelectableCell::TransitionType transitionType);
    // private System.Void RefreshVisuals()
    // Offset: 0x12200D8
    void RefreshVisuals();
    // public System.Void .ctor()
    // Offset: 0x1220228
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectableCellStaticAnimations* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::SelectableCellStaticAnimations::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectableCellStaticAnimations*, creationType>()));
    }
  }; // HMUI.SelectableCellStaticAnimations
  #pragma pack(pop)
  static check_size<sizeof(SelectableCellStaticAnimations), 56 + sizeof(UnityEngine::AnimationClip*)> __HMUI_SelectableCellStaticAnimationsSizeCheck;
  static_assert(sizeof(SelectableCellStaticAnimations) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::SelectableCellStaticAnimations*, "HMUI", "SelectableCellStaticAnimations");
