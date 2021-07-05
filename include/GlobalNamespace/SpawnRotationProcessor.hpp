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
    // Offset: 0x115A5C4
    float get_rotation();
    // public System.Boolean ProcessBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0x115A478
    bool ProcessBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Single RotationForEventValue(System.Int32 index)
    // Offset: 0x115A5CC
    float RotationForEventValue(int index);
    // public System.Void .ctor()
    // Offset: 0x115A54C
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationProcessor::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SpawnRotationProcessor::*)()>(&GlobalNamespace::SpawnRotationProcessor::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationProcessor*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationProcessor::ProcessBeatmapEventData
// Il2CppName: ProcessBeatmapEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SpawnRotationProcessor::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::SpawnRotationProcessor::ProcessBeatmapEventData)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationProcessor*), "ProcessBeatmapEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationProcessor::RotationForEventValue
// Il2CppName: RotationForEventValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SpawnRotationProcessor::*)(int)>(&GlobalNamespace::SpawnRotationProcessor::RotationForEventValue)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationProcessor*), "RotationForEventValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
