// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectSpawnMovementData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IBeatmapObjectSpawner
  class IBeatmapObjectSpawner {
    public:
    // Creating value type constructor for type: IBeatmapObjectSpawner
    IBeatmapObjectSpawner() noexcept {}
    // public ObstacleController SpawnObstacle(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ObstacleController* SpawnObstacle(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation);
    // public NoteController SpawnBombNote(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::NoteController* SpawnBombNote(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation);
    // public NoteController SpawnBasicNote(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::NoteController* SpawnBasicNote(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset);
  }; // IBeatmapObjectSpawner
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapObjectSpawner*, "", "IBeatmapObjectSpawner");
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectSpawner::SpawnObstacle
// Il2CppName: SpawnObstacle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectSpawner::SpawnBombNote
// Il2CppName: SpawnBombNote
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectSpawner::SpawnBasicNote
// Il2CppName: SpawnBasicNote
// Cannot perform method pointer template specialization from operators!
