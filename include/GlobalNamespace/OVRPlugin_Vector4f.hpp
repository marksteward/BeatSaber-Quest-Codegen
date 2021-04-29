// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Vector4f
  struct OVRPlugin::Vector4f/*, public System::ValueType*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single w
    // Size: 0x4
    // Offset: 0xC
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Vector4f
    constexpr Vector4f(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static public readonly OVRPlugin/Vector4f zero
    static GlobalNamespace::OVRPlugin::Vector4f _get_zero();
    // Set static field: static public readonly OVRPlugin/Vector4f zero
    static void _set_zero(GlobalNamespace::OVRPlugin::Vector4f value);
    // static private System.Void .cctor()
    // Offset: 0x1583B50
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xE0814C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OVRPlugin/Vector4f
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Vector4f), 12 + sizeof(float)> __GlobalNamespace_OVRPlugin_Vector4fSizeCheck;
  static_assert(sizeof(OVRPlugin::Vector4f) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Vector4f, "", "OVRPlugin/Vector4f");
