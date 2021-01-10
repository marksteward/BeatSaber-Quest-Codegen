// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Including type: MainMenuViewController
#include "GlobalNamespace/MainMenuViewController.hpp"
// Including type: OptionsViewController
#include "GlobalNamespace/OptionsViewController.hpp"
// Including type: HowToPlayViewController
#include "GlobalNamespace/HowToPlayViewController.hpp"
// Including type: EditAvatarFlowCoordinator
#include "GlobalNamespace/EditAvatarFlowCoordinator.hpp"
// Including type: SettingsFlowCoordinator
#include "GlobalNamespace/SettingsFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: SoloFreePlayFlowCoordinator
  class SoloFreePlayFlowCoordinator;
  // Forward declaring type: PartyFreePlayFlowCoordinator
  class PartyFreePlayFlowCoordinator;
  // Forward declaring type: CampaignFlowCoordinator
  class CampaignFlowCoordinator;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: MultiplayerModeSelectionFlowCoordinator
  class MultiplayerModeSelectionFlowCoordinator;
  // Forward declaring type: LevelSelectionFlowCoordinator
  class LevelSelectionFlowCoordinator;
  // Forward declaring type: SimpleDialogPromptViewController
  class SimpleDialogPromptViewController;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: PlayerOptionsViewController
  class PlayerOptionsViewController;
  // Forward declaring type: PromoViewController
  class PromoViewController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: MenuDestination
  class MenuDestination;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x148
  // Autogenerated type: MainFlowCoordinator
  // [] Offset: FFFFFFFF
  class MainFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__39
    class $ProcessMenuDestinationRequestAfterFrameCoroutine$d__39;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD8B4
    // private readonly SoloFreePlayFlowCoordinator _soloFreePlayFlowCoordinator
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::SoloFreePlayFlowCoordinator* soloFreePlayFlowCoordinator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SoloFreePlayFlowCoordinator*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD8C4
    // private readonly PartyFreePlayFlowCoordinator _partyFreePlayFlowCoordinator
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::PartyFreePlayFlowCoordinator* partyFreePlayFlowCoordinator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PartyFreePlayFlowCoordinator*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD8D4
    // private readonly CampaignFlowCoordinator _campaignFlowCoordinator
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::CampaignFlowCoordinator* campaignFlowCoordinator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CampaignFlowCoordinator*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD8E4
    // private readonly SettingsFlowCoordinator _settingsFlowCoordinator
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SettingsFlowCoordinator*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD8F4
    // private readonly MultiplayerModeSelectionFlowCoordinator _multiplayerModeSelectionFlowCoordinator
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* multiplayerModeSelectionFlowCoordinator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD904
    // private readonly EditAvatarFlowCoordinator _editAvatarFlowCoordinator
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::EditAvatarFlowCoordinator* editAvatarFlowCoordinator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditAvatarFlowCoordinator*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD914
    // private readonly SimpleDialogPromptViewController _simpleDialogPromptViewController
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleDialogPromptViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD924
    // private readonly MainMenuViewController _mainMenuViewController
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::MainMenuViewController* mainMenuViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainMenuViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD934
    // private readonly HowToPlayViewController _howToPlayViewController
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HowToPlayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD944
    // private readonly PlayerOptionsViewController _playerOptionsViewController
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::PlayerOptionsViewController* playerOptionsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerOptionsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD954
    // private readonly PromoViewController _promoViewController
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::PromoViewController* promoViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PromoViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD964
    // private readonly OptionsViewController _optionsViewController
    // Size: 0x8
    // Offset: 0x108
    GlobalNamespace::OptionsViewController* optionsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OptionsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD974
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD984
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD994
    // private readonly FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD9A4
    // private readonly BeatmapLevelsModel _beatmapLevelsModel
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD9B4
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xDCD9C4
    // private MenuDestination _menuDestinationRequest
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::MenuDestination* menuDestinationRequest;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuDestination*) == 0x8);
    // private HMUI.FlowCoordinator _afterDialogPromptFlowCoordinator
    // Size: 0x8
    // Offset: 0x140
    HMUI::FlowCoordinator* afterDialogPromptFlowCoordinator;
    // Field size check
    static_assert(sizeof(HMUI::FlowCoordinator*) == 0x8);
    // Creating value type constructor for type: MainFlowCoordinator
    MainFlowCoordinator(GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset_ = {}, GlobalNamespace::SoloFreePlayFlowCoordinator* soloFreePlayFlowCoordinator_ = {}, GlobalNamespace::PartyFreePlayFlowCoordinator* partyFreePlayFlowCoordinator_ = {}, GlobalNamespace::CampaignFlowCoordinator* campaignFlowCoordinator_ = {}, GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator_ = {}, GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* multiplayerModeSelectionFlowCoordinator_ = {}, GlobalNamespace::EditAvatarFlowCoordinator* editAvatarFlowCoordinator_ = {}, GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController_ = {}, GlobalNamespace::MainMenuViewController* mainMenuViewController_ = {}, GlobalNamespace::HowToPlayViewController* howToPlayViewController_ = {}, GlobalNamespace::PlayerOptionsViewController* playerOptionsViewController_ = {}, GlobalNamespace::PromoViewController* promoViewController_ = {}, GlobalNamespace::OptionsViewController* optionsViewController_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, GlobalNamespace::FadeInOutController* fadeInOut_ = {}, GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel_ = {}, GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}, GlobalNamespace::MenuDestination* menuDestinationRequest_ = {}, HMUI::FlowCoordinator* afterDialogPromptFlowCoordinator_ = {}) noexcept : defaultLightsPreset{defaultLightsPreset_}, soloFreePlayFlowCoordinator{soloFreePlayFlowCoordinator_}, partyFreePlayFlowCoordinator{partyFreePlayFlowCoordinator_}, campaignFlowCoordinator{campaignFlowCoordinator_}, settingsFlowCoordinator{settingsFlowCoordinator_}, multiplayerModeSelectionFlowCoordinator{multiplayerModeSelectionFlowCoordinator_}, editAvatarFlowCoordinator{editAvatarFlowCoordinator_}, simpleDialogPromptViewController{simpleDialogPromptViewController_}, mainMenuViewController{mainMenuViewController_}, howToPlayViewController{howToPlayViewController_}, playerOptionsViewController{playerOptionsViewController_}, promoViewController{promoViewController_}, optionsViewController{optionsViewController_}, playerDataModel{playerDataModel_}, menuLightsManager{menuLightsManager_}, fadeInOut{fadeInOut_}, beatmapLevelsModel{beatmapLevelsModel_}, menuTransitionsHelper{menuTransitionsHelper_}, menuDestinationRequest{menuDestinationRequest_}, afterDialogPromptFlowCoordinator{afterDialogPromptFlowCoordinator_} {}
    // Get static field: static private System.Boolean _startWithSettings
    static bool _get__startWithSettings();
    // Set static field: static private System.Boolean _startWithSettings
    static void _set__startWithSettings(bool value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x1A6C1A0
    static void NoDomainReloadInit();
    // private System.Void PresentFlowCoordinatorOrAskForTutorial(HMUI.FlowCoordinator flowCoordinator)
    // Offset: 0x1A6CECC
    void PresentFlowCoordinatorOrAskForTutorial(HMUI::FlowCoordinator* flowCoordinator);
    // private System.Void HandleMainMenuViewControllerDidFinish(MainMenuViewController viewController, MainMenuViewController/MenuButton subMenuType)
    // Offset: 0x1A6D084
    void HandleMainMenuViewControllerDidFinish(GlobalNamespace::MainMenuViewController* viewController, GlobalNamespace::MainMenuViewController::MenuButton subMenuType);
    // private System.Void HandleOptionsViewControllerDidFinish(OptionsViewController/OptionsButton optionsType)
    // Offset: 0x1A6D448
    void HandleOptionsViewControllerDidFinish(GlobalNamespace::OptionsViewController::OptionsButton optionsType);
    // private System.Void HandlePlayerOptionsViewControllerDidFinish(HMUI.ViewController viewController)
    // Offset: 0x1A6D534
    void HandlePlayerOptionsViewControllerDidFinish(HMUI::ViewController* viewController);
    // private System.Void HandleHowToPlayViewControllerDidFinish(HowToPlayViewController/HowToPlayOptions howToPlayOptions)
    // Offset: 0x1A6D548
    void HandleHowToPlayViewControllerDidFinish(GlobalNamespace::HowToPlayViewController::HowToPlayOptions howToPlayOptions);
    // private System.Void HandleCampaignFlowCoordinatorDidFinish(CampaignFlowCoordinator flowCoordinator)
    // Offset: 0x1A6D7CC
    void HandleCampaignFlowCoordinatorDidFinish(GlobalNamespace::CampaignFlowCoordinator* flowCoordinator);
    // private System.Void HandleEditAvatarFlowCoordinatorDidFinish(EditAvatarFlowCoordinator flowCoordinator, EditAvatarFlowCoordinator/EditAvatarType editAvatarType)
    // Offset: 0x1A6D7E0
    void HandleEditAvatarFlowCoordinatorDidFinish(GlobalNamespace::EditAvatarFlowCoordinator* flowCoordinator, GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType editAvatarType);
    // private System.Void HandleSoloFreePlayFlowCoordinatorDidFinish(LevelSelectionFlowCoordinator flowCoordinator)
    // Offset: 0x1A6D83C
    void HandleSoloFreePlayFlowCoordinatorDidFinish(GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator);
    // private System.Void HandlePartyFreePlayFlowCoordinatorDidFinish(LevelSelectionFlowCoordinator flowCoordinator)
    // Offset: 0x1A6D850
    void HandlePartyFreePlayFlowCoordinatorDidFinish(GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator);
    // private System.Void HandleSettingsFlowCoordinatorDidFinish(SettingsFlowCoordinator settingsFlowCoordinator, SettingsFlowCoordinator/FinishAction finishAction)
    // Offset: 0x1A6D864
    void HandleSettingsFlowCoordinatorDidFinish(GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator, GlobalNamespace::SettingsFlowCoordinator::FinishAction finishAction);
    // private System.Void HandleMultiplayerModeSelectionFlowCoordinatorDidFinish(MultiplayerModeSelectionFlowCoordinator multiplayerModeSelectionFlowCoordinator)
    // Offset: 0x1A6D968
    void HandleMultiplayerModeSelectionFlowCoordinatorDidFinish(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* multiplayerModeSelectionFlowCoordinator);
    // private System.Void HandlePromoViewControllerPromoButtonWasPressed(PromoViewController promoViewController, IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, IPreviewBeatmapLevel previewBeatmapLevel)
    // Offset: 0x1A6D97C
    void HandlePromoViewControllerPromoButtonWasPressed(GlobalNamespace::PromoViewController* promoViewController, GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);
    // private System.Void ProcessMenuDestinationRequest(MenuDestination destination)
    // Offset: 0x1A6DA3C
    void ProcessMenuDestinationRequest(GlobalNamespace::MenuDestination* destination);
    // private System.Collections.IEnumerator ProcessMenuDestinationRequestAfterFrameCoroutine(MenuDestination destination)
    // Offset: 0x1A6C78C
    System::Collections::IEnumerator* ProcessMenuDestinationRequestAfterFrameCoroutine(GlobalNamespace::MenuDestination* destination);
    // private System.Void <PresentFlowCoordinatorOrAskForTutorial>b__26_0(System.Int32 buttonNumber)
    // Offset: 0x1A6DD4C
    void $PresentFlowCoordinatorOrAskForTutorial$b__26_0(int buttonNumber);
    // private System.Void <PresentFlowCoordinatorOrAskForTutorial>b__26_1()
    // Offset: 0x1A6DE08
    void $PresentFlowCoordinatorOrAskForTutorial$b__26_1();
    // private System.Void <HandleMainMenuViewControllerDidFinish>b__27_0()
    // Offset: 0x1A6DE20
    void $HandleMainMenuViewControllerDidFinish$b__27_0();
    // private System.Void <HandleMainMenuViewControllerDidFinish>b__27_1(System.Int32 buttonNumber)
    // Offset: 0x1A6DE3C
    void $HandleMainMenuViewControllerDidFinish$b__27_1(int buttonNumber);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1A6C1F0
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x1A6C824
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    void TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected override System.Void InitialViewControllerWasPresented()
    // Offset: 0x1A6CA0C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::InitialViewControllerWasPresented()
    void InitialViewControllerWasPresented();
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1A6CA8C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0x1A6DC68
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // public System.Void .ctor()
    // Offset: 0x1A6DD44
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainFlowCoordinator*, creationType>()));
    }
  }; // MainFlowCoordinator
  static check_size<sizeof(MainFlowCoordinator), 320 + sizeof(HMUI::FlowCoordinator*)> __GlobalNamespace_MainFlowCoordinatorSizeCheck;
  static_assert(sizeof(MainFlowCoordinator) == 0x148);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainFlowCoordinator*, "", "MainFlowCoordinator");
#pragma pack(pop)
