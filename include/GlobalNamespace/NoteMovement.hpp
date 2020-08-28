// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IManualUpdate
#include "GlobalNamespace/IManualUpdate.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: MovementPhase because it is already included!
  // Forward declaring type: NoteFloorMovement
  class NoteFloorMovement;
  // Forward declaring type: NoteJump
  class NoteJump;
  // Forward declaring type: NoteCutDirection
  struct NoteCutDirection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteMovement
  class NoteMovement : public UnityEngine::MonoBehaviour, public GlobalNamespace::IManualUpdate {
    public:
    // Nested type: GlobalNamespace::NoteMovement::MovementPhase
    struct MovementPhase;
    // Autogenerated type: NoteMovement/MovementPhase
    struct MovementPhase : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: MovementPhase
      constexpr MovementPhase(int value_ = {}) : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const {
        return value;
      }
      // static field const value: static public NoteMovement/MovementPhase None
      static constexpr const int None = 0;
      // Get static field: static public NoteMovement/MovementPhase None
      static GlobalNamespace::NoteMovement::MovementPhase _get_None();
      // Set static field: static public NoteMovement/MovementPhase None
      static void _set_None(GlobalNamespace::NoteMovement::MovementPhase value);
      // static field const value: static public NoteMovement/MovementPhase MovingOnTheFloor
      static constexpr const int MovingOnTheFloor = 1;
      // Get static field: static public NoteMovement/MovementPhase MovingOnTheFloor
      static GlobalNamespace::NoteMovement::MovementPhase _get_MovingOnTheFloor();
      // Set static field: static public NoteMovement/MovementPhase MovingOnTheFloor
      static void _set_MovingOnTheFloor(GlobalNamespace::NoteMovement::MovementPhase value);
      // static field const value: static public NoteMovement/MovementPhase Jumping
      static constexpr const int Jumping = 2;
      // Get static field: static public NoteMovement/MovementPhase Jumping
      static GlobalNamespace::NoteMovement::MovementPhase _get_Jumping();
      // Set static field: static public NoteMovement/MovementPhase Jumping
      static void _set_Jumping(GlobalNamespace::NoteMovement::MovementPhase value);
    }; // NoteMovement/MovementPhase
    // private NoteFloorMovement _floorMovement
    // Offset: 0x18
    GlobalNamespace::NoteFloorMovement* floorMovement;
    // private NoteJump _jump
    // Offset: 0x20
    GlobalNamespace::NoteJump* jump;
    // private System.Single _zOffset
    // Offset: 0x28
    float zOffset;
    // private System.Action didInitEvent
    // Offset: 0x30
    System::Action* didInitEvent;
    // private System.Action noteDidStartJumpEvent
    // Offset: 0x38
    System::Action* noteDidStartJumpEvent;
    // private System.Action noteDidFinishJumpEvent
    // Offset: 0x40
    System::Action* noteDidFinishJumpEvent;
    // private System.Action noteDidPassMissedMarkerEvent
    // Offset: 0x48
    System::Action* noteDidPassMissedMarkerEvent;
    // private System.Action noteDidPassHalfJumpEvent
    // Offset: 0x50
    System::Action* noteDidPassHalfJumpEvent;
    // private System.Action`1<NoteMovement> noteDidPassJumpThreeQuartersEvent
    // Offset: 0x58
    System::Action_1<GlobalNamespace::NoteMovement*>* noteDidPassJumpThreeQuartersEvent;
    // private NoteMovement/MovementPhase <movementPhase>k__BackingField
    // Offset: 0x60
    GlobalNamespace::NoteMovement::MovementPhase movementPhase;
    // private UnityEngine.Vector3 _position
    // Offset: 0x64
    UnityEngine::Vector3 position;
    // private UnityEngine.Vector3 _prevPosition
    // Offset: 0x70
    UnityEngine::Vector3 prevPosition;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Void add_didInitEvent(System.Action value)
    // Offset: 0xC318A4
    void add_didInitEvent(System::Action* value);
    // public System.Void remove_didInitEvent(System.Action value)
    // Offset: 0xC31948
    void remove_didInitEvent(System::Action* value);
    // public System.Void add_noteDidStartJumpEvent(System.Action value)
    // Offset: 0xC319EC
    void add_noteDidStartJumpEvent(System::Action* value);
    // public System.Void remove_noteDidStartJumpEvent(System.Action value)
    // Offset: 0xC31A90
    void remove_noteDidStartJumpEvent(System::Action* value);
    // public System.Void add_noteDidFinishJumpEvent(System.Action value)
    // Offset: 0xC31B34
    void add_noteDidFinishJumpEvent(System::Action* value);
    // public System.Void remove_noteDidFinishJumpEvent(System.Action value)
    // Offset: 0xC31BD8
    void remove_noteDidFinishJumpEvent(System::Action* value);
    // public System.Void add_noteDidPassMissedMarkerEvent(System.Action value)
    // Offset: 0xC31C7C
    void add_noteDidPassMissedMarkerEvent(System::Action* value);
    // public System.Void remove_noteDidPassMissedMarkerEvent(System.Action value)
    // Offset: 0xC31D20
    void remove_noteDidPassMissedMarkerEvent(System::Action* value);
    // public System.Void add_noteDidPassHalfJumpEvent(System.Action value)
    // Offset: 0xC31DC4
    void add_noteDidPassHalfJumpEvent(System::Action* value);
    // public System.Void remove_noteDidPassHalfJumpEvent(System.Action value)
    // Offset: 0xC31E68
    void remove_noteDidPassHalfJumpEvent(System::Action* value);
    // public System.Void add_noteDidPassJumpThreeQuartersEvent(System.Action`1<NoteMovement> value)
    // Offset: 0xC31F0C
    void add_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteMovement*>* value);
    // public System.Void remove_noteDidPassJumpThreeQuartersEvent(System.Action`1<NoteMovement> value)
    // Offset: 0xC31FB0
    void remove_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteMovement*>* value);
    // public NoteMovement/MovementPhase get_movementPhase()
    // Offset: 0xC32054
    GlobalNamespace::NoteMovement::MovementPhase get_movementPhase();
    // private System.Void set_movementPhase(NoteMovement/MovementPhase value)
    // Offset: 0xC3205C
    void set_movementPhase(GlobalNamespace::NoteMovement::MovementPhase value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0xC32064
    UnityEngine::Vector3 get_position();
    // public UnityEngine.Vector3 get_prevPosition()
    // Offset: 0xC32070
    UnityEngine::Vector3 get_prevPosition();
    // public UnityEngine.Quaternion get_worldRotation()
    // Offset: 0xC3207C
    UnityEngine::Quaternion get_worldRotation();
    // public UnityEngine.Quaternion get_inverseWorldRotation()
    // Offset: 0xC3209C
    UnityEngine::Quaternion get_inverseWorldRotation();
    // public UnityEngine.Vector3 get_moveEndPos()
    // Offset: 0xC320BC
    UnityEngine::Vector3 get_moveEndPos();
    // public System.Single get_moveStartTime()
    // Offset: 0xC320DC
    float get_moveStartTime();
    // public System.Single get_moveDuration()
    // Offset: 0xC320F8
    float get_moveDuration();
    // public UnityEngine.Vector3 get_beatPos()
    // Offset: 0xC32114
    UnityEngine::Vector3 get_beatPos();
    // public System.Single get_jumpDuration()
    // Offset: 0xC3212C
    float get_jumpDuration();
    // public UnityEngine.Vector3 get_jumpMoveVec()
    // Offset: 0xC32148
    UnityEngine::Vector3 get_jumpMoveVec();
    // public System.Single get_distanceToPlayer()
    // Offset: 0xC32168
    float get_distanceToPlayer();
    // public System.Void Init(System.Single beatTime, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single flipYSide, NoteCutDirection cutDirection, System.Single cutDirectionAngleOffset)
    // Offset: 0xC321A0
    void Init(float beatTime, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float flipYSide, GlobalNamespace::NoteCutDirection cutDirection, float cutDirectionAngleOffset);
    // protected System.Void Awake()
    // Offset: 0xC32310
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xC3248C
    void OnDestroy();
    // private System.Void HandleFloorMovementDidFinish()
    // Offset: 0xC3267C
    void HandleFloorMovementDidFinish();
    // private System.Void HandleNoteJumpDidFinish()
    // Offset: 0xC326D0
    void HandleNoteJumpDidFinish();
    // private System.Void HandleNoteJumpDidPassMissedMark()
    // Offset: 0xC326EC
    void HandleNoteJumpDidPassMissedMark();
    // private System.Void HandleNoteJumpDidPassThreeQuarters(NoteJump noteJump)
    // Offset: 0xC32700
    void HandleNoteJumpDidPassThreeQuarters(GlobalNamespace::NoteJump* noteJump);
    // private System.Void HandleNoteJumpNoteJumpDidPassHalf()
    // Offset: 0xC32764
    void HandleNoteJumpNoteJumpDidPassHalf();
    // public System.Void ManualUpdate()
    // Offset: 0xC32778
    // Implemented from: IManualUpdate
    // Base method: System.Void IManualUpdate::ManualUpdate()
    void ManualUpdate();
    // public System.Void .ctor()
    // Offset: 0xC327D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteMovement* New_ctor();
  }; // NoteMovement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteMovement*, "", "NoteMovement");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteMovement::MovementPhase, "", "NoteMovement/MovementPhase");
#pragma pack(pop)
