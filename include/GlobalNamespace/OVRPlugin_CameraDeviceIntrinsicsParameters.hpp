// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/CameraDeviceIntrinsicsParameters
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::CameraDeviceIntrinsicsParameters/*, public System::ValueType*/ {
    public:
    // private System.Single fx
    // Size: 0x4
    // Offset: 0x0
    float fx;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single fy
    // Size: 0x4
    // Offset: 0x4
    float fy;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cx
    // Size: 0x4
    // Offset: 0x8
    float cx;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cy
    // Size: 0x4
    // Offset: 0xC
    float cy;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Double disto0
    // Size: 0x8
    // Offset: 0x10
    double disto0;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double disto1
    // Size: 0x8
    // Offset: 0x18
    double disto1;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double disto2
    // Size: 0x8
    // Offset: 0x20
    double disto2;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double disto3
    // Size: 0x8
    // Offset: 0x28
    double disto3;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double disto4
    // Size: 0x8
    // Offset: 0x30
    double disto4;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single v_fov
    // Size: 0x4
    // Offset: 0x38
    float v_fov;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single h_fov
    // Size: 0x4
    // Offset: 0x3C
    float h_fov;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single d_fov
    // Size: 0x4
    // Offset: 0x40
    float d_fov;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 w
    // Size: 0x4
    // Offset: 0x44
    int w;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 h
    // Size: 0x4
    // Offset: 0x48
    int h;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CameraDeviceIntrinsicsParameters
    constexpr CameraDeviceIntrinsicsParameters(float fx_ = {}, float fy_ = {}, float cx_ = {}, float cy_ = {}, double disto0_ = {}, double disto1_ = {}, double disto2_ = {}, double disto3_ = {}, double disto4_ = {}, float v_fov_ = {}, float h_fov_ = {}, float d_fov_ = {}, int w_ = {}, int h_ = {}) noexcept : fx{fx_}, fy{fy_}, cx{cx_}, cy{cy_}, disto0{disto0_}, disto1{disto1_}, disto2{disto2_}, disto3{disto3_}, disto4{disto4_}, v_fov{v_fov_}, h_fov{h_fov_}, d_fov{d_fov_}, w{w_}, h{h_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: private System.Single fx
    float _get_fx();
    // Set instance field: private System.Single fx
    void _set_fx(float value);
    // Get instance field: private System.Single fy
    float _get_fy();
    // Set instance field: private System.Single fy
    void _set_fy(float value);
    // Get instance field: private System.Single cx
    float _get_cx();
    // Set instance field: private System.Single cx
    void _set_cx(float value);
    // Get instance field: private System.Single cy
    float _get_cy();
    // Set instance field: private System.Single cy
    void _set_cy(float value);
    // Get instance field: private System.Double disto0
    double _get_disto0();
    // Set instance field: private System.Double disto0
    void _set_disto0(double value);
    // Get instance field: private System.Double disto1
    double _get_disto1();
    // Set instance field: private System.Double disto1
    void _set_disto1(double value);
    // Get instance field: private System.Double disto2
    double _get_disto2();
    // Set instance field: private System.Double disto2
    void _set_disto2(double value);
    // Get instance field: private System.Double disto3
    double _get_disto3();
    // Set instance field: private System.Double disto3
    void _set_disto3(double value);
    // Get instance field: private System.Double disto4
    double _get_disto4();
    // Set instance field: private System.Double disto4
    void _set_disto4(double value);
    // Get instance field: private System.Single v_fov
    float _get_v_fov();
    // Set instance field: private System.Single v_fov
    void _set_v_fov(float value);
    // Get instance field: private System.Single h_fov
    float _get_h_fov();
    // Set instance field: private System.Single h_fov
    void _set_h_fov(float value);
    // Get instance field: private System.Single d_fov
    float _get_d_fov();
    // Set instance field: private System.Single d_fov
    void _set_d_fov(float value);
    // Get instance field: private System.Int32 w
    int _get_w();
    // Set instance field: private System.Int32 w
    void _set_w(int value);
    // Get instance field: private System.Int32 h
    int _get_h();
    // Set instance field: private System.Int32 h
    void _set_h(int value);
  }; // OVRPlugin/CameraDeviceIntrinsicsParameters
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::CameraDeviceIntrinsicsParameters), 72 + sizeof(int)> __GlobalNamespace_OVRPlugin_CameraDeviceIntrinsicsParametersSizeCheck;
  static_assert(sizeof(OVRPlugin::CameraDeviceIntrinsicsParameters) == 0x4C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::CameraDeviceIntrinsicsParameters, "", "OVRPlugin/CameraDeviceIntrinsicsParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
