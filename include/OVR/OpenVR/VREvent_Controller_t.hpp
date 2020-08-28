// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VREvent_Controller_t
  struct VREvent_Controller_t : public System::ValueType {
    public:
    // public System.UInt32 button
    // Offset: 0x0
    uint button;
    // Creating value type constructor for type: VREvent_Controller_t
    constexpr VREvent_Controller_t(uint button_ = {}) : button{button_} {}
    // Creating conversion operator: operator uint
    constexpr operator uint() const {
      return button;
    }
  }; // OVR.OpenVR.VREvent_Controller_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Controller_t, "OVR.OpenVR", "VREvent_Controller_t");
#pragma pack(pop)
