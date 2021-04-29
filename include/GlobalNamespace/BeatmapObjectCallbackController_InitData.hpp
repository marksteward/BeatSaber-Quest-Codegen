// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectCallbackController/InitData
  class BeatmapObjectCallbackController::InitData : public ::Il2CppObject {
    public:
    // public readonly IReadonlyBeatmapData beatmapData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // public readonly System.Single spawningStartTime
    // Size: 0x4
    // Offset: 0x18
    float spawningStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(GlobalNamespace::IReadonlyBeatmapData* beatmapData_ = {}, float spawningStartTime_ = {}) noexcept : beatmapData{beatmapData_}, spawningStartTime{spawningStartTime_} {}
    // public System.Void .ctor(IReadonlyBeatmapData beatmapData, System.Single spawningStartTime)
    // Offset: 0xF26D30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectCallbackController::InitData* New_ctor(GlobalNamespace::IReadonlyBeatmapData* beatmapData, float spawningStartTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectCallbackController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectCallbackController::InitData*, creationType>(beatmapData, spawningStartTime)));
    }
  }; // BeatmapObjectCallbackController/InitData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectCallbackController::InitData), 24 + sizeof(float)> __GlobalNamespace_BeatmapObjectCallbackController_InitDataSizeCheck;
  static_assert(sizeof(BeatmapObjectCallbackController::InitData) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectCallbackController::InitData*, "", "BeatmapObjectCallbackController/InitData");
