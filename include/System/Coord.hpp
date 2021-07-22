// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Coord
  // [TokenAttribute] Offset: FFFFFFFF
  struct Coord/*, public System::ValueType*/ {
    public:
    // public System.Int16 X
    // Size: 0x2
    // Offset: 0x0
    int16_t X;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 Y
    // Size: 0x2
    // Offset: 0x2
    int16_t Y;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Creating value type constructor for type: Coord
    constexpr Coord(int16_t X_ = {}, int16_t Y_ = {}) noexcept : X{X_}, Y{Y_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // System.Coord
  #pragma pack(pop)
  static check_size<sizeof(Coord), 2 + sizeof(int16_t)> __System_CoordSizeCheck;
  static_assert(sizeof(Coord) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Coord, "System", "Coord");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
