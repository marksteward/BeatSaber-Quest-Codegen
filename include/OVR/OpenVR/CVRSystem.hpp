// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: DistortionCoordinates_t
  struct DistortionCoordinates_t;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
  // Forward declaring type: ETextureType
  struct ETextureType;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
  // Forward declaring type: EDeviceActivityLevel
  struct EDeviceActivityLevel;
  // Forward declaring type: ETrackedControllerRole
  struct ETrackedControllerRole;
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: EVREventType
  struct EVREventType;
  // Forward declaring type: HiddenAreaMesh_t
  struct HiddenAreaMesh_t;
  // Forward declaring type: EHiddenAreaMeshType
  struct EHiddenAreaMeshType;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
  // Forward declaring type: EVRButtonId
  struct EVRButtonId;
  // Forward declaring type: EVRControllerAxisType
  struct EVRControllerAxisType;
  // Forward declaring type: EVRFirmwareError
  struct EVRFirmwareError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRSystem
  class CVRSystem : public ::Il2CppObject {
    public:
    // Nested type: OVR::OpenVR::CVRSystem::_PollNextEventPacked
    class _PollNextEventPacked;
    // Nested type: OVR::OpenVR::CVRSystem::PollNextEventUnion
    struct PollNextEventUnion;
    // Nested type: OVR::OpenVR::CVRSystem::_GetControllerStatePacked
    class _GetControllerStatePacked;
    // Nested type: OVR::OpenVR::CVRSystem::GetControllerStateUnion
    struct GetControllerStateUnion;
    // Nested type: OVR::OpenVR::CVRSystem::_GetControllerStateWithPosePacked
    class _GetControllerStateWithPosePacked;
    // Nested type: OVR::OpenVR::CVRSystem::GetControllerStateWithPoseUnion
    struct GetControllerStateWithPoseUnion;
    // private OVR.OpenVR.IVRSystem FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRSystem FnTable;
    // Creating conversion operator: operator OVR::OpenVR::IVRSystem
    constexpr operator OVR::OpenVR::IVRSystem() const {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xED18DC
    static CVRSystem* New_ctor(System::IntPtr pInterface);
    // public System.Void GetRecommendedRenderTargetSize(System.UInt32 pnWidth, System.UInt32 pnHeight)
    // Offset: 0xED19F0
    void GetRecommendedRenderTargetSize(uint& pnWidth, uint& pnHeight);
    // public OVR.OpenVR.HmdMatrix44_t GetProjectionMatrix(OVR.OpenVR.EVREye eEye, System.Single fNearZ, System.Single fFarZ)
    // Offset: 0xED1A14
    OVR::OpenVR::HmdMatrix44_t GetProjectionMatrix(OVR::OpenVR::EVREye eEye, float fNearZ, float fFarZ);
    // public System.Void GetProjectionRaw(OVR.OpenVR.EVREye eEye, System.Single pfLeft, System.Single pfRight, System.Single pfTop, System.Single pfBottom)
    // Offset: 0xED1A30
    void GetProjectionRaw(OVR::OpenVR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom);
    // public System.Boolean ComputeDistortion(OVR.OpenVR.EVREye eEye, System.Single fU, System.Single fV, OVR.OpenVR.DistortionCoordinates_t pDistortionCoordinates)
    // Offset: 0xED1A5C
    bool ComputeDistortion(OVR::OpenVR::EVREye eEye, float fU, float fV, OVR::OpenVR::DistortionCoordinates_t& pDistortionCoordinates);
    // public OVR.OpenVR.HmdMatrix34_t GetEyeToHeadTransform(OVR.OpenVR.EVREye eEye)
    // Offset: 0xED1A78
    OVR::OpenVR::HmdMatrix34_t GetEyeToHeadTransform(OVR::OpenVR::EVREye eEye);
    // public System.Boolean GetTimeSinceLastVsync(System.Single pfSecondsSinceLastVsync, System.UInt64 pulFrameCounter)
    // Offset: 0xED1A94
    bool GetTimeSinceLastVsync(float& pfSecondsSinceLastVsync, uint64_t& pulFrameCounter);
    // public System.Int32 GetD3D9AdapterIndex()
    // Offset: 0xED1AB8
    int GetD3D9AdapterIndex();
    // public System.Void GetDXGIOutputInfo(System.Int32 pnAdapterIndex)
    // Offset: 0xED1AD4
    void GetDXGIOutputInfo(int& pnAdapterIndex);
    // public System.Void GetOutputDevice(System.UInt64 pnDevice, OVR.OpenVR.ETextureType textureType, System.IntPtr pInstance)
    // Offset: 0xED1AF4
    void GetOutputDevice(uint64_t& pnDevice, OVR::OpenVR::ETextureType textureType, System::IntPtr pInstance);
    // public System.Boolean IsDisplayOnDesktop()
    // Offset: 0xED1B14
    bool IsDisplayOnDesktop();
    // public System.Boolean SetDisplayVisibility(System.Boolean bIsVisibleOnDesktop)
    // Offset: 0xED1B30
    bool SetDisplayVisibility(bool bIsVisibleOnDesktop);
    // public System.Void GetDeviceToAbsoluteTrackingPose(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsToPhotonsFromNow, OVR.OpenVR.TrackedDevicePose_t[] pTrackedDevicePoseArray)
    // Offset: 0xED1B50
    void GetDeviceToAbsoluteTrackingPose(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, ::Array<OVR::OpenVR::TrackedDevicePose_t>* pTrackedDevicePoseArray);
    // public System.Void ResetSeatedZeroPose()
    // Offset: 0xED1B78
    void ResetSeatedZeroPose();
    // public OVR.OpenVR.HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose()
    // Offset: 0xED1B94
    OVR::OpenVR::HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
    // public OVR.OpenVR.HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose()
    // Offset: 0xED1BB0
    OVR::OpenVR::HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose();
    // public System.UInt32 GetSortedTrackedDeviceIndicesOfClass(OVR.OpenVR.ETrackedDeviceClass eTrackedDeviceClass, System.UInt32[] punTrackedDeviceIndexArray, System.UInt32 unRelativeToTrackedDeviceIndex)
    // Offset: 0xED1BCC
    uint GetSortedTrackedDeviceIndicesOfClass(OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::Array<uint>* punTrackedDeviceIndexArray, uint unRelativeToTrackedDeviceIndex);
    // public OVR.OpenVR.EDeviceActivityLevel GetTrackedDeviceActivityLevel(System.UInt32 unDeviceId)
    // Offset: 0xED1BF8
    OVR::OpenVR::EDeviceActivityLevel GetTrackedDeviceActivityLevel(uint unDeviceId);
    // public System.Void ApplyTransform(OVR.OpenVR.TrackedDevicePose_t pOutputPose, OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, OVR.OpenVR.HmdMatrix34_t pTransform)
    // Offset: 0xED1C14
    void ApplyTransform(OVR::OpenVR::TrackedDevicePose_t& pOutputPose, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, OVR::OpenVR::HmdMatrix34_t& pTransform);
    // public System.UInt32 GetTrackedDeviceIndexForControllerRole(OVR.OpenVR.ETrackedControllerRole unDeviceType)
    // Offset: 0xED1C30
    uint GetTrackedDeviceIndexForControllerRole(OVR::OpenVR::ETrackedControllerRole unDeviceType);
    // public OVR.OpenVR.ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(System.UInt32 unDeviceIndex)
    // Offset: 0xED1C4C
    OVR::OpenVR::ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(uint unDeviceIndex);
    // public OVR.OpenVR.ETrackedDeviceClass GetTrackedDeviceClass(System.UInt32 unDeviceIndex)
    // Offset: 0xED1C68
    OVR::OpenVR::ETrackedDeviceClass GetTrackedDeviceClass(uint unDeviceIndex);
    // public System.Boolean IsTrackedDeviceConnected(System.UInt32 unDeviceIndex)
    // Offset: 0xED1C84
    bool IsTrackedDeviceConnected(uint unDeviceIndex);
    // public System.Boolean GetBoolTrackedDeviceProperty(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0xED1CA0
    bool GetBoolTrackedDeviceProperty(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError);
    // public System.Single GetFloatTrackedDeviceProperty(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0xED1CBC
    float GetFloatTrackedDeviceProperty(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError);
    // public System.Int32 GetInt32TrackedDeviceProperty(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0xED1CD8
    int GetInt32TrackedDeviceProperty(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError);
    // public System.UInt64 GetUint64TrackedDeviceProperty(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0xED1CF4
    uint64_t GetUint64TrackedDeviceProperty(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError);
    // public OVR.OpenVR.HmdMatrix34_t GetMatrix34TrackedDeviceProperty(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0xED1D10
    OVR::OpenVR::HmdMatrix34_t GetMatrix34TrackedDeviceProperty(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError);
    // public System.UInt32 GetArrayTrackedDeviceProperty(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, System.UInt32 propType, System.IntPtr pBuffer, System.UInt32 unBufferSize, OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0xED1D2C
    uint GetArrayTrackedDeviceProperty(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, OVR::OpenVR::ETrackedPropertyError& pError);
    // public System.UInt32 GetStringTrackedDeviceProperty(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0xED1D48
    uint GetStringTrackedDeviceProperty(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::ETrackedPropertyError& pError);
    // public System.String GetPropErrorNameFromEnum(OVR.OpenVR.ETrackedPropertyError error)
    // Offset: 0xED1D64
    ::Il2CppString* GetPropErrorNameFromEnum(OVR::OpenVR::ETrackedPropertyError error);
    // public System.Boolean PollNextEvent(OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0xED1DF8
    bool PollNextEvent(OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent);
    // public System.Boolean PollNextEventWithPose(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0xED2204
    bool PollNextEventWithPose(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.String GetEventTypeNameFromEnum(OVR.OpenVR.EVREventType eType)
    // Offset: 0xED2220
    ::Il2CppString* GetEventTypeNameFromEnum(OVR::OpenVR::EVREventType eType);
    // public OVR.OpenVR.HiddenAreaMesh_t GetHiddenAreaMesh(OVR.OpenVR.EVREye eEye, OVR.OpenVR.EHiddenAreaMeshType type)
    // Offset: 0xED22B4
    OVR::OpenVR::HiddenAreaMesh_t GetHiddenAreaMesh(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type);
    // public System.Boolean GetControllerState(System.UInt32 unControllerDeviceIndex, OVR.OpenVR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize)
    // Offset: 0xED22D0
    bool GetControllerState(uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t& pControllerState, uint unControllerStateSize);
    // public System.Boolean GetControllerStateWithPose(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, OVR.OpenVR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0xED2734
    bool GetControllerStateWithPose(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t& pControllerState, uint unControllerStateSize, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.Void TriggerHapticPulse(System.UInt32 unControllerDeviceIndex, System.UInt32 unAxisId, System.UInt16 usDurationMicroSec)
    // Offset: 0xED2BF0
    void TriggerHapticPulse(uint unControllerDeviceIndex, uint unAxisId, uint16_t usDurationMicroSec);
    // public System.String GetButtonIdNameFromEnum(OVR.OpenVR.EVRButtonId eButtonId)
    // Offset: 0xED2C0C
    ::Il2CppString* GetButtonIdNameFromEnum(OVR::OpenVR::EVRButtonId eButtonId);
    // public System.String GetControllerAxisTypeNameFromEnum(OVR.OpenVR.EVRControllerAxisType eAxisType)
    // Offset: 0xED2CA0
    ::Il2CppString* GetControllerAxisTypeNameFromEnum(OVR::OpenVR::EVRControllerAxisType eAxisType);
    // public System.Boolean IsInputAvailable()
    // Offset: 0xED2D34
    bool IsInputAvailable();
    // public System.Boolean IsSteamVRDrawingControllers()
    // Offset: 0xED2D50
    bool IsSteamVRDrawingControllers();
    // public System.Boolean ShouldApplicationPause()
    // Offset: 0xED2D6C
    bool ShouldApplicationPause();
    // public System.Boolean ShouldApplicationReduceRenderingWork()
    // Offset: 0xED2D88
    bool ShouldApplicationReduceRenderingWork();
    // public System.UInt32 DriverDebugRequest(System.UInt32 unDeviceIndex, System.String pchRequest, System.Text.StringBuilder pchResponseBuffer, System.UInt32 unResponseBufferSize)
    // Offset: 0xED2DA4
    uint DriverDebugRequest(uint unDeviceIndex, ::Il2CppString* pchRequest, System::Text::StringBuilder* pchResponseBuffer, uint unResponseBufferSize);
    // public OVR.OpenVR.EVRFirmwareError PerformFirmwareUpdate(System.UInt32 unDeviceIndex)
    // Offset: 0xED2DC0
    OVR::OpenVR::EVRFirmwareError PerformFirmwareUpdate(uint unDeviceIndex);
    // public System.Void AcknowledgeQuit_Exiting()
    // Offset: 0xED2DDC
    void AcknowledgeQuit_Exiting();
    // public System.Void AcknowledgeQuit_UserPrompt()
    // Offset: 0xED2DF8
    void AcknowledgeQuit_UserPrompt();
  }; // OVR.OpenVR.CVRSystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSystem*, "OVR.OpenVR", "CVRSystem");
#pragma pack(pop)
