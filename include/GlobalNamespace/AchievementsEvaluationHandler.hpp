// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AchievementsModelSO
  class AchievementsModelSO;
  // Forward declaring type: AchievementSO
  class AchievementSO;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF8
  #pragma pack(push, 1)
  // Autogenerated type: AchievementsEvaluationHandler
  class AchievementsEvaluationHandler : public UnityEngine::MonoBehaviour {
    public:
    // private AchievementsModelSO _achievementsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AchievementsModelSO* achievementsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementsModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD354A0
    // private AchievementSO _clearedLevel100Achievement
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AchievementSO* clearedLevel100Achievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _totalScore100MillionAchievement
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AchievementSO* totalScore100MillionAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _24HoursPlayedAchievement
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AchievementSO* _24HoursPlayedAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _kilometersTravelled100Achievement
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AchievementSO* kilometersTravelled100Achievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD35508
    // private AchievementSO _15ExpertLevelsRankSAchievement
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AchievementSO* _15ExpertLevelsRankSAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _15ExpertLevelsFullComboAchievement
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::AchievementSO* _15ExpertLevelsFullComboAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _15HardLevelsRankSAchievement
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::AchievementSO* _15HardLevelsRankSAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _15HardLevelsFullComboAchievement
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::AchievementSO* _15HardLevelsFullComboAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD35570
    // private AchievementSO _expertLevelClearedWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::AchievementSO* expertLevelClearedWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _fullComboExpertWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::AchievementSO* fullComboExpertWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _goodCuts10000Achievement
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::AchievementSO* goodCuts10000Achievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD355C8
    // private AchievementSO _resultMinRankANormalWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::AchievementSO* resultMinRankANormalWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _resultMinRankSHardWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::AchievementSO* resultMinRankSHardWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _resultMinRankSSExpertWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::AchievementSO* resultMinRankSSExpertWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD35620
    // private AchievementSO _combo50NormalWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::AchievementSO* combo50NormalWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _combo100HardWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::AchievementSO* combo100HardWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _combo500ExpertWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::AchievementSO* combo500ExpertWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD35678
    // private AchievementSO _clearedLevelWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::AchievementSO* clearedLevelWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _clearedLevelWithSongSpeedFasterModifierAchievement
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::AchievementSO* clearedLevelWithSongSpeedFasterModifierAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _clearedLevelWithInstaFailModifierAchievement
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::AchievementSO* clearedLevelWithInstaFailModifierAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _clearedLevelWithDisappearingArrowsModifierAchievement
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::AchievementSO* clearedLevelWithDisappearingArrowsModifierAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _clearedLevelWithBatteryEnergyModifierAchievement
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::AchievementSO* clearedLevelWithBatteryEnergyModifierAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD356F0
    // private AchievementSO _cleared30MissionsAchievement
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::AchievementSO* cleared30MissionsAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _finalMissionClearedAchievement
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::AchievementSO* finalMissionClearedAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _allMissionClearedAchievement
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::AchievementSO* allMissionClearedAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD35748
    // private PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xD35758
    // private MissionNodesManager _missionNodesManager
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::MissionNodesManager* missionNodesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodesManager*) == 0x8);
    // Creating value type constructor for type: AchievementsEvaluationHandler
    AchievementsEvaluationHandler(GlobalNamespace::AchievementsModelSO* achievementsModel_ = {}, GlobalNamespace::AchievementSO* clearedLevel100Achievement_ = {}, GlobalNamespace::AchievementSO* totalScore100MillionAchievement_ = {}, GlobalNamespace::AchievementSO* _24HoursPlayedAchievement_ = {}, GlobalNamespace::AchievementSO* kilometersTravelled100Achievement_ = {}, GlobalNamespace::AchievementSO* _15ExpertLevelsRankSAchievement_ = {}, GlobalNamespace::AchievementSO* _15ExpertLevelsFullComboAchievement_ = {}, GlobalNamespace::AchievementSO* _15HardLevelsRankSAchievement_ = {}, GlobalNamespace::AchievementSO* _15HardLevelsFullComboAchievement_ = {}, GlobalNamespace::AchievementSO* expertLevelClearedWithoutModifiersAchievement_ = {}, GlobalNamespace::AchievementSO* fullComboExpertWithoutModifiersAchievement_ = {}, GlobalNamespace::AchievementSO* goodCuts10000Achievement_ = {}, GlobalNamespace::AchievementSO* resultMinRankANormalWithoutModifiersAchievement_ = {}, GlobalNamespace::AchievementSO* resultMinRankSHardWithoutModifiersAchievement_ = {}, GlobalNamespace::AchievementSO* resultMinRankSSExpertWithoutModifiersAchievement_ = {}, GlobalNamespace::AchievementSO* combo50NormalWithoutModifiersAchievement_ = {}, GlobalNamespace::AchievementSO* combo100HardWithoutModifiersAchievement_ = {}, GlobalNamespace::AchievementSO* combo500ExpertWithoutModifiersAchievement_ = {}, GlobalNamespace::AchievementSO* clearedLevelWithoutModifiersAchievement_ = {}, GlobalNamespace::AchievementSO* clearedLevelWithSongSpeedFasterModifierAchievement_ = {}, GlobalNamespace::AchievementSO* clearedLevelWithInstaFailModifierAchievement_ = {}, GlobalNamespace::AchievementSO* clearedLevelWithDisappearingArrowsModifierAchievement_ = {}, GlobalNamespace::AchievementSO* clearedLevelWithBatteryEnergyModifierAchievement_ = {}, GlobalNamespace::AchievementSO* cleared30MissionsAchievement_ = {}, GlobalNamespace::AchievementSO* finalMissionClearedAchievement_ = {}, GlobalNamespace::AchievementSO* allMissionClearedAchievement_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::MissionNodesManager* missionNodesManager_ = {}) noexcept : achievementsModel{achievementsModel_}, clearedLevel100Achievement{clearedLevel100Achievement_}, totalScore100MillionAchievement{totalScore100MillionAchievement_}, _24HoursPlayedAchievement{_24HoursPlayedAchievement_}, kilometersTravelled100Achievement{kilometersTravelled100Achievement_}, _15ExpertLevelsRankSAchievement{_15ExpertLevelsRankSAchievement_}, _15ExpertLevelsFullComboAchievement{_15ExpertLevelsFullComboAchievement_}, _15HardLevelsRankSAchievement{_15HardLevelsRankSAchievement_}, _15HardLevelsFullComboAchievement{_15HardLevelsFullComboAchievement_}, expertLevelClearedWithoutModifiersAchievement{expertLevelClearedWithoutModifiersAchievement_}, fullComboExpertWithoutModifiersAchievement{fullComboExpertWithoutModifiersAchievement_}, goodCuts10000Achievement{goodCuts10000Achievement_}, resultMinRankANormalWithoutModifiersAchievement{resultMinRankANormalWithoutModifiersAchievement_}, resultMinRankSHardWithoutModifiersAchievement{resultMinRankSHardWithoutModifiersAchievement_}, resultMinRankSSExpertWithoutModifiersAchievement{resultMinRankSSExpertWithoutModifiersAchievement_}, combo50NormalWithoutModifiersAchievement{combo50NormalWithoutModifiersAchievement_}, combo100HardWithoutModifiersAchievement{combo100HardWithoutModifiersAchievement_}, combo500ExpertWithoutModifiersAchievement{combo500ExpertWithoutModifiersAchievement_}, clearedLevelWithoutModifiersAchievement{clearedLevelWithoutModifiersAchievement_}, clearedLevelWithSongSpeedFasterModifierAchievement{clearedLevelWithSongSpeedFasterModifierAchievement_}, clearedLevelWithInstaFailModifierAchievement{clearedLevelWithInstaFailModifierAchievement_}, clearedLevelWithDisappearingArrowsModifierAchievement{clearedLevelWithDisappearingArrowsModifierAchievement_}, clearedLevelWithBatteryEnergyModifierAchievement{clearedLevelWithBatteryEnergyModifierAchievement_}, cleared30MissionsAchievement{cleared30MissionsAchievement_}, finalMissionClearedAchievement{finalMissionClearedAchievement_}, allMissionClearedAchievement{allMissionClearedAchievement_}, playerDataModel{playerDataModel_}, missionNodesManager{missionNodesManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x10137F8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1013A14
    void OnDestroy();
    // private System.Void HandleSoloFreePlayOverallStatsDataDidUpdate(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1013BB4
    void HandleSoloFreePlayOverallStatsDataDidUpdate(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // private System.Void HandlePartyFreePlayOverallStatsDataDidUpdate(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1014684
    void HandlePartyFreePlayOverallStatsDataDidUpdate(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void HandleCampaignOverallStatsDataDidUpdate(MissionCompletionResults missionCompletionResults, MissionNode missionNode)
    // Offset: 0x1014694
    void HandleCampaignOverallStatsDataDidUpdate(GlobalNamespace::MissionCompletionResults* missionCompletionResults, GlobalNamespace::MissionNode* missionNode);
    // private System.Void ProcessMissionFinishData(MissionNode missionNode, MissionCompletionResults missionCompletionResults)
    // Offset: 0x1014714
    void ProcessMissionFinishData(GlobalNamespace::MissionNode* missionNode, GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // private System.Void ProcessSoloFreePlayLevelFinishData(IDifficultyBeatmap difficultyBeatmap, LevelCompletionResults levelCompletionResults)
    // Offset: 0x10142A0
    void ProcessSoloFreePlayLevelFinishData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void ProcessLevelFinishData(IDifficultyBeatmap difficultyBeatmap, LevelCompletionResults levelCompletionResults)
    // Offset: 0x1013BF8
    void ProcessLevelFinishData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0x10149D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementsEvaluationHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AchievementsEvaluationHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementsEvaluationHandler*, creationType>()));
    }
  }; // AchievementsEvaluationHandler
  #pragma pack(pop)
  static check_size<sizeof(AchievementsEvaluationHandler), 240 + sizeof(GlobalNamespace::MissionNodesManager*)> __GlobalNamespace_AchievementsEvaluationHandlerSizeCheck;
  static_assert(sizeof(AchievementsEvaluationHandler) == 0xF8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AchievementsEvaluationHandler*, "", "AchievementsEvaluationHandler");
