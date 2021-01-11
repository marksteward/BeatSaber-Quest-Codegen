// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VRTextureWithPose_t
  // [] Offset: FFFFFFFF
  struct VRTextureWithPose_t/*, public System::ValueType*/ {
    public:
    // public OVR.OpenVR.HmdMatrix34_t mDeviceToAbsoluteTracking
    // Size: 0x30
    // Offset: 0x0
    OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdMatrix34_t) == 0x30);
    // Creating value type constructor for type: VRTextureWithPose_t
    constexpr VRTextureWithPose_t(OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking_ = {}) noexcept : mDeviceToAbsoluteTracking{mDeviceToAbsoluteTracking_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator OVR::OpenVR::HmdMatrix34_t
    constexpr operator OVR::OpenVR::HmdMatrix34_t() const noexcept {
      return mDeviceToAbsoluteTracking;
    }
  }; // OVR.OpenVR.VRTextureWithPose_t
  static check_size<sizeof(VRTextureWithPose_t), 0 + sizeof(OVR::OpenVR::HmdMatrix34_t)> __OVR_OpenVR_VRTextureWithPose_tSizeCheck;
  static_assert(sizeof(VRTextureWithPose_t) == 0x30);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRTextureWithPose_t, "OVR.OpenVR", "VRTextureWithPose_t");
