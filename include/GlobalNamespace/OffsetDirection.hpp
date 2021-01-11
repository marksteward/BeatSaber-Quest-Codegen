// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OffsetDirection
  // [] Offset: FFFFFFFF
  struct OffsetDirection/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OffsetDirection
    constexpr OffsetDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OffsetDirection Up
    static constexpr const int Up = 0;
    // Get static field: static public OffsetDirection Up
    static GlobalNamespace::OffsetDirection _get_Up();
    // Set static field: static public OffsetDirection Up
    static void _set_Up(GlobalNamespace::OffsetDirection value);
    // static field const value: static public OffsetDirection Down
    static constexpr const int Down = 1;
    // Get static field: static public OffsetDirection Down
    static GlobalNamespace::OffsetDirection _get_Down();
    // Set static field: static public OffsetDirection Down
    static void _set_Down(GlobalNamespace::OffsetDirection value);
    // static field const value: static public OffsetDirection Left
    static constexpr const int Left = 2;
    // Get static field: static public OffsetDirection Left
    static GlobalNamespace::OffsetDirection _get_Left();
    // Set static field: static public OffsetDirection Left
    static void _set_Left(GlobalNamespace::OffsetDirection value);
    // static field const value: static public OffsetDirection Right
    static constexpr const int Right = 3;
    // Get static field: static public OffsetDirection Right
    static GlobalNamespace::OffsetDirection _get_Right();
    // Set static field: static public OffsetDirection Right
    static void _set_Right(GlobalNamespace::OffsetDirection value);
    // static field const value: static public OffsetDirection UpLeft
    static constexpr const int UpLeft = 4;
    // Get static field: static public OffsetDirection UpLeft
    static GlobalNamespace::OffsetDirection _get_UpLeft();
    // Set static field: static public OffsetDirection UpLeft
    static void _set_UpLeft(GlobalNamespace::OffsetDirection value);
    // static field const value: static public OffsetDirection UpRight
    static constexpr const int UpRight = 5;
    // Get static field: static public OffsetDirection UpRight
    static GlobalNamespace::OffsetDirection _get_UpRight();
    // Set static field: static public OffsetDirection UpRight
    static void _set_UpRight(GlobalNamespace::OffsetDirection value);
    // static field const value: static public OffsetDirection DownLeft
    static constexpr const int DownLeft = 6;
    // Get static field: static public OffsetDirection DownLeft
    static GlobalNamespace::OffsetDirection _get_DownLeft();
    // Set static field: static public OffsetDirection DownLeft
    static void _set_DownLeft(GlobalNamespace::OffsetDirection value);
    // static field const value: static public OffsetDirection DownRight
    static constexpr const int DownRight = 7;
    // Get static field: static public OffsetDirection DownRight
    static GlobalNamespace::OffsetDirection _get_DownRight();
    // Set static field: static public OffsetDirection DownRight
    static void _set_DownRight(GlobalNamespace::OffsetDirection value);
    // static field const value: static public OffsetDirection None
    static constexpr const int None = 9;
    // Get static field: static public OffsetDirection None
    static GlobalNamespace::OffsetDirection _get_None();
    // Set static field: static public OffsetDirection None
    static void _set_None(GlobalNamespace::OffsetDirection value);
  }; // OffsetDirection
  static check_size<sizeof(OffsetDirection), 0 + sizeof(int)> __GlobalNamespace_OffsetDirectionSizeCheck;
  static_assert(sizeof(OffsetDirection) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OffsetDirection, "", "OffsetDirection");
