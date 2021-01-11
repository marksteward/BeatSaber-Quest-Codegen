// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRScreenshotType
  // [] Offset: FFFFFFFF
  struct EVRScreenshotType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRScreenshotType
    constexpr EVRScreenshotType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRScreenshotType None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVRScreenshotType None
    static Valve::VR::EVRScreenshotType _get_None();
    // Set static field: static public Valve.VR.EVRScreenshotType None
    static void _set_None(Valve::VR::EVRScreenshotType value);
    // static field const value: static public Valve.VR.EVRScreenshotType Mono
    static constexpr const int Mono = 1;
    // Get static field: static public Valve.VR.EVRScreenshotType Mono
    static Valve::VR::EVRScreenshotType _get_Mono();
    // Set static field: static public Valve.VR.EVRScreenshotType Mono
    static void _set_Mono(Valve::VR::EVRScreenshotType value);
    // static field const value: static public Valve.VR.EVRScreenshotType Stereo
    static constexpr const int Stereo = 2;
    // Get static field: static public Valve.VR.EVRScreenshotType Stereo
    static Valve::VR::EVRScreenshotType _get_Stereo();
    // Set static field: static public Valve.VR.EVRScreenshotType Stereo
    static void _set_Stereo(Valve::VR::EVRScreenshotType value);
    // static field const value: static public Valve.VR.EVRScreenshotType Cubemap
    static constexpr const int Cubemap = 3;
    // Get static field: static public Valve.VR.EVRScreenshotType Cubemap
    static Valve::VR::EVRScreenshotType _get_Cubemap();
    // Set static field: static public Valve.VR.EVRScreenshotType Cubemap
    static void _set_Cubemap(Valve::VR::EVRScreenshotType value);
    // static field const value: static public Valve.VR.EVRScreenshotType MonoPanorama
    static constexpr const int MonoPanorama = 4;
    // Get static field: static public Valve.VR.EVRScreenshotType MonoPanorama
    static Valve::VR::EVRScreenshotType _get_MonoPanorama();
    // Set static field: static public Valve.VR.EVRScreenshotType MonoPanorama
    static void _set_MonoPanorama(Valve::VR::EVRScreenshotType value);
    // static field const value: static public Valve.VR.EVRScreenshotType StereoPanorama
    static constexpr const int StereoPanorama = 5;
    // Get static field: static public Valve.VR.EVRScreenshotType StereoPanorama
    static Valve::VR::EVRScreenshotType _get_StereoPanorama();
    // Set static field: static public Valve.VR.EVRScreenshotType StereoPanorama
    static void _set_StereoPanorama(Valve::VR::EVRScreenshotType value);
  }; // Valve.VR.EVRScreenshotType
  static check_size<sizeof(EVRScreenshotType), 0 + sizeof(int)> __Valve_VR_EVRScreenshotTypeSizeCheck;
  static_assert(sizeof(EVRScreenshotType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRScreenshotType, "Valve.VR", "EVRScreenshotType");
