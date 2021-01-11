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
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.HmdQuaternion_t
  // [] Offset: FFFFFFFF
  struct HmdQuaternion_t/*, public System::ValueType*/ {
    public:
    // public System.Double w
    // Size: 0x8
    // Offset: 0x0
    double w;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double x
    // Size: 0x8
    // Offset: 0x8
    double x;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double y
    // Size: 0x8
    // Offset: 0x10
    double y;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double z
    // Size: 0x8
    // Offset: 0x18
    double z;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // Creating value type constructor for type: HmdQuaternion_t
    constexpr HmdQuaternion_t(double w_ = {}, double x_ = {}, double y_ = {}, double z_ = {}) noexcept : w{w_}, x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.HmdQuaternion_t
  static check_size<sizeof(HmdQuaternion_t), 24 + sizeof(double)> __Valve_VR_HmdQuaternion_tSizeCheck;
  static_assert(sizeof(HmdQuaternion_t) == 0x20);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::HmdQuaternion_t, "Valve.VR", "HmdQuaternion_t");
