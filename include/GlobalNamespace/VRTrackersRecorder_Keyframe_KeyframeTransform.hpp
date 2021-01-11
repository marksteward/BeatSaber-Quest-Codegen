// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRTrackersRecorder/Keyframe
#include "GlobalNamespace/VRTrackersRecorder_Keyframe.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: VRTrackersRecorder/Keyframe/KeyframeTransform
  // [] Offset: FFFFFFFF
  class VRTrackersRecorder::Keyframe::KeyframeTransform : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 _pos
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 pos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion _rot
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion rot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public System.Boolean _valid
    // Size: 0x1
    // Offset: 0x2C
    bool valid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: KeyframeTransform
    KeyframeTransform(UnityEngine::Vector3 pos_ = {}, UnityEngine::Quaternion rot_ = {}, bool valid_ = {}) noexcept : pos{pos_}, rot{rot_}, valid{valid_} {}
    // public System.Void .ctor()
    // Offset: 0x197652C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTrackersRecorder::Keyframe::KeyframeTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTrackersRecorder::Keyframe::KeyframeTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTrackersRecorder::Keyframe::KeyframeTransform*, creationType>()));
    }
  }; // VRTrackersRecorder/Keyframe/KeyframeTransform
  static check_size<sizeof(VRTrackersRecorder::Keyframe::KeyframeTransform), 44 + sizeof(bool)> __GlobalNamespace_VRTrackersRecorder_Keyframe_KeyframeTransformSizeCheck;
  static_assert(sizeof(VRTrackersRecorder::Keyframe::KeyframeTransform) == 0x2D);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::Keyframe::KeyframeTransform*, "", "VRTrackersRecorder/Keyframe/KeyframeTransform");
