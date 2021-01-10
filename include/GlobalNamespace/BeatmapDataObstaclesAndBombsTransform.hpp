// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: BeatmapDataObstaclesAndBombsTransform
  // [] Offset: FFFFFFFF
  class BeatmapDataObstaclesAndBombsTransform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapDataObstaclesAndBombsTransform
    BeatmapDataObstaclesAndBombsTransform() noexcept {}
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData, GameplayModifiers/EnabledObstacleType enabledObstaclesType, System.Boolean noBombs)
    // Offset: 0x1A81268
    static GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData, GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstaclesType, bool noBombs);
    // static private System.Boolean ShouldUseBeatmapObject(BeatmapObjectData beatmapObjectData, GameplayModifiers/EnabledObstacleType enabledObstaclesType, System.Boolean noBombs)
    // Offset: 0x1A815EC
    static bool ShouldUseBeatmapObject(GlobalNamespace::BeatmapObjectData* beatmapObjectData, GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstaclesType, bool noBombs);
    // public System.Void .ctor()
    // Offset: 0x1A8172C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataObstaclesAndBombsTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataObstaclesAndBombsTransform*, creationType>()));
    }
  }; // BeatmapDataObstaclesAndBombsTransform
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*, "", "BeatmapDataObstaclesAndBombsTransform");
#pragma pack(pop)
