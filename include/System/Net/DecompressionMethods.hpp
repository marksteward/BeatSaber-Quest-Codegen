// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DecompressionMethods
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct DecompressionMethods/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DecompressionMethods
    constexpr DecompressionMethods(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.DecompressionMethods None
    static constexpr const int None = 0;
    // Get static field: static public System.Net.DecompressionMethods None
    static System::Net::DecompressionMethods _get_None();
    // Set static field: static public System.Net.DecompressionMethods None
    static void _set_None(System::Net::DecompressionMethods value);
    // static field const value: static public System.Net.DecompressionMethods GZip
    static constexpr const int GZip = 1;
    // Get static field: static public System.Net.DecompressionMethods GZip
    static System::Net::DecompressionMethods _get_GZip();
    // Set static field: static public System.Net.DecompressionMethods GZip
    static void _set_GZip(System::Net::DecompressionMethods value);
    // static field const value: static public System.Net.DecompressionMethods Deflate
    static constexpr const int Deflate = 2;
    // Get static field: static public System.Net.DecompressionMethods Deflate
    static System::Net::DecompressionMethods _get_Deflate();
    // Set static field: static public System.Net.DecompressionMethods Deflate
    static void _set_Deflate(System::Net::DecompressionMethods value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Net.DecompressionMethods
  #pragma pack(pop)
  static check_size<sizeof(DecompressionMethods), 0 + sizeof(int)> __System_Net_DecompressionMethodsSizeCheck;
  static_assert(sizeof(DecompressionMethods) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::DecompressionMethods, "System.Net", "DecompressionMethods");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
