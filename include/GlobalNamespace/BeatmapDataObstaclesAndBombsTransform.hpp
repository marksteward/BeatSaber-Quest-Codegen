// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataObstaclesAndBombsTransform
  class BeatmapDataObstaclesAndBombsTransform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapDataObstaclesAndBombsTransform
    BeatmapDataObstaclesAndBombsTransform() noexcept {}
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData, GameplayModifiers/EnabledObstacleType enabledObstaclesType, System.Boolean noBombs)
    // Offset: 0x11C591C
    static GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData, GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstaclesType, bool noBombs);
    // static private System.Boolean ShouldUseBeatmapObject(BeatmapObjectData beatmapObjectData, GameplayModifiers/EnabledObstacleType enabledObstaclesType, System.Boolean noBombs)
    // Offset: 0x11C5C90
    static bool ShouldUseBeatmapObject(GlobalNamespace::BeatmapObjectData* beatmapObjectData, GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstaclesType, bool noBombs);
    // public System.Void .ctor()
    // Offset: 0x11C5DD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataObstaclesAndBombsTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataObstaclesAndBombsTransform*, creationType>()));
    }
  }; // BeatmapDataObstaclesAndBombsTransform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*, "", "BeatmapDataObstaclesAndBombsTransform");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::CreateTransformedData
// Il2CppName: CreateTransformedData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::ShouldUseBeatmapObject
// Il2CppName: ShouldUseBeatmapObject
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
