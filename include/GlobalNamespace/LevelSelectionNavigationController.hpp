// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
// Including type: StandardLevelDetailViewController/ContentType
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: SelectLevelCategoryViewController
#include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelFilteringNavigationController
  class LevelFilteringNavigationController;
  // Forward declaring type: LevelCollectionNavigationController
  class LevelCollectionNavigationController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF8
  // Autogenerated type: LevelSelectionNavigationController
  // [] Offset: FFFFFFFF
  class LevelSelectionNavigationController : public HMUI::NavigationController {
    public:
    // Writing base type padding for base size: 0x94 to desired offset: 0x98
    char ___base_padding[0x4] = {};
    // [InjectAttribute] Offset: 0xDD0060
    // private readonly LevelFilteringNavigationController _levelFilteringNavigationController
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::LevelFilteringNavigationController* levelFilteringNavigationController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelFilteringNavigationController*) == 0x8);
    // [InjectAttribute] Offset: 0xDD0070
    // private readonly LevelCollectionNavigationController _levelCollectionNavigationController
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::LevelCollectionNavigationController* levelCollectionNavigationController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCollectionNavigationController*) == 0x8);
    // [InjectAttribute] Offset: 0xDD0080
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0090
    // private System.Action`2<LevelSelectionNavigationController,StandardLevelDetailViewController/ContentType> didChangeLevelDetailContentEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* didChangeLevelDetailContentEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD00A0
    // private System.Action`2<LevelSelectionNavigationController,IBeatmapLevelPack> didSelectLevelPackEvent
    // Size: 0x8
    // Offset: 0xB8
    System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* didSelectLevelPackEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD00B0
    // private System.Action`1<LevelSelectionNavigationController> didPressActionButtonEvent
    // Size: 0x8
    // Offset: 0xC0
    System::Action_1<GlobalNamespace::LevelSelectionNavigationController*>* didPressActionButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelSelectionNavigationController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD00C0
    // private System.Action`2<LevelSelectionNavigationController,IBeatmapLevel> didPressPracticeButtonEvent
    // Size: 0x8
    // Offset: 0xC8
    System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* didPressPracticeButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD00D0
    // private System.Action`2<LevelSelectionNavigationController,IDifficultyBeatmap> didChangeDifficultyBeatmapEvent
    // Size: 0x8
    // Offset: 0xD0
    System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // private System.Boolean _hidePacksIfOneOrNone
    // Size: 0x1
    // Offset: 0xD8
    bool hidePacksIfOneOrNone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hidePracticeButton
    // Size: 0x1
    // Offset: 0xD9
    bool hidePracticeButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _showPlayerStatsInDetailView
    // Size: 0x1
    // Offset: 0xDA
    bool showPlayerStatsInDetailView;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showPlayerStatsInDetailView and: actionButtonText
    char __padding10[0x5] = {};
    // private System.String _actionButtonText
    // Size: 0x8
    // Offset: 0xE0
    ::Il2CppString* actionButtonText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private BeatmapDifficultyMask _allowedBeatmapDifficultyMask
    // Size: 0x1
    // Offset: 0xE8
    GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: allowedBeatmapDifficultyMask and: notAllowedCharacteristics
    char __padding12[0x7] = {};
    // private BeatmapCharacteristicSO[] _notAllowedCharacteristics
    // Size: 0x8
    // Offset: 0xF0
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // Creating value type constructor for type: LevelSelectionNavigationController
    LevelSelectionNavigationController(GlobalNamespace::LevelFilteringNavigationController* levelFilteringNavigationController_ = {}, GlobalNamespace::LevelCollectionNavigationController* levelCollectionNavigationController_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* didChangeLevelDetailContentEvent_ = {}, System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* didSelectLevelPackEvent_ = {}, System::Action_1<GlobalNamespace::LevelSelectionNavigationController*>* didPressActionButtonEvent_ = {}, System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* didPressPracticeButtonEvent_ = {}, System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent_ = {}, bool hidePacksIfOneOrNone_ = {}, bool hidePracticeButton_ = {}, bool showPlayerStatsInDetailView_ = {}, ::Il2CppString* actionButtonText_ = {}, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask_ = {}, ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics_ = {}) noexcept : levelFilteringNavigationController{levelFilteringNavigationController_}, levelCollectionNavigationController{levelCollectionNavigationController_}, playerDataModel{playerDataModel_}, didChangeLevelDetailContentEvent{didChangeLevelDetailContentEvent_}, didSelectLevelPackEvent{didSelectLevelPackEvent_}, didPressActionButtonEvent{didPressActionButtonEvent_}, didPressPracticeButtonEvent{didPressPracticeButtonEvent_}, didChangeDifficultyBeatmapEvent{didChangeDifficultyBeatmapEvent_}, hidePacksIfOneOrNone{hidePacksIfOneOrNone_}, hidePracticeButton{hidePracticeButton_}, showPlayerStatsInDetailView{showPlayerStatsInDetailView_}, actionButtonText{actionButtonText_}, allowedBeatmapDifficultyMask{allowedBeatmapDifficultyMask_}, notAllowedCharacteristics{notAllowedCharacteristics_} {}
    // public System.Void add_didChangeLevelDetailContentEvent(System.Action`2<LevelSelectionNavigationController,StandardLevelDetailViewController/ContentType> value)
    // Offset: 0x1AC510C
    void add_didChangeLevelDetailContentEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* value);
    // public System.Void remove_didChangeLevelDetailContentEvent(System.Action`2<LevelSelectionNavigationController,StandardLevelDetailViewController/ContentType> value)
    // Offset: 0x1AC577C
    void remove_didChangeLevelDetailContentEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* value);
    // public System.Void add_didSelectLevelPackEvent(System.Action`2<LevelSelectionNavigationController,IBeatmapLevelPack> value)
    // Offset: 0x1AC4F20
    void add_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void remove_didSelectLevelPackEvent(System.Action`2<LevelSelectionNavigationController,IBeatmapLevelPack> value)
    // Offset: 0x1AC5590
    void remove_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void add_didPressActionButtonEvent(System.Action`1<LevelSelectionNavigationController> value)
    // Offset: 0x1AC4FC4
    void add_didPressActionButtonEvent(System::Action_1<GlobalNamespace::LevelSelectionNavigationController*>* value);
    // public System.Void remove_didPressActionButtonEvent(System.Action`1<LevelSelectionNavigationController> value)
    // Offset: 0x1AC5634
    void remove_didPressActionButtonEvent(System::Action_1<GlobalNamespace::LevelSelectionNavigationController*>* value);
    // public System.Void add_didPressPracticeButtonEvent(System.Action`2<LevelSelectionNavigationController,IBeatmapLevel> value)
    // Offset: 0x1AC5068
    void add_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* value);
    // public System.Void remove_didPressPracticeButtonEvent(System.Action`2<LevelSelectionNavigationController,IBeatmapLevel> value)
    // Offset: 0x1AC56D8
    void remove_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* value);
    // public System.Void add_didChangeDifficultyBeatmapEvent(System.Action`2<LevelSelectionNavigationController,IDifficultyBeatmap> value)
    // Offset: 0x1AC4E7C
    void add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didChangeDifficultyBeatmapEvent(System.Action`2<LevelSelectionNavigationController,IDifficultyBeatmap> value)
    // Offset: 0x1AC54EC
    void remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public IDifficultyBeatmap get_selectedDifficultyBeatmap()
    // Offset: 0x1AC47E4
    GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();
    // public SelectLevelCategoryViewController/LevelCategory get_selectedLevelCategory()
    // Offset: 0x1AC4758
    GlobalNamespace::SelectLevelCategoryViewController::LevelCategory get_selectedLevelCategory();
    // public IBeatmapLevelPack get_selectedBeatmapLevelPack()
    // Offset: 0x1AC47A4
    GlobalNamespace::IBeatmapLevelPack* get_selectedBeatmapLevelPack();
    // public System.Void Setup(SongPackMask songPackMask, BeatmapDifficultyMask allowedBeatmapDifficultyMask, BeatmapCharacteristicSO[] notAllowedCharacteristics, System.Boolean hidePacksIfOneOrNone, System.Boolean hidePracticeButton, System.Boolean showPlayerStatsInDetailView, System.String actionButtonText, IBeatmapLevelPack levelPackToBeSelectedAfterPresent, SelectLevelCategoryViewController/LevelCategory startLevelCategory, IPreviewBeatmapLevel beatmapLevelToBeSelectedAfterPresent, System.Boolean enableCustomLevels)
    // Offset: 0x1AC51B0
    void Setup(GlobalNamespace::SongPackMask songPackMask, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics, bool hidePacksIfOneOrNone, bool hidePracticeButton, bool showPlayerStatsInDetailView, ::Il2CppString* actionButtonText, GlobalNamespace::IBeatmapLevelPack* levelPackToBeSelectedAfterPresent, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory startLevelCategory, GlobalNamespace::IPreviewBeatmapLevel* beatmapLevelToBeSelectedAfterPresent, bool enableCustomLevels);
    // private System.Void HandleLevelCollectionNavigationControllerDidChangeLevelDetailContent(LevelCollectionNavigationController viewController, StandardLevelDetailViewController/ContentType contentType)
    // Offset: 0x1AC6254
    void HandleLevelCollectionNavigationControllerDidChangeLevelDetailContent(GlobalNamespace::LevelCollectionNavigationController* viewController, GlobalNamespace::StandardLevelDetailViewController::ContentType contentType);
    // private System.Void HandleLevelCollectionNavigationControllerDidPressPracticeButton(LevelCollectionNavigationController arg1, IBeatmapLevel beatmapLevel)
    // Offset: 0x1AC62CC
    void HandleLevelCollectionNavigationControllerDidPressPracticeButton(GlobalNamespace::LevelCollectionNavigationController* arg1, GlobalNamespace::IBeatmapLevel* beatmapLevel);
    // private System.Void HandleLevelCollectionNavigationControllerDidPressActionButton(LevelCollectionNavigationController viewController)
    // Offset: 0x1AC6344
    void HandleLevelCollectionNavigationControllerDidPressActionButton(GlobalNamespace::LevelCollectionNavigationController* viewController);
    // private System.Void HandleLevelCollectionNavigationControllerDidSelectPack(LevelCollectionNavigationController viewController, IBeatmapLevelPack beatmapLevelPack)
    // Offset: 0x1AC63A8
    void HandleLevelCollectionNavigationControllerDidSelectPack(GlobalNamespace::LevelCollectionNavigationController* viewController, GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);
    // private System.Void HandleLevelCollectionNavigationControllerDidChangeDifficultyBeatmap(LevelCollectionNavigationController viewController, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1AC6420
    void HandleLevelCollectionNavigationControllerDidChangeDifficultyBeatmap(GlobalNamespace::LevelCollectionNavigationController* viewController, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // private System.Void HandleLevelCollectionNavigationControllerDidPressOpenPackButton(LevelCollectionNavigationController viewController, IBeatmapLevelPack beatmapLevelPack)
    // Offset: 0x1AC6498
    void HandleLevelCollectionNavigationControllerDidPressOpenPackButton(GlobalNamespace::LevelCollectionNavigationController* viewController, GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);
    // public System.Void RefreshDetail()
    // Offset: 0x1AC59A0
    void RefreshDetail();
    // private System.Void LevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection(LevelFilteringNavigationController controller, IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, UnityEngine.GameObject noDataInfoPrefab, BeatmapCharacteristicSO preferredBeatmapCharacteristic)
    // Offset: 0x1AC64B4
    void LevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection(GlobalNamespace::LevelFilteringNavigationController* controller, GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection, UnityEngine::GameObject* noDataInfoPrefab, GlobalNamespace::BeatmapCharacteristicSO* preferredBeatmapCharacteristic);
    // private System.Void LevelFilteringNavigationControllerDidStartLoading(LevelFilteringNavigationController controller)
    // Offset: 0x1AC65A4
    void LevelFilteringNavigationControllerDidStartLoading(GlobalNamespace::LevelFilteringNavigationController* controller);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1AC5BF8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1AC5F7C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x1AC65C0
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
    static LevelSelectionNavigationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelSelectionNavigationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelSelectionNavigationController*, creationType>()));
    }
  }; // LevelSelectionNavigationController
  static check_size<sizeof(LevelSelectionNavigationController), 240 + sizeof(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*)> __GlobalNamespace_LevelSelectionNavigationControllerSizeCheck;
  static_assert(sizeof(LevelSelectionNavigationController) == 0xF8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSelectionNavigationController*, "", "LevelSelectionNavigationController");
#pragma pack(pop)
