// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.VoipBitrate
  // [TokenAttribute] Offset: FFFFFFFF
  struct VoipBitrate/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: VoipBitrate
    constexpr VoipBitrate(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xDEA93C
    // static field const value: static public Oculus.Platform.VoipBitrate Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.VoipBitrate Unknown
    static Oculus::Platform::VoipBitrate _get_Unknown();
    // Set static field: static public Oculus.Platform.VoipBitrate Unknown
    static void _set_Unknown(Oculus::Platform::VoipBitrate value);
    // [DescriptionAttribute] Offset: 0xDEA974
    // static field const value: static public Oculus.Platform.VoipBitrate B16000
    static constexpr const int B16000 = 1;
    // Get static field: static public Oculus.Platform.VoipBitrate B16000
    static Oculus::Platform::VoipBitrate _get_B16000();
    // Set static field: static public Oculus.Platform.VoipBitrate B16000
    static void _set_B16000(Oculus::Platform::VoipBitrate value);
    // [DescriptionAttribute] Offset: 0xDEA9AC
    // static field const value: static public Oculus.Platform.VoipBitrate B24000
    static constexpr const int B24000 = 2;
    // Get static field: static public Oculus.Platform.VoipBitrate B24000
    static Oculus::Platform::VoipBitrate _get_B24000();
    // Set static field: static public Oculus.Platform.VoipBitrate B24000
    static void _set_B24000(Oculus::Platform::VoipBitrate value);
    // [DescriptionAttribute] Offset: 0xDEA9E4
    // static field const value: static public Oculus.Platform.VoipBitrate B32000
    static constexpr const int B32000 = 3;
    // Get static field: static public Oculus.Platform.VoipBitrate B32000
    static Oculus::Platform::VoipBitrate _get_B32000();
    // Set static field: static public Oculus.Platform.VoipBitrate B32000
    static void _set_B32000(Oculus::Platform::VoipBitrate value);
    // [DescriptionAttribute] Offset: 0xDEAA1C
    // static field const value: static public Oculus.Platform.VoipBitrate B64000
    static constexpr const int B64000 = 4;
    // Get static field: static public Oculus.Platform.VoipBitrate B64000
    static Oculus::Platform::VoipBitrate _get_B64000();
    // Set static field: static public Oculus.Platform.VoipBitrate B64000
    static void _set_B64000(Oculus::Platform::VoipBitrate value);
    // [DescriptionAttribute] Offset: 0xDEAA54
    // static field const value: static public Oculus.Platform.VoipBitrate B96000
    static constexpr const int B96000 = 5;
    // Get static field: static public Oculus.Platform.VoipBitrate B96000
    static Oculus::Platform::VoipBitrate _get_B96000();
    // Set static field: static public Oculus.Platform.VoipBitrate B96000
    static void _set_B96000(Oculus::Platform::VoipBitrate value);
    // [DescriptionAttribute] Offset: 0xDEAA8C
    // static field const value: static public Oculus.Platform.VoipBitrate B128000
    static constexpr const int B128000 = 6;
    // Get static field: static public Oculus.Platform.VoipBitrate B128000
    static Oculus::Platform::VoipBitrate _get_B128000();
    // Set static field: static public Oculus.Platform.VoipBitrate B128000
    static void _set_B128000(Oculus::Platform::VoipBitrate value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // Oculus.Platform.VoipBitrate
  #pragma pack(pop)
  static check_size<sizeof(VoipBitrate), 0 + sizeof(int)> __Oculus_Platform_VoipBitrateSizeCheck;
  static_assert(sizeof(VoipBitrate) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipBitrate, "Oculus.Platform", "VoipBitrate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
