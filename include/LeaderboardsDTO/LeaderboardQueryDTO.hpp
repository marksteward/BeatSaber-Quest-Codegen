// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Autogenerated type: LeaderboardsDTO.LeaderboardQueryDTO
  class LeaderboardQueryDTO : public ::Il2CppObject {
    public:
    // Nested type: LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope
    struct ScoresScope;
    // Autogenerated type: LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope
    struct ScoresScope : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: ScoresScope
      constexpr ScoresScope(int value_ = {}) : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const {
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
    // public System.String leaderboardId
    // Offset: 0x10
    ::Il2CppString* leaderboardId;
    // public System.Int32 count
    // Offset: 0x18
    int count;
    // public System.Int32 fromRank
    // Offset: 0x1C
    int fromRank;
    // public LeaderboardsDTO.LeaderboardQueryDTO/ScoresScope scope
    // Offset: 0x20
    LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope scope;
    // public System.String[] friendsUserIds
    // Offset: 0x28
    ::Array<::Il2CppString*>* friendsUserIds;
    // public System.Boolean includedScoreWithModifiers
    // Offset: 0x30
    bool includedScoreWithModifiers;
    // public System.Void .ctor()
    // Offset: 0xB43234
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LeaderboardQueryDTO* New_ctor();
  }; // LeaderboardsDTO.LeaderboardQueryDTO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardQueryDTO*, "LeaderboardsDTO", "LeaderboardQueryDTO");
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope, "LeaderboardsDTO", "LeaderboardQueryDTO/ScoresScope");
#pragma pack(pop)
