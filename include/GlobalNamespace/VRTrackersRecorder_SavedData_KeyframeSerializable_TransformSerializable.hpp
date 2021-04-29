// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRTrackersRecorder/SavedData/KeyframeSerializable
#include "GlobalNamespace/VRTrackersRecorder_SavedData_KeyframeSerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: VRTrackersRecorder/SavedData/KeyframeSerializable/TransformSerializable
  class VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable : public ::Il2CppObject {
    public:
    // public System.Single _xPos
    // Size: 0x4
    // Offset: 0x10
    float xPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _yPos
    // Size: 0x4
    // Offset: 0x14
    float yPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _zPos
    // Size: 0x4
    // Offset: 0x18
    float zPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _xRot
    // Size: 0x4
    // Offset: 0x1C
    float xRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _yRot
    // Size: 0x4
    // Offset: 0x20
    float yRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _zRot
    // Size: 0x4
    // Offset: 0x24
    float zRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _wRot
    // Size: 0x4
    // Offset: 0x28
    float wRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean _valid
    // Size: 0x1
    // Offset: 0x2C
    bool valid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TransformSerializable
    TransformSerializable(float xPos_ = {}, float yPos_ = {}, float zPos_ = {}, float xRot_ = {}, float yRot_ = {}, float zRot_ = {}, float wRot_ = {}, bool valid_ = {}) noexcept : xPos{xPos_}, yPos{yPos_}, zPos{zPos_}, xRot{xRot_}, yRot{yRot_}, zRot{zRot_}, wRot{wRot_}, valid{valid_} {}
    // public System.Void .ctor()
    // Offset: 0x1675B98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable*, creationType>()));
    }
  }; // VRTrackersRecorder/SavedData/KeyframeSerializable/TransformSerializable
  #pragma pack(pop)
  static check_size<sizeof(VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable), 44 + sizeof(bool)> __GlobalNamespace_VRTrackersRecorder_SavedData_KeyframeSerializable_TransformSerializableSizeCheck;
  static_assert(sizeof(VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable) == 0x2D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable*, "", "VRTrackersRecorder/SavedData/KeyframeSerializable/TransformSerializable");
