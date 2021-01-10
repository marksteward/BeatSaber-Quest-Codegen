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
  // Size: 0x60
  // Autogenerated type: SimpleTextWithIconTableCell
  // [] Offset: FFFFFFFF
  class SimpleTextWithIconTableCell : public HMUI::TableCell {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _icon
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::UI::Image* icon;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // Creating value type constructor for type: SimpleTextWithIconTableCell
    SimpleTextWithIconTableCell(TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::UI::Image* icon_ = {}) noexcept : text{text_}, icon{icon_} {}
    // public System.Void set_icon(UnityEngine.UI.Image value)
    // Offset: 0x1983190
    void set_icon(UnityEngine::UI::Image* value);
    // public UnityEngine.UI.Image get_icon()
    // Offset: 0x1983198
    UnityEngine::UI::Image* get_icon();
    // public System.Void set_text(System.String value)
    // Offset: 0x19831A0
    void set_text(::Il2CppString* value);
    // public System.String get_text()
    // Offset: 0x19831BC
    ::Il2CppString* get_text();
    // public System.Void .ctor()
    // Offset: 0x19831D8
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
    static SimpleTextWithIconTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleTextWithIconTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleTextWithIconTableCell*, creationType>()));
    }
  }; // SimpleTextWithIconTableCell
  static check_size<sizeof(SimpleTextWithIconTableCell), 88 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_SimpleTextWithIconTableCellSizeCheck;
  static_assert(sizeof(SimpleTextWithIconTableCell) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleTextWithIconTableCell*, "", "SimpleTextWithIconTableCell");
#pragma pack(pop)
