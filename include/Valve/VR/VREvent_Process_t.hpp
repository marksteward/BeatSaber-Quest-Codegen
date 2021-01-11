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
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_Process_t
  // [] Offset: FFFFFFFF
  struct VREvent_Process_t/*, public System::ValueType*/ {
    public:
    // public System.UInt32 pid
    // Size: 0x4
    // Offset: 0x0
    uint pid;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 oldPid
    // Size: 0x4
    // Offset: 0x4
    uint oldPid;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Boolean bForced
    // Size: 0x1
    // Offset: 0x8
    bool bForced;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: VREvent_Process_t
    constexpr VREvent_Process_t(uint pid_ = {}, uint oldPid_ = {}, bool bForced_ = {}) noexcept : pid{pid_}, oldPid{oldPid_}, bForced{bForced_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.VREvent_Process_t
  static check_size<sizeof(VREvent_Process_t), 8 + sizeof(bool)> __Valve_VR_VREvent_Process_tSizeCheck;
  static_assert(sizeof(VREvent_Process_t) == 0x9);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_Process_t, "Valve.VR", "VREvent_Process_t");
