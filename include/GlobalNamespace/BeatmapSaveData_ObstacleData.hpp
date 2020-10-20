// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: BeatmapSaveData/ITime
#include "GlobalNamespace/BeatmapSaveData_ITime.hpp"
// Including type: ObstacleType
#include "GlobalNamespace/ObstacleType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapSaveData/ObstacleData
  class BeatmapSaveData::ObstacleData : public ::Il2CppObject/*, public GlobalNamespace::BeatmapSaveData::ITime*/ {
    public:
    // private System.Single _time
    // Offset: 0x10
    float time;
    // private System.Int32 _lineIndex
    // Offset: 0x14
    int lineIndex;
    // private ObstacleType _type
    // Offset: 0x18
    GlobalNamespace::ObstacleType type;
    // private System.Single _duration
    // Offset: 0x1C
    float duration;
    // private System.Int32 _width
    // Offset: 0x20
    int width;
    // Creating interface conversion operator: operator GlobalNamespace::BeatmapSaveData::ITime
    operator GlobalNamespace::BeatmapSaveData::ITime() noexcept {
      return *reinterpret_cast<GlobalNamespace::BeatmapSaveData::ITime*>(this);
    }
    // public System.Int32 get_lineIndex()
    // Offset: 0x1FAC454
    int get_lineIndex();
    // public ObstacleType get_type()
    // Offset: 0x1FAC45C
    GlobalNamespace::ObstacleType get_type();
    // public System.Single get_duration()
    // Offset: 0x1FAC464
    float get_duration();
    // public System.Int32 get_width()
    // Offset: 0x1FAC46C
    int get_width();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, ObstacleType type, System.Single duration, System.Int32 width)
    // Offset: 0x1FAC474
    static BeatmapSaveData::ObstacleData* New_ctor(float time, int lineIndex, GlobalNamespace::ObstacleType type, float duration, int width);
    // public System.Single get_time()
    // Offset: 0x1FAC44C
    // Implemented from: BeatmapSaveData/ITime
    // Base method: System.Single ITime::get_time()
    float get_time();
    // public System.Void MoveTime(System.Single offset)
    // Offset: 0x1FAC4CC
    // Implemented from: BeatmapSaveData/ITime
    // Base method: System.Void ITime::MoveTime(System.Single offset)
    void MoveTime(float offset);
  }; // BeatmapSaveData/ObstacleData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::ObstacleData*, "", "BeatmapSaveData/ObstacleData");
#pragma pack(pop)
