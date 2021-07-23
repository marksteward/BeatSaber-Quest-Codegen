// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TableCellWithSeparator
#include "GlobalNamespace/TableCellWithSeparator.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: ILobbyPlayerData
  class ILobbyPlayerData;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedTextMeshPro
  class CurvedTextMeshPro;
  // Forward declaring type: ImageView
  class ImageView;
  // Forward declaring type: HoverHint
  class HoverHint;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x108
  #pragma pack(push, 1)
  // Autogenerated type: GameServerPlayerTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServerPlayerTableCell : public GlobalNamespace::TableCellWithSeparator {
    public:
    // Nested type: GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass27_0
    class $$c__DisplayClass27_0;
    // Nested type: GlobalNamespace::GameServerPlayerTableCell::$SetBeatmapUseButtonEnabledAsync$d__33
    struct $SetBeatmapUseButtonEnabledAsync$d__33;
    // private HMUI.CurvedTextMeshPro _playerNameText
    // Size: 0x8
    // Offset: 0x58
    HMUI::CurvedTextMeshPro* playerNameText;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // private UnityEngine.UI.Image _localPlayerBackgroundImage
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::UI::Image* localPlayerBackgroundImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [HeaderAttribute] Offset: 0xE0B760
    // private HMUI.CurvedTextMeshPro _suggestedLevelText
    // Size: 0x8
    // Offset: 0x68
    HMUI::CurvedTextMeshPro* suggestedLevelText;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // private HMUI.ImageView _suggestedCharacteristicIcon
    // Size: 0x8
    // Offset: 0x70
    HMUI::ImageView* suggestedCharacteristicIcon;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private TMPro.TextMeshProUGUI _suggestedDifficultyText
    // Size: 0x8
    // Offset: 0x78
    TMPro::TextMeshProUGUI* suggestedDifficultyText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private HMUI.CurvedTextMeshPro _emptySuggestedLevelText
    // Size: 0x8
    // Offset: 0x80
    HMUI::CurvedTextMeshPro* emptySuggestedLevelText;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // [HeaderAttribute] Offset: 0xE0B7DC
    // private GameplayModifierInfoListItemsList _suggestedModifiersList
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::GameplayModifierInfoListItemsList* suggestedModifiersList;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierInfoListItemsList*) == 0x8);
    // private HMUI.CurvedTextMeshPro _emptySuggestedModifiersText
    // Size: 0x8
    // Offset: 0x90
    HMUI::CurvedTextMeshPro* emptySuggestedModifiersText;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // [HeaderAttribute] Offset: 0xE0B838
    // private UnityEngine.UI.Button _kickPlayerButton
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::UI::Button* kickPlayerButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _useBeatmapButton
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::UI::Button* useBeatmapButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _useModifiersButton
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::UI::Button* useModifiersButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private HMUI.HoverHint _useBeatmapButtonHoverHint
    // Size: 0x8
    // Offset: 0xB0
    HMUI::HoverHint* useBeatmapButtonHoverHint;
    // Field size check
    static_assert(sizeof(HMUI::HoverHint*) == 0x8);
    // [HeaderAttribute] Offset: 0xE0B8B4
    // private HMUI.ImageView _statusImageView
    // Size: 0x8
    // Offset: 0xB8
    HMUI::ImageView* statusImageView;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private UnityEngine.Sprite _readyIcon
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::Sprite* readyIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _spectatingIcon
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::Sprite* spectatingIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _hostIcon
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::Sprite* hostIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // [HeaderAttribute] Offset: 0xE0B930
    // private GameplayModifiersModelSO _gameplayModifiers
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // private System.Action`1<System.Int32> kickPlayerEvent
    // Size: 0x8
    // Offset: 0xE0
    System::Action_1<int>* kickPlayerEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // private System.Action`1<System.Int32> useBeatmapEvent
    // Size: 0x8
    // Offset: 0xE8
    System::Action_1<int>* useBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // private System.Action`1<System.Int32> useModifiersEvent
    // Size: 0x8
    // Offset: 0xF0
    System::Action_1<int>* useModifiersEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0xF8
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.Threading.CancellationTokenSource _getLevelEntitlementCancellationTokenSource
    // Size: 0x8
    // Offset: 0x100
    System::Threading::CancellationTokenSource* getLevelEntitlementCancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // Creating value type constructor for type: GameServerPlayerTableCell
    GameServerPlayerTableCell(HMUI::CurvedTextMeshPro* playerNameText_ = {}, UnityEngine::UI::Image* localPlayerBackgroundImage_ = {}, HMUI::CurvedTextMeshPro* suggestedLevelText_ = {}, HMUI::ImageView* suggestedCharacteristicIcon_ = {}, TMPro::TextMeshProUGUI* suggestedDifficultyText_ = {}, HMUI::CurvedTextMeshPro* emptySuggestedLevelText_ = {}, GlobalNamespace::GameplayModifierInfoListItemsList* suggestedModifiersList_ = {}, HMUI::CurvedTextMeshPro* emptySuggestedModifiersText_ = {}, UnityEngine::UI::Button* kickPlayerButton_ = {}, UnityEngine::UI::Button* useBeatmapButton_ = {}, UnityEngine::UI::Button* useModifiersButton_ = {}, HMUI::HoverHint* useBeatmapButtonHoverHint_ = {}, HMUI::ImageView* statusImageView_ = {}, UnityEngine::Sprite* readyIcon_ = {}, UnityEngine::Sprite* spectatingIcon_ = {}, UnityEngine::Sprite* hostIcon_ = {}, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiers_ = {}, System::Action_1<int>* kickPlayerEvent_ = {}, System::Action_1<int>* useBeatmapEvent_ = {}, System::Action_1<int>* useModifiersEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, System::Threading::CancellationTokenSource* getLevelEntitlementCancellationTokenSource_ = {}) noexcept : playerNameText{playerNameText_}, localPlayerBackgroundImage{localPlayerBackgroundImage_}, suggestedLevelText{suggestedLevelText_}, suggestedCharacteristicIcon{suggestedCharacteristicIcon_}, suggestedDifficultyText{suggestedDifficultyText_}, emptySuggestedLevelText{emptySuggestedLevelText_}, suggestedModifiersList{suggestedModifiersList_}, emptySuggestedModifiersText{emptySuggestedModifiersText_}, kickPlayerButton{kickPlayerButton_}, useBeatmapButton{useBeatmapButton_}, useModifiersButton{useModifiersButton_}, useBeatmapButtonHoverHint{useBeatmapButtonHoverHint_}, statusImageView{statusImageView_}, readyIcon{readyIcon_}, spectatingIcon{spectatingIcon_}, hostIcon{hostIcon_}, gameplayModifiers{gameplayModifiers_}, kickPlayerEvent{kickPlayerEvent_}, useBeatmapEvent{useBeatmapEvent_}, useModifiersEvent{useModifiersEvent_}, buttonBinder{buttonBinder_}, getLevelEntitlementCancellationTokenSource{getLevelEntitlementCancellationTokenSource_} {}
    // Get instance field: private HMUI.CurvedTextMeshPro _playerNameText
    HMUI::CurvedTextMeshPro* _get__playerNameText();
    // Set instance field: private HMUI.CurvedTextMeshPro _playerNameText
    void _set__playerNameText(HMUI::CurvedTextMeshPro* value);
    // Get instance field: private UnityEngine.UI.Image _localPlayerBackgroundImage
    UnityEngine::UI::Image* _get__localPlayerBackgroundImage();
    // Set instance field: private UnityEngine.UI.Image _localPlayerBackgroundImage
    void _set__localPlayerBackgroundImage(UnityEngine::UI::Image* value);
    // Get instance field: private HMUI.CurvedTextMeshPro _suggestedLevelText
    HMUI::CurvedTextMeshPro* _get__suggestedLevelText();
    // Set instance field: private HMUI.CurvedTextMeshPro _suggestedLevelText
    void _set__suggestedLevelText(HMUI::CurvedTextMeshPro* value);
    // Get instance field: private HMUI.ImageView _suggestedCharacteristicIcon
    HMUI::ImageView* _get__suggestedCharacteristicIcon();
    // Set instance field: private HMUI.ImageView _suggestedCharacteristicIcon
    void _set__suggestedCharacteristicIcon(HMUI::ImageView* value);
    // Get instance field: private TMPro.TextMeshProUGUI _suggestedDifficultyText
    TMPro::TextMeshProUGUI* _get__suggestedDifficultyText();
    // Set instance field: private TMPro.TextMeshProUGUI _suggestedDifficultyText
    void _set__suggestedDifficultyText(TMPro::TextMeshProUGUI* value);
    // Get instance field: private HMUI.CurvedTextMeshPro _emptySuggestedLevelText
    HMUI::CurvedTextMeshPro* _get__emptySuggestedLevelText();
    // Set instance field: private HMUI.CurvedTextMeshPro _emptySuggestedLevelText
    void _set__emptySuggestedLevelText(HMUI::CurvedTextMeshPro* value);
    // Get instance field: private GameplayModifierInfoListItemsList _suggestedModifiersList
    GlobalNamespace::GameplayModifierInfoListItemsList* _get__suggestedModifiersList();
    // Set instance field: private GameplayModifierInfoListItemsList _suggestedModifiersList
    void _set__suggestedModifiersList(GlobalNamespace::GameplayModifierInfoListItemsList* value);
    // Get instance field: private HMUI.CurvedTextMeshPro _emptySuggestedModifiersText
    HMUI::CurvedTextMeshPro* _get__emptySuggestedModifiersText();
    // Set instance field: private HMUI.CurvedTextMeshPro _emptySuggestedModifiersText
    void _set__emptySuggestedModifiersText(HMUI::CurvedTextMeshPro* value);
    // Get instance field: private UnityEngine.UI.Button _kickPlayerButton
    UnityEngine::UI::Button* _get__kickPlayerButton();
    // Set instance field: private UnityEngine.UI.Button _kickPlayerButton
    void _set__kickPlayerButton(UnityEngine::UI::Button* value);
    // Get instance field: private UnityEngine.UI.Button _useBeatmapButton
    UnityEngine::UI::Button* _get__useBeatmapButton();
    // Set instance field: private UnityEngine.UI.Button _useBeatmapButton
    void _set__useBeatmapButton(UnityEngine::UI::Button* value);
    // Get instance field: private UnityEngine.UI.Button _useModifiersButton
    UnityEngine::UI::Button* _get__useModifiersButton();
    // Set instance field: private UnityEngine.UI.Button _useModifiersButton
    void _set__useModifiersButton(UnityEngine::UI::Button* value);
    // Get instance field: private HMUI.HoverHint _useBeatmapButtonHoverHint
    HMUI::HoverHint* _get__useBeatmapButtonHoverHint();
    // Set instance field: private HMUI.HoverHint _useBeatmapButtonHoverHint
    void _set__useBeatmapButtonHoverHint(HMUI::HoverHint* value);
    // Get instance field: private HMUI.ImageView _statusImageView
    HMUI::ImageView* _get__statusImageView();
    // Set instance field: private HMUI.ImageView _statusImageView
    void _set__statusImageView(HMUI::ImageView* value);
    // Get instance field: private UnityEngine.Sprite _readyIcon
    UnityEngine::Sprite* _get__readyIcon();
    // Set instance field: private UnityEngine.Sprite _readyIcon
    void _set__readyIcon(UnityEngine::Sprite* value);
    // Get instance field: private UnityEngine.Sprite _spectatingIcon
    UnityEngine::Sprite* _get__spectatingIcon();
    // Set instance field: private UnityEngine.Sprite _spectatingIcon
    void _set__spectatingIcon(UnityEngine::Sprite* value);
    // Get instance field: private UnityEngine.Sprite _hostIcon
    UnityEngine::Sprite* _get__hostIcon();
    // Set instance field: private UnityEngine.Sprite _hostIcon
    void _set__hostIcon(UnityEngine::Sprite* value);
    // Get instance field: private GameplayModifiersModelSO _gameplayModifiers
    GlobalNamespace::GameplayModifiersModelSO* _get__gameplayModifiers();
    // Set instance field: private GameplayModifiersModelSO _gameplayModifiers
    void _set__gameplayModifiers(GlobalNamespace::GameplayModifiersModelSO* value);
    // Get instance field: private System.Action`1<System.Int32> kickPlayerEvent
    System::Action_1<int>* _get_kickPlayerEvent();
    // Set instance field: private System.Action`1<System.Int32> kickPlayerEvent
    void _set_kickPlayerEvent(System::Action_1<int>* value);
    // Get instance field: private System.Action`1<System.Int32> useBeatmapEvent
    System::Action_1<int>* _get_useBeatmapEvent();
    // Set instance field: private System.Action`1<System.Int32> useBeatmapEvent
    void _set_useBeatmapEvent(System::Action_1<int>* value);
    // Get instance field: private System.Action`1<System.Int32> useModifiersEvent
    System::Action_1<int>* _get_useModifiersEvent();
    // Set instance field: private System.Action`1<System.Int32> useModifiersEvent
    void _set_useModifiersEvent(System::Action_1<int>* value);
    // Get instance field: private readonly HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder* _get__buttonBinder();
    // Set instance field: private readonly HMUI.ButtonBinder _buttonBinder
    void _set__buttonBinder(HMUI::ButtonBinder* value);
    // Get instance field: private System.Threading.CancellationTokenSource _getLevelEntitlementCancellationTokenSource
    System::Threading::CancellationTokenSource* _get__getLevelEntitlementCancellationTokenSource();
    // Set instance field: private System.Threading.CancellationTokenSource _getLevelEntitlementCancellationTokenSource
    void _set__getLevelEntitlementCancellationTokenSource(System::Threading::CancellationTokenSource* value);
    // public System.Void add_kickPlayerEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10AAFF8
    void add_kickPlayerEvent(System::Action_1<int>* value);
    // public System.Void remove_kickPlayerEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10AB09C
    void remove_kickPlayerEvent(System::Action_1<int>* value);
    // public System.Void add_useBeatmapEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10AB140
    void add_useBeatmapEvent(System::Action_1<int>* value);
    // public System.Void remove_useBeatmapEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10AB1E4
    void remove_useBeatmapEvent(System::Action_1<int>* value);
    // public System.Void add_useModifiersEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10AB288
    void add_useModifiersEvent(System::Action_1<int>* value);
    // public System.Void remove_useModifiersEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10AB32C
    void remove_useModifiersEvent(System::Action_1<int>* value);
    // public System.Void SetData(IConnectedPlayer connectedPlayer, ILobbyPlayerData playerData, System.Boolean hasKickPermissions, System.Boolean allowSelection, System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> getLevelEntitlementTask)
    // Offset: 0x10AB3D0
    void SetData(GlobalNamespace::IConnectedPlayer* connectedPlayer, GlobalNamespace::ILobbyPlayerData* playerData, bool hasKickPermissions, bool allowSelection, System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* getLevelEntitlementTask);
    // protected System.Void Awake()
    // Offset: 0x10AC170
    void Awake();
    // private System.Void HandleKickPlayerButtonPressed()
    // Offset: 0x10AC294
    void HandleKickPlayerButtonPressed();
    // private System.Void HandleUseBeatmapButtonPressed()
    // Offset: 0x10AC2F8
    void HandleUseBeatmapButtonPressed();
    // private System.Void HandleUseModifiersButtonPressed()
    // Offset: 0x10AC35C
    void HandleUseModifiersButtonPressed();
    // private System.Void SetBeatmapUseButtonEnabledAsync(System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> getLevelEntitlementTask)
    // Offset: 0x10AC0AC
    void SetBeatmapUseButtonEnabledAsync(System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* getLevelEntitlementTask);
    // public System.Void .ctor()
    // Offset: 0x10AC3C0
    // Implemented from: TableCellWithSeparator
    // Base method: System.Void TableCellWithSeparator::.ctor()
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerPlayerTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServerPlayerTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerPlayerTableCell*, creationType>()));
    }
  }; // GameServerPlayerTableCell
  #pragma pack(pop)
  static check_size<sizeof(GameServerPlayerTableCell), 256 + sizeof(System::Threading::CancellationTokenSource*)> __GlobalNamespace_GameServerPlayerTableCellSizeCheck;
  static_assert(sizeof(GameServerPlayerTableCell) == 0x108);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerPlayerTableCell*, "", "GameServerPlayerTableCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::add_kickPlayerEvent
// Il2CppName: add_kickPlayerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::add_kickPlayerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "add_kickPlayerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::remove_kickPlayerEvent
// Il2CppName: remove_kickPlayerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::remove_kickPlayerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "remove_kickPlayerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::add_useBeatmapEvent
// Il2CppName: add_useBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::add_useBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "add_useBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::remove_useBeatmapEvent
// Il2CppName: remove_useBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::remove_useBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "remove_useBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::add_useModifiersEvent
// Il2CppName: add_useModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::add_useModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "add_useModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::remove_useModifiersEvent
// Il2CppName: remove_useModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::remove_useModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "remove_useModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(GlobalNamespace::IConnectedPlayer*, GlobalNamespace::ILobbyPlayerData*, bool, bool, System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>*)>(&GlobalNamespace::GameServerPlayerTableCell::SetData)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("", "ILobbyPlayerData")->byval_arg;
    static auto* hasKickPermissions = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* allowSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* getLevelEntitlementTask = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "AdditionalContentModel/EntitlementStatus")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer, playerData, hasKickPermissions, allowSelection, getLevelEntitlementTask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)()>(&GlobalNamespace::GameServerPlayerTableCell::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::HandleKickPlayerButtonPressed
// Il2CppName: HandleKickPlayerButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)()>(&GlobalNamespace::GameServerPlayerTableCell::HandleKickPlayerButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "HandleKickPlayerButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::HandleUseBeatmapButtonPressed
// Il2CppName: HandleUseBeatmapButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)()>(&GlobalNamespace::GameServerPlayerTableCell::HandleUseBeatmapButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "HandleUseBeatmapButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::HandleUseModifiersButtonPressed
// Il2CppName: HandleUseModifiersButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)()>(&GlobalNamespace::GameServerPlayerTableCell::HandleUseModifiersButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "HandleUseModifiersButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::SetBeatmapUseButtonEnabledAsync
// Il2CppName: SetBeatmapUseButtonEnabledAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>*)>(&GlobalNamespace::GameServerPlayerTableCell::SetBeatmapUseButtonEnabledAsync)> {
  static const MethodInfo* get() {
    static auto* getLevelEntitlementTask = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "AdditionalContentModel/EntitlementStatus")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "SetBeatmapUseButtonEnabledAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{getLevelEntitlementTask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
