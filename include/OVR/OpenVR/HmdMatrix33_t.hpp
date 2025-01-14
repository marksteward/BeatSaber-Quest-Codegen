// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.HmdMatrix33_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HmdMatrix33_t/*, public System::ValueType*/ {
    public:
    // public System.Single m0
    // Size: 0x4
    // Offset: 0x0
    float m0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m1
    // Size: 0x4
    // Offset: 0x4
    float m1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m2
    // Size: 0x4
    // Offset: 0x8
    float m2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m3
    // Size: 0x4
    // Offset: 0xC
    float m3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m4
    // Size: 0x4
    // Offset: 0x10
    float m4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m5
    // Size: 0x4
    // Offset: 0x14
    float m5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m6
    // Size: 0x4
    // Offset: 0x18
    float m6;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m7
    // Size: 0x4
    // Offset: 0x1C
    float m7;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m8
    // Size: 0x4
    // Offset: 0x20
    float m8;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: HmdMatrix33_t
    constexpr HmdMatrix33_t(float m0_ = {}, float m1_ = {}, float m2_ = {}, float m3_ = {}, float m4_ = {}, float m5_ = {}, float m6_ = {}, float m7_ = {}, float m8_ = {}) noexcept : m0{m0_}, m1{m1_}, m2{m2_}, m3{m3_}, m4{m4_}, m5{m5_}, m6{m6_}, m7{m7_}, m8{m8_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.Single m0
    float _get_m0();
    // Set instance field: public System.Single m0
    void _set_m0(float value);
    // Get instance field: public System.Single m1
    float _get_m1();
    // Set instance field: public System.Single m1
    void _set_m1(float value);
    // Get instance field: public System.Single m2
    float _get_m2();
    // Set instance field: public System.Single m2
    void _set_m2(float value);
    // Get instance field: public System.Single m3
    float _get_m3();
    // Set instance field: public System.Single m3
    void _set_m3(float value);
    // Get instance field: public System.Single m4
    float _get_m4();
    // Set instance field: public System.Single m4
    void _set_m4(float value);
    // Get instance field: public System.Single m5
    float _get_m5();
    // Set instance field: public System.Single m5
    void _set_m5(float value);
    // Get instance field: public System.Single m6
    float _get_m6();
    // Set instance field: public System.Single m6
    void _set_m6(float value);
    // Get instance field: public System.Single m7
    float _get_m7();
    // Set instance field: public System.Single m7
    void _set_m7(float value);
    // Get instance field: public System.Single m8
    float _get_m8();
    // Set instance field: public System.Single m8
    void _set_m8(float value);
  }; // OVR.OpenVR.HmdMatrix33_t
  #pragma pack(pop)
  static check_size<sizeof(HmdMatrix33_t), 32 + sizeof(float)> __OVR_OpenVR_HmdMatrix33_tSizeCheck;
  static_assert(sizeof(HmdMatrix33_t) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdMatrix33_t, "OVR.OpenVR", "HmdMatrix33_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
