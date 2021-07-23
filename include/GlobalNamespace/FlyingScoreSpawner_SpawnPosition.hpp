// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FlyingScoreSpawner
#include "GlobalNamespace/FlyingScoreSpawner.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FlyingScoreSpawner/SpawnPosition
  // [TokenAttribute] Offset: FFFFFFFF
  struct FlyingScoreSpawner::SpawnPosition/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SpawnPosition
    constexpr SpawnPosition(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FlyingScoreSpawner/SpawnPosition Underground
    static constexpr const int Underground = 0;
    // Get static field: static public FlyingScoreSpawner/SpawnPosition Underground
    static GlobalNamespace::FlyingScoreSpawner::SpawnPosition _get_Underground();
    // Set static field: static public FlyingScoreSpawner/SpawnPosition Underground
    static void _set_Underground(GlobalNamespace::FlyingScoreSpawner::SpawnPosition value);
    // static field const value: static public FlyingScoreSpawner/SpawnPosition AboveGround
    static constexpr const int AboveGround = 1;
    // Get static field: static public FlyingScoreSpawner/SpawnPosition AboveGround
    static GlobalNamespace::FlyingScoreSpawner::SpawnPosition _get_AboveGround();
    // Set static field: static public FlyingScoreSpawner/SpawnPosition AboveGround
    static void _set_AboveGround(GlobalNamespace::FlyingScoreSpawner::SpawnPosition value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // FlyingScoreSpawner/SpawnPosition
  #pragma pack(pop)
  static check_size<sizeof(FlyingScoreSpawner::SpawnPosition), 0 + sizeof(int)> __GlobalNamespace_FlyingScoreSpawner_SpawnPositionSizeCheck;
  static_assert(sizeof(FlyingScoreSpawner::SpawnPosition) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreSpawner::SpawnPosition, "", "FlyingScoreSpawner/SpawnPosition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
