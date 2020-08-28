// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Including type: Valve.VR.HmdVector3_t
#include "Valve/VR/HmdVector3_t.hpp"
// Including type: Valve.VR.ETrackingResult
#include "Valve/VR/ETrackingResult.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.TrackedDevicePose_t
  struct TrackedDevicePose_t : public System::ValueType {
    public:
    // public Valve.VR.HmdMatrix34_t mDeviceToAbsoluteTracking
    // Offset: 0x0
    Valve::VR::HmdMatrix34_t mDeviceToAbsoluteTracking;
    // public Valve.VR.HmdVector3_t vVelocity
    // Offset: 0x30
    Valve::VR::HmdVector3_t vVelocity;
    // public Valve.VR.HmdVector3_t vAngularVelocity
    // Offset: 0x3C
    Valve::VR::HmdVector3_t vAngularVelocity;
    // public Valve.VR.ETrackingResult eTrackingResult
    // Offset: 0x48
    Valve::VR::ETrackingResult eTrackingResult;
    // public System.Boolean bPoseIsValid
    // Offset: 0x4C
    bool bPoseIsValid;
    // public System.Boolean bDeviceIsConnected
    // Offset: 0x4D
    bool bDeviceIsConnected;
    // Creating value type constructor for type: TrackedDevicePose_t
    constexpr TrackedDevicePose_t(Valve::VR::HmdMatrix34_t mDeviceToAbsoluteTracking_ = {}, Valve::VR::HmdVector3_t vVelocity_ = {}, Valve::VR::HmdVector3_t vAngularVelocity_ = {}, Valve::VR::ETrackingResult eTrackingResult_ = {}, bool bPoseIsValid_ = {}, bool bDeviceIsConnected_ = {}) : mDeviceToAbsoluteTracking{mDeviceToAbsoluteTracking_}, vVelocity{vVelocity_}, vAngularVelocity{vAngularVelocity_}, eTrackingResult{eTrackingResult_}, bPoseIsValid{bPoseIsValid_}, bDeviceIsConnected{bDeviceIsConnected_} {}
  }; // Valve.VR.TrackedDevicePose_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::TrackedDevicePose_t, "Valve.VR", "TrackedDevicePose_t");
#pragma pack(pop)
