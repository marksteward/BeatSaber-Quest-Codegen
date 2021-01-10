// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: LevelParamsPanel
  class LevelParamsPanel;
  // Forward declaring type: BeatmapDifficultySegmentedControlController
  class BeatmapDifficultySegmentedControlController;
  // Forward declaring type: BeatmapCharacteristicSegmentedControlController
  class BeatmapCharacteristicSegmentedControlController;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: PlayerData
  class PlayerData;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  // Autogenerated type: StandardLevelDetailView
  // [] Offset: FFFFFFFF
  class StandardLevelDetailView : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _actionButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* actionButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _actionButtonText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* actionButtonText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _practiceButton
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Button* practiceButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // private LevelParamsPanel _levelParamsPanel
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::LevelParamsPanel* levelParamsPanel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelParamsPanel*) == 0x8);
    // private BeatmapDifficultySegmentedControlController _beatmapDifficultySegmentedControlController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapDifficultySegmentedControlController* beatmapDifficultySegmentedControlController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultySegmentedControlController*) == 0x8);
    // private BeatmapCharacteristicSegmentedControlController _beatmapCharacteristicSegmentedControlController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapCharacteristicSegmentedControlController* beatmapCharacteristicSegmentedControlController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*) == 0x8);
    // private UnityEngine.UI.Toggle _favoriteToggle
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::UI::Toggle* favoriteToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD2578
    // private System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> didChangeDifficultyBeatmapEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD2588
    // private System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> didFavoriteToggleChangeEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* didFavoriteToggleChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>*) == 0x8);
    // private System.Boolean _showPlayerStats
    // Size: 0x1
    // Offset: 0x68
    bool showPlayerStats;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showPlayerStats and: level
    char __padding10[0x7] = {};
    // private IBeatmapLevel _level
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::IBeatmapLevel* level;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
    // private PlayerData _playerData
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::PlayerData* playerData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerData*) == 0x8);
    // private IDifficultyBeatmap _selectedDifficultyBeatmap
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x88
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // Creating value type constructor for type: StandardLevelDetailView
    StandardLevelDetailView(UnityEngine::UI::Button* actionButton_ = {}, TMPro::TextMeshProUGUI* actionButtonText_ = {}, UnityEngine::UI::Button* practiceButton_ = {}, GlobalNamespace::LevelBar* levelBar_ = {}, GlobalNamespace::LevelParamsPanel* levelParamsPanel_ = {}, GlobalNamespace::BeatmapDifficultySegmentedControlController* beatmapDifficultySegmentedControlController_ = {}, GlobalNamespace::BeatmapCharacteristicSegmentedControlController* beatmapCharacteristicSegmentedControlController_ = {}, UnityEngine::UI::Toggle* favoriteToggle_ = {}, System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent_ = {}, System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* didFavoriteToggleChangeEvent_ = {}, bool showPlayerStats_ = {}, GlobalNamespace::IBeatmapLevel* level_ = {}, GlobalNamespace::PlayerData* playerData_ = {}, GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}) noexcept : actionButton{actionButton_}, actionButtonText{actionButtonText_}, practiceButton{practiceButton_}, levelBar{levelBar_}, levelParamsPanel{levelParamsPanel_}, beatmapDifficultySegmentedControlController{beatmapDifficultySegmentedControlController_}, beatmapCharacteristicSegmentedControlController{beatmapCharacteristicSegmentedControlController_}, favoriteToggle{favoriteToggle_}, didChangeDifficultyBeatmapEvent{didChangeDifficultyBeatmapEvent_}, didFavoriteToggleChangeEvent{didFavoriteToggleChangeEvent_}, showPlayerStats{showPlayerStats_}, level{level_}, playerData{playerData_}, selectedDifficultyBeatmap{selectedDifficultyBeatmap_}, toggleBinder{toggleBinder_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didChangeDifficultyBeatmapEvent(System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> value)
    // Offset: 0xF3E5CC
    void add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didChangeDifficultyBeatmapEvent(System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> value)
    // Offset: 0xF3E670
    void remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didFavoriteToggleChangeEvent(System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> value)
    // Offset: 0xF3E714
    void add_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* value);
    // public System.Void remove_didFavoriteToggleChangeEvent(System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> value)
    // Offset: 0xF3E7B8
    void remove_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* value);
    // public IDifficultyBeatmap get_selectedDifficultyBeatmap()
    // Offset: 0xF3E85C
    GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();
    // public UnityEngine.UI.Button get_actionButton()
    // Offset: 0xF3E864
    UnityEngine::UI::Button* get_actionButton();
    // public System.Void set_actionButtonText(System.String value)
    // Offset: 0xF3E86C
    void set_actionButtonText(::Il2CppString* value);
    // public UnityEngine.UI.Button get_practiceButton()
    // Offset: 0xF3E888
    UnityEngine::UI::Button* get_practiceButton();
    // public System.Void set_hidePracticeButton(System.Boolean value)
    // Offset: 0xF3E890
    void set_hidePracticeButton(bool value);
    // public System.Void set_disableActionButton(System.Boolean value)
    // Offset: 0xF3E8D0
    void set_disableActionButton(bool value);
    // public System.Void SetContent(IBeatmapLevel level, BeatmapDifficulty defaultDifficulty, BeatmapCharacteristicSO defaultBeatmapCharacteristic, PlayerData playerData, System.Boolean showPlayerStats)
    // Offset: 0xF3E8F4
    void SetContent(GlobalNamespace::IBeatmapLevel* level, GlobalNamespace::BeatmapDifficulty defaultDifficulty, GlobalNamespace::BeatmapCharacteristicSO* defaultBeatmapCharacteristic, GlobalNamespace::PlayerData* playerData, bool showPlayerStats);
    // protected System.Void Awake()
    // Offset: 0xF3F0FC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF3F260
    void OnDestroy();
    // private System.Void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(BeatmapDifficultySegmentedControlController controller, BeatmapDifficulty difficulty)
    // Offset: 0xF3F3C8
    void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(GlobalNamespace::BeatmapDifficultySegmentedControlController* controller, GlobalNamespace::BeatmapDifficulty difficulty);
    // private System.Void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(BeatmapCharacteristicSegmentedControlController controller, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xF3F438
    void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSegmentedControlController* controller, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void RefreshContent()
    // Offset: 0xF3EC14
    void RefreshContent();
    // private System.Void <Awake>b__32_0(System.Boolean on)
    // Offset: 0xF3F5DC
    void $Awake$b__32_0(bool on);
    // public System.Void .ctor()
    // Offset: 0xF3F5D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelDetailView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelDetailView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelDetailView*, creationType>()));
    }
  }; // StandardLevelDetailView
  static check_size<sizeof(StandardLevelDetailView), 136 + sizeof(HMUI::ToggleBinder*)> __GlobalNamespace_StandardLevelDetailViewSizeCheck;
  static_assert(sizeof(StandardLevelDetailView) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelDetailView*, "", "StandardLevelDetailView");
#pragma pack(pop)
