// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: ResultsTableView
  class ResultsTableView;
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsViewController
  // [] Offset: FFFFFFFF
  class MultiplayerResultsViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.GameObject _levelClearedGO
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::GameObject* levelClearedGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _levelFailedGO
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::GameObject* levelFailedGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // private ResultsTableView _resultsTableView
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::ResultsTableView* resultsTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsTableView*) == 0x8);
    // private UnityEngine.UI.Button _backToLobbyButton
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::UI::Button* backToLobbyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [InjectAttribute] Offset: 0xDD0E28
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyStateDataModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0E38
    // private System.Action`1<MultiplayerResultsViewController> backToLobbyPressedEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<GlobalNamespace::MultiplayerResultsViewController*>* backToLobbyPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerResultsViewController*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerResultsViewController
    MultiplayerResultsViewController(UnityEngine::GameObject* levelClearedGO_ = {}, UnityEngine::GameObject* levelFailedGO_ = {}, GlobalNamespace::LevelBar* levelBar_ = {}, GlobalNamespace::ResultsTableView* resultsTableView_ = {}, UnityEngine::UI::Button* backToLobbyButton_ = {}, GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel_ = {}, System::Action_1<GlobalNamespace::MultiplayerResultsViewController*>* backToLobbyPressedEvent_ = {}) noexcept : levelClearedGO{levelClearedGO_}, levelFailedGO{levelFailedGO_}, levelBar{levelBar_}, resultsTableView{resultsTableView_}, backToLobbyButton{backToLobbyButton_}, lobbyStateDataModel{lobbyStateDataModel_}, backToLobbyPressedEvent{backToLobbyPressedEvent_} {}
    // public System.Void add_backToLobbyPressedEvent(System.Action`1<MultiplayerResultsViewController> value)
    // Offset: 0xF7EB78
    void add_backToLobbyPressedEvent(System::Action_1<GlobalNamespace::MultiplayerResultsViewController*>* value);
    // public System.Void remove_backToLobbyPressedEvent(System.Action`1<MultiplayerResultsViewController> value)
    // Offset: 0xF7EC1C
    void remove_backToLobbyPressedEvent(System::Action_1<GlobalNamespace::MultiplayerResultsViewController*>* value);
    // public System.Void Init(LevelCompletionResults localPlayerLevelCompletionResults, System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> otherPlayersLevelCompletionResults, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xF7ECC0
    void Init(GlobalNamespace::LevelCompletionResults* localPlayerLevelCompletionResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* otherPlayersLevelCompletionResults, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // private System.Void BackToLobbyPressed()
    // Offset: 0xF7F108
    void BackToLobbyPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF7F05C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF7F16C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerResultsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsViewController*, creationType>()));
    }
  }; // MultiplayerResultsViewController
  static check_size<sizeof(MultiplayerResultsViewController), 160 + sizeof(System::Action_1<GlobalNamespace::MultiplayerResultsViewController*>*)> __GlobalNamespace_MultiplayerResultsViewControllerSizeCheck;
  static_assert(sizeof(MultiplayerResultsViewController) == 0xA8);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsViewController*, "", "MultiplayerResultsViewController");
