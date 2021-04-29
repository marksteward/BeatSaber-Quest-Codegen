// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectSpawnMovementData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BeatmapObjectSpawnMovementData/NoteSpawnData
  struct BeatmapObjectSpawnMovementData::NoteSpawnData/*, public System::ValueType*/ {
    public:
    // public readonly UnityEngine.Vector3 moveStartPos
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 moveStartPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 moveEndPos
    // Size: 0xC
    // Offset: 0xC
    UnityEngine::Vector3 moveEndPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 jumpEndPos
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 jumpEndPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public readonly System.Single jumpGravity
    // Size: 0x4
    // Offset: 0x24
    float jumpGravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single moveDuration
    // Size: 0x4
    // Offset: 0x28
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single jumpDuration
    // Size: 0x4
    // Offset: 0x2C
    float jumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: NoteSpawnData
    constexpr NoteSpawnData(UnityEngine::Vector3 moveStartPos_ = {}, UnityEngine::Vector3 moveEndPos_ = {}, UnityEngine::Vector3 jumpEndPos_ = {}, float jumpGravity_ = {}, float moveDuration_ = {}, float jumpDuration_ = {}) noexcept : moveStartPos{moveStartPos_}, moveEndPos{moveEndPos_}, jumpEndPos{jumpEndPos_}, jumpGravity{jumpGravity_}, moveDuration{moveDuration_}, jumpDuration{jumpDuration_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single jumpGravity, System.Single moveDuration, System.Single jumpDuration)
    // Offset: 0xDF3914
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  NoteSpawnData(UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float jumpGravity, float moveDuration, float jumpDuration)
  }; // BeatmapObjectSpawnMovementData/NoteSpawnData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnMovementData::NoteSpawnData), 44 + sizeof(float)> __GlobalNamespace_BeatmapObjectSpawnMovementData_NoteSpawnDataSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnMovementData::NoteSpawnData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData, "", "BeatmapObjectSpawnMovementData/NoteSpawnData");
