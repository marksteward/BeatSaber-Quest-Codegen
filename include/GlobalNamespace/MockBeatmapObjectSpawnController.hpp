// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapObjectSpawnController
#include "GlobalNamespace/IBeatmapObjectSpawnController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectSpawnMovementData
  class BeatmapObjectSpawnMovementData;
  // Forward declaring type: NoteLineLayer
  struct NoteLineLayer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MockBeatmapObjectSpawnController
  class MockBeatmapObjectSpawnController : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapObjectSpawnController*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE190F4
    // private System.Single <jumpOffsetY>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float jumpOffsetY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE19104
    // private readonly System.Single <currentBpm>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float currentBpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE19114
    // private readonly System.Single <moveDuration>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE19124
    // private readonly System.Single <jumpDuration>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float jumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE19134
    // private readonly System.Single <jumpDistance>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    float jumpDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE19144
    // private readonly System.Single <verticalLayerDistance>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    float verticalLayerDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE19154
    // private readonly System.Single <noteJumpMovementSpeed>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE19164
    // private readonly System.Single <noteLinesDistance>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    float noteLinesDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE19174
    // private readonly BeatmapObjectSpawnMovementData <beatmapObjectSpawnMovementData>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectSpawnMovementData* beatmapObjectSpawnMovementData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnMovementData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE19184
    // private System.Action didInitEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* didInitEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: MockBeatmapObjectSpawnController
    MockBeatmapObjectSpawnController(float jumpOffsetY_ = {}, float currentBpm_ = {}, float moveDuration_ = {}, float jumpDuration_ = {}, float jumpDistance_ = {}, float verticalLayerDistance_ = {}, float noteJumpMovementSpeed_ = {}, float noteLinesDistance_ = {}, GlobalNamespace::BeatmapObjectSpawnMovementData* beatmapObjectSpawnMovementData_ = {}, System::Action* didInitEvent_ = {}) noexcept : jumpOffsetY{jumpOffsetY_}, currentBpm{currentBpm_}, moveDuration{moveDuration_}, jumpDuration{jumpDuration_}, jumpDistance{jumpDistance_}, verticalLayerDistance{verticalLayerDistance_}, noteJumpMovementSpeed{noteJumpMovementSpeed_}, noteLinesDistance{noteLinesDistance_}, beatmapObjectSpawnMovementData{beatmapObjectSpawnMovementData_}, didInitEvent{didInitEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapObjectSpawnController
    operator GlobalNamespace::IBeatmapObjectSpawnController() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapObjectSpawnController*>(this);
    }
    // public System.Single get_jumpOffsetY()
    // Offset: 0x109EEFC
    float get_jumpOffsetY();
    // public System.Void set_jumpOffsetY(System.Single value)
    // Offset: 0x109EF04
    void set_jumpOffsetY(float value);
    // public System.Single get_currentBpm()
    // Offset: 0x109EF0C
    float get_currentBpm();
    // public System.Single get_moveDuration()
    // Offset: 0x109EF14
    float get_moveDuration();
    // public System.Single get_jumpDuration()
    // Offset: 0x109EF1C
    float get_jumpDuration();
    // public System.Single get_jumpDistance()
    // Offset: 0x109EF24
    float get_jumpDistance();
    // public System.Single get_verticalLayerDistance()
    // Offset: 0x109EF2C
    float get_verticalLayerDistance();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x109EF34
    float get_noteJumpMovementSpeed();
    // public System.Single get_noteLinesDistance()
    // Offset: 0x109EF3C
    float get_noteLinesDistance();
    // public BeatmapObjectSpawnMovementData get_beatmapObjectSpawnMovementData()
    // Offset: 0x109EF44
    GlobalNamespace::BeatmapObjectSpawnMovementData* get_beatmapObjectSpawnMovementData();
    // public System.Boolean get_isInitialized()
    // Offset: 0x109EF4C
    bool get_isInitialized();
    // public System.Void add_didInitEvent(System.Action value)
    // Offset: 0x109EF54
    void add_didInitEvent(System::Action* value);
    // public System.Void remove_didInitEvent(System.Action value)
    // Offset: 0x109EFF8
    void remove_didInitEvent(System::Action* value);
    // public UnityEngine.Vector2 Get2DNoteOffset(System.Int32 noteLineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0x109F09C
    UnityEngine::Vector2 Get2DNoteOffset(int noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
    // public System.Single JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(NoteLineLayer lineLayer, System.Single distanceFromPlayer)
    // Offset: 0x109F0FC
    float JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer, float distanceFromPlayer);
    // public System.Void .ctor()
    // Offset: 0x109F104
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockBeatmapObjectSpawnController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockBeatmapObjectSpawnController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockBeatmapObjectSpawnController*, creationType>()));
    }
  }; // MockBeatmapObjectSpawnController
  #pragma pack(pop)
  static check_size<sizeof(MockBeatmapObjectSpawnController), 56 + sizeof(System::Action*)> __GlobalNamespace_MockBeatmapObjectSpawnControllerSizeCheck;
  static_assert(sizeof(MockBeatmapObjectSpawnController) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapObjectSpawnController*, "", "MockBeatmapObjectSpawnController");
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::get_jumpOffsetY
// Il2CppName: get_jumpOffsetY
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::set_jumpOffsetY
// Il2CppName: set_jumpOffsetY
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::get_currentBpm
// Il2CppName: get_currentBpm
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::get_moveDuration
// Il2CppName: get_moveDuration
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::get_jumpDuration
// Il2CppName: get_jumpDuration
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::get_jumpDistance
// Il2CppName: get_jumpDistance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::get_verticalLayerDistance
// Il2CppName: get_verticalLayerDistance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::get_noteJumpMovementSpeed
// Il2CppName: get_noteJumpMovementSpeed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::get_noteLinesDistance
// Il2CppName: get_noteLinesDistance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::get_beatmapObjectSpawnMovementData
// Il2CppName: get_beatmapObjectSpawnMovementData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::get_isInitialized
// Il2CppName: get_isInitialized
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::add_didInitEvent
// Il2CppName: add_didInitEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::remove_didInitEvent
// Il2CppName: remove_didInitEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::Get2DNoteOffset
// Il2CppName: Get2DNoteOffset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset
// Il2CppName: JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapObjectSpawnController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
