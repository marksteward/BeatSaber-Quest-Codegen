// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::PlayerLoop
namespace UnityEngine::PlayerLoop {
}
// Completed forward declares
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.EarlyUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D7EB08
  // [MovedFromAttribute] Offset: D7EB08
  struct EarlyUpdate/*, public System::ValueType*/ {
    public:
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::PollPlayerConnection
    struct PollPlayerConnection;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::ProfilerStartFrame
    struct ProfilerStartFrame;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::PollHtcsPlayerConnection
    struct PollHtcsPlayerConnection;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::GpuTimestamp
    struct GpuTimestamp;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::AnalyticsCoreStatsUpdate
    struct AnalyticsCoreStatsUpdate;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::UnityWebRequestUpdate
    struct UnityWebRequestUpdate;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::UpdateStreamingManager
    struct UpdateStreamingManager;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::ExecuteMainThreadJobs
    struct ExecuteMainThreadJobs;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::ProcessMouseInWindow
    struct ProcessMouseInWindow;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::ClearIntermediateRenderers
    struct ClearIntermediateRenderers;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::ClearLines
    struct ClearLines;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::PresentBeforeUpdate
    struct PresentBeforeUpdate;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::ResetFrameStatsAfterPresent
    struct ResetFrameStatsAfterPresent;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::UpdateAsyncReadbackManager
    struct UpdateAsyncReadbackManager;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::UpdateTextureStreamingManager
    struct UpdateTextureStreamingManager;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::UpdatePreloading
    struct UpdatePreloading;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::RendererNotifyInvisible
    struct RendererNotifyInvisible;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::PlayerCleanupCachedData
    struct PlayerCleanupCachedData;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::UpdateMainGameViewRect
    struct UpdateMainGameViewRect;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::UpdateCanvasRectTransform
    struct UpdateCanvasRectTransform;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::UpdateInputManager
    struct UpdateInputManager;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::ProcessRemoteInput
    struct ProcessRemoteInput;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::XRUpdate
    struct XRUpdate;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::ScriptRunDelayedStartupFrame
    struct ScriptRunDelayedStartupFrame;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::UpdateKinect
    struct UpdateKinect;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::DeliverIosPlatformEvents
    struct DeliverIosPlatformEvents;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::DispatchEventQueueEvents
    struct DispatchEventQueueEvents;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::PhysicsResetInterpolatedTransformPosition
    struct PhysicsResetInterpolatedTransformPosition;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::SpriteAtlasManagerUpdate
    struct SpriteAtlasManagerUpdate;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::TangoUpdate
    struct TangoUpdate;
    // Nested type: UnityEngine::PlayerLoop::EarlyUpdate::PerformanceAnalyticsUpdate
    struct PerformanceAnalyticsUpdate;
    // Creating value type constructor for type: EarlyUpdate
    constexpr EarlyUpdate() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.EarlyUpdate
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::EarlyUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
