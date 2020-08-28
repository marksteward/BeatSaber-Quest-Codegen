// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: Texture_t
  struct Texture_t;
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRCompositor
  class CVRCompositor : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRCompositor FnTable
    // Offset: 0x10
    Valve::VR::IVRCompositor FnTable;
    // Creating conversion operator: operator Valve::VR::IVRCompositor
    constexpr operator Valve::VR::IVRCompositor() const {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFE530C
    static CVRCompositor* New_ctor(System::IntPtr pInterface);
    // public System.Void SetTrackingSpace(Valve.VR.ETrackingUniverseOrigin eOrigin)
    // Offset: 0xFE5420
    void SetTrackingSpace(Valve::VR::ETrackingUniverseOrigin eOrigin);
    // public Valve.VR.ETrackingUniverseOrigin GetTrackingSpace()
    // Offset: 0xFE543C
    Valve::VR::ETrackingUniverseOrigin GetTrackingSpace();
    // public Valve.VR.EVRCompositorError WaitGetPoses(Valve.VR.TrackedDevicePose_t[] pRenderPoseArray, Valve.VR.TrackedDevicePose_t[] pGamePoseArray)
    // Offset: 0xFE5458
    Valve::VR::EVRCompositorError WaitGetPoses(::Array<Valve::VR::TrackedDevicePose_t>* pRenderPoseArray, ::Array<Valve::VR::TrackedDevicePose_t>* pGamePoseArray);
    // public Valve.VR.EVRCompositorError GetLastPoses(Valve.VR.TrackedDevicePose_t[] pRenderPoseArray, Valve.VR.TrackedDevicePose_t[] pGamePoseArray)
    // Offset: 0xFE548C
    Valve::VR::EVRCompositorError GetLastPoses(::Array<Valve::VR::TrackedDevicePose_t>* pRenderPoseArray, ::Array<Valve::VR::TrackedDevicePose_t>* pGamePoseArray);
    // public Valve.VR.EVRCompositorError GetLastPoseForTrackedDeviceIndex(System.UInt32 unDeviceIndex, Valve.VR.TrackedDevicePose_t pOutputPose, Valve.VR.TrackedDevicePose_t pOutputGamePose)
    // Offset: 0xFE54C0
    Valve::VR::EVRCompositorError GetLastPoseForTrackedDeviceIndex(uint unDeviceIndex, Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose);
    // public Valve.VR.EVRCompositorError Submit(Valve.VR.EVREye eEye, Valve.VR.Texture_t pTexture, Valve.VR.VRTextureBounds_t pBounds, Valve.VR.EVRSubmitFlags nSubmitFlags)
    // Offset: 0xFE54DC
    Valve::VR::EVRCompositorError Submit(Valve::VR::EVREye eEye, Valve::VR::Texture_t& pTexture, Valve::VR::VRTextureBounds_t& pBounds, Valve::VR::EVRSubmitFlags nSubmitFlags);
    // public System.Void ClearLastSubmittedFrame()
    // Offset: 0xFE54F8
    void ClearLastSubmittedFrame();
    // public System.Void PostPresentHandoff()
    // Offset: 0xFE5514
    void PostPresentHandoff();
    // public System.Boolean GetFrameTiming(Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 unFramesAgo)
    // Offset: 0xFE5530
    bool GetFrameTiming(Valve::VR::Compositor_FrameTiming& pTiming, uint unFramesAgo);
    // public System.UInt32 GetFrameTimings(Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 nFrames)
    // Offset: 0xFE554C
    uint GetFrameTimings(Valve::VR::Compositor_FrameTiming& pTiming, uint nFrames);
    // public System.Single GetFrameTimeRemaining()
    // Offset: 0xFE5568
    float GetFrameTimeRemaining();
    // public System.Void GetCumulativeStats(Valve.VR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes)
    // Offset: 0xFE5584
    void GetCumulativeStats(Valve::VR::Compositor_CumulativeStats& pStats, uint nStatsSizeInBytes);
    // public System.Void FadeToColor(System.Single fSeconds, System.Single fRed, System.Single fGreen, System.Single fBlue, System.Single fAlpha, System.Boolean bBackground)
    // Offset: 0xFE55A0
    void FadeToColor(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground);
    // public Valve.VR.HmdColor_t GetCurrentFadeColor(System.Boolean bBackground)
    // Offset: 0xFE55C0
    Valve::VR::HmdColor_t GetCurrentFadeColor(bool bBackground);
    // public System.Void FadeGrid(System.Single fSeconds, System.Boolean bFadeIn)
    // Offset: 0xFE55E0
    void FadeGrid(float fSeconds, bool bFadeIn);
    // public System.Single GetCurrentGridAlpha()
    // Offset: 0xFE5600
    float GetCurrentGridAlpha();
    // public Valve.VR.EVRCompositorError SetSkyboxOverride(Valve.VR.Texture_t[] pTextures)
    // Offset: 0xFE561C
    Valve::VR::EVRCompositorError SetSkyboxOverride(::Array<Valve::VR::Texture_t>* pTextures);
    // public System.Void ClearSkyboxOverride()
    // Offset: 0xFE5644
    void ClearSkyboxOverride();
    // public System.Void CompositorBringToFront()
    // Offset: 0xFE5660
    void CompositorBringToFront();
    // public System.Void CompositorGoToBack()
    // Offset: 0xFE567C
    void CompositorGoToBack();
    // public System.Void CompositorQuit()
    // Offset: 0xFE5698
    void CompositorQuit();
    // public System.Boolean IsFullscreen()
    // Offset: 0xFE56B4
    bool IsFullscreen();
    // public System.UInt32 GetCurrentSceneFocusProcess()
    // Offset: 0xFE56D0
    uint GetCurrentSceneFocusProcess();
    // public System.UInt32 GetLastFrameRenderer()
    // Offset: 0xFE56EC
    uint GetLastFrameRenderer();
    // public System.Boolean CanRenderScene()
    // Offset: 0xFE5708
    bool CanRenderScene();
    // public System.Void ShowMirrorWindow()
    // Offset: 0xFE5724
    void ShowMirrorWindow();
    // public System.Void HideMirrorWindow()
    // Offset: 0xFE5740
    void HideMirrorWindow();
    // public System.Boolean IsMirrorWindowVisible()
    // Offset: 0xFE575C
    bool IsMirrorWindowVisible();
    // public System.Void CompositorDumpImages()
    // Offset: 0xFE5778
    void CompositorDumpImages();
    // public System.Boolean ShouldAppRenderWithLowResources()
    // Offset: 0xFE5794
    bool ShouldAppRenderWithLowResources();
    // public System.Void ForceInterleavedReprojectionOn(System.Boolean bOverride)
    // Offset: 0xFE57B0
    void ForceInterleavedReprojectionOn(bool bOverride);
    // public System.Void ForceReconnectProcess()
    // Offset: 0xFE57D0
    void ForceReconnectProcess();
    // public System.Void SuspendRendering(System.Boolean bSuspend)
    // Offset: 0xFE57EC
    void SuspendRendering(bool bSuspend);
    // public Valve.VR.EVRCompositorError GetMirrorTextureD3D11(Valve.VR.EVREye eEye, System.IntPtr pD3D11DeviceOrResource, System.IntPtr ppD3D11ShaderResourceView)
    // Offset: 0xFE580C
    Valve::VR::EVRCompositorError GetMirrorTextureD3D11(Valve::VR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView);
    // public System.Void ReleaseMirrorTextureD3D11(System.IntPtr pD3D11ShaderResourceView)
    // Offset: 0xFE5828
    void ReleaseMirrorTextureD3D11(System::IntPtr pD3D11ShaderResourceView);
    // public Valve.VR.EVRCompositorError GetMirrorTextureGL(Valve.VR.EVREye eEye, System.UInt32 pglTextureId, System.IntPtr pglSharedTextureHandle)
    // Offset: 0xFE5844
    Valve::VR::EVRCompositorError GetMirrorTextureGL(Valve::VR::EVREye eEye, uint& pglTextureId, System::IntPtr pglSharedTextureHandle);
    // public System.Boolean ReleaseSharedGLTexture(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle)
    // Offset: 0xFE5864
    bool ReleaseSharedGLTexture(uint glTextureId, System::IntPtr glSharedTextureHandle);
    // public System.Void LockGLSharedTextureForAccess(System.IntPtr glSharedTextureHandle)
    // Offset: 0xFE5880
    void LockGLSharedTextureForAccess(System::IntPtr glSharedTextureHandle);
    // public System.Void UnlockGLSharedTextureForAccess(System.IntPtr glSharedTextureHandle)
    // Offset: 0xFE589C
    void UnlockGLSharedTextureForAccess(System::IntPtr glSharedTextureHandle);
    // public System.UInt32 GetVulkanInstanceExtensionsRequired(System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0xFE58B8
    uint GetVulkanInstanceExtensionsRequired(System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.UInt32 GetVulkanDeviceExtensionsRequired(System.IntPtr pPhysicalDevice, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0xFE58D4
    uint GetVulkanDeviceExtensionsRequired(System::IntPtr pPhysicalDevice, System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.Void SetExplicitTimingMode(Valve.VR.EVRCompositorTimingMode eTimingMode)
    // Offset: 0xFE58F0
    void SetExplicitTimingMode(Valve::VR::EVRCompositorTimingMode eTimingMode);
    // public Valve.VR.EVRCompositorError SubmitExplicitTimingData()
    // Offset: 0xFE590C
    Valve::VR::EVRCompositorError SubmitExplicitTimingData();
  }; // Valve.VR.CVRCompositor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRCompositor*, "Valve.VR", "CVRCompositor");
#pragma pack(pop)
