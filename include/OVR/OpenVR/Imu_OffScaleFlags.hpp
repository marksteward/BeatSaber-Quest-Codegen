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
  // Autogenerated type: OVR.OpenVR.Imu_OffScaleFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct Imu_OffScaleFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Imu_OffScaleFlags
    constexpr Imu_OffScaleFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_AccelX
    static constexpr const int OffScale_AccelX = 1;
    // Get static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_AccelX
    static OVR::OpenVR::Imu_OffScaleFlags _get_OffScale_AccelX();
    // Set static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_AccelX
    static void _set_OffScale_AccelX(OVR::OpenVR::Imu_OffScaleFlags value);
    // static field const value: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_AccelY
    static constexpr const int OffScale_AccelY = 2;
    // Get static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_AccelY
    static OVR::OpenVR::Imu_OffScaleFlags _get_OffScale_AccelY();
    // Set static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_AccelY
    static void _set_OffScale_AccelY(OVR::OpenVR::Imu_OffScaleFlags value);
    // static field const value: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_AccelZ
    static constexpr const int OffScale_AccelZ = 4;
    // Get static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_AccelZ
    static OVR::OpenVR::Imu_OffScaleFlags _get_OffScale_AccelZ();
    // Set static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_AccelZ
    static void _set_OffScale_AccelZ(OVR::OpenVR::Imu_OffScaleFlags value);
    // static field const value: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_GyroX
    static constexpr const int OffScale_GyroX = 8;
    // Get static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_GyroX
    static OVR::OpenVR::Imu_OffScaleFlags _get_OffScale_GyroX();
    // Set static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_GyroX
    static void _set_OffScale_GyroX(OVR::OpenVR::Imu_OffScaleFlags value);
    // static field const value: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_GyroY
    static constexpr const int OffScale_GyroY = 16;
    // Get static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_GyroY
    static OVR::OpenVR::Imu_OffScaleFlags _get_OffScale_GyroY();
    // Set static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_GyroY
    static void _set_OffScale_GyroY(OVR::OpenVR::Imu_OffScaleFlags value);
    // static field const value: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_GyroZ
    static constexpr const int OffScale_GyroZ = 32;
    // Get static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_GyroZ
    static OVR::OpenVR::Imu_OffScaleFlags _get_OffScale_GyroZ();
    // Set static field: static public OVR.OpenVR.Imu_OffScaleFlags OffScale_GyroZ
    static void _set_OffScale_GyroZ(OVR::OpenVR::Imu_OffScaleFlags value);
  }; // OVR.OpenVR.Imu_OffScaleFlags
  #pragma pack(pop)
  static check_size<sizeof(Imu_OffScaleFlags), 0 + sizeof(int)> __OVR_OpenVR_Imu_OffScaleFlagsSizeCheck;
  static_assert(sizeof(Imu_OffScaleFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::Imu_OffScaleFlags, "OVR.OpenVR", "Imu_OffScaleFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
