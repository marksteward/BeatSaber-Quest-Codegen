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
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.InputDigitalActionData_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputDigitalActionData_t/*, public System::ValueType*/ {
    public:
    // public System.Boolean bActive
    // Size: 0x1
    // Offset: 0x0
    bool bActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bActive and: activeOrigin
    char __padding0[0x7] = {};
    // public System.UInt64 activeOrigin
    // Size: 0x8
    // Offset: 0x8
    uint64_t activeOrigin;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Boolean bState
    // Size: 0x1
    // Offset: 0x10
    bool bState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean bChanged
    // Size: 0x1
    // Offset: 0x11
    bool bChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bChanged and: fUpdateTime
    char __padding3[0x2] = {};
    // public System.Single fUpdateTime
    // Size: 0x4
    // Offset: 0x14
    float fUpdateTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InputDigitalActionData_t
    constexpr InputDigitalActionData_t(bool bActive_ = {}, uint64_t activeOrigin_ = {}, bool bState_ = {}, bool bChanged_ = {}, float fUpdateTime_ = {}) noexcept : bActive{bActive_}, activeOrigin{activeOrigin_}, bState{bState_}, bChanged{bChanged_}, fUpdateTime{fUpdateTime_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.InputDigitalActionData_t
  #pragma pack(pop)
  static check_size<sizeof(InputDigitalActionData_t), 20 + sizeof(float)> __OVR_OpenVR_InputDigitalActionData_tSizeCheck;
  static_assert(sizeof(InputDigitalActionData_t) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::InputDigitalActionData_t, "OVR.OpenVR", "InputDigitalActionData_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
