// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapObjectSpawner
#include "GlobalNamespace/IBeatmapObjectSpawner.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectManager
  // [] Offset: FFFFFFFF
  class BeatmapObjectManager : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapObjectSpawner*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDC546C
    // private System.Action`1<NoteController> noteWasSpawnedEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<GlobalNamespace::NoteController*>* noteWasSpawnedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC547C
    // private System.Action`1<NoteController> noteWasMissedEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<GlobalNamespace::NoteController*>* noteWasMissedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC548C
    // private System.Action`2<NoteController,NoteCutInfo> noteWasCutEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* noteWasCutEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC549C
    // private System.Action`1<NoteController> noteDidStartJumpEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<GlobalNamespace::NoteController*>* noteDidStartJumpEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC54AC
    // private System.Action`1<ObstacleController> obstacleWasSpawnedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::ObstacleController*>* obstacleWasSpawnedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC54BC
    // private System.Action`1<ObstacleController> obstacleDidPassThreeQuartersOfMove2Event
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::ObstacleController*>* obstacleDidPassThreeQuartersOfMove2Event;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC54CC
    // private System.Action`1<ObstacleController> obstacleDidPassAvoidedMarkEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<GlobalNamespace::ObstacleController*>* obstacleDidPassAvoidedMarkEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC54DC
    // private System.Boolean <spawnHidden>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool spawnHidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BeatmapObjectManager
    BeatmapObjectManager(System::Action_1<GlobalNamespace::NoteController*>* noteWasSpawnedEvent_ = {}, System::Action_1<GlobalNamespace::NoteController*>* noteWasMissedEvent_ = {}, System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* noteWasCutEvent_ = {}, System::Action_1<GlobalNamespace::NoteController*>* noteDidStartJumpEvent_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* obstacleWasSpawnedEvent_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* obstacleDidPassThreeQuartersOfMove2Event_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* obstacleDidPassAvoidedMarkEvent_ = {}, bool spawnHidden_ = {}) noexcept : noteWasSpawnedEvent{noteWasSpawnedEvent_}, noteWasMissedEvent{noteWasMissedEvent_}, noteWasCutEvent{noteWasCutEvent_}, noteDidStartJumpEvent{noteDidStartJumpEvent_}, obstacleWasSpawnedEvent{obstacleWasSpawnedEvent_}, obstacleDidPassThreeQuartersOfMove2Event{obstacleDidPassThreeQuartersOfMove2Event_}, obstacleDidPassAvoidedMarkEvent{obstacleDidPassAvoidedMarkEvent_}, spawnHidden{spawnHidden_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapObjectSpawner
    operator GlobalNamespace::IBeatmapObjectSpawner() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapObjectSpawner*>(this);
    }
    // public System.Void add_noteWasSpawnedEvent(System.Action`1<NoteController> value)
    // Offset: 0x1A2868C
    void add_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteWasSpawnedEvent(System.Action`1<NoteController> value)
    // Offset: 0x1A28730
    void remove_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteWasMissedEvent(System.Action`1<NoteController> value)
    // Offset: 0x1A287D4
    void add_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteWasMissedEvent(System.Action`1<NoteController> value)
    // Offset: 0x1A28878
    void remove_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteWasCutEvent(System.Action`2<NoteController,NoteCutInfo> value)
    // Offset: 0x1A2891C
    void add_noteWasCutEvent(System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* value);
    // public System.Void remove_noteWasCutEvent(System.Action`2<NoteController,NoteCutInfo> value)
    // Offset: 0x1A289C0
    void remove_noteWasCutEvent(System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* value);
    // public System.Void add_noteDidStartJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0x1A28A64
    void add_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidStartJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0x1A28B08
    void remove_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_obstacleWasSpawnedEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x1A28BAC
    void add_obstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_obstacleWasSpawnedEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x1A28C50
    void remove_obstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_obstacleDidPassThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0x1A28CF4
    void add_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_obstacleDidPassThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0x1A28D98
    void remove_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_obstacleDidPassAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x1A274EC
    void add_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_obstacleDidPassAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x1A27748
    void remove_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Collections.Generic.HashSet`1<ObstacleController> get_activeObstacleControllers()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();
    // protected ObstacleController SpawnObstacleInternal(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ObstacleController* SpawnObstacleInternal(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation);
    // protected NoteController SpawnBombNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::NoteController* SpawnBombNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation);
    // protected NoteController SpawnBasicNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::NoteController* SpawnBasicNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset);
    // protected System.Void DespawnInternal(NoteController noteController)
    // Offset: 0xFFFFFFFF
    void DespawnInternal(GlobalNamespace::NoteController* noteController);
    // protected System.Void DespawnInternal(ObstacleController obstacleController)
    // Offset: 0xFFFFFFFF
    void DespawnInternal(GlobalNamespace::ObstacleController* obstacleController);
    // public System.Boolean get_spawnHidden()
    // Offset: 0x1A28E3C
    bool get_spawnHidden();
    // public System.Void set_spawnHidden(System.Boolean value)
    // Offset: 0x1A28E44
    void set_spawnHidden(bool value);
    // private System.Void SetNoteControllerEventCallbacks(NoteController noteController)
    // Offset: 0x1A29200
    void SetNoteControllerEventCallbacks(GlobalNamespace::NoteController* noteController);
    // private System.Void RemoveNoteControllerEventCallbacks(NoteController noteController)
    // Offset: 0x1A29484
    void RemoveNoteControllerEventCallbacks(GlobalNamespace::NoteController* noteController);
    // private System.Void SetObstacleEventCallbacks(ObstacleController obstacleController)
    // Offset: 0x1A28F90
    void SetObstacleEventCallbacks(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void RemoveObstacleEventCallbacks(ObstacleController obstacleController)
    // Offset: 0x1A29600
    void RemoveObstacleEventCallbacks(GlobalNamespace::ObstacleController* obstacleController);
    // protected System.Void Despawn(NoteController noteController)
    // Offset: 0x1A29738
    void Despawn(GlobalNamespace::NoteController* noteController);
    // private System.Void Despawn(ObstacleController obstacleController)
    // Offset: 0x1A2976C
    void Despawn(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleNoteDidStartJump(NoteController noteController)
    // Offset: 0x1A297A0
    void HandleNoteDidStartJump(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x1A29814
    void HandleNoteWasMissed(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteDidFinishJump(NoteController noteController)
    // Offset: 0x1A29888
    void HandleNoteDidFinishJump(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteDidDissolve(NoteController noteController)
    // Offset: 0x1A298BC
    void HandleNoteDidDissolve(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasCut(NoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0x1A298F0
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void HandleObstaclePassedThreeQuartersOfMove2(ObstacleController obstacleController)
    // Offset: 0x1A2997C
    void HandleObstaclePassedThreeQuartersOfMove2(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstaclePassedAvoidedMark(ObstacleController obstacleController)
    // Offset: 0x1A299F0
    void HandleObstaclePassedAvoidedMark(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstacleFinishedMovement(ObstacleController obstacleController)
    // Offset: 0x1A29A64
    void HandleObstacleFinishedMovement(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstacleDidDissolve(ObstacleController obstacleController)
    // Offset: 0x1A29A98
    void HandleObstacleDidDissolve(GlobalNamespace::ObstacleController* obstacleController);
    // public System.Void DissolveAllObjects()
    // Offset: 0xFFFFFFFF
    void DissolveAllObjects();
    // public System.Void HideAllBeatmapObjects(System.Boolean hide)
    // Offset: 0xFFFFFFFF
    void HideAllBeatmapObjects(bool hide);
    // public System.Void PauseAllBeatmapObjects(System.Boolean pause)
    // Offset: 0xFFFFFFFF
    void PauseAllBeatmapObjects(bool pause);
    // public ObstacleController SpawnObstacle(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0x1A28E50
    // Implemented from: IBeatmapObjectSpawner
    // Base method: ObstacleController IBeatmapObjectSpawner::SpawnObstacle(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    GlobalNamespace::ObstacleController* SpawnObstacle(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation);
    // public NoteController SpawnBombNote(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    // Offset: 0x1A290C8
    // Implemented from: IBeatmapObjectSpawner
    // Base method: NoteController IBeatmapObjectSpawner::SpawnBombNote(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    GlobalNamespace::NoteController* SpawnBombNote(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation);
    // public NoteController SpawnBasicNote(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    // Offset: 0x1A2937C
    // Implemented from: IBeatmapObjectSpawner
    // Base method: NoteController IBeatmapObjectSpawner::SpawnBasicNote(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    GlobalNamespace::NoteController* SpawnBasicNote(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset);
    // protected System.Void .ctor()
    // Offset: 0x1A29ACC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectManager*, creationType>()));
    }
  }; // BeatmapObjectManager
  static check_size<sizeof(BeatmapObjectManager), 72 + sizeof(bool)> __GlobalNamespace_BeatmapObjectManagerSizeCheck;
  static_assert(sizeof(BeatmapObjectManager) == 0x49);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectManager*, "", "BeatmapObjectManager");
