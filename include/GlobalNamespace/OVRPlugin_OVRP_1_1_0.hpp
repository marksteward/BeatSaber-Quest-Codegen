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
  // Autogenerated type: OVRPlugin/OVRP_1_1_0
  class OVRPlugin::OVRP_1_1_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_1_0
    OVRP_1_1_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Bool ovrp_GetInitialized()
    // Offset: 0x157D494
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetInitialized();
    // static private System.IntPtr _ovrp_GetVersion()
    // Offset: 0x157D508
    static System::IntPtr _ovrp_GetVersion();
    // static public System.String ovrp_GetVersion()
    // Offset: 0x157D57C
    static ::Il2CppString* ovrp_GetVersion();
    // static private System.IntPtr _ovrp_GetNativeSDKVersion()
    // Offset: 0x157D60C
    static System::IntPtr _ovrp_GetNativeSDKVersion();
    // static public System.String ovrp_GetNativeSDKVersion()
    // Offset: 0x157D680
    static ::Il2CppString* ovrp_GetNativeSDKVersion();
    // static public System.IntPtr ovrp_GetAudioOutId()
    // Offset: 0x157D710
    static System::IntPtr ovrp_GetAudioOutId();
    // static public System.IntPtr ovrp_GetAudioInId()
    // Offset: 0x157D784
    static System::IntPtr ovrp_GetAudioInId();
    // static public System.Single ovrp_GetEyeTextureScale()
    // Offset: 0x157D7F8
    static float ovrp_GetEyeTextureScale();
    // static public OVRPlugin/Bool ovrp_SetEyeTextureScale(System.Single value)
    // Offset: 0x157D868
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetEyeTextureScale(float value);
    // static public OVRPlugin/Bool ovrp_GetTrackingOrientationSupported()
    // Offset: 0x157D8F0
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingOrientationSupported();
    // static public OVRPlugin/Bool ovrp_GetTrackingOrientationEnabled()
    // Offset: 0x157D964
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingOrientationEnabled();
    // static public OVRPlugin/Bool ovrp_SetTrackingOrientationEnabled(OVRPlugin/Bool value)
    // Offset: 0x157D9D8
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingOrientationEnabled(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetTrackingPositionSupported()
    // Offset: 0x157DA58
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingPositionSupported();
    // static public OVRPlugin/Bool ovrp_GetTrackingPositionEnabled()
    // Offset: 0x157DACC
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingPositionEnabled();
    // static public OVRPlugin/Bool ovrp_SetTrackingPositionEnabled(OVRPlugin/Bool value)
    // Offset: 0x157DB40
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingPositionEnabled(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetNodePresent(OVRPlugin/Node nodeId)
    // Offset: 0x157DBC0
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetNodePresent(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Bool ovrp_GetNodeOrientationTracked(OVRPlugin/Node nodeId)
    // Offset: 0x157DC40
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetNodeOrientationTracked(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Bool ovrp_GetNodePositionTracked(OVRPlugin/Node nodeId)
    // Offset: 0x157DCC0
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetNodePositionTracked(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Frustumf ovrp_GetNodeFrustum(OVRPlugin/Node nodeId)
    // Offset: 0x157DD40
    static GlobalNamespace::OVRPlugin::Frustumf ovrp_GetNodeFrustum(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/ControllerState ovrp_GetControllerState(System.UInt32 controllerMask)
    // Offset: 0x157DDC0
    static GlobalNamespace::OVRPlugin::ControllerState ovrp_GetControllerState(uint controllerMask);
    // static public System.Int32 ovrp_GetSystemCpuLevel()
    // Offset: 0x157DE50
    static int ovrp_GetSystemCpuLevel();
    // static public OVRPlugin/Bool ovrp_SetSystemCpuLevel(System.Int32 value)
    // Offset: 0x157DEC4
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemCpuLevel(int value);
    // static public System.Int32 ovrp_GetSystemGpuLevel()
    // Offset: 0x157DF44
    static int ovrp_GetSystemGpuLevel();
    // static public OVRPlugin/Bool ovrp_SetSystemGpuLevel(System.Int32 value)
    // Offset: 0x157DFB8
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemGpuLevel(int value);
    // static public OVRPlugin/Bool ovrp_GetSystemPowerSavingMode()
    // Offset: 0x157E038
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetSystemPowerSavingMode();
    // static public System.Single ovrp_GetSystemDisplayFrequency()
    // Offset: 0x157E0AC
    static float ovrp_GetSystemDisplayFrequency();
    // static public System.Int32 ovrp_GetSystemVSyncCount()
    // Offset: 0x157E11C
    static int ovrp_GetSystemVSyncCount();
    // static public System.Single ovrp_GetSystemVolume()
    // Offset: 0x157E190
    static float ovrp_GetSystemVolume();
    // static public OVRPlugin/BatteryStatus ovrp_GetSystemBatteryStatus()
    // Offset: 0x157E200
    static GlobalNamespace::OVRPlugin::BatteryStatus ovrp_GetSystemBatteryStatus();
    // static public System.Single ovrp_GetSystemBatteryLevel()
    // Offset: 0x157E274
    static float ovrp_GetSystemBatteryLevel();
    // static public System.Single ovrp_GetSystemBatteryTemperature()
    // Offset: 0x157E2E4
    static float ovrp_GetSystemBatteryTemperature();
    // static private System.IntPtr _ovrp_GetSystemProductName()
    // Offset: 0x157E354
    static System::IntPtr _ovrp_GetSystemProductName();
    // static public System.String ovrp_GetSystemProductName()
    // Offset: 0x157E3C8
    static ::Il2CppString* ovrp_GetSystemProductName();
    // static public OVRPlugin/Bool ovrp_ShowSystemUI(OVRPlugin/PlatformUI ui)
    // Offset: 0x157E458
    static GlobalNamespace::OVRPlugin::Bool ovrp_ShowSystemUI(GlobalNamespace::OVRPlugin::PlatformUI ui);
    // static public OVRPlugin/Bool ovrp_GetAppMonoscopic()
    // Offset: 0x157E4D8
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppMonoscopic();
    // static public OVRPlugin/Bool ovrp_SetAppMonoscopic(OVRPlugin/Bool value)
    // Offset: 0x157E54C
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetAppMonoscopic(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetAppHasVrFocus()
    // Offset: 0x157E5CC
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppHasVrFocus();
    // static public OVRPlugin/Bool ovrp_GetAppShouldQuit()
    // Offset: 0x157E640
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppShouldQuit();
    // static public OVRPlugin/Bool ovrp_GetAppShouldRecenter()
    // Offset: 0x157E6B4
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppShouldRecenter();
    // static private System.IntPtr _ovrp_GetAppLatencyTimings()
    // Offset: 0x157E728
    static System::IntPtr _ovrp_GetAppLatencyTimings();
    // static public System.String ovrp_GetAppLatencyTimings()
    // Offset: 0x157E79C
    static ::Il2CppString* ovrp_GetAppLatencyTimings();
    // static public OVRPlugin/Bool ovrp_GetUserPresent()
    // Offset: 0x157E82C
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetUserPresent();
    // static public System.Single ovrp_GetUserIPD()
    // Offset: 0x157E8A0
    static float ovrp_GetUserIPD();
    // static public OVRPlugin/Bool ovrp_SetUserIPD(System.Single value)
    // Offset: 0x157E910
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetUserIPD(float value);
    // static public System.Single ovrp_GetUserEyeDepth()
    // Offset: 0x157E998
    static float ovrp_GetUserEyeDepth();
    // static public OVRPlugin/Bool ovrp_SetUserEyeDepth(System.Single value)
    // Offset: 0x157EA08
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetUserEyeDepth(float value);
    // static public System.Single ovrp_GetUserEyeHeight()
    // Offset: 0x157EA90
    static float ovrp_GetUserEyeHeight();
    // static public OVRPlugin/Bool ovrp_SetUserEyeHeight(System.Single value)
    // Offset: 0x157EB00
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetUserEyeHeight(float value);
    // static private System.Void .cctor()
    // Offset: 0x157EB88
    static void _cctor();
  }; // OVRPlugin/OVRP_1_1_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_1_0*, "", "OVRPlugin/OVRP_1_1_0");
