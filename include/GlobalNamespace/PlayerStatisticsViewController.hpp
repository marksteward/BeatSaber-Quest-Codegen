// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: PlayerAllOverallStatsData
#include "GlobalNamespace/PlayerAllOverallStatsData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: PlayerStatisticsViewController
  // [] Offset: FFFFFFFF
  class PlayerStatisticsViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::PlayerStatisticsViewController::StatsScopeData
    struct StatsScopeData;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: PlayerStatisticsViewController/StatsScopeData
    // [] Offset: FFFFFFFF
    struct StatsScopeData/*, public System::ValueType*/ {
      public:
      // [CompilerGeneratedAttribute] Offset: 0xDD3FDC
      // private System.String <text>k__BackingField
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* text;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // [CompilerGeneratedAttribute] Offset: 0xDD3FEC
      // private System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> <playerOverallStatsDataFunc>k__BackingField
      // Size: 0x8
      // Offset: 0x8
      System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* playerOverallStatsDataFunc;
      // Field size check
      static_assert(sizeof(System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>*) == 0x8);
      // Creating value type constructor for type: StatsScopeData
      constexpr StatsScopeData(::Il2CppString* text_ = {}, System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* playerOverallStatsDataFunc_ = {}) noexcept : text{text_}, playerOverallStatsDataFunc{playerOverallStatsDataFunc_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.String get_text()
      // Offset: 0xC92378
      ::Il2CppString* get_text();
      // private System.Void set_text(System.String value)
      // Offset: 0xC92380
      void set_text(::Il2CppString* value);
      // public System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> get_playerOverallStatsDataFunc()
      // Offset: 0xC92388
      System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* get_playerOverallStatsDataFunc();
      // private System.Void set_playerOverallStatsDataFunc(System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> value)
      // Offset: 0xC92390
      void set_playerOverallStatsDataFunc(System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* value);
      // public System.Void .ctor(System.String text, System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> playerOverallStatsDataFunc)
      // Offset: 0xC92398
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  StatsScopeData(::Il2CppString* text, System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* playerOverallStatsDataFunc)
    }; // PlayerStatisticsViewController/StatsScopeData
    static check_size<sizeof(PlayerStatisticsViewController::StatsScopeData), 8 + sizeof(System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>*)> __GlobalNamespace_PlayerStatisticsViewController_StatsScopeDataSizeCheck;
    static_assert(sizeof(PlayerStatisticsViewController::StatsScopeData) == 0x10);
    // private HMUI.TextSegmentedControl _statsScopeSegmentedControl
    // Size: 0x8
    // Offset: 0x70
    HMUI::TextSegmentedControl* statsScopeSegmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::TextSegmentedControl*) == 0x8);
    // [SpaceAttribute] Offset: 0xDD1204
    // private TMPro.TextMeshProUGUI _playedLevelsCountText
    // Size: 0x8
    // Offset: 0x78
    TMPro::TextMeshProUGUI* playedLevelsCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _clearedLevelsCountText
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshProUGUI* clearedLevelsCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _failedLevelsCountText
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* failedLevelsCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _timePlayedText
    // Size: 0x8
    // Offset: 0x90
    TMPro::TextMeshProUGUI* timePlayedText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _goodCutsCountText
    // Size: 0x8
    // Offset: 0x98
    TMPro::TextMeshProUGUI* goodCutsCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _badCutsCountCountText
    // Size: 0x8
    // Offset: 0xA0
    TMPro::TextMeshProUGUI* badCutsCountCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _missedCountText
    // Size: 0x8
    // Offset: 0xA8
    TMPro::TextMeshProUGUI* missedCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _averageCutScoreText
    // Size: 0x8
    // Offset: 0xB0
    TMPro::TextMeshProUGUI* averageCutScoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _totalScoreText
    // Size: 0x8
    // Offset: 0xB8
    TMPro::TextMeshProUGUI* totalScoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _fullComboCountText
    // Size: 0x8
    // Offset: 0xC0
    TMPro::TextMeshProUGUI* fullComboCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _handDistanceTravelledText
    // Size: 0x8
    // Offset: 0xC8
    TMPro::TextMeshProUGUI* handDistanceTravelledText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectAttribute] Offset: 0xDD12DC
    // private PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private PlayerStatisticsViewController/StatsScopeData[] _statsScopeDatas
    // Size: 0x8
    // Offset: 0xD8
    ::Array<GlobalNamespace::PlayerStatisticsViewController::StatsScopeData>* statsScopeDatas;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PlayerStatisticsViewController::StatsScopeData>*) == 0x8);
    // Creating value type constructor for type: PlayerStatisticsViewController
    PlayerStatisticsViewController(HMUI::TextSegmentedControl* statsScopeSegmentedControl_ = {}, TMPro::TextMeshProUGUI* playedLevelsCountText_ = {}, TMPro::TextMeshProUGUI* clearedLevelsCountText_ = {}, TMPro::TextMeshProUGUI* failedLevelsCountText_ = {}, TMPro::TextMeshProUGUI* timePlayedText_ = {}, TMPro::TextMeshProUGUI* goodCutsCountText_ = {}, TMPro::TextMeshProUGUI* badCutsCountCountText_ = {}, TMPro::TextMeshProUGUI* missedCountText_ = {}, TMPro::TextMeshProUGUI* averageCutScoreText_ = {}, TMPro::TextMeshProUGUI* totalScoreText_ = {}, TMPro::TextMeshProUGUI* fullComboCountText_ = {}, TMPro::TextMeshProUGUI* handDistanceTravelledText_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, ::Array<GlobalNamespace::PlayerStatisticsViewController::StatsScopeData>* statsScopeDatas_ = {}) noexcept : statsScopeSegmentedControl{statsScopeSegmentedControl_}, playedLevelsCountText{playedLevelsCountText_}, clearedLevelsCountText{clearedLevelsCountText_}, failedLevelsCountText{failedLevelsCountText_}, timePlayedText{timePlayedText_}, goodCutsCountText{goodCutsCountText_}, badCutsCountCountText{badCutsCountCountText_}, missedCountText{missedCountText_}, averageCutScoreText{averageCutScoreText_}, totalScoreText{totalScoreText_}, fullComboCountText{fullComboCountText_}, handDistanceTravelledText{handDistanceTravelledText_}, playerDataModel{playerDataModel_}, statsScopeDatas{statsScopeDatas_} {}
    // private System.Void UpdateView(PlayerAllOverallStatsData/PlayerOverallStatsData playerOverallStatsData)
    // Offset: 0xF2A460
    void UpdateView(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* playerOverallStatsData);
    // private System.Void HandleStatsScopeSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0xF2AA70
    void HandleStatsScopeSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <DidActivate>b__15_0()
    // Offset: 0xF2AB0C
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* $DidActivate$b__15_0();
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <DidActivate>b__15_1()
    // Offset: 0xF2AB3C
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* $DidActivate$b__15_1();
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <DidActivate>b__15_2()
    // Offset: 0xF2AB6C
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* $DidActivate$b__15_2();
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <DidActivate>b__15_3()
    // Offset: 0xF2AB9C
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* $DidActivate$b__15_3();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF29FDC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0xF2A9C4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0xF2AB04
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerStatisticsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerStatisticsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerStatisticsViewController*, creationType>()));
    }
  }; // PlayerStatisticsViewController
  static check_size<sizeof(PlayerStatisticsViewController), 216 + sizeof(::Array<GlobalNamespace::PlayerStatisticsViewController::StatsScopeData>*)> __GlobalNamespace_PlayerStatisticsViewControllerSizeCheck;
  static_assert(sizeof(PlayerStatisticsViewController) == 0xE0);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerStatisticsViewController*, "", "PlayerStatisticsViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerStatisticsViewController::StatsScopeData, "", "PlayerStatisticsViewController/StatsScopeData");
