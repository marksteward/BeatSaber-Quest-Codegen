// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
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
  // Size: 0x68
  // Autogenerated type: FileBrowserTableCell
  // [] Offset: FFFFFFFF
  class FileBrowserTableCell : public HMUI::TableCell {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _bgImage
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::UI::Image* bgImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _highlightImage
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::UI::Image* highlightImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // Creating value type constructor for type: FileBrowserTableCell
    FileBrowserTableCell(TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::UI::Image* bgImage_ = {}, UnityEngine::UI::Image* highlightImage_ = {}) noexcept : text{text_}, bgImage{bgImage_}, highlightImage{highlightImage_} {}
    // public System.Void set_text(System.String value)
    // Offset: 0x1A10DE8
    void set_text(::Il2CppString* value);
    // public System.String get_text()
    // Offset: 0x1A10E04
    ::Il2CppString* get_text();
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x1A10E20
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x1A10EB8
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0x1A10EF4
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
    static FileBrowserTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileBrowserTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileBrowserTableCell*, creationType>()));
    }
  }; // FileBrowserTableCell
  static check_size<sizeof(FileBrowserTableCell), 96 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_FileBrowserTableCellSizeCheck;
  static_assert(sizeof(FileBrowserTableCell) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserTableCell*, "", "FileBrowserTableCell");
#pragma pack(pop)
