// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ParameterAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6965C
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ParameterAttributes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ParameterAttributes
    constexpr ParameterAttributes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.ParameterAttributes None
    static constexpr const int None = 0;
    // Get static field: static public System.Reflection.ParameterAttributes None
    static System::Reflection::ParameterAttributes _get_None();
    // Set static field: static public System.Reflection.ParameterAttributes None
    static void _set_None(System::Reflection::ParameterAttributes value);
    // static field const value: static public System.Reflection.ParameterAttributes In
    static constexpr const int In = 1;
    // Get static field: static public System.Reflection.ParameterAttributes In
    static System::Reflection::ParameterAttributes _get_In();
    // Set static field: static public System.Reflection.ParameterAttributes In
    static void _set_In(System::Reflection::ParameterAttributes value);
    // static field const value: static public System.Reflection.ParameterAttributes Out
    static constexpr const int Out = 2;
    // Get static field: static public System.Reflection.ParameterAttributes Out
    static System::Reflection::ParameterAttributes _get_Out();
    // Set static field: static public System.Reflection.ParameterAttributes Out
    static void _set_Out(System::Reflection::ParameterAttributes value);
    // static field const value: static public System.Reflection.ParameterAttributes Lcid
    static constexpr const int Lcid = 4;
    // Get static field: static public System.Reflection.ParameterAttributes Lcid
    static System::Reflection::ParameterAttributes _get_Lcid();
    // Set static field: static public System.Reflection.ParameterAttributes Lcid
    static void _set_Lcid(System::Reflection::ParameterAttributes value);
    // static field const value: static public System.Reflection.ParameterAttributes Retval
    static constexpr const int Retval = 8;
    // Get static field: static public System.Reflection.ParameterAttributes Retval
    static System::Reflection::ParameterAttributes _get_Retval();
    // Set static field: static public System.Reflection.ParameterAttributes Retval
    static void _set_Retval(System::Reflection::ParameterAttributes value);
    // static field const value: static public System.Reflection.ParameterAttributes Optional
    static constexpr const int Optional = 16;
    // Get static field: static public System.Reflection.ParameterAttributes Optional
    static System::Reflection::ParameterAttributes _get_Optional();
    // Set static field: static public System.Reflection.ParameterAttributes Optional
    static void _set_Optional(System::Reflection::ParameterAttributes value);
    // static field const value: static public System.Reflection.ParameterAttributes ReservedMask
    static constexpr const int ReservedMask = 61440;
    // Get static field: static public System.Reflection.ParameterAttributes ReservedMask
    static System::Reflection::ParameterAttributes _get_ReservedMask();
    // Set static field: static public System.Reflection.ParameterAttributes ReservedMask
    static void _set_ReservedMask(System::Reflection::ParameterAttributes value);
    // static field const value: static public System.Reflection.ParameterAttributes HasDefault
    static constexpr const int HasDefault = 4096;
    // Get static field: static public System.Reflection.ParameterAttributes HasDefault
    static System::Reflection::ParameterAttributes _get_HasDefault();
    // Set static field: static public System.Reflection.ParameterAttributes HasDefault
    static void _set_HasDefault(System::Reflection::ParameterAttributes value);
    // static field const value: static public System.Reflection.ParameterAttributes HasFieldMarshal
    static constexpr const int HasFieldMarshal = 8192;
    // Get static field: static public System.Reflection.ParameterAttributes HasFieldMarshal
    static System::Reflection::ParameterAttributes _get_HasFieldMarshal();
    // Set static field: static public System.Reflection.ParameterAttributes HasFieldMarshal
    static void _set_HasFieldMarshal(System::Reflection::ParameterAttributes value);
    // static field const value: static public System.Reflection.ParameterAttributes Reserved3
    static constexpr const int Reserved3 = 16384;
    // Get static field: static public System.Reflection.ParameterAttributes Reserved3
    static System::Reflection::ParameterAttributes _get_Reserved3();
    // Set static field: static public System.Reflection.ParameterAttributes Reserved3
    static void _set_Reserved3(System::Reflection::ParameterAttributes value);
    // static field const value: static public System.Reflection.ParameterAttributes Reserved4
    static constexpr const int Reserved4 = 32768;
    // Get static field: static public System.Reflection.ParameterAttributes Reserved4
    static System::Reflection::ParameterAttributes _get_Reserved4();
    // Set static field: static public System.Reflection.ParameterAttributes Reserved4
    static void _set_Reserved4(System::Reflection::ParameterAttributes value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Reflection.ParameterAttributes
  #pragma pack(pop)
  static check_size<sizeof(ParameterAttributes), 0 + sizeof(int)> __System_Reflection_ParameterAttributesSizeCheck;
  static_assert(sizeof(ParameterAttributes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ParameterAttributes, "System.Reflection", "ParameterAttributes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
