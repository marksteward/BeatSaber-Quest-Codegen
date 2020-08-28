// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VREvent_HapticVibration_t
  struct VREvent_HapticVibration_t : public System::ValueType {
    public:
    // public System.UInt64 containerHandle
    // Offset: 0x0
    uint64_t containerHandle;
    // public System.UInt64 componentHandle
    // Offset: 0x8
    uint64_t componentHandle;
    // public System.Single fDurationSeconds
    // Offset: 0x10
    float fDurationSeconds;
    // public System.Single fFrequency
    // Offset: 0x14
    float fFrequency;
    // public System.Single fAmplitude
    // Offset: 0x18
    float fAmplitude;
    // Creating value type constructor for type: VREvent_HapticVibration_t
    constexpr VREvent_HapticVibration_t(uint64_t containerHandle_ = {}, uint64_t componentHandle_ = {}, float fDurationSeconds_ = {}, float fFrequency_ = {}, float fAmplitude_ = {}) : containerHandle{containerHandle_}, componentHandle{componentHandle_}, fDurationSeconds{fDurationSeconds_}, fFrequency{fFrequency_}, fAmplitude{fAmplitude_} {}
  }; // Valve.VR.VREvent_HapticVibration_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_HapticVibration_t, "Valve.VR", "VREvent_HapticVibration_t");
#pragma pack(pop)
