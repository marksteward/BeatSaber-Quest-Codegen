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
  // Autogenerated type: OVR.OpenVR.EVRSettingsError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRSettingsError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRSettingsError
    constexpr EVRSettingsError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRSettingsError None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRSettingsError None
    static OVR::OpenVR::EVRSettingsError _get_None();
    // Set static field: static public OVR.OpenVR.EVRSettingsError None
    static void _set_None(OVR::OpenVR::EVRSettingsError value);
    // static field const value: static public OVR.OpenVR.EVRSettingsError IPCFailed
    static constexpr const int IPCFailed = 1;
    // Get static field: static public OVR.OpenVR.EVRSettingsError IPCFailed
    static OVR::OpenVR::EVRSettingsError _get_IPCFailed();
    // Set static field: static public OVR.OpenVR.EVRSettingsError IPCFailed
    static void _set_IPCFailed(OVR::OpenVR::EVRSettingsError value);
    // static field const value: static public OVR.OpenVR.EVRSettingsError WriteFailed
    static constexpr const int WriteFailed = 2;
    // Get static field: static public OVR.OpenVR.EVRSettingsError WriteFailed
    static OVR::OpenVR::EVRSettingsError _get_WriteFailed();
    // Set static field: static public OVR.OpenVR.EVRSettingsError WriteFailed
    static void _set_WriteFailed(OVR::OpenVR::EVRSettingsError value);
    // static field const value: static public OVR.OpenVR.EVRSettingsError ReadFailed
    static constexpr const int ReadFailed = 3;
    // Get static field: static public OVR.OpenVR.EVRSettingsError ReadFailed
    static OVR::OpenVR::EVRSettingsError _get_ReadFailed();
    // Set static field: static public OVR.OpenVR.EVRSettingsError ReadFailed
    static void _set_ReadFailed(OVR::OpenVR::EVRSettingsError value);
    // static field const value: static public OVR.OpenVR.EVRSettingsError JsonParseFailed
    static constexpr const int JsonParseFailed = 4;
    // Get static field: static public OVR.OpenVR.EVRSettingsError JsonParseFailed
    static OVR::OpenVR::EVRSettingsError _get_JsonParseFailed();
    // Set static field: static public OVR.OpenVR.EVRSettingsError JsonParseFailed
    static void _set_JsonParseFailed(OVR::OpenVR::EVRSettingsError value);
    // static field const value: static public OVR.OpenVR.EVRSettingsError UnsetSettingHasNoDefault
    static constexpr const int UnsetSettingHasNoDefault = 5;
    // Get static field: static public OVR.OpenVR.EVRSettingsError UnsetSettingHasNoDefault
    static OVR::OpenVR::EVRSettingsError _get_UnsetSettingHasNoDefault();
    // Set static field: static public OVR.OpenVR.EVRSettingsError UnsetSettingHasNoDefault
    static void _set_UnsetSettingHasNoDefault(OVR::OpenVR::EVRSettingsError value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // OVR.OpenVR.EVRSettingsError
  #pragma pack(pop)
  static check_size<sizeof(EVRSettingsError), 0 + sizeof(int)> __OVR_OpenVR_EVRSettingsErrorSizeCheck;
  static_assert(sizeof(EVRSettingsError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRSettingsError, "OVR.OpenVR", "EVRSettingsError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
