// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RankModel
#include "GlobalNamespace/RankModel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: RankModel/Rank
  // [TokenAttribute] Offset: FFFFFFFF
  struct RankModel::Rank/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Rank
    constexpr Rank(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public RankModel/Rank E
    static constexpr const int E = 0;
    // Get static field: static public RankModel/Rank E
    static GlobalNamespace::RankModel::Rank _get_E();
    // Set static field: static public RankModel/Rank E
    static void _set_E(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank D
    static constexpr const int D = 1;
    // Get static field: static public RankModel/Rank D
    static GlobalNamespace::RankModel::Rank _get_D();
    // Set static field: static public RankModel/Rank D
    static void _set_D(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank C
    static constexpr const int C = 2;
    // Get static field: static public RankModel/Rank C
    static GlobalNamespace::RankModel::Rank _get_C();
    // Set static field: static public RankModel/Rank C
    static void _set_C(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank B
    static constexpr const int B = 3;
    // Get static field: static public RankModel/Rank B
    static GlobalNamespace::RankModel::Rank _get_B();
    // Set static field: static public RankModel/Rank B
    static void _set_B(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank A
    static constexpr const int A = 4;
    // Get static field: static public RankModel/Rank A
    static GlobalNamespace::RankModel::Rank _get_A();
    // Set static field: static public RankModel/Rank A
    static void _set_A(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank S
    static constexpr const int S = 5;
    // Get static field: static public RankModel/Rank S
    static GlobalNamespace::RankModel::Rank _get_S();
    // Set static field: static public RankModel/Rank S
    static void _set_S(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank SS
    static constexpr const int SS = 6;
    // Get static field: static public RankModel/Rank SS
    static GlobalNamespace::RankModel::Rank _get_SS();
    // Set static field: static public RankModel/Rank SS
    static void _set_SS(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank SSS
    static constexpr const int SSS = 7;
    // Get static field: static public RankModel/Rank SSS
    static GlobalNamespace::RankModel::Rank _get_SSS();
    // Set static field: static public RankModel/Rank SSS
    static void _set_SSS(GlobalNamespace::RankModel::Rank value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // RankModel/Rank
  #pragma pack(pop)
  static check_size<sizeof(RankModel::Rank), 0 + sizeof(int)> __GlobalNamespace_RankModel_RankSizeCheck;
  static_assert(sizeof(RankModel::Rank) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RankModel::Rank, "", "RankModel/Rank");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
