// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModifiersSelectionView
#include "GlobalNamespace/ModifiersSelectionView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4A
  #pragma pack(push, 1)
  // Autogenerated type: EditableModifiersSelectionView
  // [TokenAttribute] Offset: FFFFFFFF
  class EditableModifiersSelectionView : public GlobalNamespace::ModifiersSelectionView {
    public:
    // [SpaceAttribute] Offset: 0xE10F7C
    // private UnityEngine.UI.Button _editButton
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Button* editButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _clearButton
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Button* clearButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.CanvasGroup _modifiersListCanvasGroup
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::CanvasGroup* modifiersListCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private System.Boolean _interactable
    // Size: 0x1
    // Offset: 0x48
    bool interactable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <showClearButton>k__BackingField
    // Size: 0x1
    // Offset: 0x49
    bool showClearButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EditableModifiersSelectionView
    EditableModifiersSelectionView(UnityEngine::UI::Button* editButton_ = {}, UnityEngine::UI::Button* clearButton_ = {}, UnityEngine::CanvasGroup* modifiersListCanvasGroup_ = {}, bool interactable_ = {}, bool showClearButton_ = {}) noexcept : editButton{editButton_}, clearButton{clearButton_}, modifiersListCanvasGroup{modifiersListCanvasGroup_}, interactable{interactable_}, showClearButton{showClearButton_} {}
    // public UnityEngine.UI.Button get_editButton()
    // Offset: 0x101F13C
    UnityEngine::UI::Button* get_editButton();
    // public UnityEngine.UI.Button get_clearButton()
    // Offset: 0x101F144
    UnityEngine::UI::Button* get_clearButton();
    // public System.Boolean get_interactable()
    // Offset: 0x101F14C
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x101F154
    void set_interactable(bool value);
    // public System.Boolean get_showClearButton()
    // Offset: 0x101F1C0
    bool get_showClearButton();
    // public System.Void set_showClearButton(System.Boolean value)
    // Offset: 0x101F1C8
    void set_showClearButton(bool value);
    // public System.Void SetVisibility(System.Boolean visible)
    // Offset: 0x101F1D4
    void SetVisibility(bool visible);
    // public System.Void Setup(System.Boolean showClearButton)
    // Offset: 0x101F208
    void Setup(bool showClearButton);
    // public System.Void .ctor()
    // Offset: 0x101F284
    // Implemented from: ModifiersSelectionView
    // Base method: System.Void ModifiersSelectionView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditableModifiersSelectionView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditableModifiersSelectionView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditableModifiersSelectionView*, creationType>()));
    }
    // public override System.Void SetGameplayModifiers(GameplayModifiers gameplayModifiers)
    // Offset: 0x101F214
    // Implemented from: ModifiersSelectionView
    // Base method: System.Void ModifiersSelectionView::SetGameplayModifiers(GameplayModifiers gameplayModifiers)
    void SetGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers);
  }; // EditableModifiersSelectionView
  #pragma pack(pop)
  static check_size<sizeof(EditableModifiersSelectionView), 73 + sizeof(bool)> __GlobalNamespace_EditableModifiersSelectionViewSizeCheck;
  static_assert(sizeof(EditableModifiersSelectionView) == 0x4A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditableModifiersSelectionView*, "", "EditableModifiersSelectionView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::get_editButton
// Il2CppName: get_editButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button* (GlobalNamespace::EditableModifiersSelectionView::*)()>(&GlobalNamespace::EditableModifiersSelectionView::get_editButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableModifiersSelectionView*), "get_editButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::get_clearButton
// Il2CppName: get_clearButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button* (GlobalNamespace::EditableModifiersSelectionView::*)()>(&GlobalNamespace::EditableModifiersSelectionView::get_clearButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableModifiersSelectionView*), "get_clearButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::get_interactable
// Il2CppName: get_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EditableModifiersSelectionView::*)()>(&GlobalNamespace::EditableModifiersSelectionView::get_interactable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableModifiersSelectionView*), "get_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::set_interactable
// Il2CppName: set_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditableModifiersSelectionView::*)(bool)>(&GlobalNamespace::EditableModifiersSelectionView::set_interactable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableModifiersSelectionView*), "set_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::get_showClearButton
// Il2CppName: get_showClearButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EditableModifiersSelectionView::*)()>(&GlobalNamespace::EditableModifiersSelectionView::get_showClearButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableModifiersSelectionView*), "get_showClearButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::set_showClearButton
// Il2CppName: set_showClearButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditableModifiersSelectionView::*)(bool)>(&GlobalNamespace::EditableModifiersSelectionView::set_showClearButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableModifiersSelectionView*), "set_showClearButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::SetVisibility
// Il2CppName: SetVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditableModifiersSelectionView::*)(bool)>(&GlobalNamespace::EditableModifiersSelectionView::SetVisibility)> {
  static const MethodInfo* get() {
    static auto* visible = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableModifiersSelectionView*), "SetVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visible});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditableModifiersSelectionView::*)(bool)>(&GlobalNamespace::EditableModifiersSelectionView::Setup)> {
  static const MethodInfo* get() {
    static auto* showClearButton = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableModifiersSelectionView*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showClearButton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::SetGameplayModifiers
// Il2CppName: SetGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditableModifiersSelectionView::*)(GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::EditableModifiersSelectionView::SetGameplayModifiers)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableModifiersSelectionView*), "SetGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiers});
  }
};
