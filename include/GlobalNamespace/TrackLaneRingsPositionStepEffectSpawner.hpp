// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TrackLaneRingsManager
  class TrackLaneRingsManager;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TrackLaneRingsPositionStepEffectSpawner
  class TrackLaneRingsPositionStepEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private TrackLaneRingsManager _trackLaneRingsManager
    // Offset: 0x18
    GlobalNamespace::TrackLaneRingsManager* trackLaneRingsManager;
    // private BeatmapEventType _beatmapEventType
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType beatmapEventType;
    // private System.Single _minPositionStep
    // Offset: 0x24
    float minPositionStep;
    // private System.Single _maxPositionStep
    // Offset: 0x28
    float maxPositionStep;
    // private System.Single _moveSpeed
    // Offset: 0x2C
    float moveSpeed;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private System.Boolean _prevWasMinStep
    // Offset: 0x38
    bool prevWasMinStep;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Void Start()
    // Offset: 0xC46FA0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC47034
    void OnDestroy();
    // public System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0xC4710C
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0xC471B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TrackLaneRingsPositionStepEffectSpawner* New_ctor();
  }; // TrackLaneRingsPositionStepEffectSpawner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*, "", "TrackLaneRingsPositionStepEffectSpawner");
#pragma pack(pop)
