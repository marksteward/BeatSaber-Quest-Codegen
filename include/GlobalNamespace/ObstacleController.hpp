// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StretchableObstacle
  class StretchableObstacle;
  // Forward declaring type: SimpleColorSO
  class SimpleColorSO;
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x100
  // Autogenerated type: ObstacleController
  // [] Offset: FFFFFFFF
  class ObstacleController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ObstacleController::Pool
    class Pool;
    // Nested type: GlobalNamespace::ObstacleController::$DissolveCoroutine$d__60
    class $DissolveCoroutine$d__60;
    // private StretchableObstacle _stretchableObstacle
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::StretchableObstacle* stretchableObstacle;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StretchableObstacle*) == 0x8);
    // private SimpleColorSO _color
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SimpleColorSO* color;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC5F00
    // private System.Single _endDistanceOffset
    // Size: 0x4
    // Offset: 0x28
    float endDistanceOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: endDistanceOffset and: visualWrappers
    char __padding2[0x4] = {};
    // private UnityEngine.GameObject[] _visualWrappers
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::GameObject*>* visualWrappers;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // [InjectAttribute] Offset: 0xDC5F48
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0xDC5F58
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC5F68
    // private System.Action`1<ObstacleController> didInitEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<GlobalNamespace::ObstacleController*>* didInitEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC5F78
    // private System.Action`1<ObstacleController> finishedMovementEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<GlobalNamespace::ObstacleController*>* finishedMovementEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC5F88
    // private System.Action`1<ObstacleController> passedThreeQuartersOfMove2Event
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<GlobalNamespace::ObstacleController*>* passedThreeQuartersOfMove2Event;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC5F98
    // private System.Action`1<ObstacleController> passedAvoidedMarkEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<GlobalNamespace::ObstacleController*>* passedAvoidedMarkEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC5FA8
    // private System.Action`2<ObstacleController,System.Single> didStartDissolvingEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_2<GlobalNamespace::ObstacleController*, float>* didStartDissolvingEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::ObstacleController*, float>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC5FB8
    // private System.Action`1<ObstacleController> didDissolveEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action_1<GlobalNamespace::ObstacleController*>* didDissolveEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // private UnityEngine.Vector3 _startPos
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _midPos
    // Size: 0xC
    // Offset: 0x84
    UnityEngine::Vector3 midPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _endPos
    // Size: 0xC
    // Offset: 0x90
    UnityEngine::Vector3 endPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _move1Duration
    // Size: 0x4
    // Offset: 0x9C
    float move1Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _move2Duration
    // Size: 0x4
    // Offset: 0xA0
    float move2Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startTimeOffset
    // Size: 0x4
    // Offset: 0xA4
    float startTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _obstacleDuration
    // Size: 0x4
    // Offset: 0xA8
    float obstacleDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _passedThreeQuartersOfMove2Reported
    // Size: 0x1
    // Offset: 0xAC
    bool passedThreeQuartersOfMove2Reported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _passedAvoidedMarkReported
    // Size: 0x1
    // Offset: 0xAD
    bool passedAvoidedMarkReported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: passedAvoidedMarkReported and: passedAvoidedMarkTime
    char __padding20[0x2] = {};
    // private System.Single _passedAvoidedMarkTime
    // Size: 0x4
    // Offset: 0xB0
    float passedAvoidedMarkTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _finishMovementTime
    // Size: 0x4
    // Offset: 0xB4
    float finishMovementTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Bounds _bounds
    // Size: 0x18
    // Offset: 0xB8
    UnityEngine::Bounds bounds;
    // Field size check
    static_assert(sizeof(UnityEngine::Bounds) == 0x18);
    // private System.Boolean _dissolving
    // Size: 0x1
    // Offset: 0xD0
    bool dissolving;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: dissolving and: obstacleData
    char __padding24[0x7] = {};
    // private ObstacleData _obstacleData
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::ObstacleData* obstacleData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleData*) == 0x8);
    // private UnityEngine.Quaternion _worldRotation
    // Size: 0x10
    // Offset: 0xE0
    UnityEngine::Quaternion worldRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion _inverseWorldRotation
    // Size: 0x10
    // Offset: 0xF0
    UnityEngine::Quaternion inverseWorldRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: ObstacleController
    ObstacleController(GlobalNamespace::StretchableObstacle* stretchableObstacle_ = {}, GlobalNamespace::SimpleColorSO* color_ = {}, float endDistanceOffset_ = {}, ::Array<UnityEngine::GameObject*>* visualWrappers_ = {}, GlobalNamespace::PlayerTransforms* playerTransforms_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* didInitEvent_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* finishedMovementEvent_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* passedThreeQuartersOfMove2Event_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* passedAvoidedMarkEvent_ = {}, System::Action_2<GlobalNamespace::ObstacleController*, float>* didStartDissolvingEvent_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* didDissolveEvent_ = {}, UnityEngine::Vector3 startPos_ = {}, UnityEngine::Vector3 midPos_ = {}, UnityEngine::Vector3 endPos_ = {}, float move1Duration_ = {}, float move2Duration_ = {}, float startTimeOffset_ = {}, float obstacleDuration_ = {}, bool passedThreeQuartersOfMove2Reported_ = {}, bool passedAvoidedMarkReported_ = {}, float passedAvoidedMarkTime_ = {}, float finishMovementTime_ = {}, UnityEngine::Bounds bounds_ = {}, bool dissolving_ = {}, GlobalNamespace::ObstacleData* obstacleData_ = {}, UnityEngine::Quaternion worldRotation_ = {}, UnityEngine::Quaternion inverseWorldRotation_ = {}) noexcept : stretchableObstacle{stretchableObstacle_}, color{color_}, endDistanceOffset{endDistanceOffset_}, visualWrappers{visualWrappers_}, playerTransforms{playerTransforms_}, audioTimeSyncController{audioTimeSyncController_}, didInitEvent{didInitEvent_}, finishedMovementEvent{finishedMovementEvent_}, passedThreeQuartersOfMove2Event{passedThreeQuartersOfMove2Event_}, passedAvoidedMarkEvent{passedAvoidedMarkEvent_}, didStartDissolvingEvent{didStartDissolvingEvent_}, didDissolveEvent{didDissolveEvent_}, startPos{startPos_}, midPos{midPos_}, endPos{endPos_}, move1Duration{move1Duration_}, move2Duration{move2Duration_}, startTimeOffset{startTimeOffset_}, obstacleDuration{obstacleDuration_}, passedThreeQuartersOfMove2Reported{passedThreeQuartersOfMove2Reported_}, passedAvoidedMarkReported{passedAvoidedMarkReported_}, passedAvoidedMarkTime{passedAvoidedMarkTime_}, finishMovementTime{finishMovementTime_}, bounds{bounds_}, dissolving{dissolving_}, obstacleData{obstacleData_}, worldRotation{worldRotation_}, inverseWorldRotation{inverseWorldRotation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kAvoidMarkTimeOffset
    static constexpr const float kAvoidMarkTimeOffset = 0.15;
    // Get static field: static public System.Single kAvoidMarkTimeOffset
    static float _get_kAvoidMarkTimeOffset();
    // Set static field: static public System.Single kAvoidMarkTimeOffset
    static void _set_kAvoidMarkTimeOffset(float value);
    // public System.Void add_didInitEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x1002320
    void add_didInitEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_didInitEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x10023C4
    void remove_didInitEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_finishedMovementEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x1002468
    void add_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_finishedMovementEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x100250C
    void remove_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_passedThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0x10025B0
    void add_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_passedThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0x1002654
    void remove_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_passedAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x10026F8
    void add_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_passedAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x100279C
    void remove_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_didStartDissolvingEvent(System.Action`2<ObstacleController,System.Single> value)
    // Offset: 0x1002840
    void add_didStartDissolvingEvent(System::Action_2<GlobalNamespace::ObstacleController*, float>* value);
    // public System.Void remove_didStartDissolvingEvent(System.Action`2<ObstacleController,System.Single> value)
    // Offset: 0x10028E4
    void remove_didStartDissolvingEvent(System::Action_2<GlobalNamespace::ObstacleController*, float>* value);
    // public System.Void add_didDissolveEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x1002988
    void add_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_didDissolveEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x1002A2C
    void remove_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0x1002AD0
    void set_hide(bool value);
    // public System.Void set_pause(System.Boolean value)
    // Offset: 0x1002B50
    void set_pause(bool value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1002B60
    UnityEngine::Bounds get_bounds();
    // public ObstacleData get_obstacleData()
    // Offset: 0x1002B74
    GlobalNamespace::ObstacleData* get_obstacleData();
    // public System.Boolean get_hasPassedAvoidedMark()
    // Offset: 0x1002B7C
    bool get_hasPassedAvoidedMark();
    // public System.Single get_move1Duration()
    // Offset: 0x1002B84
    float get_move1Duration();
    // public System.Single get_move2Duration()
    // Offset: 0x1002B8C
    float get_move2Duration();
    // public System.Void Init(ObstacleData obstacleData, System.Single worldRotation, UnityEngine.Vector3 startPos, UnityEngine.Vector3 midPos, UnityEngine.Vector3 endPos, System.Single move1Duration, System.Single move2Duration, System.Single singleLineWidth, System.Single height)
    // Offset: 0x1002B94
    void Init(GlobalNamespace::ObstacleData* obstacleData, float worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 midPos, UnityEngine::Vector3 endPos, float move1Duration, float move2Duration, float singleLineWidth, float height);
    // protected System.Void Update()
    // Offset: 0x1002EF0
    void Update();
    // public System.Void ManualUpdate()
    // Offset: 0x1002EF4
    void ManualUpdate();
    // private UnityEngine.Vector3 GetPosForTime(System.Single time)
    // Offset: 0x10030B0
    UnityEngine::Vector3 GetPosForTime(float time);
    // private System.Collections.IEnumerator DissolveCoroutine(System.Single duration)
    // Offset: 0x1003220
    System::Collections::IEnumerator* DissolveCoroutine(float duration);
    // public System.Void Dissolve(System.Single duration)
    // Offset: 0x10032D8
    void Dissolve(float duration);
    // public System.Void .ctor()
    // Offset: 0x1003318
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObstacleController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleController*, creationType>()));
    }
  }; // ObstacleController
  static check_size<sizeof(ObstacleController), 240 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_ObstacleControllerSizeCheck;
  static_assert(sizeof(ObstacleController) == 0x100);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleController*, "", "ObstacleController");
#pragma pack(pop)
