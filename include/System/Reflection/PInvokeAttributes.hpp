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
  // Autogenerated type: System.Reflection.PInvokeAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct PInvokeAttributes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PInvokeAttributes
    constexpr PInvokeAttributes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.PInvokeAttributes NoMangle
    static constexpr const int NoMangle = 1;
    // Get static field: static public System.Reflection.PInvokeAttributes NoMangle
    static System::Reflection::PInvokeAttributes _get_NoMangle();
    // Set static field: static public System.Reflection.PInvokeAttributes NoMangle
    static void _set_NoMangle(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CharSetMask
    static constexpr const int CharSetMask = 6;
    // Get static field: static public System.Reflection.PInvokeAttributes CharSetMask
    static System::Reflection::PInvokeAttributes _get_CharSetMask();
    // Set static field: static public System.Reflection.PInvokeAttributes CharSetMask
    static void _set_CharSetMask(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CharSetNotSpec
    static constexpr const int CharSetNotSpec = 0;
    // Get static field: static public System.Reflection.PInvokeAttributes CharSetNotSpec
    static System::Reflection::PInvokeAttributes _get_CharSetNotSpec();
    // Set static field: static public System.Reflection.PInvokeAttributes CharSetNotSpec
    static void _set_CharSetNotSpec(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CharSetAnsi
    static constexpr const int CharSetAnsi = 2;
    // Get static field: static public System.Reflection.PInvokeAttributes CharSetAnsi
    static System::Reflection::PInvokeAttributes _get_CharSetAnsi();
    // Set static field: static public System.Reflection.PInvokeAttributes CharSetAnsi
    static void _set_CharSetAnsi(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CharSetUnicode
    static constexpr const int CharSetUnicode = 4;
    // Get static field: static public System.Reflection.PInvokeAttributes CharSetUnicode
    static System::Reflection::PInvokeAttributes _get_CharSetUnicode();
    // Set static field: static public System.Reflection.PInvokeAttributes CharSetUnicode
    static void _set_CharSetUnicode(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CharSetAuto
    static constexpr const int CharSetAuto = 6;
    // Get static field: static public System.Reflection.PInvokeAttributes CharSetAuto
    static System::Reflection::PInvokeAttributes _get_CharSetAuto();
    // Set static field: static public System.Reflection.PInvokeAttributes CharSetAuto
    static void _set_CharSetAuto(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes BestFitUseAssem
    static constexpr const int BestFitUseAssem = 0;
    // Get static field: static public System.Reflection.PInvokeAttributes BestFitUseAssem
    static System::Reflection::PInvokeAttributes _get_BestFitUseAssem();
    // Set static field: static public System.Reflection.PInvokeAttributes BestFitUseAssem
    static void _set_BestFitUseAssem(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes BestFitEnabled
    static constexpr const int BestFitEnabled = 16;
    // Get static field: static public System.Reflection.PInvokeAttributes BestFitEnabled
    static System::Reflection::PInvokeAttributes _get_BestFitEnabled();
    // Set static field: static public System.Reflection.PInvokeAttributes BestFitEnabled
    static void _set_BestFitEnabled(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes BestFitDisabled
    static constexpr const int BestFitDisabled = 32;
    // Get static field: static public System.Reflection.PInvokeAttributes BestFitDisabled
    static System::Reflection::PInvokeAttributes _get_BestFitDisabled();
    // Set static field: static public System.Reflection.PInvokeAttributes BestFitDisabled
    static void _set_BestFitDisabled(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes BestFitMask
    static constexpr const int BestFitMask = 48;
    // Get static field: static public System.Reflection.PInvokeAttributes BestFitMask
    static System::Reflection::PInvokeAttributes _get_BestFitMask();
    // Set static field: static public System.Reflection.PInvokeAttributes BestFitMask
    static void _set_BestFitMask(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharUseAssem
    static constexpr const int ThrowOnUnmappableCharUseAssem = 0;
    // Get static field: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharUseAssem
    static System::Reflection::PInvokeAttributes _get_ThrowOnUnmappableCharUseAssem();
    // Set static field: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharUseAssem
    static void _set_ThrowOnUnmappableCharUseAssem(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharEnabled
    static constexpr const int ThrowOnUnmappableCharEnabled = 4096;
    // Get static field: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharEnabled
    static System::Reflection::PInvokeAttributes _get_ThrowOnUnmappableCharEnabled();
    // Set static field: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharEnabled
    static void _set_ThrowOnUnmappableCharEnabled(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharDisabled
    static constexpr const int ThrowOnUnmappableCharDisabled = 8192;
    // Get static field: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharDisabled
    static System::Reflection::PInvokeAttributes _get_ThrowOnUnmappableCharDisabled();
    // Set static field: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharDisabled
    static void _set_ThrowOnUnmappableCharDisabled(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharMask
    static constexpr const int ThrowOnUnmappableCharMask = 12288;
    // Get static field: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharMask
    static System::Reflection::PInvokeAttributes _get_ThrowOnUnmappableCharMask();
    // Set static field: static public System.Reflection.PInvokeAttributes ThrowOnUnmappableCharMask
    static void _set_ThrowOnUnmappableCharMask(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes SupportsLastError
    static constexpr const int SupportsLastError = 64;
    // Get static field: static public System.Reflection.PInvokeAttributes SupportsLastError
    static System::Reflection::PInvokeAttributes _get_SupportsLastError();
    // Set static field: static public System.Reflection.PInvokeAttributes SupportsLastError
    static void _set_SupportsLastError(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CallConvMask
    static constexpr const int CallConvMask = 1792;
    // Get static field: static public System.Reflection.PInvokeAttributes CallConvMask
    static System::Reflection::PInvokeAttributes _get_CallConvMask();
    // Set static field: static public System.Reflection.PInvokeAttributes CallConvMask
    static void _set_CallConvMask(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CallConvWinapi
    static constexpr const int CallConvWinapi = 256;
    // Get static field: static public System.Reflection.PInvokeAttributes CallConvWinapi
    static System::Reflection::PInvokeAttributes _get_CallConvWinapi();
    // Set static field: static public System.Reflection.PInvokeAttributes CallConvWinapi
    static void _set_CallConvWinapi(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CallConvCdecl
    static constexpr const int CallConvCdecl = 512;
    // Get static field: static public System.Reflection.PInvokeAttributes CallConvCdecl
    static System::Reflection::PInvokeAttributes _get_CallConvCdecl();
    // Set static field: static public System.Reflection.PInvokeAttributes CallConvCdecl
    static void _set_CallConvCdecl(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CallConvStdcall
    static constexpr const int CallConvStdcall = 768;
    // Get static field: static public System.Reflection.PInvokeAttributes CallConvStdcall
    static System::Reflection::PInvokeAttributes _get_CallConvStdcall();
    // Set static field: static public System.Reflection.PInvokeAttributes CallConvStdcall
    static void _set_CallConvStdcall(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CallConvThiscall
    static constexpr const int CallConvThiscall = 1024;
    // Get static field: static public System.Reflection.PInvokeAttributes CallConvThiscall
    static System::Reflection::PInvokeAttributes _get_CallConvThiscall();
    // Set static field: static public System.Reflection.PInvokeAttributes CallConvThiscall
    static void _set_CallConvThiscall(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes CallConvFastcall
    static constexpr const int CallConvFastcall = 1280;
    // Get static field: static public System.Reflection.PInvokeAttributes CallConvFastcall
    static System::Reflection::PInvokeAttributes _get_CallConvFastcall();
    // Set static field: static public System.Reflection.PInvokeAttributes CallConvFastcall
    static void _set_CallConvFastcall(System::Reflection::PInvokeAttributes value);
    // static field const value: static public System.Reflection.PInvokeAttributes MaxValue
    static constexpr const int MaxValue = 65535;
    // Get static field: static public System.Reflection.PInvokeAttributes MaxValue
    static System::Reflection::PInvokeAttributes _get_MaxValue();
    // Set static field: static public System.Reflection.PInvokeAttributes MaxValue
    static void _set_MaxValue(System::Reflection::PInvokeAttributes value);
  }; // System.Reflection.PInvokeAttributes
  #pragma pack(pop)
  static check_size<sizeof(PInvokeAttributes), 0 + sizeof(int)> __System_Reflection_PInvokeAttributesSizeCheck;
  static_assert(sizeof(PInvokeAttributes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::PInvokeAttributes, "System.Reflection", "PInvokeAttributes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
