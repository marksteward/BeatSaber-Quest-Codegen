// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_ApplicationLaunch_t
  // [] Offset: FFFFFFFF
  struct VREvent_ApplicationLaunch_t/*, public System::ValueType*/ {
    public:
    // public System.UInt32 pid
    // Size: 0x4
    // Offset: 0x0
    uint pid;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 unArgsHandle
    // Size: 0x4
    // Offset: 0x4
    uint unArgsHandle;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: VREvent_ApplicationLaunch_t
    constexpr VREvent_ApplicationLaunch_t(uint pid_ = {}, uint unArgsHandle_ = {}) noexcept : pid{pid_}, unArgsHandle{unArgsHandle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.VREvent_ApplicationLaunch_t
  static check_size<sizeof(VREvent_ApplicationLaunch_t), 4 + sizeof(uint)> __Valve_VR_VREvent_ApplicationLaunch_tSizeCheck;
  static_assert(sizeof(VREvent_ApplicationLaunch_t) == 0x8);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_ApplicationLaunch_t, "Valve.VR", "VREvent_ApplicationLaunch_t");
