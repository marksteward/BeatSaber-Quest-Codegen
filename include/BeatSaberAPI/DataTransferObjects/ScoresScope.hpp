// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.ScoresScope
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
    // static field const value: static public BeatSaberAPI.DataTransferObjects.ScoresScope Global
    static constexpr const int Global = 0;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.ScoresScope Global
    static BeatSaberAPI::DataTransferObjects::ScoresScope _get_Global();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.ScoresScope Global
    static void _set_Global(BeatSaberAPI::DataTransferObjects::ScoresScope value);
    // static field const value: static public BeatSaberAPI.DataTransferObjects.ScoresScope AroundPlayer
    static constexpr const int AroundPlayer = 1;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.ScoresScope AroundPlayer
    static BeatSaberAPI::DataTransferObjects::ScoresScope _get_AroundPlayer();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.ScoresScope AroundPlayer
    static void _set_AroundPlayer(BeatSaberAPI::DataTransferObjects::ScoresScope value);
    // static field const value: static public BeatSaberAPI.DataTransferObjects.ScoresScope Friends
    static constexpr const int Friends = 3;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.ScoresScope Friends
    static BeatSaberAPI::DataTransferObjects::ScoresScope _get_Friends();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.ScoresScope Friends
    static void _set_Friends(BeatSaberAPI::DataTransferObjects::ScoresScope value);
  }; // BeatSaberAPI.DataTransferObjects.ScoresScope
  static check_size<sizeof(ScoresScope), 0 + sizeof(int)> __BeatSaberAPI_DataTransferObjects_ScoresScopeSizeCheck;
  static_assert(sizeof(ScoresScope) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::ScoresScope, "BeatSaberAPI.DataTransferObjects", "ScoresScope");
