// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/LocalPlayer
  class PlayerSaveData::LocalPlayer : public ::Il2CppObject {
    public:
    // public System.String playerId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* playerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String playerName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* playerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean shouldShowTutorialPrompt
    // Size: 0x1
    // Offset: 0x20
    bool shouldShowTutorialPrompt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean shouldShow360Warning
    // Size: 0x1
    // Offset: 0x21
    bool shouldShow360Warning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean agreedToEula
    // Size: 0x1
    // Offset: 0x22
    bool agreedToEula;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean didSelectLanguage
    // Size: 0x1
    // Offset: 0x23
    bool didSelectLanguage;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean agreedToMultiplayerDisclaimer
    // Size: 0x1
    // Offset: 0x24
    bool agreedToMultiplayerDisclaimer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean avatarCreated
    // Size: 0x1
    // Offset: 0x25
    bool avatarCreated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: avatarCreated and: lastSelectedBeatmapDifficulty
    char __padding7[0x2] = {};
    // public BeatmapDifficulty lastSelectedBeatmapDifficulty
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: lastSelectedBeatmapDifficulty and: lastSelectedBeatmapCharacteristicName
    char __padding8[0x4] = {};
    // public System.String lastSelectedBeatmapCharacteristicName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* lastSelectedBeatmapCharacteristicName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public PlayerSaveData/GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PlayerSaveData::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::GameplayModifiers*) == 0x8);
    // public PlayerSaveData/PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::PlayerSaveData::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PlayerSpecificSettings*) == 0x8);
    // public PlayerSaveData/PracticeSettings practiceSettings
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PlayerSaveData::PracticeSettings* practiceSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PracticeSettings*) == 0x8);
    // public PlayerSaveData/PlayerAllOverallStatsData playerAllOverallStatsData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData* playerAllOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveData/PlayerLevelStatsData> levelsStatsData
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerLevelStatsData*>* levelsStatsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerLevelStatsData*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveData/PlayerMissionStatsData> missionsStatsData
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerMissionStatsData*>* missionsStatsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerMissionStatsData*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> showedMissionHelpIds
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::List_1<::Il2CppString*>* showedMissionHelpIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // public PlayerSaveData/ColorSchemesSettings colorSchemesSettings
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::PlayerSaveData::ColorSchemesSettings* colorSchemesSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::ColorSchemesSettings*) == 0x8);
    // public PlayerSaveData/OverrideEnvironmentSettings overrideEnvironmentSettings
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings* overrideEnvironmentSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> favoritesLevelIds
    // Size: 0x8
    // Offset: 0x80
    System::Collections::Generic::List_1<::Il2CppString*>* favoritesLevelIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // public PlayerSaveData/MultiplayerModeSettings multiplayerModeSettings
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::PlayerSaveData::MultiplayerModeSettings* multiplayerModeSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::MultiplayerModeSettings*) == 0x8);
    // Creating value type constructor for type: LocalPlayer
    LocalPlayer(::Il2CppString* playerId_ = {}, ::Il2CppString* playerName_ = {}, bool shouldShowTutorialPrompt_ = {}, bool shouldShow360Warning_ = {}, bool agreedToEula_ = {}, bool didSelectLanguage_ = {}, bool agreedToMultiplayerDisclaimer_ = {}, bool avatarCreated_ = {}, GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty_ = {}, ::Il2CppString* lastSelectedBeatmapCharacteristicName_ = {}, GlobalNamespace::PlayerSaveData::GameplayModifiers* gameplayModifiers_ = {}, GlobalNamespace::PlayerSaveData::PlayerSpecificSettings* playerSpecificSettings_ = {}, GlobalNamespace::PlayerSaveData::PracticeSettings* practiceSettings_ = {}, GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData* playerAllOverallStatsData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerLevelStatsData*>* levelsStatsData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerMissionStatsData*>* missionsStatsData_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* showedMissionHelpIds_ = {}, GlobalNamespace::PlayerSaveData::ColorSchemesSettings* colorSchemesSettings_ = {}, GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings* overrideEnvironmentSettings_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* favoritesLevelIds_ = {}, GlobalNamespace::PlayerSaveData::MultiplayerModeSettings* multiplayerModeSettings_ = {}) noexcept : playerId{playerId_}, playerName{playerName_}, shouldShowTutorialPrompt{shouldShowTutorialPrompt_}, shouldShow360Warning{shouldShow360Warning_}, agreedToEula{agreedToEula_}, didSelectLanguage{didSelectLanguage_}, agreedToMultiplayerDisclaimer{agreedToMultiplayerDisclaimer_}, avatarCreated{avatarCreated_}, lastSelectedBeatmapDifficulty{lastSelectedBeatmapDifficulty_}, lastSelectedBeatmapCharacteristicName{lastSelectedBeatmapCharacteristicName_}, gameplayModifiers{gameplayModifiers_}, playerSpecificSettings{playerSpecificSettings_}, practiceSettings{practiceSettings_}, playerAllOverallStatsData{playerAllOverallStatsData_}, levelsStatsData{levelsStatsData_}, missionsStatsData{missionsStatsData_}, showedMissionHelpIds{showedMissionHelpIds_}, colorSchemesSettings{colorSchemesSettings_}, overrideEnvironmentSettings{overrideEnvironmentSettings_}, favoritesLevelIds{favoritesLevelIds_}, multiplayerModeSettings{multiplayerModeSettings_} {}
    // public System.Void .ctor()
    // Offset: 0x10558A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::LocalPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::LocalPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::LocalPlayer*, creationType>()));
    }
  }; // PlayerSaveData/LocalPlayer
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::LocalPlayer), 136 + sizeof(GlobalNamespace::PlayerSaveData::MultiplayerModeSettings*)> __GlobalNamespace_PlayerSaveData_LocalPlayerSizeCheck;
  static_assert(sizeof(PlayerSaveData::LocalPlayer) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::LocalPlayer*, "", "PlayerSaveData/LocalPlayer");
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::LocalPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
