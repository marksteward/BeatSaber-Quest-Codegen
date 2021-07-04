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
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: EditableModifiersSelectionView
  class EditableModifiersSelectionView : public GlobalNamespace::ModifiersSelectionView {
    public:
    // [SpaceAttribute] Offset: 0xE26F08
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
    // private System.Boolean _showClearButton
    // Size: 0x1
    // Offset: 0x40
    bool showClearButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showClearButton and: modifiersListCanvasGroup
    char __padding2[0x7] = {};
    // private UnityEngine.CanvasGroup _modifiersListCanvasGroup
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::CanvasGroup* modifiersListCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private System.Boolean _interactable
    // Size: 0x1
    // Offset: 0x50
    bool interactable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EditableModifiersSelectionView
    EditableModifiersSelectionView(UnityEngine::UI::Button* editButton_ = {}, UnityEngine::UI::Button* clearButton_ = {}, bool showClearButton_ = {}, UnityEngine::CanvasGroup* modifiersListCanvasGroup_ = {}, bool interactable_ = {}) noexcept : editButton{editButton_}, clearButton{clearButton_}, showClearButton{showClearButton_}, modifiersListCanvasGroup{modifiersListCanvasGroup_}, interactable{interactable_} {}
    // public UnityEngine.UI.Button get_editButton()
    // Offset: 0x103BE5C
    UnityEngine::UI::Button* get_editButton();
    // public UnityEngine.UI.Button get_clearButton()
    // Offset: 0x103BE64
    UnityEngine::UI::Button* get_clearButton();
    // public System.Boolean get_interactable()
    // Offset: 0x103BE6C
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x103BE74
    void set_interactable(bool value);
    // public override System.Void SetGameplayModifiers(GameplayModifiers gameplayModifiers)
    // Offset: 0x103BEE0
    // Implemented from: ModifiersSelectionView
    // Base method: System.Void ModifiersSelectionView::SetGameplayModifiers(GameplayModifiers gameplayModifiers)
    void SetGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void .ctor()
    // Offset: 0x103BF50
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
  }; // EditableModifiersSelectionView
  #pragma pack(pop)
  static check_size<sizeof(EditableModifiersSelectionView), 80 + sizeof(bool)> __GlobalNamespace_EditableModifiersSelectionViewSizeCheck;
  static_assert(sizeof(EditableModifiersSelectionView) == 0x51);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditableModifiersSelectionView*, "", "EditableModifiersSelectionView");
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::get_editButton
// Il2CppName: get_editButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::get_clearButton
// Il2CppName: get_clearButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::get_interactable
// Il2CppName: get_interactable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::set_interactable
// Il2CppName: set_interactable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::SetGameplayModifiers
// Il2CppName: SetGameplayModifiers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EditableModifiersSelectionView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
