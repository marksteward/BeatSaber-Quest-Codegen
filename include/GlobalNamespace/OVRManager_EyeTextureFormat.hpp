// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/EyeTextureFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRManager_EyeTextureFormat/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OVRManager_EyeTextureFormat
    constexpr OVRManager_EyeTextureFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/EyeTextureFormat Default
    static constexpr const int Default = 0;
    // Get static field: static public OVRManager/EyeTextureFormat Default
    static GlobalNamespace::OVRManager_EyeTextureFormat _get_Default();
    // Set static field: static public OVRManager/EyeTextureFormat Default
    static void _set_Default(GlobalNamespace::OVRManager_EyeTextureFormat value);
    // static field const value: static public OVRManager/EyeTextureFormat R16G16B16A16_FP
    static constexpr const int R16G16B16A16_FP = 2;
    // Get static field: static public OVRManager/EyeTextureFormat R16G16B16A16_FP
    static GlobalNamespace::OVRManager_EyeTextureFormat _get_R16G16B16A16_FP();
    // Set static field: static public OVRManager/EyeTextureFormat R16G16B16A16_FP
    static void _set_R16G16B16A16_FP(GlobalNamespace::OVRManager_EyeTextureFormat value);
    // static field const value: static public OVRManager/EyeTextureFormat R11G11B10_FP
    static constexpr const int R11G11B10_FP = 3;
    // Get static field: static public OVRManager/EyeTextureFormat R11G11B10_FP
    static GlobalNamespace::OVRManager_EyeTextureFormat _get_R11G11B10_FP();
    // Set static field: static public OVRManager/EyeTextureFormat R11G11B10_FP
    static void _set_R11G11B10_FP(GlobalNamespace::OVRManager_EyeTextureFormat value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // OVRManager/EyeTextureFormat
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_EyeTextureFormat), 0 + sizeof(int)> __GlobalNamespace_OVRManager_EyeTextureFormatSizeCheck;
  static_assert(sizeof(OVRManager_EyeTextureFormat) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRManager_EyeTextureFormat, "", "OVRManager/EyeTextureFormat");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
