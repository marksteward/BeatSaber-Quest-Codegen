// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.VROverlayInputMethod
  // [TokenAttribute] Offset: FFFFFFFF
  struct VROverlayInputMethod/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: VROverlayInputMethod
    constexpr VROverlayInputMethod(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.VROverlayInputMethod None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.VROverlayInputMethod None
    static OVR::OpenVR::VROverlayInputMethod _get_None();
    // Set static field: static public OVR.OpenVR.VROverlayInputMethod None
    static void _set_None(OVR::OpenVR::VROverlayInputMethod value);
    // static field const value: static public OVR.OpenVR.VROverlayInputMethod Mouse
    static constexpr const int Mouse = 1;
    // Get static field: static public OVR.OpenVR.VROverlayInputMethod Mouse
    static OVR::OpenVR::VROverlayInputMethod _get_Mouse();
    // Set static field: static public OVR.OpenVR.VROverlayInputMethod Mouse
    static void _set_Mouse(OVR::OpenVR::VROverlayInputMethod value);
    // static field const value: static public OVR.OpenVR.VROverlayInputMethod DualAnalog
    static constexpr const int DualAnalog = 2;
    // Get static field: static public OVR.OpenVR.VROverlayInputMethod DualAnalog
    static OVR::OpenVR::VROverlayInputMethod _get_DualAnalog();
    // Set static field: static public OVR.OpenVR.VROverlayInputMethod DualAnalog
    static void _set_DualAnalog(OVR::OpenVR::VROverlayInputMethod value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // OVR.OpenVR.VROverlayInputMethod
  #pragma pack(pop)
  static check_size<sizeof(VROverlayInputMethod), 0 + sizeof(int)> __OVR_OpenVR_VROverlayInputMethodSizeCheck;
  static_assert(sizeof(VROverlayInputMethod) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayInputMethod, "OVR.OpenVR", "VROverlayInputMethod");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
