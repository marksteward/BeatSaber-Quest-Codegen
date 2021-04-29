// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.AppOverrideKeys_t
#include "Valve/VR/AppOverrideKeys_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x108
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRApplications
  class CVRApplications : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRApplications FnTable
    // Size: 0xF8
    // Offset: 0x10
    Valve::VR::IVRApplications FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRApplications) == 0xF8);
    // Creating value type constructor for type: CVRApplications
    CVRApplications(Valve::VR::IVRApplications FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRApplications
    constexpr operator Valve::VR::IVRApplications() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x151D0E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRApplications* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRApplications::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRApplications*, creationType>(pInterface)));
    }
    // public Valve.VR.EVRApplicationError AddApplicationManifest(System.String pchApplicationManifestFullPath, System.Boolean bTemporary)
    // Offset: 0x151D1F0
    Valve::VR::EVRApplicationError AddApplicationManifest(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary);
    // public Valve.VR.EVRApplicationError RemoveApplicationManifest(System.String pchApplicationManifestFullPath)
    // Offset: 0x151D63C
    Valve::VR::EVRApplicationError RemoveApplicationManifest(::Il2CppString* pchApplicationManifestFullPath);
    // public System.Boolean IsApplicationInstalled(System.String pchAppKey)
    // Offset: 0x151D9F0
    bool IsApplicationInstalled(::Il2CppString* pchAppKey);
    // public System.UInt32 GetApplicationCount()
    // Offset: 0x151DDA8
    uint GetApplicationCount();
    // public Valve.VR.EVRApplicationError GetApplicationKeyByIndex(System.UInt32 unApplicationIndex, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x151DFD4
    Valve::VR::EVRApplicationError GetApplicationKeyByIndex(uint unApplicationIndex, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationError GetApplicationKeyByProcessId(System.UInt32 unProcessId, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x151E28C
    Valve::VR::EVRApplicationError GetApplicationKeyByProcessId(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationError LaunchApplication(System.String pchAppKey)
    // Offset: 0x151E544
    Valve::VR::EVRApplicationError LaunchApplication(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError LaunchTemplateApplication(System.String pchTemplateAppKey, System.String pchNewAppKey, Valve.VR.AppOverrideKeys_t[] pKeys)
    // Offset: 0x151E8F8
    Valve::VR::EVRApplicationError LaunchTemplateApplication(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<Valve::VR::AppOverrideKeys_t>* pKeys);
    // public Valve.VR.EVRApplicationError LaunchApplicationFromMimeType(System.String pchMimeType, System.String pchArgs)
    // Offset: 0x151ED5C
    Valve::VR::EVRApplicationError LaunchApplicationFromMimeType(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs);
    // public Valve.VR.EVRApplicationError LaunchDashboardOverlay(System.String pchAppKey)
    // Offset: 0x151F164
    Valve::VR::EVRApplicationError LaunchDashboardOverlay(::Il2CppString* pchAppKey);
    // public System.Boolean CancelApplicationLaunch(System.String pchAppKey)
    // Offset: 0x151F518
    bool CancelApplicationLaunch(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError IdentifyApplication(System.UInt32 unProcessId, System.String pchAppKey)
    // Offset: 0x151F8D0
    Valve::VR::EVRApplicationError IdentifyApplication(uint unProcessId, ::Il2CppString* pchAppKey);
    // public System.UInt32 GetApplicationProcessId(System.String pchAppKey)
    // Offset: 0x151FB6C
    uint GetApplicationProcessId(::Il2CppString* pchAppKey);
    // public System.String GetApplicationsErrorNameFromEnum(Valve.VR.EVRApplicationError error)
    // Offset: 0x151FF20
    ::Il2CppString* GetApplicationsErrorNameFromEnum(Valve::VR::EVRApplicationError error);
    // public System.UInt32 GetApplicationPropertyString(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0x1520228
    uint GetApplicationPropertyString(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, Valve::VR::EVRApplicationError& peError);
    // public System.Boolean GetApplicationPropertyBool(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0x15206D0
    bool GetApplicationPropertyBool(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError);
    // public System.UInt64 GetApplicationPropertyUint64(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0x1520B28
    uint64_t GetApplicationPropertyUint64(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError);
    // public Valve.VR.EVRApplicationError SetApplicationAutoLaunch(System.String pchAppKey, System.Boolean bAutoLaunch)
    // Offset: 0x1520F7C
    Valve::VR::EVRApplicationError SetApplicationAutoLaunch(::Il2CppString* pchAppKey, bool bAutoLaunch);
    // public System.Boolean GetApplicationAutoLaunch(System.String pchAppKey)
    // Offset: 0x15213C8
    bool GetApplicationAutoLaunch(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError SetDefaultApplicationForMimeType(System.String pchAppKey, System.String pchMimeType)
    // Offset: 0x1521780
    Valve::VR::EVRApplicationError SetDefaultApplicationForMimeType(::Il2CppString* pchAppKey, ::Il2CppString* pchMimeType);
    // public System.Boolean GetDefaultApplicationForMimeType(System.String pchMimeType, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x1521B88
    bool GetDefaultApplicationForMimeType(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.Boolean GetApplicationSupportedMimeTypes(System.String pchAppKey, System.Text.StringBuilder pchMimeTypesBuffer, System.UInt32 unMimeTypesBuffer)
    // Offset: 0x1521FBC
    bool GetApplicationSupportedMimeTypes(::Il2CppString* pchAppKey, System::Text::StringBuilder* pchMimeTypesBuffer, uint unMimeTypesBuffer);
    // public System.UInt32 GetApplicationsThatSupportMimeType(System.String pchMimeType, System.Text.StringBuilder pchAppKeysThatSupportBuffer, System.UInt32 unAppKeysThatSupportBuffer)
    // Offset: 0x15223F0
    uint GetApplicationsThatSupportMimeType(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint unAppKeysThatSupportBuffer);
    // public System.UInt32 GetApplicationLaunchArguments(System.UInt32 unHandle, System.Text.StringBuilder pchArgs, System.UInt32 unArgs)
    // Offset: 0x1522820
    uint GetApplicationLaunchArguments(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs);
    // public Valve.VR.EVRApplicationError GetStartingApplication(System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x1522AD8
    Valve::VR::EVRApplicationError GetStartingApplication(System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationTransitionState GetTransitionState()
    // Offset: 0x1522F04
    Valve::VR::EVRApplicationTransitionState GetTransitionState();
    // public Valve.VR.EVRApplicationError PerformApplicationPrelaunchCheck(System.String pchAppKey)
    // Offset: 0x1523130
    Valve::VR::EVRApplicationError PerformApplicationPrelaunchCheck(::Il2CppString* pchAppKey);
    // public System.String GetApplicationsTransitionStateNameFromEnum(Valve.VR.EVRApplicationTransitionState state)
    // Offset: 0x15234E4
    ::Il2CppString* GetApplicationsTransitionStateNameFromEnum(Valve::VR::EVRApplicationTransitionState state);
    // public System.Boolean IsQuitUserPromptRequested()
    // Offset: 0x15237EC
    bool IsQuitUserPromptRequested();
    // public Valve.VR.EVRApplicationError LaunchInternalProcess(System.String pchBinaryPath, System.String pchArguments, System.String pchWorkingDirectory)
    // Offset: 0x1523A1C
    Valve::VR::EVRApplicationError LaunchInternalProcess(::Il2CppString* pchBinaryPath, ::Il2CppString* pchArguments, ::Il2CppString* pchWorkingDirectory);
    // public System.UInt32 GetCurrentSceneProcessId()
    // Offset: 0x1523E4C
    uint GetCurrentSceneProcessId();
  }; // Valve.VR.CVRApplications
  #pragma pack(pop)
  static check_size<sizeof(CVRApplications), 16 + sizeof(Valve::VR::IVRApplications)> __Valve_VR_CVRApplicationsSizeCheck;
  static_assert(sizeof(CVRApplications) == 0x108);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRApplications*, "Valve.VR", "CVRApplications");
