// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataNoArrowsTransform
  // [] Offset: FFFFFFFF
  class BeatmapDataNoArrowsTransform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapDataNoArrowsTransform
    BeatmapDataNoArrowsTransform() noexcept {}
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData)
    // Offset: 0x1A80F30
    static GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // public System.Void .ctor()
    // Offset: 0x1A81260
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataNoArrowsTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataNoArrowsTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataNoArrowsTransform*, creationType>()));
    }
  }; // BeatmapDataNoArrowsTransform
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataNoArrowsTransform*, "", "BeatmapDataNoArrowsTransform");
