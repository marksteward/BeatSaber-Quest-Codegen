// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
  // Forward declaring type: AppOverrideKeys_t
  struct AppOverrideKeys_t;
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationTransitionState
  struct EVRApplicationTransitionState;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRApplications
  class CVRApplications : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRApplications FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRApplications FnTable;
    // Creating conversion operator: operator OVR::OpenVR::IVRApplications
    constexpr operator OVR::OpenVR::IVRApplications() const {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xEC2760
    static CVRApplications* New_ctor(System::IntPtr pInterface);
    // public OVR.OpenVR.EVRApplicationError AddApplicationManifest(System.String pchApplicationManifestFullPath, System.Boolean bTemporary)
    // Offset: 0xEC2874
    OVR::OpenVR::EVRApplicationError AddApplicationManifest(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary);
    // public OVR.OpenVR.EVRApplicationError RemoveApplicationManifest(System.String pchApplicationManifestFullPath)
    // Offset: 0xEC2CE0
    OVR::OpenVR::EVRApplicationError RemoveApplicationManifest(::Il2CppString* pchApplicationManifestFullPath);
    // public System.Boolean IsApplicationInstalled(System.String pchAppKey)
    // Offset: 0xEC30B8
    bool IsApplicationInstalled(::Il2CppString* pchAppKey);
    // public System.UInt32 GetApplicationCount()
    // Offset: 0xEC3494
    uint GetApplicationCount();
    // public OVR.OpenVR.EVRApplicationError GetApplicationKeyByIndex(System.UInt32 unApplicationIndex, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xEC36C0
    OVR::OpenVR::EVRApplicationError GetApplicationKeyByIndex(uint unApplicationIndex, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public OVR.OpenVR.EVRApplicationError GetApplicationKeyByProcessId(System.UInt32 unProcessId, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xEC3984
    OVR::OpenVR::EVRApplicationError GetApplicationKeyByProcessId(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public OVR.OpenVR.EVRApplicationError LaunchApplication(System.String pchAppKey)
    // Offset: 0xEC3C48
    OVR::OpenVR::EVRApplicationError LaunchApplication(::Il2CppString* pchAppKey);
    // public OVR.OpenVR.EVRApplicationError LaunchTemplateApplication(System.String pchTemplateAppKey, System.String pchNewAppKey, OVR.OpenVR.AppOverrideKeys_t[] pKeys)
    // Offset: 0xEC4020
    OVR::OpenVR::EVRApplicationError LaunchTemplateApplication(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<OVR::OpenVR::AppOverrideKeys_t>* pKeys);
    // public OVR.OpenVR.EVRApplicationError LaunchApplicationFromMimeType(System.String pchMimeType, System.String pchArgs)
    // Offset: 0xEC4498
    OVR::OpenVR::EVRApplicationError LaunchApplicationFromMimeType(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs);
    // public OVR.OpenVR.EVRApplicationError LaunchDashboardOverlay(System.String pchAppKey)
    // Offset: 0xEC48BC
    OVR::OpenVR::EVRApplicationError LaunchDashboardOverlay(::Il2CppString* pchAppKey);
    // public System.Boolean CancelApplicationLaunch(System.String pchAppKey)
    // Offset: 0xEC4C94
    bool CancelApplicationLaunch(::Il2CppString* pchAppKey);
    // public OVR.OpenVR.EVRApplicationError IdentifyApplication(System.UInt32 unProcessId, System.String pchAppKey)
    // Offset: 0xEC5070
    OVR::OpenVR::EVRApplicationError IdentifyApplication(uint unProcessId, ::Il2CppString* pchAppKey);
    // public System.UInt32 GetApplicationProcessId(System.String pchAppKey)
    // Offset: 0xEC5318
    uint GetApplicationProcessId(::Il2CppString* pchAppKey);
    // public System.String GetApplicationsErrorNameFromEnum(OVR.OpenVR.EVRApplicationError error)
    // Offset: 0xEC56F0
    ::Il2CppString* GetApplicationsErrorNameFromEnum(OVR::OpenVR::EVRApplicationError error);
    // public System.UInt32 GetApplicationPropertyString(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, OVR.OpenVR.EVRApplicationError peError)
    // Offset: 0xEC59F4
    uint GetApplicationPropertyString(::Il2CppString* pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, OVR::OpenVR::EVRApplicationError& peError);
    // public System.Boolean GetApplicationPropertyBool(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, OVR.OpenVR.EVRApplicationError peError)
    // Offset: 0xEC5EB0
    bool GetApplicationPropertyBool(::Il2CppString* pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, OVR::OpenVR::EVRApplicationError& peError);
    // public System.UInt64 GetApplicationPropertyUint64(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, OVR.OpenVR.EVRApplicationError peError)
    // Offset: 0xEC6324
    uint64_t GetApplicationPropertyUint64(::Il2CppString* pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, OVR::OpenVR::EVRApplicationError& peError);
    // public OVR.OpenVR.EVRApplicationError SetApplicationAutoLaunch(System.String pchAppKey, System.Boolean bAutoLaunch)
    // Offset: 0xEC6794
    OVR::OpenVR::EVRApplicationError SetApplicationAutoLaunch(::Il2CppString* pchAppKey, bool bAutoLaunch);
    // public System.Boolean GetApplicationAutoLaunch(System.String pchAppKey)
    // Offset: 0xEC6C00
    bool GetApplicationAutoLaunch(::Il2CppString* pchAppKey);
    // public OVR.OpenVR.EVRApplicationError SetDefaultApplicationForMimeType(System.String pchAppKey, System.String pchMimeType)
    // Offset: 0xEC6FDC
    OVR::OpenVR::EVRApplicationError SetDefaultApplicationForMimeType(::Il2CppString* pchAppKey, ::Il2CppString* pchMimeType);
    // public System.Boolean GetDefaultApplicationForMimeType(System.String pchMimeType, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xEC7400
    bool GetDefaultApplicationForMimeType(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.Boolean GetApplicationSupportedMimeTypes(System.String pchAppKey, System.Text.StringBuilder pchMimeTypesBuffer, System.UInt32 unMimeTypesBuffer)
    // Offset: 0xEC784C
    bool GetApplicationSupportedMimeTypes(::Il2CppString* pchAppKey, System::Text::StringBuilder* pchMimeTypesBuffer, uint unMimeTypesBuffer);
    // public System.UInt32 GetApplicationsThatSupportMimeType(System.String pchMimeType, System.Text.StringBuilder pchAppKeysThatSupportBuffer, System.UInt32 unAppKeysThatSupportBuffer)
    // Offset: 0xEC7C98
    uint GetApplicationsThatSupportMimeType(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint unAppKeysThatSupportBuffer);
    // public System.UInt32 GetApplicationLaunchArguments(System.UInt32 unHandle, System.Text.StringBuilder pchArgs, System.UInt32 unArgs)
    // Offset: 0xEC80E0
    uint GetApplicationLaunchArguments(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs);
    // public OVR.OpenVR.EVRApplicationError GetStartingApplication(System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xEC83A4
    OVR::OpenVR::EVRApplicationError GetStartingApplication(System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public OVR.OpenVR.EVRApplicationTransitionState GetTransitionState()
    // Offset: 0xEC87F0
    OVR::OpenVR::EVRApplicationTransitionState GetTransitionState();
    // public OVR.OpenVR.EVRApplicationError PerformApplicationPrelaunchCheck(System.String pchAppKey)
    // Offset: 0xEC8A1C
    OVR::OpenVR::EVRApplicationError PerformApplicationPrelaunchCheck(::Il2CppString* pchAppKey);
    // public System.String GetApplicationsTransitionStateNameFromEnum(OVR.OpenVR.EVRApplicationTransitionState state)
    // Offset: 0xEC8DF4
    ::Il2CppString* GetApplicationsTransitionStateNameFromEnum(OVR::OpenVR::EVRApplicationTransitionState state);
    // public System.Boolean IsQuitUserPromptRequested()
    // Offset: 0xEC90F8
    bool IsQuitUserPromptRequested();
    // public OVR.OpenVR.EVRApplicationError LaunchInternalProcess(System.String pchBinaryPath, System.String pchArguments, System.String pchWorkingDirectory)
    // Offset: 0xEC9328
    OVR::OpenVR::EVRApplicationError LaunchInternalProcess(::Il2CppString* pchBinaryPath, ::Il2CppString* pchArguments, ::Il2CppString* pchWorkingDirectory);
    // public System.UInt32 GetCurrentSceneProcessId()
    // Offset: 0xEC9770
    uint GetCurrentSceneProcessId();
  }; // OVR.OpenVR.CVRApplications
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRApplications*, "OVR.OpenVR", "CVRApplications");
#pragma pack(pop)
