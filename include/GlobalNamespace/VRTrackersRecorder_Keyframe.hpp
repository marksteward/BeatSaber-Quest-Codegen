// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRTrackersRecorder
#include "GlobalNamespace/VRTrackersRecorder.hpp"
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
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VRTrackersRecorder/Keyframe
  // [TokenAttribute] Offset: FFFFFFFF
  class VRTrackersRecorder::Keyframe : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::VRTrackersRecorder::Keyframe::KeyframeTransform
    class KeyframeTransform;
    // public VRTrackersRecorder/Keyframe/KeyframeTransform[] _transforms
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::VRTrackersRecorder::Keyframe::KeyframeTransform*>* transforms;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::VRTrackersRecorder::Keyframe::KeyframeTransform*>*) == 0x8);
    // public System.Single _time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Keyframe
    Keyframe(::Array<GlobalNamespace::VRTrackersRecorder::Keyframe::KeyframeTransform*>* transforms_ = {}, float time_ = {}) noexcept : transforms{transforms_}, time{time_} {}
    // public System.Void .ctor()
    // Offset: 0x127BB84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTrackersRecorder::Keyframe* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTrackersRecorder::Keyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTrackersRecorder::Keyframe*, creationType>()));
    }
  }; // VRTrackersRecorder/Keyframe
  #pragma pack(pop)
  static check_size<sizeof(VRTrackersRecorder::Keyframe), 24 + sizeof(float)> __GlobalNamespace_VRTrackersRecorder_KeyframeSizeCheck;
  static_assert(sizeof(VRTrackersRecorder::Keyframe) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::Keyframe*, "", "VRTrackersRecorder/Keyframe");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::Keyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
