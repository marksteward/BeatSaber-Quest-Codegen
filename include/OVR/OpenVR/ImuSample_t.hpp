// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdVector3d_t
#include "OVR/OpenVR/HmdVector3d_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.ImuSample_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct ImuSample_t/*, public System::ValueType*/ {
    public:
    // public System.Double fSampleTime
    // Size: 0x8
    // Offset: 0x0
    double fSampleTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public OVR.OpenVR.HmdVector3d_t vAccel
    // Size: 0x18
    // Offset: 0x8
    OVR::OpenVR::HmdVector3d_t vAccel;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3d_t) == 0x18);
    // public OVR.OpenVR.HmdVector3d_t vGyro
    // Size: 0x18
    // Offset: 0x20
    OVR::OpenVR::HmdVector3d_t vGyro;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3d_t) == 0x18);
    // public System.UInt32 unOffScaleFlags
    // Size: 0x4
    // Offset: 0x38
    uint unOffScaleFlags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: ImuSample_t
    constexpr ImuSample_t(double fSampleTime_ = {}, OVR::OpenVR::HmdVector3d_t vAccel_ = {}, OVR::OpenVR::HmdVector3d_t vGyro_ = {}, uint unOffScaleFlags_ = {}) noexcept : fSampleTime{fSampleTime_}, vAccel{vAccel_}, vGyro{vGyro_}, unOffScaleFlags{unOffScaleFlags_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.Double fSampleTime
    double _get_fSampleTime();
    // Set instance field: public System.Double fSampleTime
    void _set_fSampleTime(double value);
    // Get instance field: public OVR.OpenVR.HmdVector3d_t vAccel
    OVR::OpenVR::HmdVector3d_t _get_vAccel();
    // Set instance field: public OVR.OpenVR.HmdVector3d_t vAccel
    void _set_vAccel(OVR::OpenVR::HmdVector3d_t value);
    // Get instance field: public OVR.OpenVR.HmdVector3d_t vGyro
    OVR::OpenVR::HmdVector3d_t _get_vGyro();
    // Set instance field: public OVR.OpenVR.HmdVector3d_t vGyro
    void _set_vGyro(OVR::OpenVR::HmdVector3d_t value);
    // Get instance field: public System.UInt32 unOffScaleFlags
    uint _get_unOffScaleFlags();
    // Set instance field: public System.UInt32 unOffScaleFlags
    void _set_unOffScaleFlags(uint value);
  }; // OVR.OpenVR.ImuSample_t
  #pragma pack(pop)
  static check_size<sizeof(ImuSample_t), 56 + sizeof(uint)> __OVR_OpenVR_ImuSample_tSizeCheck;
  static_assert(sizeof(ImuSample_t) == 0x3C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ImuSample_t, "OVR.OpenVR", "ImuSample_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
