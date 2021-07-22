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
  // Autogenerated type: OVR.OpenVR.EVRFirmwareError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRFirmwareError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRFirmwareError
    constexpr EVRFirmwareError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRFirmwareError None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRFirmwareError None
    static OVR::OpenVR::EVRFirmwareError _get_None();
    // Set static field: static public OVR.OpenVR.EVRFirmwareError None
    static void _set_None(OVR::OpenVR::EVRFirmwareError value);
    // static field const value: static public OVR.OpenVR.EVRFirmwareError Success
    static constexpr const int Success = 1;
    // Get static field: static public OVR.OpenVR.EVRFirmwareError Success
    static OVR::OpenVR::EVRFirmwareError _get_Success();
    // Set static field: static public OVR.OpenVR.EVRFirmwareError Success
    static void _set_Success(OVR::OpenVR::EVRFirmwareError value);
    // static field const value: static public OVR.OpenVR.EVRFirmwareError Fail
    static constexpr const int Fail = 2;
    // Get static field: static public OVR.OpenVR.EVRFirmwareError Fail
    static OVR::OpenVR::EVRFirmwareError _get_Fail();
    // Set static field: static public OVR.OpenVR.EVRFirmwareError Fail
    static void _set_Fail(OVR::OpenVR::EVRFirmwareError value);
  }; // OVR.OpenVR.EVRFirmwareError
  #pragma pack(pop)
  static check_size<sizeof(EVRFirmwareError), 0 + sizeof(int)> __OVR_OpenVR_EVRFirmwareErrorSizeCheck;
  static_assert(sizeof(EVRFirmwareError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRFirmwareError, "OVR.OpenVR", "EVRFirmwareError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
