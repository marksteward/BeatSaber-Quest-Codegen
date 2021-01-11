// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
// Including type: StandardLevelDetailViewController/ContentType
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: LevelCollectionViewController
  class LevelCollectionViewController;
  // Forward declaring type: LevelPackDetailViewController
  class LevelPackDetailViewController;
  // Skipping declaration: StandardLevelDetailViewController because it is already included!
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x128
  #pragma pack(push, 1)
  // Autogenerated type: LevelCollectionNavigationController
  // [] Offset: FFFFFFFF
  class LevelCollectionNavigationController : public HMUI::NavigationController {
    public:
    // Writing base type padding for base size: 0x94 to desired offset: 0x98
    char ___base_padding[0x4] = {};
    // Nested type: GlobalNamespace::LevelCollectionNavigationController::$$c__DisplayClass48_0
    class $$c__DisplayClass48_0;
    // private LoadingControl _loadingControl
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::LoadingControl* loadingControl;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LoadingControl*) == 0x8);
    // [InjectAttribute] Offset: 0xDCFB08
    // private LevelCollectionViewController _levelCollectionViewController
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::LevelCollectionViewController* levelCollectionViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCollectionViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCFB18
    // private LevelPackDetailViewController _levelPackDetailViewController
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::LevelPackDetailViewController* levelPackDetailViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelPackDetailViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCFB28
    // private StandardLevelDetailViewController _levelDetailViewController
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::StandardLevelDetailViewController* levelDetailViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelDetailViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCFB38
    // private AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFB48
    // private System.Action`2<LevelCollectionNavigationController,StandardLevelDetailViewController/ContentType> didChangeLevelDetailContentEvent
    // Size: 0x8
    // Offset: 0xC0
    System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* didChangeLevelDetailContentEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFB58
    // private System.Action`2<LevelCollectionNavigationController,IBeatmapLevelPack> didSelectLevelPackEvent
    // Size: 0x8
    // Offset: 0xC8
    System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* didSelectLevelPackEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFB68
    // private System.Action`1<LevelCollectionNavigationController> didPressActionButtonEvent
    // Size: 0x8
    // Offset: 0xD0
    System::Action_1<GlobalNamespace::LevelCollectionNavigationController*>* didPressActionButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelCollectionNavigationController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFB78
    // private System.Action`2<LevelCollectionNavigationController,IBeatmapLevelPack> didPressOpenPackButtonEvent
    // Size: 0x8
    // Offset: 0xD8
    System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* didPressOpenPackButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFB88
    // private System.Action`2<LevelCollectionNavigationController,IBeatmapLevel> didPressPracticeButtonEvent
    // Size: 0x8
    // Offset: 0xE0
    System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* didPressPracticeButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFB98
    // private System.Action`2<LevelCollectionNavigationController,IDifficultyBeatmap> didChangeDifficultyBeatmapEvent
    // Size: 0x8
    // Offset: 0xE8
    System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // private System.Boolean _showPlayerStatsInDetailView
    // Size: 0x1
    // Offset: 0xF0
    bool showPlayerStatsInDetailView;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _showPracticeButtonInDetailView
    // Size: 0x1
    // Offset: 0xF1
    bool showPracticeButtonInDetailView;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showPracticeButtonInDetailView and: actionButtonTextInDetailView
    char __padding12[0x6] = {};
    // private System.String _actionButtonTextInDetailView
    // Size: 0x8
    // Offset: 0xF8
    ::Il2CppString* actionButtonTextInDetailView;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private IBeatmapLevelPack _levelPack
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::IBeatmapLevelPack* levelPack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelPack*) == 0x8);
    // private BeatmapDifficultyMask _allowedBeatmapDifficultyMask
    // Size: 0x1
    // Offset: 0x108
    GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: allowedBeatmapDifficultyMask and: beatmapLevelToBeSelectedAfterPresent
    char __padding15[0x7] = {};
    // private IPreviewBeatmapLevel _beatmapLevelToBeSelectedAfterPresent
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::IPreviewBeatmapLevel* beatmapLevelToBeSelectedAfterPresent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // private System.Boolean _loading
    // Size: 0x1
    // Offset: 0x118
    bool loading;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hideDetailViewController
    // Size: 0x1
    // Offset: 0x119
    bool hideDetailViewController;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideDetailViewController and: notAllowedCharacteristics
    char __padding18[0x6] = {};
    // private BeatmapCharacteristicSO[] _notAllowedCharacteristics
    // Size: 0x8
    // Offset: 0x120
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // Creating value type constructor for type: LevelCollectionNavigationController
    LevelCollectionNavigationController(GlobalNamespace::LoadingControl* loadingControl_ = {}, GlobalNamespace::LevelCollectionViewController* levelCollectionViewController_ = {}, GlobalNamespace::LevelPackDetailViewController* levelPackDetailViewController_ = {}, GlobalNamespace::StandardLevelDetailViewController* levelDetailViewController_ = {}, GlobalNamespace::AppStaticSettingsSO* appStaticSettings_ = {}, System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* didChangeLevelDetailContentEvent_ = {}, System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* didSelectLevelPackEvent_ = {}, System::Action_1<GlobalNamespace::LevelCollectionNavigationController*>* didPressActionButtonEvent_ = {}, System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* didPressOpenPackButtonEvent_ = {}, System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* didPressPracticeButtonEvent_ = {}, System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent_ = {}, bool showPlayerStatsInDetailView_ = {}, bool showPracticeButtonInDetailView_ = {}, ::Il2CppString* actionButtonTextInDetailView_ = {}, GlobalNamespace::IBeatmapLevelPack* levelPack_ = {}, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask_ = {}, GlobalNamespace::IPreviewBeatmapLevel* beatmapLevelToBeSelectedAfterPresent_ = {}, bool loading_ = {}, bool hideDetailViewController_ = {}, ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics_ = {}) noexcept : loadingControl{loadingControl_}, levelCollectionViewController{levelCollectionViewController_}, levelPackDetailViewController{levelPackDetailViewController_}, levelDetailViewController{levelDetailViewController_}, appStaticSettings{appStaticSettings_}, didChangeLevelDetailContentEvent{didChangeLevelDetailContentEvent_}, didSelectLevelPackEvent{didSelectLevelPackEvent_}, didPressActionButtonEvent{didPressActionButtonEvent_}, didPressOpenPackButtonEvent{didPressOpenPackButtonEvent_}, didPressPracticeButtonEvent{didPressPracticeButtonEvent_}, didChangeDifficultyBeatmapEvent{didChangeDifficultyBeatmapEvent_}, showPlayerStatsInDetailView{showPlayerStatsInDetailView_}, showPracticeButtonInDetailView{showPracticeButtonInDetailView_}, actionButtonTextInDetailView{actionButtonTextInDetailView_}, levelPack{levelPack_}, allowedBeatmapDifficultyMask{allowedBeatmapDifficultyMask_}, beatmapLevelToBeSelectedAfterPresent{beatmapLevelToBeSelectedAfterPresent_}, loading{loading_}, hideDetailViewController{hideDetailViewController_}, notAllowedCharacteristics{notAllowedCharacteristics_} {}
    // public System.Void add_didChangeLevelDetailContentEvent(System.Action`2<LevelCollectionNavigationController,StandardLevelDetailViewController/ContentType> value)
    // Offset: 0xF1FEBC
    void add_didChangeLevelDetailContentEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* value);
    // public System.Void remove_didChangeLevelDetailContentEvent(System.Action`2<LevelCollectionNavigationController,StandardLevelDetailViewController/ContentType> value)
    // Offset: 0xF1FF60
    void remove_didChangeLevelDetailContentEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* value);
    // public System.Void add_didSelectLevelPackEvent(System.Action`2<LevelCollectionNavigationController,IBeatmapLevelPack> value)
    // Offset: 0xF20004
    void add_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void remove_didSelectLevelPackEvent(System.Action`2<LevelCollectionNavigationController,IBeatmapLevelPack> value)
    // Offset: 0xF200A8
    void remove_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void add_didPressActionButtonEvent(System.Action`1<LevelCollectionNavigationController> value)
    // Offset: 0xF2014C
    void add_didPressActionButtonEvent(System::Action_1<GlobalNamespace::LevelCollectionNavigationController*>* value);
    // public System.Void remove_didPressActionButtonEvent(System.Action`1<LevelCollectionNavigationController> value)
    // Offset: 0xF201F0
    void remove_didPressActionButtonEvent(System::Action_1<GlobalNamespace::LevelCollectionNavigationController*>* value);
    // public System.Void add_didPressOpenPackButtonEvent(System.Action`2<LevelCollectionNavigationController,IBeatmapLevelPack> value)
    // Offset: 0xF20294
    void add_didPressOpenPackButtonEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void remove_didPressOpenPackButtonEvent(System.Action`2<LevelCollectionNavigationController,IBeatmapLevelPack> value)
    // Offset: 0xF20338
    void remove_didPressOpenPackButtonEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void add_didPressPracticeButtonEvent(System.Action`2<LevelCollectionNavigationController,IBeatmapLevel> value)
    // Offset: 0xF203DC
    void add_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* value);
    // public System.Void remove_didPressPracticeButtonEvent(System.Action`2<LevelCollectionNavigationController,IBeatmapLevel> value)
    // Offset: 0xF20480
    void remove_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* value);
    // public System.Void add_didChangeDifficultyBeatmapEvent(System.Action`2<LevelCollectionNavigationController,IDifficultyBeatmap> value)
    // Offset: 0xF20524
    void add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didChangeDifficultyBeatmapEvent(System.Action`2<LevelCollectionNavigationController,IDifficultyBeatmap> value)
    // Offset: 0xF205C8
    void remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public IDifficultyBeatmap get_selectedDifficultyBeatmap()
    // Offset: 0xF2066C
    GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();
    // public System.Void SetData(IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, System.Boolean showPackHeader, System.Boolean showPlayerStats, System.Boolean showPracticeButton, System.String actionButtonText, UnityEngine.GameObject noDataInfoPrefab, BeatmapDifficultyMask allowedBeatmapDifficultyMask, BeatmapCharacteristicSO[] notAllowedCharacteristics)
    // Offset: 0xF20688
    void SetData(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection, bool showPackHeader, bool showPlayerStats, bool showPracticeButton, ::Il2CppString* actionButtonText, UnityEngine::GameObject* noDataInfoPrefab, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics);
    // public System.Void SelectLevel(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0xF20B14
    void SelectLevel(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // private System.Void SetDataForPack(IBeatmapLevelPack levelPack, System.Boolean showPackHeader, System.Boolean showPlayerStats, System.Boolean showPracticeButton, System.String actionButtonText)
    // Offset: 0xF20834
    void SetDataForPack(GlobalNamespace::IBeatmapLevelPack* levelPack, bool showPackHeader, bool showPlayerStats, bool showPracticeButton, ::Il2CppString* actionButtonText);
    // private System.Void SetDataForLevelCollection(IBeatmapLevelCollection beatmapLevelCollection, System.Boolean showPlayerStats, System.Boolean showPracticeButton, System.String actionButtonText, UnityEngine.GameObject noDataInfoPrefab)
    // Offset: 0xF20A74
    void SetDataForLevelCollection(GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, bool showPlayerStats, bool showPracticeButton, ::Il2CppString* actionButtonText, UnityEngine::GameObject* noDataInfoPrefab);
    // public System.Void RefreshDetail()
    // Offset: 0xF213C0
    void RefreshDetail();
    // public System.Void ShowLoading()
    // Offset: 0xF213DC
    void ShowLoading();
    // private System.Void PresentViewControllersForPack()
    // Offset: 0xF212C8
    void PresentViewControllersForPack();
    // private System.Void PresentViewControllersForLevelCollection()
    // Offset: 0xF21350
    void PresentViewControllersForLevelCollection();
    // private System.Void HideLoading()
    // Offset: 0xF214C0
    void HideLoading();
    // private System.Void HideDetailViewController()
    // Offset: 0xF216B8
    void HideDetailViewController();
    // private System.Void HandleLevelCollectionViewControllerDidSelectLevel(LevelCollectionViewController viewController, IPreviewBeatmapLevel level)
    // Offset: 0xF2171C
    void HandleLevelCollectionViewControllerDidSelectLevel(GlobalNamespace::LevelCollectionViewController* viewController, GlobalNamespace::IPreviewBeatmapLevel* level);
    // private System.Void HandleLevelCollectionViewControllerDidSelectPack(LevelCollectionViewController viewController)
    // Offset: 0xF217EC
    void HandleLevelCollectionViewControllerDidSelectPack(GlobalNamespace::LevelCollectionViewController* viewController);
    // private System.Void PresentDetailViewController(HMUI.ViewController viewController, System.Boolean immediately)
    // Offset: 0xF214E4
    void PresentDetailViewController(HMUI::ViewController* viewController, bool immediately);
    // private System.Void HandleLevelDetailViewControllerDidPressActionButton(StandardLevelDetailViewController viewController)
    // Offset: 0xF21888
    void HandleLevelDetailViewControllerDidPressActionButton(GlobalNamespace::StandardLevelDetailViewController* viewController);
    // private System.Void HandleLevelDetailViewControllerDidPressPracticeButton(StandardLevelDetailViewController viewController, IBeatmapLevel level)
    // Offset: 0xF218EC
    void HandleLevelDetailViewControllerDidPressPracticeButton(GlobalNamespace::StandardLevelDetailViewController* viewController, GlobalNamespace::IBeatmapLevel* level);
    // private System.Void HandleLevelDetailViewControllerDidChangeDifficultyBeatmap(StandardLevelDetailViewController viewController, IDifficultyBeatmap beatmap)
    // Offset: 0xF21964
    void HandleLevelDetailViewControllerDidChangeDifficultyBeatmap(GlobalNamespace::StandardLevelDetailViewController* viewController, GlobalNamespace::IDifficultyBeatmap* beatmap);
    // private System.Void HandleLevelDetailViewControllerDidPresentContent(StandardLevelDetailViewController viewController, StandardLevelDetailViewController/ContentType contentType)
    // Offset: 0xF219DC
    void HandleLevelDetailViewControllerDidPresentContent(GlobalNamespace::StandardLevelDetailViewController* viewController, GlobalNamespace::StandardLevelDetailViewController::ContentType contentType);
    // private System.Void HandleLevelDetailViewControllerDidPressOpenLevelPackButton(StandardLevelDetailViewController viewController, IBeatmapLevelPack levelPack)
    // Offset: 0xF21A54
    void HandleLevelDetailViewControllerDidPressOpenLevelPackButton(GlobalNamespace::StandardLevelDetailViewController* viewController, GlobalNamespace::IBeatmapLevelPack* levelPack);
    // private System.Void HandleLevelDetailViewControllerLevelFavoriteStatusDidChange(StandardLevelDetailViewController viewController, System.Boolean favoriteStatus)
    // Offset: 0xF21ACC
    void HandleLevelDetailViewControllerLevelFavoriteStatusDidChange(GlobalNamespace::StandardLevelDetailViewController* viewController, bool favoriteStatus);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF20B68
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0xF20FFC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0xF21AE8
    // Implemented from: HMUI.NavigationController
    // Base method: System.Void NavigationController::.ctor()
    // Base method: System.Void ContainerViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCollectionNavigationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelCollectionNavigationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCollectionNavigationController*, creationType>()));
    }
  }; // LevelCollectionNavigationController
  static check_size<sizeof(LevelCollectionNavigationController), 288 + sizeof(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*)> __GlobalNamespace_LevelCollectionNavigationControllerSizeCheck;
  static_assert(sizeof(LevelCollectionNavigationController) == 0x128);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCollectionNavigationController*, "", "LevelCollectionNavigationController");
