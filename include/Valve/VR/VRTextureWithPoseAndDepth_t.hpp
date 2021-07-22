// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.VRTextureDepthInfo_t
#include "Valve/VR/VRTextureDepthInfo_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VRTextureWithPoseAndDepth_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRTextureWithPoseAndDepth_t/*, public System::ValueType*/ {
    public:
    // public Valve.VR.VRTextureDepthInfo_t depth
    // Size: 0x50
    // Offset: 0x0
    Valve::VR::VRTextureDepthInfo_t depth;
    // Field size check
    static_assert(sizeof(Valve::VR::VRTextureDepthInfo_t) == 0x50);
    // Creating value type constructor for type: VRTextureWithPoseAndDepth_t
    constexpr VRTextureWithPoseAndDepth_t(Valve::VR::VRTextureDepthInfo_t depth_ = {}) noexcept : depth{depth_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator Valve::VR::VRTextureDepthInfo_t
    constexpr operator Valve::VR::VRTextureDepthInfo_t() const noexcept {
      return depth;
    }
  }; // Valve.VR.VRTextureWithPoseAndDepth_t
  #pragma pack(pop)
  static check_size<sizeof(VRTextureWithPoseAndDepth_t), 0 + sizeof(Valve::VR::VRTextureDepthInfo_t)> __Valve_VR_VRTextureWithPoseAndDepth_tSizeCheck;
  static_assert(sizeof(VRTextureWithPoseAndDepth_t) == 0x50);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VRTextureWithPoseAndDepth_t, "Valve.VR", "VRTextureWithPoseAndDepth_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
