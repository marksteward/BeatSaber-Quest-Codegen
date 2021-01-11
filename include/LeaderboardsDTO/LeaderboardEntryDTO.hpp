// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: LeaderboardsDTO.GameplayModifiersDto
#include "LeaderboardsDTO/GameplayModifiersDto.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsDTO.LeaderboardEntryDTO
  // [] Offset: FFFFFFFF
  class LeaderboardEntryDTO : public ::Il2CppObject {
    public:
    // public System.Int32 score
    // Size: 0x4
    // Offset: 0x10
    int score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 unmodifiedScore
    // Size: 0x4
    // Offset: 0x14
    int unmodifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 rank
    // Size: 0x4
    // Offset: 0x18
    int rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: rank and: updated
    char __padding2[0x4] = {};
    // public System.DateTime updated
    // Size: 0x8
    // Offset: 0x20
    System::DateTime updated;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // public System.String userDisplayName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* userDisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String platformUserId
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* platformUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public LeaderboardsDTO.GameplayModifiersDto[] gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    ::Array<LeaderboardsDTO::GameplayModifiersDto>* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::Array<LeaderboardsDTO::GameplayModifiersDto>*) == 0x8);
    // Creating value type constructor for type: LeaderboardEntryDTO
    LeaderboardEntryDTO(int score_ = {}, int unmodifiedScore_ = {}, int rank_ = {}, System::DateTime updated_ = {}, ::Il2CppString* userDisplayName_ = {}, ::Il2CppString* platformUserId_ = {}, ::Array<LeaderboardsDTO::GameplayModifiersDto>* gameplayModifiers_ = {}) noexcept : score{score_}, unmodifiedScore{unmodifiedScore_}, rank{rank_}, updated{updated_}, userDisplayName{userDisplayName_}, platformUserId{platformUserId_}, gameplayModifiers{gameplayModifiers_} {}
    // public System.Void .ctor()
    // Offset: 0xF1E9C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardEntryDTO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LeaderboardsDTO::LeaderboardEntryDTO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardEntryDTO*, creationType>()));
    }
  }; // LeaderboardsDTO.LeaderboardEntryDTO
  static check_size<sizeof(LeaderboardEntryDTO), 56 + sizeof(::Array<LeaderboardsDTO::GameplayModifiersDto>*)> __LeaderboardsDTO_LeaderboardEntryDTOSizeCheck;
  static_assert(sizeof(LeaderboardEntryDTO) == 0x40);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardEntryDTO*, "LeaderboardsDTO", "LeaderboardEntryDTO");
