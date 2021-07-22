// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.HmdQuaternionf_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HmdQuaternionf_t/*, public System::ValueType*/ {
    public:
    // public System.Single w
    // Size: 0x4
    // Offset: 0x0
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single x
    // Size: 0x4
    // Offset: 0x4
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x8
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0xC
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: HmdQuaternionf_t
    constexpr HmdQuaternionf_t(float w_ = {}, float x_ = {}, float y_ = {}, float z_ = {}) noexcept : w{w_}, x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.HmdQuaternionf_t
  #pragma pack(pop)
  static check_size<sizeof(HmdQuaternionf_t), 12 + sizeof(float)> __OVR_OpenVR_HmdQuaternionf_tSizeCheck;
  static_assert(sizeof(HmdQuaternionf_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdQuaternionf_t, "OVR.OpenVR", "HmdQuaternionf_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
