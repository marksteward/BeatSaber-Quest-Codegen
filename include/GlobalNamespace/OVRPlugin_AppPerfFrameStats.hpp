// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/AppPerfFrameStats
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::AppPerfFrameStats/*, public System::ValueType*/ {
    public:
    // public System.Int32 HmdVsyncIndex
    // Size: 0x4
    // Offset: 0x0
    int HmdVsyncIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 AppFrameIndex
    // Size: 0x4
    // Offset: 0x4
    int AppFrameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 AppDroppedFrameCount
    // Size: 0x4
    // Offset: 0x8
    int AppDroppedFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single AppMotionToPhotonLatency
    // Size: 0x4
    // Offset: 0xC
    float AppMotionToPhotonLatency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single AppQueueAheadTime
    // Size: 0x4
    // Offset: 0x10
    float AppQueueAheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single AppCpuElapsedTime
    // Size: 0x4
    // Offset: 0x14
    float AppCpuElapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single AppGpuElapsedTime
    // Size: 0x4
    // Offset: 0x18
    float AppGpuElapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 CompositorFrameIndex
    // Size: 0x4
    // Offset: 0x1C
    int CompositorFrameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 CompositorDroppedFrameCount
    // Size: 0x4
    // Offset: 0x20
    int CompositorDroppedFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single CompositorLatency
    // Size: 0x4
    // Offset: 0x24
    float CompositorLatency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single CompositorCpuElapsedTime
    // Size: 0x4
    // Offset: 0x28
    float CompositorCpuElapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single CompositorGpuElapsedTime
    // Size: 0x4
    // Offset: 0x2C
    float CompositorGpuElapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single CompositorCpuStartToGpuEndElapsedTime
    // Size: 0x4
    // Offset: 0x30
    float CompositorCpuStartToGpuEndElapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single CompositorGpuEndToVsyncElapsedTime
    // Size: 0x4
    // Offset: 0x34
    float CompositorGpuEndToVsyncElapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AppPerfFrameStats
    constexpr AppPerfFrameStats(int HmdVsyncIndex_ = {}, int AppFrameIndex_ = {}, int AppDroppedFrameCount_ = {}, float AppMotionToPhotonLatency_ = {}, float AppQueueAheadTime_ = {}, float AppCpuElapsedTime_ = {}, float AppGpuElapsedTime_ = {}, int CompositorFrameIndex_ = {}, int CompositorDroppedFrameCount_ = {}, float CompositorLatency_ = {}, float CompositorCpuElapsedTime_ = {}, float CompositorGpuElapsedTime_ = {}, float CompositorCpuStartToGpuEndElapsedTime_ = {}, float CompositorGpuEndToVsyncElapsedTime_ = {}) noexcept : HmdVsyncIndex{HmdVsyncIndex_}, AppFrameIndex{AppFrameIndex_}, AppDroppedFrameCount{AppDroppedFrameCount_}, AppMotionToPhotonLatency{AppMotionToPhotonLatency_}, AppQueueAheadTime{AppQueueAheadTime_}, AppCpuElapsedTime{AppCpuElapsedTime_}, AppGpuElapsedTime{AppGpuElapsedTime_}, CompositorFrameIndex{CompositorFrameIndex_}, CompositorDroppedFrameCount{CompositorDroppedFrameCount_}, CompositorLatency{CompositorLatency_}, CompositorCpuElapsedTime{CompositorCpuElapsedTime_}, CompositorGpuElapsedTime{CompositorGpuElapsedTime_}, CompositorCpuStartToGpuEndElapsedTime{CompositorCpuStartToGpuEndElapsedTime_}, CompositorGpuEndToVsyncElapsedTime{CompositorGpuEndToVsyncElapsedTime_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVRPlugin/AppPerfFrameStats
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::AppPerfFrameStats), 52 + sizeof(float)> __GlobalNamespace_OVRPlugin_AppPerfFrameStatsSizeCheck;
  static_assert(sizeof(OVRPlugin::AppPerfFrameStats) == 0x38);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::AppPerfFrameStats, "", "OVRPlugin/AppPerfFrameStats");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
