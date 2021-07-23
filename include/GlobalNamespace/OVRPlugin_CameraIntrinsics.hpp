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
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/Fovf
#include "GlobalNamespace/OVRPlugin_Fovf.hpp"
// Including type: OVRPlugin/Sizei
#include "GlobalNamespace/OVRPlugin_Sizei.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/CameraIntrinsics
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::CameraIntrinsics/*, public System::ValueType*/ {
    public:
    // public OVRPlugin/Bool IsValid
    // Size: 0x4
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::Bool IsValid;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Bool) == 0x4);
    // Padding between fields: IsValid and: LastChangedTimeSeconds
    char __padding0[0x4] = {};
    // public System.Double LastChangedTimeSeconds
    // Size: 0x8
    // Offset: 0x8
    double LastChangedTimeSeconds;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public OVRPlugin/Fovf FOVPort
    // Size: 0x10
    // Offset: 0x10
    GlobalNamespace::OVRPlugin::Fovf FOVPort;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Fovf) == 0x10);
    // public System.Single VirtualNearPlaneDistanceMeters
    // Size: 0x4
    // Offset: 0x20
    float VirtualNearPlaneDistanceMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single VirtualFarPlaneDistanceMeters
    // Size: 0x4
    // Offset: 0x24
    float VirtualFarPlaneDistanceMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVRPlugin/Sizei ImageSensorPixelResolution
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::OVRPlugin::Sizei ImageSensorPixelResolution;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Sizei) == 0x8);
    // Creating value type constructor for type: CameraIntrinsics
    constexpr CameraIntrinsics(GlobalNamespace::OVRPlugin::Bool IsValid_ = {}, double LastChangedTimeSeconds_ = {}, GlobalNamespace::OVRPlugin::Fovf FOVPort_ = {}, float VirtualNearPlaneDistanceMeters_ = {}, float VirtualFarPlaneDistanceMeters_ = {}, GlobalNamespace::OVRPlugin::Sizei ImageSensorPixelResolution_ = {}) noexcept : IsValid{IsValid_}, LastChangedTimeSeconds{LastChangedTimeSeconds_}, FOVPort{FOVPort_}, VirtualNearPlaneDistanceMeters{VirtualNearPlaneDistanceMeters_}, VirtualFarPlaneDistanceMeters{VirtualFarPlaneDistanceMeters_}, ImageSensorPixelResolution{ImageSensorPixelResolution_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public OVRPlugin/Bool IsValid
    GlobalNamespace::OVRPlugin::Bool _get_IsValid();
    // Set instance field: public OVRPlugin/Bool IsValid
    void _set_IsValid(GlobalNamespace::OVRPlugin::Bool value);
    // Get instance field: public System.Double LastChangedTimeSeconds
    double _get_LastChangedTimeSeconds();
    // Set instance field: public System.Double LastChangedTimeSeconds
    void _set_LastChangedTimeSeconds(double value);
    // Get instance field: public OVRPlugin/Fovf FOVPort
    GlobalNamespace::OVRPlugin::Fovf _get_FOVPort();
    // Set instance field: public OVRPlugin/Fovf FOVPort
    void _set_FOVPort(GlobalNamespace::OVRPlugin::Fovf value);
    // Get instance field: public System.Single VirtualNearPlaneDistanceMeters
    float _get_VirtualNearPlaneDistanceMeters();
    // Set instance field: public System.Single VirtualNearPlaneDistanceMeters
    void _set_VirtualNearPlaneDistanceMeters(float value);
    // Get instance field: public System.Single VirtualFarPlaneDistanceMeters
    float _get_VirtualFarPlaneDistanceMeters();
    // Set instance field: public System.Single VirtualFarPlaneDistanceMeters
    void _set_VirtualFarPlaneDistanceMeters(float value);
    // Get instance field: public OVRPlugin/Sizei ImageSensorPixelResolution
    GlobalNamespace::OVRPlugin::Sizei _get_ImageSensorPixelResolution();
    // Set instance field: public OVRPlugin/Sizei ImageSensorPixelResolution
    void _set_ImageSensorPixelResolution(GlobalNamespace::OVRPlugin::Sizei value);
  }; // OVRPlugin/CameraIntrinsics
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::CameraIntrinsics), 40 + sizeof(GlobalNamespace::OVRPlugin::Sizei)> __GlobalNamespace_OVRPlugin_CameraIntrinsicsSizeCheck;
  static_assert(sizeof(OVRPlugin::CameraIntrinsics) == 0x30);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::CameraIntrinsics, "", "OVRPlugin/CameraIntrinsics");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
