// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_6_0
  // [] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_6_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_6_0
    OVRP_1_6_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Bool ovrp_GetTrackingIPDEnabled()
    // Offset: 0x12DF34C
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingIPDEnabled();
    // static public OVRPlugin/Bool ovrp_SetTrackingIPDEnabled(OVRPlugin/Bool value)
    // Offset: 0x12DF3C0
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingIPDEnabled(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/HapticsDesc ovrp_GetControllerHapticsDesc(System.UInt32 controllerMask)
    // Offset: 0x12DF440
    static GlobalNamespace::OVRPlugin::HapticsDesc ovrp_GetControllerHapticsDesc(uint controllerMask);
    // static public OVRPlugin/HapticsState ovrp_GetControllerHapticsState(System.UInt32 controllerMask)
    // Offset: 0x12DF4D0
    static GlobalNamespace::OVRPlugin::HapticsState ovrp_GetControllerHapticsState(uint controllerMask);
    // static public OVRPlugin/Bool ovrp_SetControllerHaptics(System.UInt32 controllerMask, OVRPlugin/HapticsBuffer hapticsBuffer)
    // Offset: 0x12DF550
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetControllerHaptics(uint controllerMask, GlobalNamespace::OVRPlugin::HapticsBuffer hapticsBuffer);
    // static public OVRPlugin/Bool ovrp_SetOverlayQuad3(System.UInt32 flags, System.IntPtr textureLeft, System.IntPtr textureRight, System.IntPtr device, OVRPlugin/Posef pose, OVRPlugin/Vector3f scale, System.Int32 layerIndex)
    // Offset: 0x12DF5E8
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetOverlayQuad3(uint flags, System::IntPtr textureLeft, System::IntPtr textureRight, System::IntPtr device, GlobalNamespace::OVRPlugin::Posef pose, GlobalNamespace::OVRPlugin::Vector3f scale, int layerIndex);
    // static public System.Single ovrp_GetEyeRecommendedResolutionScale()
    // Offset: 0x12DF6E0
    static float ovrp_GetEyeRecommendedResolutionScale();
    // static public System.Single ovrp_GetAppCpuStartToGpuEndTime()
    // Offset: 0x12DF750
    static float ovrp_GetAppCpuStartToGpuEndTime();
    // static public System.Int32 ovrp_GetSystemRecommendedMSAALevel()
    // Offset: 0x12DF7C0
    static int ovrp_GetSystemRecommendedMSAALevel();
    // static private System.Void .cctor()
    // Offset: 0x12DF834
    static void _cctor();
  }; // OVRPlugin/OVRP_1_6_0
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_6_0*, "", "OVRPlugin/OVRP_1_6_0");
