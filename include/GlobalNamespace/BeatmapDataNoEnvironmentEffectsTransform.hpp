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
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataNoEnvironmentEffectsTransform
  class BeatmapDataNoEnvironmentEffectsTransform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapDataNoEnvironmentEffectsTransform
    BeatmapDataNoEnvironmentEffectsTransform() noexcept {}
    // static public BeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData)
    // Offset: 0x11C5538
    static GlobalNamespace::BeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // public System.Void .ctor()
    // Offset: 0x11C5914
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataNoEnvironmentEffectsTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataNoEnvironmentEffectsTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataNoEnvironmentEffectsTransform*, creationType>()));
    }
  }; // BeatmapDataNoEnvironmentEffectsTransform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataNoEnvironmentEffectsTransform*, "", "BeatmapDataNoEnvironmentEffectsTransform");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataNoEnvironmentEffectsTransform::CreateTransformedData
// Il2CppName: CreateTransformedData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataNoEnvironmentEffectsTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
