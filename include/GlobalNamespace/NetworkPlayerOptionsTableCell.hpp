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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: NetworkPlayerOptionsTableCell
  class NetworkPlayerOptionsTableCell : public HMUI::TableCell {
    public:
    // private UnityEngine.UI.Button[] _buttons
    // Size: 0x8
    // Offset: 0x50
    ::Array<UnityEngine::UI::Button*>* buttons;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::UI::Button*>*) == 0x8);
    // private TMPro.TextMeshProUGUI[] _buttonTexts
    // Size: 0x8
    // Offset: 0x58
    ::Array<TMPro::TextMeshProUGUI*>* buttonTexts;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TextMeshProUGUI*>*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x60
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private INetworkPlayer _player
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::INetworkPlayer* player;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayer*) == 0x8);
    // Creating value type constructor for type: NetworkPlayerOptionsTableCell
    NetworkPlayerOptionsTableCell(::Array<UnityEngine::UI::Button*>* buttons_ = {}, ::Array<TMPro::TextMeshProUGUI*>* buttonTexts_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, GlobalNamespace::INetworkPlayer* player_ = {}) noexcept : buttons{buttons_}, buttonTexts{buttonTexts_}, buttonBinder{buttonBinder_}, player{player_} {}
    // public INetworkPlayer get_player()
    // Offset: 0x11CE1FC
    GlobalNamespace::INetworkPlayer* get_player();
    // public System.Void set_player(INetworkPlayer value)
    // Offset: 0x11CE204
    void set_player(GlobalNamespace::INetworkPlayer* value);
    // private System.Void Refresh()
    // Offset: 0x11CE20C
    void Refresh();
    // private System.Void Block()
    // Offset: 0x11CED1C
    void Block();
    // private System.Void Unblock()
    // Offset: 0x11CEDD8
    void Unblock();
    // private System.Void Join()
    // Offset: 0x11CEE94
    void Join();
    // private System.Void Invite()
    // Offset: 0x11CEF50
    void Invite();
    // private System.Void Kick()
    // Offset: 0x11CF00C
    void Kick();
    // private System.Void Leave()
    // Offset: 0x11CF0C8
    void Leave();
    // public System.Void .ctor()
    // Offset: 0x11CF184
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
    static NetworkPlayerOptionsTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPlayerOptionsTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPlayerOptionsTableCell*, creationType>()));
    }
  }; // NetworkPlayerOptionsTableCell
  #pragma pack(pop)
  static check_size<sizeof(NetworkPlayerOptionsTableCell), 104 + sizeof(GlobalNamespace::INetworkPlayer*)> __GlobalNamespace_NetworkPlayerOptionsTableCellSizeCheck;
  static_assert(sizeof(NetworkPlayerOptionsTableCell) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerOptionsTableCell*, "", "NetworkPlayerOptionsTableCell");
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::get_player
// Il2CppName: get_player
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::set_player
// Il2CppName: set_player
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Refresh
// Il2CppName: Refresh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Block
// Il2CppName: Block
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Unblock
// Il2CppName: Unblock
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Join
// Il2CppName: Join
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Invite
// Il2CppName: Invite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Kick
// Il2CppName: Kick
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Leave
// Il2CppName: Leave
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
