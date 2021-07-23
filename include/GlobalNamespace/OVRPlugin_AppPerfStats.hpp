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
// Including type: OVRPlugin/AppPerfFrameStats
#include "GlobalNamespace/OVRPlugin_AppPerfFrameStats.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/AppPerfStats
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::AppPerfStats/*, public System::ValueType*/ {
    public:
    // public OVRPlugin/AppPerfFrameStats[] FrameStats
    // Size: 0x8
    // Offset: 0x0
    ::Array<GlobalNamespace::OVRPlugin::AppPerfFrameStats>* FrameStats;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRPlugin::AppPerfFrameStats>*) == 0x8);
    // public System.Int32 FrameStatsCount
    // Size: 0x4
    // Offset: 0x8
    int FrameStatsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public OVRPlugin/Bool AnyFrameStatsDropped
    // Size: 0x4
    // Offset: 0xC
    GlobalNamespace::OVRPlugin::Bool AnyFrameStatsDropped;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Bool) == 0x4);
    // public System.Single AdaptiveGpuPerformanceScale
    // Size: 0x4
    // Offset: 0x10
    float AdaptiveGpuPerformanceScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AppPerfStats
    constexpr AppPerfStats(::Array<GlobalNamespace::OVRPlugin::AppPerfFrameStats>* FrameStats_ = {}, int FrameStatsCount_ = {}, GlobalNamespace::OVRPlugin::Bool AnyFrameStatsDropped_ = {}, float AdaptiveGpuPerformanceScale_ = {}) noexcept : FrameStats{FrameStats_}, FrameStatsCount{FrameStatsCount_}, AnyFrameStatsDropped{AnyFrameStatsDropped_}, AdaptiveGpuPerformanceScale{AdaptiveGpuPerformanceScale_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public OVRPlugin/AppPerfFrameStats[] FrameStats
    ::Array<GlobalNamespace::OVRPlugin::AppPerfFrameStats>* _get_FrameStats();
    // Set instance field: public OVRPlugin/AppPerfFrameStats[] FrameStats
    void _set_FrameStats(::Array<GlobalNamespace::OVRPlugin::AppPerfFrameStats>* value);
    // Get instance field: public System.Int32 FrameStatsCount
    int _get_FrameStatsCount();
    // Set instance field: public System.Int32 FrameStatsCount
    void _set_FrameStatsCount(int value);
    // Get instance field: public OVRPlugin/Bool AnyFrameStatsDropped
    GlobalNamespace::OVRPlugin::Bool _get_AnyFrameStatsDropped();
    // Set instance field: public OVRPlugin/Bool AnyFrameStatsDropped
    void _set_AnyFrameStatsDropped(GlobalNamespace::OVRPlugin::Bool value);
    // Get instance field: public System.Single AdaptiveGpuPerformanceScale
    float _get_AdaptiveGpuPerformanceScale();
    // Set instance field: public System.Single AdaptiveGpuPerformanceScale
    void _set_AdaptiveGpuPerformanceScale(float value);
  }; // OVRPlugin/AppPerfStats
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::AppPerfStats), 16 + sizeof(float)> __GlobalNamespace_OVRPlugin_AppPerfStatsSizeCheck;
  static_assert(sizeof(OVRPlugin::AppPerfStats) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::AppPerfStats, "", "OVRPlugin/AppPerfStats");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
