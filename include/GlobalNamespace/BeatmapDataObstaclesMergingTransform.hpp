// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataObstaclesMergingTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataObstaclesMergingTransform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapDataObstaclesMergingTransform
    BeatmapDataObstaclesMergingTransform() noexcept {}
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData)
    // Offset: 0x1191CDC
    static GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // static private System.Boolean CanBeMerged(ObstacleData firstObstacle, ObstacleData secondObstacle)
    // Offset: 0x1192404
    static bool CanBeMerged(GlobalNamespace::ObstacleData* firstObstacle, GlobalNamespace::ObstacleData* secondObstacle);
    // static private System.Void RemoveObstacle(ObstacleData[] lastObstacleInLine, ObstacleData lastObstacle)
    // Offset: 0x1192474
    static void RemoveObstacle(::Array<GlobalNamespace::ObstacleData*>* lastObstacleInLine, GlobalNamespace::ObstacleData* lastObstacle);
  }; // BeatmapDataObstaclesMergingTransform
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataObstaclesMergingTransform*, "", "BeatmapDataObstaclesMergingTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesMergingTransform::CreateTransformedData
// Il2CppName: CreateTransformedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IReadonlyBeatmapData* (*)(GlobalNamespace::IReadonlyBeatmapData*)>(&GlobalNamespace::BeatmapDataObstaclesMergingTransform::CreateTransformedData)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesMergingTransform*), "CreateTransformedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesMergingTransform::CanBeMerged
// Il2CppName: CanBeMerged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::ObstacleData*, GlobalNamespace::ObstacleData*)>(&GlobalNamespace::BeatmapDataObstaclesMergingTransform::CanBeMerged)> {
  static const MethodInfo* get() {
    static auto* firstObstacle = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    static auto* secondObstacle = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesMergingTransform*), "CanBeMerged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstObstacle, secondObstacle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesMergingTransform::RemoveObstacle
// Il2CppName: RemoveObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<GlobalNamespace::ObstacleData*>*, GlobalNamespace::ObstacleData*)>(&GlobalNamespace::BeatmapDataObstaclesMergingTransform::RemoveObstacle)> {
  static const MethodInfo* get() {
    static auto* lastObstacleInLine = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "ObstacleData"), 1)->byval_arg;
    static auto* lastObstacle = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesMergingTransform*), "RemoveObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lastObstacleInLine, lastObstacle});
  }
};
