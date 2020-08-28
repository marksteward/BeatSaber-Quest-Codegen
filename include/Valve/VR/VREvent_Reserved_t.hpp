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
  // Autogenerated type: Valve.VR.VREvent_Reserved_t
  struct VREvent_Reserved_t : public System::ValueType {
    public:
    // public System.UInt64 reserved0
    // Offset: 0x0
    uint64_t reserved0;
    // public System.UInt64 reserved1
    // Offset: 0x8
    uint64_t reserved1;
    // Creating value type constructor for type: VREvent_Reserved_t
    constexpr VREvent_Reserved_t(uint64_t reserved0_ = {}, uint64_t reserved1_ = {}) : reserved0{reserved0_}, reserved1{reserved1_} {}
  }; // Valve.VR.VREvent_Reserved_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_Reserved_t, "Valve.VR", "VREvent_Reserved_t");
#pragma pack(pop)
