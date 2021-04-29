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
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SpawnRotationProcessor
  class SpawnRotationProcessor : public ::Il2CppObject {
    public:
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x10
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rotation and: rotations
    char __padding0[0x4] = {};
    // private readonly System.Single[] _rotations
    // Size: 0x8
    // Offset: 0x18
    ::Array<float>* rotations;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // Creating value type constructor for type: SpawnRotationProcessor
    SpawnRotationProcessor(float rotation_ = {}, ::Array<float>* rotations_ = {}) noexcept : rotation{rotation_}, rotations{rotations_} {}
    // public System.Single get_rotation()
    // Offset: 0xF93D1C
    float get_rotation();
    // public System.Boolean ProcessBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0xF93BD0
    bool ProcessBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Single RotationForEventValue(System.Int32 index)
    // Offset: 0xF93D24
    float RotationForEventValue(int index);
    // public System.Void .ctor()
    // Offset: 0xF93CA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnRotationProcessor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SpawnRotationProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnRotationProcessor*, creationType>()));
    }
  }; // SpawnRotationProcessor
  #pragma pack(pop)
  static check_size<sizeof(SpawnRotationProcessor), 24 + sizeof(::Array<float>*)> __GlobalNamespace_SpawnRotationProcessorSizeCheck;
  static_assert(sizeof(SpawnRotationProcessor) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnRotationProcessor*, "", "SpawnRotationProcessor");
