// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: LevelPackHeaderTableCell
  // [] Offset: FFFFFFFF
  class LevelPackHeaderTableCell : public HMUI::TableCell {
    public:
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _backgroundImage
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::UI::Image* backgroundImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [SpaceAttribute] Offset: 0xDCCF4C
    // private UnityEngine.Color _highlightBackgroundColor
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color highlightBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectedBackgroundColor
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Color selectedBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectedAndHighlightedBackgroundColor
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Color selectedAndHighlightedBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: LevelPackHeaderTableCell
    LevelPackHeaderTableCell(TMPro::TextMeshProUGUI* nameText_ = {}, UnityEngine::UI::Image* backgroundImage_ = {}, UnityEngine::Color highlightBackgroundColor_ = {}, UnityEngine::Color selectedBackgroundColor_ = {}, UnityEngine::Color selectedAndHighlightedBackgroundColor_ = {}) noexcept : nameText{nameText_}, backgroundImage{backgroundImage_}, highlightBackgroundColor{highlightBackgroundColor_}, selectedBackgroundColor{selectedBackgroundColor_}, selectedAndHighlightedBackgroundColor{selectedAndHighlightedBackgroundColor_} {}
    // public System.Void SetData(System.String headerText)
    // Offset: 0x1AC3524
    void SetData(::Il2CppString* headerText);
    // private System.Void RefreshVisuals()
    // Offset: 0x1AC3544
    void RefreshVisuals();
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x1AC3540
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x1AC35EC
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0x1AC35F0
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelPackHeaderTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelPackHeaderTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelPackHeaderTableCell*, creationType>()));
    }
  }; // LevelPackHeaderTableCell
  static check_size<sizeof(LevelPackHeaderTableCell), 128 + sizeof(UnityEngine::Color)> __GlobalNamespace_LevelPackHeaderTableCellSizeCheck;
  static_assert(sizeof(LevelPackHeaderTableCell) == 0x90);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelPackHeaderTableCell*, "", "LevelPackHeaderTableCell");
