// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.UltimateResourceFallbackLocation
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D68E00
  struct UltimateResourceFallbackLocation/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UltimateResourceFallbackLocation
    constexpr UltimateResourceFallbackLocation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Resources.UltimateResourceFallbackLocation MainAssembly
    static constexpr const int MainAssembly = 0;
    // Get static field: static public System.Resources.UltimateResourceFallbackLocation MainAssembly
    static System::Resources::UltimateResourceFallbackLocation _get_MainAssembly();
    // Set static field: static public System.Resources.UltimateResourceFallbackLocation MainAssembly
    static void _set_MainAssembly(System::Resources::UltimateResourceFallbackLocation value);
    // static field const value: static public System.Resources.UltimateResourceFallbackLocation Satellite
    static constexpr const int Satellite = 1;
    // Get static field: static public System.Resources.UltimateResourceFallbackLocation Satellite
    static System::Resources::UltimateResourceFallbackLocation _get_Satellite();
    // Set static field: static public System.Resources.UltimateResourceFallbackLocation Satellite
    static void _set_Satellite(System::Resources::UltimateResourceFallbackLocation value);
  }; // System.Resources.UltimateResourceFallbackLocation
  #pragma pack(pop)
  static check_size<sizeof(UltimateResourceFallbackLocation), 0 + sizeof(int)> __System_Resources_UltimateResourceFallbackLocationSizeCheck;
  static_assert(sizeof(UltimateResourceFallbackLocation) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::UltimateResourceFallbackLocation, "System.Resources", "UltimateResourceFallbackLocation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
