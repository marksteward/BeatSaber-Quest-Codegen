// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/BeatmapObjectType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatmapSaveData::BeatmapObjectType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapObjectType
    constexpr BeatmapObjectType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BeatmapSaveData/BeatmapObjectType Note
    static constexpr const int Note = 0;
    // Get static field: static public BeatmapSaveData/BeatmapObjectType Note
    static GlobalNamespace::BeatmapSaveData::BeatmapObjectType _get_Note();
    // Set static field: static public BeatmapSaveData/BeatmapObjectType Note
    static void _set_Note(GlobalNamespace::BeatmapSaveData::BeatmapObjectType value);
    // static field const value: static public BeatmapSaveData/BeatmapObjectType LongNote
    static constexpr const int LongNote = 1;
    // Get static field: static public BeatmapSaveData/BeatmapObjectType LongNote
    static GlobalNamespace::BeatmapSaveData::BeatmapObjectType _get_LongNote();
    // Set static field: static public BeatmapSaveData/BeatmapObjectType LongNote
    static void _set_LongNote(GlobalNamespace::BeatmapSaveData::BeatmapObjectType value);
    // static field const value: static public BeatmapSaveData/BeatmapObjectType Obstacle
    static constexpr const int Obstacle = 2;
    // Get static field: static public BeatmapSaveData/BeatmapObjectType Obstacle
    static GlobalNamespace::BeatmapSaveData::BeatmapObjectType _get_Obstacle();
    // Set static field: static public BeatmapSaveData/BeatmapObjectType Obstacle
    static void _set_Obstacle(GlobalNamespace::BeatmapSaveData::BeatmapObjectType value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // BeatmapSaveData/BeatmapObjectType
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::BeatmapObjectType), 0 + sizeof(int)> __GlobalNamespace_BeatmapSaveData_BeatmapObjectTypeSizeCheck;
  static_assert(sizeof(BeatmapSaveData::BeatmapObjectType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::BeatmapObjectType, "", "BeatmapSaveData/BeatmapObjectType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
