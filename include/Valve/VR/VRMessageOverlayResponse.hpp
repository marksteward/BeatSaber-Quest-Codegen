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
  // Autogenerated type: Valve.VR.VRMessageOverlayResponse
  // [] Offset: FFFFFFFF
  struct VRMessageOverlayResponse/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: VRMessageOverlayResponse
    constexpr VRMessageOverlayResponse(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.VRMessageOverlayResponse ButtonPress_0
    static constexpr const int ButtonPress_0 = 0;
    // Get static field: static public Valve.VR.VRMessageOverlayResponse ButtonPress_0
    static Valve::VR::VRMessageOverlayResponse _get_ButtonPress_0();
    // Set static field: static public Valve.VR.VRMessageOverlayResponse ButtonPress_0
    static void _set_ButtonPress_0(Valve::VR::VRMessageOverlayResponse value);
    // static field const value: static public Valve.VR.VRMessageOverlayResponse ButtonPress_1
    static constexpr const int ButtonPress_1 = 1;
    // Get static field: static public Valve.VR.VRMessageOverlayResponse ButtonPress_1
    static Valve::VR::VRMessageOverlayResponse _get_ButtonPress_1();
    // Set static field: static public Valve.VR.VRMessageOverlayResponse ButtonPress_1
    static void _set_ButtonPress_1(Valve::VR::VRMessageOverlayResponse value);
    // static field const value: static public Valve.VR.VRMessageOverlayResponse ButtonPress_2
    static constexpr const int ButtonPress_2 = 2;
    // Get static field: static public Valve.VR.VRMessageOverlayResponse ButtonPress_2
    static Valve::VR::VRMessageOverlayResponse _get_ButtonPress_2();
    // Set static field: static public Valve.VR.VRMessageOverlayResponse ButtonPress_2
    static void _set_ButtonPress_2(Valve::VR::VRMessageOverlayResponse value);
    // static field const value: static public Valve.VR.VRMessageOverlayResponse ButtonPress_3
    static constexpr const int ButtonPress_3 = 3;
    // Get static field: static public Valve.VR.VRMessageOverlayResponse ButtonPress_3
    static Valve::VR::VRMessageOverlayResponse _get_ButtonPress_3();
    // Set static field: static public Valve.VR.VRMessageOverlayResponse ButtonPress_3
    static void _set_ButtonPress_3(Valve::VR::VRMessageOverlayResponse value);
    // static field const value: static public Valve.VR.VRMessageOverlayResponse CouldntFindSystemOverlay
    static constexpr const int CouldntFindSystemOverlay = 4;
    // Get static field: static public Valve.VR.VRMessageOverlayResponse CouldntFindSystemOverlay
    static Valve::VR::VRMessageOverlayResponse _get_CouldntFindSystemOverlay();
    // Set static field: static public Valve.VR.VRMessageOverlayResponse CouldntFindSystemOverlay
    static void _set_CouldntFindSystemOverlay(Valve::VR::VRMessageOverlayResponse value);
    // static field const value: static public Valve.VR.VRMessageOverlayResponse CouldntFindOrCreateClientOverlay
    static constexpr const int CouldntFindOrCreateClientOverlay = 5;
    // Get static field: static public Valve.VR.VRMessageOverlayResponse CouldntFindOrCreateClientOverlay
    static Valve::VR::VRMessageOverlayResponse _get_CouldntFindOrCreateClientOverlay();
    // Set static field: static public Valve.VR.VRMessageOverlayResponse CouldntFindOrCreateClientOverlay
    static void _set_CouldntFindOrCreateClientOverlay(Valve::VR::VRMessageOverlayResponse value);
    // static field const value: static public Valve.VR.VRMessageOverlayResponse ApplicationQuit
    static constexpr const int ApplicationQuit = 6;
    // Get static field: static public Valve.VR.VRMessageOverlayResponse ApplicationQuit
    static Valve::VR::VRMessageOverlayResponse _get_ApplicationQuit();
    // Set static field: static public Valve.VR.VRMessageOverlayResponse ApplicationQuit
    static void _set_ApplicationQuit(Valve::VR::VRMessageOverlayResponse value);
  }; // Valve.VR.VRMessageOverlayResponse
  static check_size<sizeof(VRMessageOverlayResponse), 0 + sizeof(int)> __Valve_VR_VRMessageOverlayResponseSizeCheck;
  static_assert(sizeof(VRMessageOverlayResponse) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VRMessageOverlayResponse, "Valve.VR", "VRMessageOverlayResponse");
