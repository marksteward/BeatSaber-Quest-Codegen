// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: LocalLeaderboardsModel/LeaderboardType
#include "GlobalNamespace/LocalLeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: LocalLeaderboardsModel because it is already included!
  // Forward declaring type: LocalLeaderboardTableView
  class LocalLeaderboardTableView;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: NoTransitionsButton
  class NoTransitionsButton;
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xCA
  #pragma pack(push, 1)
  // Autogenerated type: LocalLeaderboardViewController
  class LocalLeaderboardViewController : public GlobalNamespace::LeaderboardViewController {
    public:
    // private System.Int32 _maxNumberOfCells
    // Size: 0x4
    // Offset: 0x70
    int maxNumberOfCells;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxNumberOfCells and: localLeaderboardsModel
    char __padding0[0x4] = {};
    // private LocalLeaderboardsModel _localLeaderboardsModel
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardsModel*) == 0x8);
    // [SpaceAttribute] Offset: 0xE254A4
    // private LocalLeaderboardTableView _leaderboardTableView
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::LocalLeaderboardTableView* leaderboardTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardTableView*) == 0x8);
    // private UnityEngine.GameObject _clearLeaderboardsWrapper
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* clearLeaderboardsWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private HMUI.NoTransitionsButton _clearLeaderboardsButton
    // Size: 0x8
    // Offset: 0x90
    HMUI::NoTransitionsButton* clearLeaderboardsButton;
    // Field size check
    static_assert(sizeof(HMUI::NoTransitionsButton*) == 0x8);
    // private HMUI.IconSegmentedControl _scopeSegmentedControl
    // Size: 0x8
    // Offset: 0x98
    HMUI::IconSegmentedControl* scopeSegmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::IconSegmentedControl*) == 0x8);
    // [SpaceAttribute] Offset: 0xE2550C
    // private UnityEngine.Sprite _allTimeLeaderboardIcon
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::Sprite* allTimeLeaderboardIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _todayLeaderboardIcon
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::Sprite* todayLeaderboardIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _clearLeaderboardIcon
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::Sprite* clearLeaderboardIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // [InjectAttribute] Offset: 0xE25564
    // private PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private System.Boolean _refreshIsNeeded
    // Size: 0x1
    // Offset: 0xC8
    bool refreshIsNeeded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _enableClear
    // Size: 0x1
    // Offset: 0xC9
    bool enableClear;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LocalLeaderboardViewController
    LocalLeaderboardViewController(int maxNumberOfCells_ = {}, GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel_ = {}, GlobalNamespace::LocalLeaderboardTableView* leaderboardTableView_ = {}, UnityEngine::GameObject* clearLeaderboardsWrapper_ = {}, HMUI::NoTransitionsButton* clearLeaderboardsButton_ = {}, HMUI::IconSegmentedControl* scopeSegmentedControl_ = {}, UnityEngine::Sprite* allTimeLeaderboardIcon_ = {}, UnityEngine::Sprite* todayLeaderboardIcon_ = {}, UnityEngine::Sprite* clearLeaderboardIcon_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, bool refreshIsNeeded_ = {}, bool enableClear_ = {}) noexcept : maxNumberOfCells{maxNumberOfCells_}, localLeaderboardsModel{localLeaderboardsModel_}, leaderboardTableView{leaderboardTableView_}, clearLeaderboardsWrapper{clearLeaderboardsWrapper_}, clearLeaderboardsButton{clearLeaderboardsButton_}, scopeSegmentedControl{scopeSegmentedControl_}, allTimeLeaderboardIcon{allTimeLeaderboardIcon_}, todayLeaderboardIcon{todayLeaderboardIcon_}, clearLeaderboardIcon{clearLeaderboardIcon_}, playerDataModel{playerDataModel_}, difficultyBeatmap{difficultyBeatmap_}, refreshIsNeeded{refreshIsNeeded_}, enableClear{enableClear_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE25574
    // Get static field: static private LocalLeaderboardsModel/LeaderboardType _leaderboardType
    static GlobalNamespace::LocalLeaderboardsModel::LeaderboardType _get__leaderboardType();
    // Set static field: static private LocalLeaderboardsModel/LeaderboardType _leaderboardType
    static void _set__leaderboardType(GlobalNamespace::LocalLeaderboardsModel::LeaderboardType value);
    // public LocalLeaderboardsModel get_leaderboardsModel()
    // Offset: 0x23F6EC4
    GlobalNamespace::LocalLeaderboardsModel* get_leaderboardsModel();
    // public System.Void Setup(System.Boolean enableClear)
    // Offset: 0x23F6ECC
    void Setup(bool enableClear);
    // private System.Void RefreshScopeSegmentedControl()
    // Offset: 0x23F716C
    void RefreshScopeSegmentedControl();
    // private System.Void HandleScopeSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0x23F73BC
    void HandleScopeSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // private System.Void ClearLeaderboards()
    // Offset: 0x23F7770
    void ClearLeaderboards();
    // private System.Void SetContent(System.String leaderboardID, LocalLeaderboardsModel/LeaderboardType leaderboardType)
    // Offset: 0x23F7900
    void SetContent(::Il2CppString* leaderboardID, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType);
    // private System.Void HandleNewScoreWasAddedToLeaderboard(System.String leaderboardID, LocalLeaderboardsModel/LeaderboardType leaderboardType)
    // Offset: 0x23F7A3C
    void HandleNewScoreWasAddedToLeaderboard(::Il2CppString* leaderboardID, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType);
    // private System.Void Refresh()
    // Offset: 0x23F6F04
    void Refresh();
    // private System.Void <DidActivate>b__18_0()
    // Offset: 0x23F7B18
    void $DidActivate$b__18_0();
    // public override System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x23F6ED8
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::SetData(IDifficultyBeatmap difficultyBeatmap)
    void SetData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x23F6F98
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x23F753C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x23F76D4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x23F7B04
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalLeaderboardViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalLeaderboardViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalLeaderboardViewController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x23F7B14
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // LocalLeaderboardViewController
  #pragma pack(pop)
  static check_size<sizeof(LocalLeaderboardViewController), 201 + sizeof(bool)> __GlobalNamespace_LocalLeaderboardViewControllerSizeCheck;
  static_assert(sizeof(LocalLeaderboardViewController) == 0xCA);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardViewController*, "", "LocalLeaderboardViewController");
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::get_leaderboardsModel
// Il2CppName: get_leaderboardsModel
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::Setup
// Il2CppName: Setup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::RefreshScopeSegmentedControl
// Il2CppName: RefreshScopeSegmentedControl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell
// Il2CppName: HandleScopeSegmentedControlDidSelectCell
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::ClearLeaderboards
// Il2CppName: ClearLeaderboards
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::SetContent
// Il2CppName: SetContent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::HandleNewScoreWasAddedToLeaderboard
// Il2CppName: HandleNewScoreWasAddedToLeaderboard
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::Refresh
// Il2CppName: Refresh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::$DidActivate$b__18_0
// Il2CppName: <DidActivate>b__18_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::SetData
// Il2CppName: SetData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::DidActivate
// Il2CppName: DidActivate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::DidDeactivate
// Il2CppName: DidDeactivate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
