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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveData
  class VRControllersRecorderSaveData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation
    class PositionAndRotation;
    // Nested type: GlobalNamespace::VRControllersRecorderSaveData::Keyframe
    class Keyframe;
    // Nested type: GlobalNamespace::VRControllersRecorderSaveData::NodeInfo
    class NodeInfo;
    // public VRControllersRecorderSaveData/NodeInfo[] nodesInfo
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::VRControllersRecorderSaveData::NodeInfo*>* nodesInfo;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::VRControllersRecorderSaveData::NodeInfo*>*) == 0x8);
    // public VRControllersRecorderSaveData/Keyframe[] keyframes
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::VRControllersRecorderSaveData::Keyframe*>* keyframes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::VRControllersRecorderSaveData::Keyframe*>*) == 0x8);
    // Creating value type constructor for type: VRControllersRecorderSaveData
    VRControllersRecorderSaveData(::Array<GlobalNamespace::VRControllersRecorderSaveData::NodeInfo*>* nodesInfo_ = {}, ::Array<GlobalNamespace::VRControllersRecorderSaveData::Keyframe*>* keyframes_ = {}) noexcept : nodesInfo{nodesInfo_}, keyframes{keyframes_} {}
    // public System.Void .ctor()
    // Offset: 0x1673F00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderSaveData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorderSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderSaveData*, creationType>()));
    }
  }; // VRControllersRecorderSaveData
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderSaveData), 24 + sizeof(::Array<GlobalNamespace::VRControllersRecorderSaveData::Keyframe*>*)> __GlobalNamespace_VRControllersRecorderSaveDataSizeCheck;
  static_assert(sizeof(VRControllersRecorderSaveData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveData*, "", "VRControllersRecorderSaveData");
