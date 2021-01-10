// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: Valve.VR.Texture_t
#include "Valve/VR/Texture_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x168
  // Autogenerated type: Valve.VR.CVRCompositor
  // [] Offset: FFFFFFFF
  class CVRCompositor : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRCompositor FnTable
    // Size: 0x158
    // Offset: 0x10
    Valve::VR::IVRCompositor FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor) == 0x158);
    // Creating value type constructor for type: CVRCompositor
    CVRCompositor(Valve::VR::IVRCompositor FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRCompositor
    constexpr operator Valve::VR::IVRCompositor() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x13692BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRCompositor* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRCompositor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRCompositor*, creationType>(pInterface)));
    }
    // public System.Void SetTrackingSpace(Valve.VR.ETrackingUniverseOrigin eOrigin)
    // Offset: 0x13693D0
    void SetTrackingSpace(Valve::VR::ETrackingUniverseOrigin eOrigin);
    // public Valve.VR.ETrackingUniverseOrigin GetTrackingSpace()
    // Offset: 0x13693EC
    Valve::VR::ETrackingUniverseOrigin GetTrackingSpace();
    // public Valve.VR.EVRCompositorError WaitGetPoses(Valve.VR.TrackedDevicePose_t[] pRenderPoseArray, Valve.VR.TrackedDevicePose_t[] pGamePoseArray)
    // Offset: 0x1369408
    Valve::VR::EVRCompositorError WaitGetPoses(::Array<Valve::VR::TrackedDevicePose_t>* pRenderPoseArray, ::Array<Valve::VR::TrackedDevicePose_t>* pGamePoseArray);
    // public Valve.VR.EVRCompositorError GetLastPoses(Valve.VR.TrackedDevicePose_t[] pRenderPoseArray, Valve.VR.TrackedDevicePose_t[] pGamePoseArray)
    // Offset: 0x136943C
    Valve::VR::EVRCompositorError GetLastPoses(::Array<Valve::VR::TrackedDevicePose_t>* pRenderPoseArray, ::Array<Valve::VR::TrackedDevicePose_t>* pGamePoseArray);
    // public Valve.VR.EVRCompositorError GetLastPoseForTrackedDeviceIndex(System.UInt32 unDeviceIndex, ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pOutputGamePose)
    // Offset: 0x1369470
    Valve::VR::EVRCompositorError GetLastPoseForTrackedDeviceIndex(uint unDeviceIndex, Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose);
    // public Valve.VR.EVRCompositorError Submit(Valve.VR.EVREye eEye, ref Valve.VR.Texture_t pTexture, ref Valve.VR.VRTextureBounds_t pBounds, Valve.VR.EVRSubmitFlags nSubmitFlags)
    // Offset: 0x136948C
    Valve::VR::EVRCompositorError Submit(Valve::VR::EVREye eEye, Valve::VR::Texture_t& pTexture, Valve::VR::VRTextureBounds_t& pBounds, Valve::VR::EVRSubmitFlags nSubmitFlags);
    // public System.Void ClearLastSubmittedFrame()
    // Offset: 0x13694A8
    void ClearLastSubmittedFrame();
    // public System.Void PostPresentHandoff()
    // Offset: 0x13694C4
    void PostPresentHandoff();
    // public System.Boolean GetFrameTiming(ref Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 unFramesAgo)
    // Offset: 0x13694E0
    bool GetFrameTiming(Valve::VR::Compositor_FrameTiming& pTiming, uint unFramesAgo);
    // public System.UInt32 GetFrameTimings(ref Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 nFrames)
    // Offset: 0x13694FC
    uint GetFrameTimings(Valve::VR::Compositor_FrameTiming& pTiming, uint nFrames);
    // public System.Single GetFrameTimeRemaining()
    // Offset: 0x1369518
    float GetFrameTimeRemaining();
    // public System.Void GetCumulativeStats(ref Valve.VR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes)
    // Offset: 0x1369534
    void GetCumulativeStats(Valve::VR::Compositor_CumulativeStats& pStats, uint nStatsSizeInBytes);
    // public System.Void FadeToColor(System.Single fSeconds, System.Single fRed, System.Single fGreen, System.Single fBlue, System.Single fAlpha, System.Boolean bBackground)
    // Offset: 0x1369550
    void FadeToColor(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground);
    // public Valve.VR.HmdColor_t GetCurrentFadeColor(System.Boolean bBackground)
    // Offset: 0x1369570
    Valve::VR::HmdColor_t GetCurrentFadeColor(bool bBackground);
    // public System.Void FadeGrid(System.Single fSeconds, System.Boolean bFadeIn)
    // Offset: 0x1369590
    void FadeGrid(float fSeconds, bool bFadeIn);
    // public System.Single GetCurrentGridAlpha()
    // Offset: 0x13695B0
    float GetCurrentGridAlpha();
    // public Valve.VR.EVRCompositorError SetSkyboxOverride(Valve.VR.Texture_t[] pTextures)
    // Offset: 0x13695CC
    Valve::VR::EVRCompositorError SetSkyboxOverride(::Array<Valve::VR::Texture_t>* pTextures);
    // public System.Void ClearSkyboxOverride()
    // Offset: 0x13695F4
    void ClearSkyboxOverride();
    // public System.Void CompositorBringToFront()
    // Offset: 0x1369610
    void CompositorBringToFront();
    // public System.Void CompositorGoToBack()
    // Offset: 0x136962C
    void CompositorGoToBack();
    // public System.Void CompositorQuit()
    // Offset: 0x1369648
    void CompositorQuit();
    // public System.Boolean IsFullscreen()
    // Offset: 0x1369664
    bool IsFullscreen();
    // public System.UInt32 GetCurrentSceneFocusProcess()
    // Offset: 0x1369680
    uint GetCurrentSceneFocusProcess();
    // public System.UInt32 GetLastFrameRenderer()
    // Offset: 0x136969C
    uint GetLastFrameRenderer();
    // public System.Boolean CanRenderScene()
    // Offset: 0x13696B8
    bool CanRenderScene();
    // public System.Void ShowMirrorWindow()
    // Offset: 0x13696D4
    void ShowMirrorWindow();
    // public System.Void HideMirrorWindow()
    // Offset: 0x13696F0
    void HideMirrorWindow();
    // public System.Boolean IsMirrorWindowVisible()
    // Offset: 0x136970C
    bool IsMirrorWindowVisible();
    // public System.Void CompositorDumpImages()
    // Offset: 0x1369728
    void CompositorDumpImages();
    // public System.Boolean ShouldAppRenderWithLowResources()
    // Offset: 0x1369744
    bool ShouldAppRenderWithLowResources();
    // public System.Void ForceInterleavedReprojectionOn(System.Boolean bOverride)
    // Offset: 0x1369760
    void ForceInterleavedReprojectionOn(bool bOverride);
    // public System.Void ForceReconnectProcess()
    // Offset: 0x1369780
    void ForceReconnectProcess();
    // public System.Void SuspendRendering(System.Boolean bSuspend)
    // Offset: 0x136979C
    void SuspendRendering(bool bSuspend);
    // public Valve.VR.EVRCompositorError GetMirrorTextureD3D11(Valve.VR.EVREye eEye, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView)
    // Offset: 0x13697BC
    Valve::VR::EVRCompositorError GetMirrorTextureD3D11(Valve::VR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView);
    // public System.Void ReleaseMirrorTextureD3D11(System.IntPtr pD3D11ShaderResourceView)
    // Offset: 0x13697D8
    void ReleaseMirrorTextureD3D11(System::IntPtr pD3D11ShaderResourceView);
    // public Valve.VR.EVRCompositorError GetMirrorTextureGL(Valve.VR.EVREye eEye, ref System.UInt32 pglTextureId, System.IntPtr pglSharedTextureHandle)
    // Offset: 0x13697F4
    Valve::VR::EVRCompositorError GetMirrorTextureGL(Valve::VR::EVREye eEye, uint& pglTextureId, System::IntPtr pglSharedTextureHandle);
    // public System.Boolean ReleaseSharedGLTexture(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle)
    // Offset: 0x1369814
    bool ReleaseSharedGLTexture(uint glTextureId, System::IntPtr glSharedTextureHandle);
    // public System.Void LockGLSharedTextureForAccess(System.IntPtr glSharedTextureHandle)
    // Offset: 0x1369830
    void LockGLSharedTextureForAccess(System::IntPtr glSharedTextureHandle);
    // public System.Void UnlockGLSharedTextureForAccess(System.IntPtr glSharedTextureHandle)
    // Offset: 0x136984C
    void UnlockGLSharedTextureForAccess(System::IntPtr glSharedTextureHandle);
    // public System.UInt32 GetVulkanInstanceExtensionsRequired(System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x1369868
    uint GetVulkanInstanceExtensionsRequired(System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.UInt32 GetVulkanDeviceExtensionsRequired(System.IntPtr pPhysicalDevice, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x1369884
    uint GetVulkanDeviceExtensionsRequired(System::IntPtr pPhysicalDevice, System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.Void SetExplicitTimingMode(Valve.VR.EVRCompositorTimingMode eTimingMode)
    // Offset: 0x13698A0
    void SetExplicitTimingMode(Valve::VR::EVRCompositorTimingMode eTimingMode);
    // public Valve.VR.EVRCompositorError SubmitExplicitTimingData()
    // Offset: 0x13698BC
    Valve::VR::EVRCompositorError SubmitExplicitTimingData();
  }; // Valve.VR.CVRCompositor
  static check_size<sizeof(CVRCompositor), 16 + sizeof(Valve::VR::IVRCompositor)> __Valve_VR_CVRCompositorSizeCheck;
  static_assert(sizeof(CVRCompositor) == 0x168);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRCompositor*, "Valve.VR", "CVRCompositor");
#pragma pack(pop)
