// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScoreUIController
#include "GlobalNamespace/ScoreUIController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScoreUIController/ScoreDisplayType
  struct ScoreUIController::ScoreDisplayType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ScoreDisplayType
    constexpr ScoreDisplayType(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public ScoreUIController/ScoreDisplayType RawScore
    static constexpr const int RawScore = 0;
    // Get static field: static public ScoreUIController/ScoreDisplayType RawScore
    static GlobalNamespace::ScoreUIController::ScoreDisplayType _get_RawScore();
    // Set static field: static public ScoreUIController/ScoreDisplayType RawScore
    static void _set_RawScore(GlobalNamespace::ScoreUIController::ScoreDisplayType value);
    // static field const value: static public ScoreUIController/ScoreDisplayType ModifiedScore
    static constexpr const int ModifiedScore = 1;
    // Get static field: static public ScoreUIController/ScoreDisplayType ModifiedScore
    static GlobalNamespace::ScoreUIController::ScoreDisplayType _get_ModifiedScore();
    // Set static field: static public ScoreUIController/ScoreDisplayType ModifiedScore
    static void _set_ModifiedScore(GlobalNamespace::ScoreUIController::ScoreDisplayType value);
  }; // ScoreUIController/ScoreDisplayType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreUIController::ScoreDisplayType, "", "ScoreUIController/ScoreDisplayType");
#pragma pack(pop)
