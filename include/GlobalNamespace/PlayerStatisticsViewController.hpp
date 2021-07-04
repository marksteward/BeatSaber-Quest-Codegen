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
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
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
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: PlayerStatisticsViewController
  class PlayerStatisticsViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::PlayerStatisticsViewController::StatsScopeData
    struct StatsScopeData;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: PlayerStatisticsViewController/StatsScopeData
    struct StatsScopeData/*, public System::ValueType*/ {
      public:
      // [CompilerGeneratedAttribute] Offset: 0xE2A62C
      // private System.String <text>k__BackingField
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* text;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // [CompilerGeneratedAttribute] Offset: 0xE2A63C
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
      // Offset: 0xEE4B5C
      ::Il2CppString* get_text();
      // private System.Void set_text(System.String value)
      // Offset: 0xEE4B64
      void set_text(::Il2CppString* value);
      // public System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> get_playerOverallStatsDataFunc()
      // Offset: 0xEE4B6C
      System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* get_playerOverallStatsDataFunc();
      // private System.Void set_playerOverallStatsDataFunc(System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> value)
      // Offset: 0xEE4B74
      void set_playerOverallStatsDataFunc(System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* value);
      // public System.Void .ctor(System.String text, System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> playerOverallStatsDataFunc)
      // Offset: 0xEE4B7C
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  StatsScopeData(::Il2CppString* text, System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* playerOverallStatsDataFunc)
    }; // PlayerStatisticsViewController/StatsScopeData
    #pragma pack(pop)
    static check_size<sizeof(PlayerStatisticsViewController::StatsScopeData), 8 + sizeof(System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>*)> __GlobalNamespace_PlayerStatisticsViewController_StatsScopeDataSizeCheck;
    static_assert(sizeof(PlayerStatisticsViewController::StatsScopeData) == 0x10);
    // private HMUI.TextSegmentedControl _statsScopeSegmentedControl
    // Size: 0x8
    // Offset: 0x70
    HMUI::TextSegmentedControl* statsScopeSegmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::TextSegmentedControl*) == 0x8);
    // [SpaceAttribute] Offset: 0xE265D8
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
    // [InjectAttribute] Offset: 0xE266B0
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE266C0
    // private readonly AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // private PlayerStatisticsViewController/StatsScopeData[] _statsScopeDatas
    // Size: 0x8
    // Offset: 0xE0
    ::Array<GlobalNamespace::PlayerStatisticsViewController::StatsScopeData>* statsScopeDatas;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PlayerStatisticsViewController::StatsScopeData>*) == 0x8);
    // Creating value type constructor for type: PlayerStatisticsViewController
    PlayerStatisticsViewController(HMUI::TextSegmentedControl* statsScopeSegmentedControl_ = {}, TMPro::TextMeshProUGUI* playedLevelsCountText_ = {}, TMPro::TextMeshProUGUI* clearedLevelsCountText_ = {}, TMPro::TextMeshProUGUI* failedLevelsCountText_ = {}, TMPro::TextMeshProUGUI* timePlayedText_ = {}, TMPro::TextMeshProUGUI* goodCutsCountText_ = {}, TMPro::TextMeshProUGUI* badCutsCountCountText_ = {}, TMPro::TextMeshProUGUI* missedCountText_ = {}, TMPro::TextMeshProUGUI* averageCutScoreText_ = {}, TMPro::TextMeshProUGUI* totalScoreText_ = {}, TMPro::TextMeshProUGUI* fullComboCountText_ = {}, TMPro::TextMeshProUGUI* handDistanceTravelledText_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::AppStaticSettingsSO* appStaticSettings_ = {}, ::Array<GlobalNamespace::PlayerStatisticsViewController::StatsScopeData>* statsScopeDatas_ = {}) noexcept : statsScopeSegmentedControl{statsScopeSegmentedControl_}, playedLevelsCountText{playedLevelsCountText_}, clearedLevelsCountText{clearedLevelsCountText_}, failedLevelsCountText{failedLevelsCountText_}, timePlayedText{timePlayedText_}, goodCutsCountText{goodCutsCountText_}, badCutsCountCountText{badCutsCountCountText_}, missedCountText{missedCountText_}, averageCutScoreText{averageCutScoreText_}, totalScoreText{totalScoreText_}, fullComboCountText{fullComboCountText_}, handDistanceTravelledText{handDistanceTravelledText_}, playerDataModel{playerDataModel_}, appStaticSettings{appStaticSettings_}, statsScopeDatas{statsScopeDatas_} {}
    // private System.Void UpdateView(PlayerAllOverallStatsData/PlayerOverallStatsData playerOverallStatsData)
    // Offset: 0x10A4414
    void UpdateView(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* playerOverallStatsData);
    // private System.Void HandleStatsScopeSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0x10A49C4
    void HandleStatsScopeSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <DidActivate>b__16_1()
    // Offset: 0x10A4A60
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* $DidActivate$b__16_1();
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <DidActivate>b__16_2()
    // Offset: 0x10A4A90
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* $DidActivate$b__16_2();
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <DidActivate>b__16_3()
    // Offset: 0x10A4AC0
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* $DidActivate$b__16_3();
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <DidActivate>b__16_4()
    // Offset: 0x10A4AF0
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* $DidActivate$b__16_4();
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <DidActivate>b__16_0()
    // Offset: 0x10A4B20
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* $DidActivate$b__16_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10A4048
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10A4918
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x10A4A58
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
  #pragma pack(pop)
  static check_size<sizeof(PlayerStatisticsViewController), 224 + sizeof(::Array<GlobalNamespace::PlayerStatisticsViewController::StatsScopeData>*)> __GlobalNamespace_PlayerStatisticsViewControllerSizeCheck;
  static_assert(sizeof(PlayerStatisticsViewController) == 0xE8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerStatisticsViewController*, "", "PlayerStatisticsViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerStatisticsViewController::StatsScopeData, "", "PlayerStatisticsViewController/StatsScopeData");
// Writing MetadataGetter for method: GlobalNamespace::PlayerStatisticsViewController::UpdateView
// Il2CppName: UpdateView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerStatisticsViewController::*)(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerStatisticsViewController::UpdateView)> {
  const MethodInfo* get() {
    static auto* playerOverallStatsData = &::il2cpp_utils::GetClassFromName("", "PlayerAllOverallStatsData/PlayerOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStatisticsViewController*), "UpdateView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerOverallStatsData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStatisticsViewController::HandleStatsScopeSegmentedControlDidSelectCell
// Il2CppName: HandleStatsScopeSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerStatisticsViewController::*)(HMUI::SegmentedControl*, int)>(&GlobalNamespace::PlayerStatisticsViewController::HandleStatsScopeSegmentedControlDidSelectCell)> {
  const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStatisticsViewController*), "HandleStatsScopeSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStatisticsViewController::$DidActivate$b__16_1
// Il2CppName: <DidActivate>b__16_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerStatisticsViewController::*)()>(&GlobalNamespace::PlayerStatisticsViewController::$DidActivate$b__16_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStatisticsViewController*), "<DidActivate>b__16_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStatisticsViewController::$DidActivate$b__16_2
// Il2CppName: <DidActivate>b__16_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerStatisticsViewController::*)()>(&GlobalNamespace::PlayerStatisticsViewController::$DidActivate$b__16_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStatisticsViewController*), "<DidActivate>b__16_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStatisticsViewController::$DidActivate$b__16_3
// Il2CppName: <DidActivate>b__16_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerStatisticsViewController::*)()>(&GlobalNamespace::PlayerStatisticsViewController::$DidActivate$b__16_3)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStatisticsViewController*), "<DidActivate>b__16_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStatisticsViewController::$DidActivate$b__16_4
// Il2CppName: <DidActivate>b__16_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerStatisticsViewController::*)()>(&GlobalNamespace::PlayerStatisticsViewController::$DidActivate$b__16_4)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStatisticsViewController*), "<DidActivate>b__16_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStatisticsViewController::$DidActivate$b__16_0
// Il2CppName: <DidActivate>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerStatisticsViewController::*)()>(&GlobalNamespace::PlayerStatisticsViewController::$DidActivate$b__16_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStatisticsViewController*), "<DidActivate>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStatisticsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerStatisticsViewController::*)(bool, bool, bool)>(&GlobalNamespace::PlayerStatisticsViewController::DidActivate)> {
  const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStatisticsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStatisticsViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerStatisticsViewController::*)(bool, bool)>(&GlobalNamespace::PlayerStatisticsViewController::DidDeactivate)> {
  const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStatisticsViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStatisticsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
