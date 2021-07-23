// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.LoadHint
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoadHint/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LoadHint
    constexpr LoadHint(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.CompilerServices.LoadHint Default
    static constexpr const int Default = 0;
    // Get static field: static public System.Runtime.CompilerServices.LoadHint Default
    static System::Runtime::CompilerServices::LoadHint _get_Default();
    // Set static field: static public System.Runtime.CompilerServices.LoadHint Default
    static void _set_Default(System::Runtime::CompilerServices::LoadHint value);
    // static field const value: static public System.Runtime.CompilerServices.LoadHint Always
    static constexpr const int Always = 1;
    // Get static field: static public System.Runtime.CompilerServices.LoadHint Always
    static System::Runtime::CompilerServices::LoadHint _get_Always();
    // Set static field: static public System.Runtime.CompilerServices.LoadHint Always
    static void _set_Always(System::Runtime::CompilerServices::LoadHint value);
    // static field const value: static public System.Runtime.CompilerServices.LoadHint Sometimes
    static constexpr const int Sometimes = 2;
    // Get static field: static public System.Runtime.CompilerServices.LoadHint Sometimes
    static System::Runtime::CompilerServices::LoadHint _get_Sometimes();
    // Set static field: static public System.Runtime.CompilerServices.LoadHint Sometimes
    static void _set_Sometimes(System::Runtime::CompilerServices::LoadHint value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Runtime.CompilerServices.LoadHint
  #pragma pack(pop)
  static check_size<sizeof(LoadHint), 0 + sizeof(int)> __System_Runtime_CompilerServices_LoadHintSizeCheck;
  static_assert(sizeof(LoadHint) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::LoadHint, "System.Runtime.CompilerServices", "LoadHint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
