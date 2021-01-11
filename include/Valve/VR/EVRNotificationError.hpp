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
  // Autogenerated type: Valve.VR.EVRNotificationError
  // [] Offset: FFFFFFFF
  struct EVRNotificationError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRNotificationError
    constexpr EVRNotificationError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRNotificationError OK
    static constexpr const int OK = 0;
    // Get static field: static public Valve.VR.EVRNotificationError OK
    static Valve::VR::EVRNotificationError _get_OK();
    // Set static field: static public Valve.VR.EVRNotificationError OK
    static void _set_OK(Valve::VR::EVRNotificationError value);
    // static field const value: static public Valve.VR.EVRNotificationError InvalidNotificationId
    static constexpr const int InvalidNotificationId = 100;
    // Get static field: static public Valve.VR.EVRNotificationError InvalidNotificationId
    static Valve::VR::EVRNotificationError _get_InvalidNotificationId();
    // Set static field: static public Valve.VR.EVRNotificationError InvalidNotificationId
    static void _set_InvalidNotificationId(Valve::VR::EVRNotificationError value);
    // static field const value: static public Valve.VR.EVRNotificationError NotificationQueueFull
    static constexpr const int NotificationQueueFull = 101;
    // Get static field: static public Valve.VR.EVRNotificationError NotificationQueueFull
    static Valve::VR::EVRNotificationError _get_NotificationQueueFull();
    // Set static field: static public Valve.VR.EVRNotificationError NotificationQueueFull
    static void _set_NotificationQueueFull(Valve::VR::EVRNotificationError value);
    // static field const value: static public Valve.VR.EVRNotificationError InvalidOverlayHandle
    static constexpr const int InvalidOverlayHandle = 102;
    // Get static field: static public Valve.VR.EVRNotificationError InvalidOverlayHandle
    static Valve::VR::EVRNotificationError _get_InvalidOverlayHandle();
    // Set static field: static public Valve.VR.EVRNotificationError InvalidOverlayHandle
    static void _set_InvalidOverlayHandle(Valve::VR::EVRNotificationError value);
    // static field const value: static public Valve.VR.EVRNotificationError SystemWithUserValueAlreadyExists
    static constexpr const int SystemWithUserValueAlreadyExists = 103;
    // Get static field: static public Valve.VR.EVRNotificationError SystemWithUserValueAlreadyExists
    static Valve::VR::EVRNotificationError _get_SystemWithUserValueAlreadyExists();
    // Set static field: static public Valve.VR.EVRNotificationError SystemWithUserValueAlreadyExists
    static void _set_SystemWithUserValueAlreadyExists(Valve::VR::EVRNotificationError value);
  }; // Valve.VR.EVRNotificationError
  static check_size<sizeof(EVRNotificationError), 0 + sizeof(int)> __Valve_VR_EVRNotificationErrorSizeCheck;
  static_assert(sizeof(EVRNotificationError) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRNotificationError, "Valve.VR", "EVRNotificationError");
