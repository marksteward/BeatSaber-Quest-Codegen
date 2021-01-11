// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveData/NodeInfo
  // [] Offset: FFFFFFFF
  class VRControllersRecorderSaveData::NodeInfo : public ::Il2CppObject {
    public:
    // public UnityEngine.XR.XRNode nodeType
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::XR::XRNode nodeType;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::XRNode) == 0x4);
    // public System.Int32 nodeIdx
    // Size: 0x4
    // Offset: 0x14
    int nodeIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NodeInfo
    NodeInfo(UnityEngine::XR::XRNode nodeType_ = {}, int nodeIdx_ = {}) noexcept : nodeType{nodeType_}, nodeIdx{nodeIdx_} {}
    // public System.Void .ctor()
    // Offset: 0x1974BFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderSaveData::NodeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorderSaveData::NodeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderSaveData::NodeInfo*, creationType>()));
    }
  }; // VRControllersRecorderSaveData/NodeInfo
  static check_size<sizeof(VRControllersRecorderSaveData::NodeInfo), 20 + sizeof(int)> __GlobalNamespace_VRControllersRecorderSaveData_NodeInfoSizeCheck;
  static_assert(sizeof(VRControllersRecorderSaveData::NodeInfo) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveData::NodeInfo*, "", "VRControllersRecorderSaveData/NodeInfo");
