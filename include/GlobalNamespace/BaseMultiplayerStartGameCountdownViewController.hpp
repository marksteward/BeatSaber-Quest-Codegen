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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapSelectionView
  class BeatmapSelectionView;
  // Forward declaring type: ModifiersSelectionView
  class ModifiersSelectionView;
  // Forward declaring type: ILevelGameplaySetupData
  class ILevelGameplaySetupData;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  // Autogenerated type: BaseMultiplayerStartGameCountdownViewController
  // [] Offset: FFFFFFFF
  class BaseMultiplayerStartGameCountdownViewController : public HMUI::ViewController {
    public:
    // private BeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapSelectionView*) == 0x8);
    // private ModifiersSelectionView _modifiersSelectionView
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::ModifiersSelectionView* modifiersSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ModifiersSelectionView*) == 0x8);
    // protected UnityEngine.UI.Toggle _spectateToggle
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Toggle* spectateToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0650
    // private System.Action`1<System.Boolean> playerActiveStateChangedEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<bool>* playerActiveStateChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x90
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // Creating value type constructor for type: BaseMultiplayerStartGameCountdownViewController
    BaseMultiplayerStartGameCountdownViewController(GlobalNamespace::BeatmapSelectionView* beatmapSelectionView_ = {}, GlobalNamespace::ModifiersSelectionView* modifiersSelectionView_ = {}, UnityEngine::UI::Toggle* spectateToggle_ = {}, System::Action_1<bool>* playerActiveStateChangedEvent_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}) noexcept : beatmapSelectionView{beatmapSelectionView_}, modifiersSelectionView{modifiersSelectionView_}, spectateToggle{spectateToggle_}, playerActiveStateChangedEvent{playerActiveStateChangedEvent_}, toggleBinder{toggleBinder_} {}
    // public System.Void add_playerActiveStateChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1A4CFCC
    void add_playerActiveStateChangedEvent(System::Action_1<bool>* value);
    // public System.Void remove_playerActiveStateChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1A4D070
    void remove_playerActiveStateChangedEvent(System::Action_1<bool>* value);
    // public System.Void SetLevelGameplaySetupData(ILevelGameplaySetupData levelGameplaySetupData)
    // Offset: 0x1A4D114
    void SetLevelGameplaySetupData(GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);
    // public System.Void SetLobbyPlayerData(ILobbyPlayerDataModel lobbyPlayerDataModel)
    // Offset: 0x1A4D348
    void SetLobbyPlayerData(GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerDataModel);
    // private System.Void <DidActivate>b__9_0(System.Boolean value)
    // Offset: 0x1A4D564
    void $DidActivate$b__9_0(bool value);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1A4D41C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1A4D4B8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x1A4D4D4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1A4D4F0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMultiplayerStartGameCountdownViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMultiplayerStartGameCountdownViewController*, creationType>()));
    }
  }; // BaseMultiplayerStartGameCountdownViewController
  static check_size<sizeof(BaseMultiplayerStartGameCountdownViewController), 144 + sizeof(HMUI::ToggleBinder*)> __GlobalNamespace_BaseMultiplayerStartGameCountdownViewControllerSizeCheck;
  static_assert(sizeof(BaseMultiplayerStartGameCountdownViewController) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*, "", "BaseMultiplayerStartGameCountdownViewController");
#pragma pack(pop)
