// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficultyDropdown
  class BeatmapDifficultyDropdown;
  // Forward declaring type: GameplayModifiersDropdown
  class GameplayModifiersDropdown;
  // Forward declaring type: SongPacksDropdown
  class SongPacksDropdown;
  // Forward declaring type: GameServersFilter
  class GameServersFilter;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD1
  // Autogenerated type: GameServersFilterViewController
  // [] Offset: FFFFFFFF
  class GameServersFilterViewController : public HMUI::ViewController {
    public:
    // [HeaderAttribute] Offset: 0xDD0A08
    // private UnityEngine.UI.Toggle _filterByDifficultyToggle
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Toggle* filterByDifficultyToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Button _filterByDifficultyButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* filterByDifficultyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private BeatmapDifficultyDropdown _beatmapDifficultyDropdown
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyDropdown*) == 0x8);
    // [HeaderAttribute] Offset: 0xDD0A74
    // private UnityEngine.UI.Toggle _filterByModifiersToggle
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Toggle* filterByModifiersToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Button _filterByModifiersButton
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::UI::Button* filterByModifiersButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private GameplayModifiersDropdown _gameplayModifiersDropdown
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::GameplayModifiersDropdown* gameplayModifiersDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersDropdown*) == 0x8);
    // [HeaderAttribute] Offset: 0xDD0AE0
    // private UnityEngine.UI.Toggle _filterBySongsToggle
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::UI::Toggle* filterBySongsToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Button _filterBySongsButton
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::UI::Button* filterBySongsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private SongPacksDropdown _songPacksDropdown
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::SongPacksDropdown* songPacksDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPacksDropdown*) == 0x8);
    // [HeaderAttribute] Offset: 0xDD0B4C
    // private UnityEngine.UI.Toggle _showFullToggle
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::UI::Toggle* showFullToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _showPasswordProtectedToggle
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::UI::Toggle* showPasswordProtectedToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xC8
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // private System.Boolean _showInternetGames
    // Size: 0x1
    // Offset: 0xD0
    bool showInternetGames;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GameServersFilterViewController
    GameServersFilterViewController(UnityEngine::UI::Toggle* filterByDifficultyToggle_ = {}, UnityEngine::UI::Button* filterByDifficultyButton_ = {}, GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown_ = {}, UnityEngine::UI::Toggle* filterByModifiersToggle_ = {}, UnityEngine::UI::Button* filterByModifiersButton_ = {}, GlobalNamespace::GameplayModifiersDropdown* gameplayModifiersDropdown_ = {}, UnityEngine::UI::Toggle* filterBySongsToggle_ = {}, UnityEngine::UI::Button* filterBySongsButton_ = {}, GlobalNamespace::SongPacksDropdown* songPacksDropdown_ = {}, UnityEngine::UI::Toggle* showFullToggle_ = {}, UnityEngine::UI::Toggle* showPasswordProtectedToggle_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, bool showInternetGames_ = {}) noexcept : filterByDifficultyToggle{filterByDifficultyToggle_}, filterByDifficultyButton{filterByDifficultyButton_}, beatmapDifficultyDropdown{beatmapDifficultyDropdown_}, filterByModifiersToggle{filterByModifiersToggle_}, filterByModifiersButton{filterByModifiersButton_}, gameplayModifiersDropdown{gameplayModifiersDropdown_}, filterBySongsToggle{filterBySongsToggle_}, filterBySongsButton{filterBySongsButton_}, songPacksDropdown{songPacksDropdown_}, showFullToggle{showFullToggle_}, showPasswordProtectedToggle{showPasswordProtectedToggle_}, toggleBinder{toggleBinder_}, showInternetGames{showInternetGames_} {}
    // public GameServersFilter get_gameServersFilter()
    // Offset: 0x1A1F3B0
    GlobalNamespace::GameServersFilter* get_gameServersFilter();
    // public System.Void SetupGameServersFilter(GameServersFilter gameServersFilter)
    // Offset: 0x1A1F5A4
    void SetupGameServersFilter(GlobalNamespace::GameServersFilter* gameServersFilter);
    // private System.Void Refresh(GameServersFilter currentFilter)
    // Offset: 0x1A1F5A8
    void Refresh(GlobalNamespace::GameServersFilter* currentFilter);
    // private System.Void <DidActivate>b__16_0(System.Boolean isOn)
    // Offset: 0x1A1F8DC
    void $DidActivate$b__16_0(bool isOn);
    // private System.Void <DidActivate>b__16_1(System.Boolean isOn)
    // Offset: 0x1A1F8FC
    void $DidActivate$b__16_1(bool isOn);
    // private System.Void <DidActivate>b__16_2(System.Boolean isOn)
    // Offset: 0x1A1F91C
    void $DidActivate$b__16_2(bool isOn);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1A1F6B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x1A1F7F8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1A1F868
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServersFilterViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServersFilterViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServersFilterViewController*, creationType>()));
    }
  }; // GameServersFilterViewController
  static check_size<sizeof(GameServersFilterViewController), 208 + sizeof(bool)> __GlobalNamespace_GameServersFilterViewControllerSizeCheck;
  static_assert(sizeof(GameServersFilterViewController) == 0xD1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServersFilterViewController*, "", "GameServersFilterViewController");
#pragma pack(pop)
