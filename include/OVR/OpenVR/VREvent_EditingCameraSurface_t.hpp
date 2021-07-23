// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_EditingCameraSurface_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_EditingCameraSurface_t/*, public System::ValueType*/ {
    public:
    // public System.UInt64 overlayHandle
    // Size: 0x8
    // Offset: 0x0
    uint64_t overlayHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt32 nVisualMode
    // Size: 0x4
    // Offset: 0x8
    uint nVisualMode;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: VREvent_EditingCameraSurface_t
    constexpr VREvent_EditingCameraSurface_t(uint64_t overlayHandle_ = {}, uint nVisualMode_ = {}) noexcept : overlayHandle{overlayHandle_}, nVisualMode{nVisualMode_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.UInt64 overlayHandle
    uint64_t _get_overlayHandle();
    // Set instance field: public System.UInt64 overlayHandle
    void _set_overlayHandle(uint64_t value);
    // Get instance field: public System.UInt32 nVisualMode
    uint _get_nVisualMode();
    // Set instance field: public System.UInt32 nVisualMode
    void _set_nVisualMode(uint value);
  }; // OVR.OpenVR.VREvent_EditingCameraSurface_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_EditingCameraSurface_t), 8 + sizeof(uint)> __OVR_OpenVR_VREvent_EditingCameraSurface_tSizeCheck;
  static_assert(sizeof(VREvent_EditingCameraSurface_t) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_EditingCameraSurface_t, "OVR.OpenVR", "VREvent_EditingCameraSurface_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
