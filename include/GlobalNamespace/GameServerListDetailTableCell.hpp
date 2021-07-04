// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: GameServerListDetailTableCell
  class GameServerListDetailTableCell : public HMUI::TableCell {
    public:
    // private UnityEngine.UI.Button _joinServerButton
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::UI::Button* joinServerButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE21464
    // private System.Action joinServerButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action* joinServerButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x60
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // Creating value type constructor for type: GameServerListDetailTableCell
    GameServerListDetailTableCell(UnityEngine::UI::Button* joinServerButton_ = {}, System::Action* joinServerButtonWasPressedEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}) noexcept : joinServerButton{joinServerButton_}, joinServerButtonWasPressedEvent{joinServerButtonWasPressedEvent_}, buttonBinder{buttonBinder_} {}
    // public System.Void add_joinServerButtonWasPressedEvent(System.Action value)
    // Offset: 0x1081164
    void add_joinServerButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_joinServerButtonWasPressedEvent(System.Action value)
    // Offset: 0x1081208
    void remove_joinServerButtonWasPressedEvent(System::Action* value);
    // private System.Void <Start>b__5_0()
    // Offset: 0x10813B4
    void $Start$b__5_0();
    // protected override System.Void Start()
    // Offset: 0x10812AC
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::Start()
    void Start();
    // public System.Void .ctor()
    // Offset: 0x108134C
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
    static GameServerListDetailTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServerListDetailTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerListDetailTableCell*, creationType>()));
    }
  }; // GameServerListDetailTableCell
  #pragma pack(pop)
  static check_size<sizeof(GameServerListDetailTableCell), 96 + sizeof(HMUI::ButtonBinder*)> __GlobalNamespace_GameServerListDetailTableCellSizeCheck;
  static_assert(sizeof(GameServerListDetailTableCell) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerListDetailTableCell*, "", "GameServerListDetailTableCell");
// Writing MetadataGetter for method: GlobalNamespace::GameServerListDetailTableCell::add_joinServerButtonWasPressedEvent
// Il2CppName: add_joinServerButtonWasPressedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::GameServerListDetailTableCell::remove_joinServerButtonWasPressedEvent
// Il2CppName: remove_joinServerButtonWasPressedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::GameServerListDetailTableCell::$Start$b__5_0
// Il2CppName: <Start>b__5_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::GameServerListDetailTableCell::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::GameServerListDetailTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
