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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VRTrackersRecorder/SavedData
  class VRTrackersRecorder::SavedData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable
    class KeyframeSerializable;
    // public VRTrackersRecorder/SavedData/KeyframeSerializable[] _keyframes
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>* keyframes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>*) == 0x8);
    // Creating value type constructor for type: SavedData
    SavedData(::Array<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>* keyframes_ = {}) noexcept : keyframes{keyframes_} {}
    // Creating conversion operator: operator ::Array<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>*
    constexpr operator ::Array<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>*() const noexcept {
      return keyframes;
    }
    // public System.Void .ctor()
    // Offset: 0x1675B88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTrackersRecorder::SavedData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTrackersRecorder::SavedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTrackersRecorder::SavedData*, creationType>()));
    }
  }; // VRTrackersRecorder/SavedData
  #pragma pack(pop)
  static check_size<sizeof(VRTrackersRecorder::SavedData), 16 + sizeof(::Array<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>*)> __GlobalNamespace_VRTrackersRecorder_SavedDataSizeCheck;
  static_assert(sizeof(VRTrackersRecorder::SavedData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::SavedData*, "", "VRTrackersRecorder/SavedData");
