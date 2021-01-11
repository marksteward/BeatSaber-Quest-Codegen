// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
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
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/LocalPlayer
  // [] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::LocalPlayer : public ::Il2CppObject {
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
    // Padding between fields: shouldShow360Warning and: gameplayModifiers
    char __padding3[0x6] = {};
    // public PlayerSaveDataV1_0_1/GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerSaveDataV1_0_1::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::GameplayModifiers*) == 0x8);
    // public PlayerSaveDataV1_0_1/PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings*) == 0x8);
    // public PlayerSaveDataV1_0_1/PlayerAllOverallStatsData playerAllOverallStatsData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* playerAllOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/PlayerLevelStatsData> levelsStatsData
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData*>* levelsStatsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/PlayerMissionStatsData> missionsStatsData
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData*>* missionsStatsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> showedMissionHelpIds
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<::Il2CppString*>* showedMissionHelpIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // public PlayerSaveDataV1_0_1/AchievementsData achievementsData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData* achievementsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData*) == 0x8);
    // Creating value type constructor for type: LocalPlayer
    LocalPlayer(::Il2CppString* playerId_ = {}, ::Il2CppString* playerName_ = {}, bool shouldShowTutorialPrompt_ = {}, bool shouldShow360Warning_ = {}, GlobalNamespace::PlayerSaveDataV1_0_1::GameplayModifiers* gameplayModifiers_ = {}, GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings* playerSpecificSettings_ = {}, GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* playerAllOverallStatsData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData*>* levelsStatsData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData*>* missionsStatsData_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* showedMissionHelpIds_ = {}, GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData* achievementsData_ = {}) noexcept : playerId{playerId_}, playerName{playerName_}, shouldShowTutorialPrompt{shouldShowTutorialPrompt_}, shouldShow360Warning{shouldShow360Warning_}, gameplayModifiers{gameplayModifiers_}, playerSpecificSettings{playerSpecificSettings_}, playerAllOverallStatsData{playerAllOverallStatsData_}, levelsStatsData{levelsStatsData_}, missionsStatsData{missionsStatsData_}, showedMissionHelpIds{showedMissionHelpIds_}, achievementsData{achievementsData_} {}
    // public System.Void .ctor()
    // Offset: 0xF292B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::LocalPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::LocalPlayer*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/LocalPlayer
  static check_size<sizeof(PlayerSaveDataV1_0_1::LocalPlayer), 88 + sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData*)> __GlobalNamespace_PlayerSaveDataV1_0_1_LocalPlayerSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::LocalPlayer) == 0x60);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer*, "", "PlayerSaveDataV1_0_1/LocalPlayer");
