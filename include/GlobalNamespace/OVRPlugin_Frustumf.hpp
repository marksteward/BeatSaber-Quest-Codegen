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
  // Autogenerated type: OVRPlugin/Frustumf
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Frustumf/*, public System::ValueType*/ {
    public:
    // public System.Single zNear
    // Size: 0x4
    // Offset: 0x0
    float zNear;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single zFar
    // Size: 0x4
    // Offset: 0x4
    float zFar;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fovX
    // Size: 0x4
    // Offset: 0x8
    float fovX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fovY
    // Size: 0x4
    // Offset: 0xC
    float fovY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Frustumf
    constexpr Frustumf(float zNear_ = {}, float zFar_ = {}, float fovX_ = {}, float fovY_ = {}) noexcept : zNear{zNear_}, zFar{zFar_}, fovX{fovX_}, fovY{fovY_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVRPlugin/Frustumf
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Frustumf), 12 + sizeof(float)> __GlobalNamespace_OVRPlugin_FrustumfSizeCheck;
  static_assert(sizeof(OVRPlugin::Frustumf) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Frustumf, "", "OVRPlugin/Frustumf");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
