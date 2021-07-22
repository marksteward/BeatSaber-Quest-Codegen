// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.AvailableTrackingData
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct AvailableTrackingData/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AvailableTrackingData
    constexpr AvailableTrackingData(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.AvailableTrackingData None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.XR.AvailableTrackingData None
    static UnityEngine::XR::AvailableTrackingData _get_None();
    // Set static field: static public UnityEngine.XR.AvailableTrackingData None
    static void _set_None(UnityEngine::XR::AvailableTrackingData value);
    // static field const value: static public UnityEngine.XR.AvailableTrackingData PositionAvailable
    static constexpr const int PositionAvailable = 1;
    // Get static field: static public UnityEngine.XR.AvailableTrackingData PositionAvailable
    static UnityEngine::XR::AvailableTrackingData _get_PositionAvailable();
    // Set static field: static public UnityEngine.XR.AvailableTrackingData PositionAvailable
    static void _set_PositionAvailable(UnityEngine::XR::AvailableTrackingData value);
    // static field const value: static public UnityEngine.XR.AvailableTrackingData RotationAvailable
    static constexpr const int RotationAvailable = 2;
    // Get static field: static public UnityEngine.XR.AvailableTrackingData RotationAvailable
    static UnityEngine::XR::AvailableTrackingData _get_RotationAvailable();
    // Set static field: static public UnityEngine.XR.AvailableTrackingData RotationAvailable
    static void _set_RotationAvailable(UnityEngine::XR::AvailableTrackingData value);
    // static field const value: static public UnityEngine.XR.AvailableTrackingData VelocityAvailable
    static constexpr const int VelocityAvailable = 4;
    // Get static field: static public UnityEngine.XR.AvailableTrackingData VelocityAvailable
    static UnityEngine::XR::AvailableTrackingData _get_VelocityAvailable();
    // Set static field: static public UnityEngine.XR.AvailableTrackingData VelocityAvailable
    static void _set_VelocityAvailable(UnityEngine::XR::AvailableTrackingData value);
    // static field const value: static public UnityEngine.XR.AvailableTrackingData AngularVelocityAvailable
    static constexpr const int AngularVelocityAvailable = 8;
    // Get static field: static public UnityEngine.XR.AvailableTrackingData AngularVelocityAvailable
    static UnityEngine::XR::AvailableTrackingData _get_AngularVelocityAvailable();
    // Set static field: static public UnityEngine.XR.AvailableTrackingData AngularVelocityAvailable
    static void _set_AngularVelocityAvailable(UnityEngine::XR::AvailableTrackingData value);
    // static field const value: static public UnityEngine.XR.AvailableTrackingData AccelerationAvailable
    static constexpr const int AccelerationAvailable = 16;
    // Get static field: static public UnityEngine.XR.AvailableTrackingData AccelerationAvailable
    static UnityEngine::XR::AvailableTrackingData _get_AccelerationAvailable();
    // Set static field: static public UnityEngine.XR.AvailableTrackingData AccelerationAvailable
    static void _set_AccelerationAvailable(UnityEngine::XR::AvailableTrackingData value);
    // static field const value: static public UnityEngine.XR.AvailableTrackingData AngularAccelerationAvailable
    static constexpr const int AngularAccelerationAvailable = 32;
    // Get static field: static public UnityEngine.XR.AvailableTrackingData AngularAccelerationAvailable
    static UnityEngine::XR::AvailableTrackingData _get_AngularAccelerationAvailable();
    // Set static field: static public UnityEngine.XR.AvailableTrackingData AngularAccelerationAvailable
    static void _set_AngularAccelerationAvailable(UnityEngine::XR::AvailableTrackingData value);
  }; // UnityEngine.XR.AvailableTrackingData
  #pragma pack(pop)
  static check_size<sizeof(AvailableTrackingData), 0 + sizeof(int)> __UnityEngine_XR_AvailableTrackingDataSizeCheck;
  static_assert(sizeof(AvailableTrackingData) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::AvailableTrackingData, "UnityEngine.XR", "AvailableTrackingData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
