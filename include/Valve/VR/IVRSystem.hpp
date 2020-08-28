// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem
  struct IVRSystem : public System::ValueType {
    public:
    // Nested type: Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize
    class _GetRecommendedRenderTargetSize;
    // Nested type: Valve::VR::IVRSystem::_GetProjectionMatrix
    class _GetProjectionMatrix;
    // Nested type: Valve::VR::IVRSystem::_GetProjectionRaw
    class _GetProjectionRaw;
    // Nested type: Valve::VR::IVRSystem::_ComputeDistortion
    class _ComputeDistortion;
    // Nested type: Valve::VR::IVRSystem::_GetEyeToHeadTransform
    class _GetEyeToHeadTransform;
    // Nested type: Valve::VR::IVRSystem::_GetTimeSinceLastVsync
    class _GetTimeSinceLastVsync;
    // Nested type: Valve::VR::IVRSystem::_GetD3D9AdapterIndex
    class _GetD3D9AdapterIndex;
    // Nested type: Valve::VR::IVRSystem::_GetDXGIOutputInfo
    class _GetDXGIOutputInfo;
    // Nested type: Valve::VR::IVRSystem::_GetOutputDevice
    class _GetOutputDevice;
    // Nested type: Valve::VR::IVRSystem::_IsDisplayOnDesktop
    class _IsDisplayOnDesktop;
    // Nested type: Valve::VR::IVRSystem::_SetDisplayVisibility
    class _SetDisplayVisibility;
    // Nested type: Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose
    class _GetDeviceToAbsoluteTrackingPose;
    // Nested type: Valve::VR::IVRSystem::_ResetSeatedZeroPose
    class _ResetSeatedZeroPose;
    // Nested type: Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
    class _GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
    // Nested type: Valve::VR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose
    class _GetRawZeroPoseToStandingAbsoluteTrackingPose;
    // Nested type: Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass
    class _GetSortedTrackedDeviceIndicesOfClass;
    // Nested type: Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel
    class _GetTrackedDeviceActivityLevel;
    // Nested type: Valve::VR::IVRSystem::_ApplyTransform
    class _ApplyTransform;
    // Nested type: Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole
    class _GetTrackedDeviceIndexForControllerRole;
    // Nested type: Valve::VR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex
    class _GetControllerRoleForTrackedDeviceIndex;
    // Nested type: Valve::VR::IVRSystem::_GetTrackedDeviceClass
    class _GetTrackedDeviceClass;
    // Nested type: Valve::VR::IVRSystem::_IsTrackedDeviceConnected
    class _IsTrackedDeviceConnected;
    // Nested type: Valve::VR::IVRSystem::_GetBoolTrackedDeviceProperty
    class _GetBoolTrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty
    class _GetFloatTrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty
    class _GetInt32TrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty
    class _GetUint64TrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetMatrix34TrackedDeviceProperty
    class _GetMatrix34TrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty
    class _GetArrayTrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty
    class _GetStringTrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetPropErrorNameFromEnum
    class _GetPropErrorNameFromEnum;
    // Nested type: Valve::VR::IVRSystem::_PollNextEvent
    class _PollNextEvent;
    // Nested type: Valve::VR::IVRSystem::_PollNextEventWithPose
    class _PollNextEventWithPose;
    // Nested type: Valve::VR::IVRSystem::_GetEventTypeNameFromEnum
    class _GetEventTypeNameFromEnum;
    // Nested type: Valve::VR::IVRSystem::_GetHiddenAreaMesh
    class _GetHiddenAreaMesh;
    // Nested type: Valve::VR::IVRSystem::_GetControllerState
    class _GetControllerState;
    // Nested type: Valve::VR::IVRSystem::_GetControllerStateWithPose
    class _GetControllerStateWithPose;
    // Nested type: Valve::VR::IVRSystem::_TriggerHapticPulse
    class _TriggerHapticPulse;
    // Nested type: Valve::VR::IVRSystem::_GetButtonIdNameFromEnum
    class _GetButtonIdNameFromEnum;
    // Nested type: Valve::VR::IVRSystem::_GetControllerAxisTypeNameFromEnum
    class _GetControllerAxisTypeNameFromEnum;
    // Nested type: Valve::VR::IVRSystem::_IsInputAvailable
    class _IsInputAvailable;
    // Nested type: Valve::VR::IVRSystem::_IsSteamVRDrawingControllers
    class _IsSteamVRDrawingControllers;
    // Nested type: Valve::VR::IVRSystem::_ShouldApplicationPause
    class _ShouldApplicationPause;
    // Nested type: Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork
    class _ShouldApplicationReduceRenderingWork;
    // Nested type: Valve::VR::IVRSystem::_DriverDebugRequest
    class _DriverDebugRequest;
    // Nested type: Valve::VR::IVRSystem::_PerformFirmwareUpdate
    class _PerformFirmwareUpdate;
    // Nested type: Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting
    class _AcknowledgeQuit_Exiting;
    // Nested type: Valve::VR::IVRSystem::_AcknowledgeQuit_UserPrompt
    class _AcknowledgeQuit_UserPrompt;
    // Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize GetRecommendedRenderTargetSize
    // Offset: 0x0
    Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize;
    // Valve.VR.IVRSystem/_GetProjectionMatrix GetProjectionMatrix
    // Offset: 0x8
    Valve::VR::IVRSystem::_GetProjectionMatrix* GetProjectionMatrix;
    // Valve.VR.IVRSystem/_GetProjectionRaw GetProjectionRaw
    // Offset: 0x10
    Valve::VR::IVRSystem::_GetProjectionRaw* GetProjectionRaw;
    // Valve.VR.IVRSystem/_ComputeDistortion ComputeDistortion
    // Offset: 0x18
    Valve::VR::IVRSystem::_ComputeDistortion* ComputeDistortion;
    // Valve.VR.IVRSystem/_GetEyeToHeadTransform GetEyeToHeadTransform
    // Offset: 0x20
    Valve::VR::IVRSystem::_GetEyeToHeadTransform* GetEyeToHeadTransform;
    // Valve.VR.IVRSystem/_GetTimeSinceLastVsync GetTimeSinceLastVsync
    // Offset: 0x28
    Valve::VR::IVRSystem::_GetTimeSinceLastVsync* GetTimeSinceLastVsync;
    // Valve.VR.IVRSystem/_GetD3D9AdapterIndex GetD3D9AdapterIndex
    // Offset: 0x30
    Valve::VR::IVRSystem::_GetD3D9AdapterIndex* GetD3D9AdapterIndex;
    // Valve.VR.IVRSystem/_GetDXGIOutputInfo GetDXGIOutputInfo
    // Offset: 0x38
    Valve::VR::IVRSystem::_GetDXGIOutputInfo* GetDXGIOutputInfo;
    // Valve.VR.IVRSystem/_GetOutputDevice GetOutputDevice
    // Offset: 0x40
    Valve::VR::IVRSystem::_GetOutputDevice* GetOutputDevice;
    // Valve.VR.IVRSystem/_IsDisplayOnDesktop IsDisplayOnDesktop
    // Offset: 0x48
    Valve::VR::IVRSystem::_IsDisplayOnDesktop* IsDisplayOnDesktop;
    // Valve.VR.IVRSystem/_SetDisplayVisibility SetDisplayVisibility
    // Offset: 0x50
    Valve::VR::IVRSystem::_SetDisplayVisibility* SetDisplayVisibility;
    // Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose GetDeviceToAbsoluteTrackingPose
    // Offset: 0x58
    Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose;
    // Valve.VR.IVRSystem/_ResetSeatedZeroPose ResetSeatedZeroPose
    // Offset: 0x60
    Valve::VR::IVRSystem::_ResetSeatedZeroPose* ResetSeatedZeroPose;
    // Valve.VR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose GetSeatedZeroPoseToStandingAbsoluteTrackingPose
    // Offset: 0x68
    Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
    // Valve.VR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose GetRawZeroPoseToStandingAbsoluteTrackingPose
    // Offset: 0x70
    Valve::VR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose;
    // Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass GetSortedTrackedDeviceIndicesOfClass
    // Offset: 0x78
    Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass;
    // Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel GetTrackedDeviceActivityLevel
    // Offset: 0x80
    Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel;
    // Valve.VR.IVRSystem/_ApplyTransform ApplyTransform
    // Offset: 0x88
    Valve::VR::IVRSystem::_ApplyTransform* ApplyTransform;
    // Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole GetTrackedDeviceIndexForControllerRole
    // Offset: 0x90
    Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole;
    // Valve.VR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex GetControllerRoleForTrackedDeviceIndex
    // Offset: 0x98
    Valve::VR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex;
    // Valve.VR.IVRSystem/_GetTrackedDeviceClass GetTrackedDeviceClass
    // Offset: 0xA0
    Valve::VR::IVRSystem::_GetTrackedDeviceClass* GetTrackedDeviceClass;
    // Valve.VR.IVRSystem/_IsTrackedDeviceConnected IsTrackedDeviceConnected
    // Offset: 0xA8
    Valve::VR::IVRSystem::_IsTrackedDeviceConnected* IsTrackedDeviceConnected;
    // Valve.VR.IVRSystem/_GetBoolTrackedDeviceProperty GetBoolTrackedDeviceProperty
    // Offset: 0xB0
    Valve::VR::IVRSystem::_GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty;
    // Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty GetFloatTrackedDeviceProperty
    // Offset: 0xB8
    Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty;
    // Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty GetInt32TrackedDeviceProperty
    // Offset: 0xC0
    Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty;
    // Valve.VR.IVRSystem/_GetUint64TrackedDeviceProperty GetUint64TrackedDeviceProperty
    // Offset: 0xC8
    Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty;
    // Valve.VR.IVRSystem/_GetMatrix34TrackedDeviceProperty GetMatrix34TrackedDeviceProperty
    // Offset: 0xD0
    Valve::VR::IVRSystem::_GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty;
    // Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty GetArrayTrackedDeviceProperty
    // Offset: 0xD8
    Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty;
    // Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty GetStringTrackedDeviceProperty
    // Offset: 0xE0
    Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty;
    // Valve.VR.IVRSystem/_GetPropErrorNameFromEnum GetPropErrorNameFromEnum
    // Offset: 0xE8
    Valve::VR::IVRSystem::_GetPropErrorNameFromEnum* GetPropErrorNameFromEnum;
    // Valve.VR.IVRSystem/_PollNextEvent PollNextEvent
    // Offset: 0xF0
    Valve::VR::IVRSystem::_PollNextEvent* PollNextEvent;
    // Valve.VR.IVRSystem/_PollNextEventWithPose PollNextEventWithPose
    // Offset: 0xF8
    Valve::VR::IVRSystem::_PollNextEventWithPose* PollNextEventWithPose;
    // Valve.VR.IVRSystem/_GetEventTypeNameFromEnum GetEventTypeNameFromEnum
    // Offset: 0x100
    Valve::VR::IVRSystem::_GetEventTypeNameFromEnum* GetEventTypeNameFromEnum;
    // Valve.VR.IVRSystem/_GetHiddenAreaMesh GetHiddenAreaMesh
    // Offset: 0x108
    Valve::VR::IVRSystem::_GetHiddenAreaMesh* GetHiddenAreaMesh;
    // Valve.VR.IVRSystem/_GetControllerState GetControllerState
    // Offset: 0x110
    Valve::VR::IVRSystem::_GetControllerState* GetControllerState;
    // Valve.VR.IVRSystem/_GetControllerStateWithPose GetControllerStateWithPose
    // Offset: 0x118
    Valve::VR::IVRSystem::_GetControllerStateWithPose* GetControllerStateWithPose;
    // Valve.VR.IVRSystem/_TriggerHapticPulse TriggerHapticPulse
    // Offset: 0x120
    Valve::VR::IVRSystem::_TriggerHapticPulse* TriggerHapticPulse;
    // Valve.VR.IVRSystem/_GetButtonIdNameFromEnum GetButtonIdNameFromEnum
    // Offset: 0x128
    Valve::VR::IVRSystem::_GetButtonIdNameFromEnum* GetButtonIdNameFromEnum;
    // Valve.VR.IVRSystem/_GetControllerAxisTypeNameFromEnum GetControllerAxisTypeNameFromEnum
    // Offset: 0x130
    Valve::VR::IVRSystem::_GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum;
    // Valve.VR.IVRSystem/_IsInputAvailable IsInputAvailable
    // Offset: 0x138
    Valve::VR::IVRSystem::_IsInputAvailable* IsInputAvailable;
    // Valve.VR.IVRSystem/_IsSteamVRDrawingControllers IsSteamVRDrawingControllers
    // Offset: 0x140
    Valve::VR::IVRSystem::_IsSteamVRDrawingControllers* IsSteamVRDrawingControllers;
    // Valve.VR.IVRSystem/_ShouldApplicationPause ShouldApplicationPause
    // Offset: 0x148
    Valve::VR::IVRSystem::_ShouldApplicationPause* ShouldApplicationPause;
    // Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork ShouldApplicationReduceRenderingWork
    // Offset: 0x150
    Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork;
    // Valve.VR.IVRSystem/_DriverDebugRequest DriverDebugRequest
    // Offset: 0x158
    Valve::VR::IVRSystem::_DriverDebugRequest* DriverDebugRequest;
    // Valve.VR.IVRSystem/_PerformFirmwareUpdate PerformFirmwareUpdate
    // Offset: 0x160
    Valve::VR::IVRSystem::_PerformFirmwareUpdate* PerformFirmwareUpdate;
    // Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting AcknowledgeQuit_Exiting
    // Offset: 0x168
    Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting;
    // Valve.VR.IVRSystem/_AcknowledgeQuit_UserPrompt AcknowledgeQuit_UserPrompt
    // Offset: 0x170
    Valve::VR::IVRSystem::_AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt;
    // Creating value type constructor for type: IVRSystem
    constexpr IVRSystem(Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize_ = {}, Valve::VR::IVRSystem::_GetProjectionMatrix* GetProjectionMatrix_ = {}, Valve::VR::IVRSystem::_GetProjectionRaw* GetProjectionRaw_ = {}, Valve::VR::IVRSystem::_ComputeDistortion* ComputeDistortion_ = {}, Valve::VR::IVRSystem::_GetEyeToHeadTransform* GetEyeToHeadTransform_ = {}, Valve::VR::IVRSystem::_GetTimeSinceLastVsync* GetTimeSinceLastVsync_ = {}, Valve::VR::IVRSystem::_GetD3D9AdapterIndex* GetD3D9AdapterIndex_ = {}, Valve::VR::IVRSystem::_GetDXGIOutputInfo* GetDXGIOutputInfo_ = {}, Valve::VR::IVRSystem::_GetOutputDevice* GetOutputDevice_ = {}, Valve::VR::IVRSystem::_IsDisplayOnDesktop* IsDisplayOnDesktop_ = {}, Valve::VR::IVRSystem::_SetDisplayVisibility* SetDisplayVisibility_ = {}, Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose_ = {}, Valve::VR::IVRSystem::_ResetSeatedZeroPose* ResetSeatedZeroPose_ = {}, Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose_ = {}, Valve::VR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose_ = {}, Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass_ = {}, Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel_ = {}, Valve::VR::IVRSystem::_ApplyTransform* ApplyTransform_ = {}, Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole_ = {}, Valve::VR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex_ = {}, Valve::VR::IVRSystem::_GetTrackedDeviceClass* GetTrackedDeviceClass_ = {}, Valve::VR::IVRSystem::_IsTrackedDeviceConnected* IsTrackedDeviceConnected_ = {}, Valve::VR::IVRSystem::_GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetPropErrorNameFromEnum* GetPropErrorNameFromEnum_ = {}, Valve::VR::IVRSystem::_PollNextEvent* PollNextEvent_ = {}, Valve::VR::IVRSystem::_PollNextEventWithPose* PollNextEventWithPose_ = {}, Valve::VR::IVRSystem::_GetEventTypeNameFromEnum* GetEventTypeNameFromEnum_ = {}, Valve::VR::IVRSystem::_GetHiddenAreaMesh* GetHiddenAreaMesh_ = {}, Valve::VR::IVRSystem::_GetControllerState* GetControllerState_ = {}, Valve::VR::IVRSystem::_GetControllerStateWithPose* GetControllerStateWithPose_ = {}, Valve::VR::IVRSystem::_TriggerHapticPulse* TriggerHapticPulse_ = {}, Valve::VR::IVRSystem::_GetButtonIdNameFromEnum* GetButtonIdNameFromEnum_ = {}, Valve::VR::IVRSystem::_GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum_ = {}, Valve::VR::IVRSystem::_IsInputAvailable* IsInputAvailable_ = {}, Valve::VR::IVRSystem::_IsSteamVRDrawingControllers* IsSteamVRDrawingControllers_ = {}, Valve::VR::IVRSystem::_ShouldApplicationPause* ShouldApplicationPause_ = {}, Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork_ = {}, Valve::VR::IVRSystem::_DriverDebugRequest* DriverDebugRequest_ = {}, Valve::VR::IVRSystem::_PerformFirmwareUpdate* PerformFirmwareUpdate_ = {}, Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting_ = {}, Valve::VR::IVRSystem::_AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt_ = {}) : GetRecommendedRenderTargetSize{GetRecommendedRenderTargetSize_}, GetProjectionMatrix{GetProjectionMatrix_}, GetProjectionRaw{GetProjectionRaw_}, ComputeDistortion{ComputeDistortion_}, GetEyeToHeadTransform{GetEyeToHeadTransform_}, GetTimeSinceLastVsync{GetTimeSinceLastVsync_}, GetD3D9AdapterIndex{GetD3D9AdapterIndex_}, GetDXGIOutputInfo{GetDXGIOutputInfo_}, GetOutputDevice{GetOutputDevice_}, IsDisplayOnDesktop{IsDisplayOnDesktop_}, SetDisplayVisibility{SetDisplayVisibility_}, GetDeviceToAbsoluteTrackingPose{GetDeviceToAbsoluteTrackingPose_}, ResetSeatedZeroPose{ResetSeatedZeroPose_}, GetSeatedZeroPoseToStandingAbsoluteTrackingPose{GetSeatedZeroPoseToStandingAbsoluteTrackingPose_}, GetRawZeroPoseToStandingAbsoluteTrackingPose{GetRawZeroPoseToStandingAbsoluteTrackingPose_}, GetSortedTrackedDeviceIndicesOfClass{GetSortedTrackedDeviceIndicesOfClass_}, GetTrackedDeviceActivityLevel{GetTrackedDeviceActivityLevel_}, ApplyTransform{ApplyTransform_}, GetTrackedDeviceIndexForControllerRole{GetTrackedDeviceIndexForControllerRole_}, GetControllerRoleForTrackedDeviceIndex{GetControllerRoleForTrackedDeviceIndex_}, GetTrackedDeviceClass{GetTrackedDeviceClass_}, IsTrackedDeviceConnected{IsTrackedDeviceConnected_}, GetBoolTrackedDeviceProperty{GetBoolTrackedDeviceProperty_}, GetFloatTrackedDeviceProperty{GetFloatTrackedDeviceProperty_}, GetInt32TrackedDeviceProperty{GetInt32TrackedDeviceProperty_}, GetUint64TrackedDeviceProperty{GetUint64TrackedDeviceProperty_}, GetMatrix34TrackedDeviceProperty{GetMatrix34TrackedDeviceProperty_}, GetArrayTrackedDeviceProperty{GetArrayTrackedDeviceProperty_}, GetStringTrackedDeviceProperty{GetStringTrackedDeviceProperty_}, GetPropErrorNameFromEnum{GetPropErrorNameFromEnum_}, PollNextEvent{PollNextEvent_}, PollNextEventWithPose{PollNextEventWithPose_}, GetEventTypeNameFromEnum{GetEventTypeNameFromEnum_}, GetHiddenAreaMesh{GetHiddenAreaMesh_}, GetControllerState{GetControllerState_}, GetControllerStateWithPose{GetControllerStateWithPose_}, TriggerHapticPulse{TriggerHapticPulse_}, GetButtonIdNameFromEnum{GetButtonIdNameFromEnum_}, GetControllerAxisTypeNameFromEnum{GetControllerAxisTypeNameFromEnum_}, IsInputAvailable{IsInputAvailable_}, IsSteamVRDrawingControllers{IsSteamVRDrawingControllers_}, ShouldApplicationPause{ShouldApplicationPause_}, ShouldApplicationReduceRenderingWork{ShouldApplicationReduceRenderingWork_}, DriverDebugRequest{DriverDebugRequest_}, PerformFirmwareUpdate{PerformFirmwareUpdate_}, AcknowledgeQuit_Exiting{AcknowledgeQuit_Exiting_}, AcknowledgeQuit_UserPrompt{AcknowledgeQuit_UserPrompt_} {}
  }; // Valve.VR.IVRSystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem, "Valve.VR", "IVRSystem");
#pragma pack(pop)
