// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.TrackedDevicePose_t
#include "OVR/OpenVR/TrackedDevicePose_t.hpp"
// Including type: OVR.OpenVR.Texture_t
#include "OVR/OpenVR/Texture_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
  // Forward declaring type: EVRSubmitFlags
  struct EVRSubmitFlags;
  // Forward declaring type: Compositor_FrameTiming
  struct Compositor_FrameTiming;
  // Forward declaring type: Compositor_CumulativeStats
  struct Compositor_CumulativeStats;
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
  // Forward declaring type: EVRCompositorTimingMode
  struct EVRCompositorTimingMode;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x168
  // Autogenerated type: OVR.OpenVR.CVRCompositor
  // [] Offset: FFFFFFFF
  class CVRCompositor : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRCompositor FnTable
    // Size: 0x158
    // Offset: 0x10
    OVR::OpenVR::IVRCompositor FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRCompositor) == 0x158);
    // Creating value type constructor for type: CVRCompositor
    CVRCompositor(OVR::OpenVR::IVRCompositor FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRCompositor
    constexpr operator OVR::OpenVR::IVRCompositor() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x11F49F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRCompositor* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRCompositor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRCompositor*, creationType>(pInterface)));
    }
    // public System.Void SetTrackingSpace(OVR.OpenVR.ETrackingUniverseOrigin eOrigin)
    // Offset: 0x11F4B04
    void SetTrackingSpace(OVR::OpenVR::ETrackingUniverseOrigin eOrigin);
    // public OVR.OpenVR.ETrackingUniverseOrigin GetTrackingSpace()
    // Offset: 0x11F4B20
    OVR::OpenVR::ETrackingUniverseOrigin GetTrackingSpace();
    // public OVR.OpenVR.EVRCompositorError WaitGetPoses(OVR.OpenVR.TrackedDevicePose_t[] pRenderPoseArray, OVR.OpenVR.TrackedDevicePose_t[] pGamePoseArray)
    // Offset: 0x11F4B3C
    OVR::OpenVR::EVRCompositorError WaitGetPoses(::Array<OVR::OpenVR::TrackedDevicePose_t>* pRenderPoseArray, ::Array<OVR::OpenVR::TrackedDevicePose_t>* pGamePoseArray);
    // public OVR.OpenVR.EVRCompositorError GetLastPoses(OVR.OpenVR.TrackedDevicePose_t[] pRenderPoseArray, OVR.OpenVR.TrackedDevicePose_t[] pGamePoseArray)
    // Offset: 0x11F4B70
    OVR::OpenVR::EVRCompositorError GetLastPoses(::Array<OVR::OpenVR::TrackedDevicePose_t>* pRenderPoseArray, ::Array<OVR::OpenVR::TrackedDevicePose_t>* pGamePoseArray);
    // public OVR.OpenVR.EVRCompositorError GetLastPoseForTrackedDeviceIndex(System.UInt32 unDeviceIndex, ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pOutputGamePose)
    // Offset: 0x11F4BA4
    OVR::OpenVR::EVRCompositorError GetLastPoseForTrackedDeviceIndex(uint unDeviceIndex, OVR::OpenVR::TrackedDevicePose_t& pOutputPose, OVR::OpenVR::TrackedDevicePose_t& pOutputGamePose);
    // public OVR.OpenVR.EVRCompositorError Submit(OVR.OpenVR.EVREye eEye, ref OVR.OpenVR.Texture_t pTexture, ref OVR.OpenVR.VRTextureBounds_t pBounds, OVR.OpenVR.EVRSubmitFlags nSubmitFlags)
    // Offset: 0x11F4BC0
    OVR::OpenVR::EVRCompositorError Submit(OVR::OpenVR::EVREye eEye, OVR::OpenVR::Texture_t& pTexture, OVR::OpenVR::VRTextureBounds_t& pBounds, OVR::OpenVR::EVRSubmitFlags nSubmitFlags);
    // public System.Void ClearLastSubmittedFrame()
    // Offset: 0x11F4BDC
    void ClearLastSubmittedFrame();
    // public System.Void PostPresentHandoff()
    // Offset: 0x11F4BF8
    void PostPresentHandoff();
    // public System.Boolean GetFrameTiming(ref OVR.OpenVR.Compositor_FrameTiming pTiming, System.UInt32 unFramesAgo)
    // Offset: 0x11F4C14
    bool GetFrameTiming(OVR::OpenVR::Compositor_FrameTiming& pTiming, uint unFramesAgo);
    // public System.UInt32 GetFrameTimings(ref OVR.OpenVR.Compositor_FrameTiming pTiming, System.UInt32 nFrames)
    // Offset: 0x11F4C30
    uint GetFrameTimings(OVR::OpenVR::Compositor_FrameTiming& pTiming, uint nFrames);
    // public System.Single GetFrameTimeRemaining()
    // Offset: 0x11F4C4C
    float GetFrameTimeRemaining();
    // public System.Void GetCumulativeStats(ref OVR.OpenVR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes)
    // Offset: 0x11F4C68
    void GetCumulativeStats(OVR::OpenVR::Compositor_CumulativeStats& pStats, uint nStatsSizeInBytes);
    // public System.Void FadeToColor(System.Single fSeconds, System.Single fRed, System.Single fGreen, System.Single fBlue, System.Single fAlpha, System.Boolean bBackground)
    // Offset: 0x11F4C84
    void FadeToColor(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground);
    // public OVR.OpenVR.HmdColor_t GetCurrentFadeColor(System.Boolean bBackground)
    // Offset: 0x11F4CA4
    OVR::OpenVR::HmdColor_t GetCurrentFadeColor(bool bBackground);
    // public System.Void FadeGrid(System.Single fSeconds, System.Boolean bFadeIn)
    // Offset: 0x11F4CC4
    void FadeGrid(float fSeconds, bool bFadeIn);
    // public System.Single GetCurrentGridAlpha()
    // Offset: 0x11F4CE4
    float GetCurrentGridAlpha();
    // public OVR.OpenVR.EVRCompositorError SetSkyboxOverride(OVR.OpenVR.Texture_t[] pTextures)
    // Offset: 0x11F4D00
    OVR::OpenVR::EVRCompositorError SetSkyboxOverride(::Array<OVR::OpenVR::Texture_t>* pTextures);
    // public System.Void ClearSkyboxOverride()
    // Offset: 0x11F4D28
    void ClearSkyboxOverride();
    // public System.Void CompositorBringToFront()
    // Offset: 0x11F4D44
    void CompositorBringToFront();
    // public System.Void CompositorGoToBack()
    // Offset: 0x11F4D60
    void CompositorGoToBack();
    // public System.Void CompositorQuit()
    // Offset: 0x11F4D7C
    void CompositorQuit();
    // public System.Boolean IsFullscreen()
    // Offset: 0x11F4D98
    bool IsFullscreen();
    // public System.UInt32 GetCurrentSceneFocusProcess()
    // Offset: 0x11F4DB4
    uint GetCurrentSceneFocusProcess();
    // public System.UInt32 GetLastFrameRenderer()
    // Offset: 0x11F4DD0
    uint GetLastFrameRenderer();
    // public System.Boolean CanRenderScene()
    // Offset: 0x11F4DEC
    bool CanRenderScene();
    // public System.Void ShowMirrorWindow()
    // Offset: 0x11F4E08
    void ShowMirrorWindow();
    // public System.Void HideMirrorWindow()
    // Offset: 0x11F4E24
    void HideMirrorWindow();
    // public System.Boolean IsMirrorWindowVisible()
    // Offset: 0x11F4E40
    bool IsMirrorWindowVisible();
    // public System.Void CompositorDumpImages()
    // Offset: 0x11F4E5C
    void CompositorDumpImages();
    // public System.Boolean ShouldAppRenderWithLowResources()
    // Offset: 0x11F4E78
    bool ShouldAppRenderWithLowResources();
    // public System.Void ForceInterleavedReprojectionOn(System.Boolean bOverride)
    // Offset: 0x11F4E94
    void ForceInterleavedReprojectionOn(bool bOverride);
    // public System.Void ForceReconnectProcess()
    // Offset: 0x11F4EB4
    void ForceReconnectProcess();
    // public System.Void SuspendRendering(System.Boolean bSuspend)
    // Offset: 0x11F4ED0
    void SuspendRendering(bool bSuspend);
    // public OVR.OpenVR.EVRCompositorError GetMirrorTextureD3D11(OVR.OpenVR.EVREye eEye, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView)
    // Offset: 0x11F4EF0
    OVR::OpenVR::EVRCompositorError GetMirrorTextureD3D11(OVR::OpenVR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView);
    // public System.Void ReleaseMirrorTextureD3D11(System.IntPtr pD3D11ShaderResourceView)
    // Offset: 0x11F4F0C
    void ReleaseMirrorTextureD3D11(System::IntPtr pD3D11ShaderResourceView);
    // public OVR.OpenVR.EVRCompositorError GetMirrorTextureGL(OVR.OpenVR.EVREye eEye, ref System.UInt32 pglTextureId, System.IntPtr pglSharedTextureHandle)
    // Offset: 0x11F4F28
    OVR::OpenVR::EVRCompositorError GetMirrorTextureGL(OVR::OpenVR::EVREye eEye, uint& pglTextureId, System::IntPtr pglSharedTextureHandle);
    // public System.Boolean ReleaseSharedGLTexture(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle)
    // Offset: 0x11F4F48
    bool ReleaseSharedGLTexture(uint glTextureId, System::IntPtr glSharedTextureHandle);
    // public System.Void LockGLSharedTextureForAccess(System.IntPtr glSharedTextureHandle)
    // Offset: 0x11F4F64
    void LockGLSharedTextureForAccess(System::IntPtr glSharedTextureHandle);
    // public System.Void UnlockGLSharedTextureForAccess(System.IntPtr glSharedTextureHandle)
    // Offset: 0x11F4F80
    void UnlockGLSharedTextureForAccess(System::IntPtr glSharedTextureHandle);
    // public System.UInt32 GetVulkanInstanceExtensionsRequired(System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x11F4F9C
    uint GetVulkanInstanceExtensionsRequired(System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.UInt32 GetVulkanDeviceExtensionsRequired(System.IntPtr pPhysicalDevice, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x11F4FB8
    uint GetVulkanDeviceExtensionsRequired(System::IntPtr pPhysicalDevice, System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.Void SetExplicitTimingMode(OVR.OpenVR.EVRCompositorTimingMode eTimingMode)
    // Offset: 0x11F4FD4
    void SetExplicitTimingMode(OVR::OpenVR::EVRCompositorTimingMode eTimingMode);
    // public OVR.OpenVR.EVRCompositorError SubmitExplicitTimingData()
    // Offset: 0x11F4FF0
    OVR::OpenVR::EVRCompositorError SubmitExplicitTimingData();
  }; // OVR.OpenVR.CVRCompositor
  static check_size<sizeof(CVRCompositor), 16 + sizeof(OVR::OpenVR::IVRCompositor)> __OVR_OpenVR_CVRCompositorSizeCheck;
  static_assert(sizeof(CVRCompositor) == 0x168);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRCompositor*, "OVR.OpenVR", "CVRCompositor");
#pragma pack(pop)
