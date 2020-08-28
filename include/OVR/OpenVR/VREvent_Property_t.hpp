// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.ETrackedDeviceProperty
#include "OVR/OpenVR/ETrackedDeviceProperty.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VREvent_Property_t
  struct VREvent_Property_t : public System::ValueType {
    public:
    // public System.UInt64 container
    // Offset: 0x0
    uint64_t container;
    // public OVR.OpenVR.ETrackedDeviceProperty prop
    // Offset: 0x8
    OVR::OpenVR::ETrackedDeviceProperty prop;
    // Creating value type constructor for type: VREvent_Property_t
    constexpr VREvent_Property_t(uint64_t container_ = {}, OVR::OpenVR::ETrackedDeviceProperty prop_ = {}) : container{container_}, prop{prop_} {}
  }; // OVR.OpenVR.VREvent_Property_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Property_t, "OVR.OpenVR", "VREvent_Property_t");
#pragma pack(pop)
