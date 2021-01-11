// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsDTO.LeaderboardQueryDTO
  // [] Offset: FFFFFFFF
  class LeaderboardQueryDTO : public ::Il2CppObject {
    public:
    // Nested type: LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope
    struct ScoresScope;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope
    // [] Offset: FFFFFFFF
    struct ScoresScope/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ScoresScope
      constexpr ScoresScope(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope Global
      static constexpr const int Global = 0;
      // Get static field: static public LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope Global
      static LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope _get_Global();
      // Set static field: static public LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope Global
      static void _set_Global(LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope value);
      // static field const value: static public LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope Friends
      static constexpr const int Friends = 1;
      // Get static field: static public LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope Friends
      static LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope _get_Friends();
      // Set static field: static public LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope Friends
      static void _set_Friends(LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope value);
    }; // LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope
    static check_size<sizeof(LeaderboardQueryDTO::ScoresScope), 0 + sizeof(int)> __LeaderboardsDTO_LeaderboardQueryDTO_ScoresScopeSizeCheck;
    static_assert(sizeof(LeaderboardQueryDTO::ScoresScope) == 0x4);
    // public System.String leaderboardId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* leaderboardId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x18
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 fromRank
    // Size: 0x4
    // Offset: 0x1C
    int fromRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope scope
    // Size: 0x4
    // Offset: 0x20
    LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope scope;
    // Field size check
    static_assert(sizeof(LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope) == 0x4);
    // Padding between fields: scope and: friendsUserIds
    char __padding3[0x4] = {};
    // public System.String[] friendsUserIds
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* friendsUserIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.Boolean includedScoreWithModifiers
    // Size: 0x1
    // Offset: 0x30
    bool includedScoreWithModifiers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LeaderboardQueryDTO
    LeaderboardQueryDTO(::Il2CppString* leaderboardId_ = {}, int count_ = {}, int fromRank_ = {}, LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope scope_ = {}, ::Array<::Il2CppString*>* friendsUserIds_ = {}, bool includedScoreWithModifiers_ = {}) noexcept : leaderboardId{leaderboardId_}, count{count_}, fromRank{fromRank_}, scope{scope_}, friendsUserIds{friendsUserIds_}, includedScoreWithModifiers{includedScoreWithModifiers_} {}
    // public System.Void .ctor()
    // Offset: 0xF1E9C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardQueryDTO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LeaderboardsDTO::LeaderboardQueryDTO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardQueryDTO*, creationType>()));
    }
  }; // LeaderboardsDTO.LeaderboardQueryDTO
  static check_size<sizeof(LeaderboardQueryDTO), 48 + sizeof(bool)> __LeaderboardsDTO_LeaderboardQueryDTOSizeCheck;
  static_assert(sizeof(LeaderboardQueryDTO) == 0x31);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardQueryDTO*, "LeaderboardsDTO", "LeaderboardQueryDTO");
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope, "LeaderboardsDTO", "LeaderboardQueryDTO/ScoresScope");
