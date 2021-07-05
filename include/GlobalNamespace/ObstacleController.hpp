// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ObstacleControllerBase
#include "GlobalNamespace/ObstacleControllerBase.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: ColorManager
  class ColorManager;
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
  // Size: 0x120
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleController
  class ObstacleController : public GlobalNamespace::ObstacleControllerBase {
    public:
    // Nested type: GlobalNamespace::ObstacleController::Pool
    class Pool;
    // Nested type: GlobalNamespace::ObstacleController::$DissolveCoroutine$d__69
    class $DissolveCoroutine$d__69;
    // private StretchableObstacle _stretchableObstacle
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::StretchableObstacle* stretchableObstacle;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StretchableObstacle*) == 0x8);
    // [SpaceAttribute] Offset: 0xE19894
    // private System.Single _endDistanceOffset
    // Size: 0x4
    // Offset: 0x30
    float endDistanceOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: endDistanceOffset and: visualWrappers
    char __padding1[0x4] = {};
    // private UnityEngine.GameObject[] _visualWrappers
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::GameObject*>* visualWrappers;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE198DC
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0xE198EC
    // private readonly IAudioTimeSource _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IAudioTimeSource* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0xE198FC
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1990C
    // private System.Action`1<ObstacleController> finishedMovementEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<GlobalNamespace::ObstacleController*>* finishedMovementEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1991C
    // private System.Action`1<ObstacleController> passedThreeQuartersOfMove2Event
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<GlobalNamespace::ObstacleController*>* passedThreeQuartersOfMove2Event;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1992C
    // private System.Action`1<ObstacleController> passedAvoidedMarkEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_1<GlobalNamespace::ObstacleController*>* passedAvoidedMarkEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1993C
    // private System.Action`1<ObstacleController> didDissolveEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action_1<GlobalNamespace::ObstacleController*>* didDissolveEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1994C
    // private System.Action`2<ObstacleController,System.Single> didUpdateProgress
    // Size: 0x8
    // Offset: 0x78
    System::Action_2<GlobalNamespace::ObstacleController*, float>* didUpdateProgress;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::ObstacleController*, float>*) == 0x8);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x80
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _height
    // Size: 0x4
    // Offset: 0x84
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _length
    // Size: 0x4
    // Offset: 0x88
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _startPos
    // Size: 0xC
    // Offset: 0x8C
    UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _midPos
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 midPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _endPos
    // Size: 0xC
    // Offset: 0xA4
    UnityEngine::Vector3 endPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _move1Duration
    // Size: 0x4
    // Offset: 0xB0
    float move1Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _move2Duration
    // Size: 0x4
    // Offset: 0xB4
    float move2Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startTimeOffset
    // Size: 0x4
    // Offset: 0xB8
    float startTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _obstacleDuration
    // Size: 0x4
    // Offset: 0xBC
    float obstacleDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _passedThreeQuartersOfMove2Reported
    // Size: 0x1
    // Offset: 0xC0
    bool passedThreeQuartersOfMove2Reported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _passedAvoidedMarkReported
    // Size: 0x1
    // Offset: 0xC1
    bool passedAvoidedMarkReported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: passedAvoidedMarkReported and: passedAvoidedMarkTime
    char __padding22[0x2] = {};
    // private System.Single _passedAvoidedMarkTime
    // Size: 0x4
    // Offset: 0xC4
    float passedAvoidedMarkTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _finishMovementTime
    // Size: 0x4
    // Offset: 0xC8
    float finishMovementTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Bounds _bounds
    // Size: 0x18
    // Offset: 0xCC
    UnityEngine::Bounds bounds;
    // Field size check
    static_assert(sizeof(UnityEngine::Bounds) == 0x18);
    // private System.Boolean _dissolving
    // Size: 0x1
    // Offset: 0xE4
    bool dissolving;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: dissolving and: obstacleData
    char __padding26[0x3] = {};
    // private ObstacleData _obstacleData
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::ObstacleData* obstacleData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleData*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0xF0
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Quaternion _worldRotation
    // Size: 0x10
    // Offset: 0x100
    UnityEngine::Quaternion worldRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion _inverseWorldRotation
    // Size: 0x10
    // Offset: 0x110
    UnityEngine::Quaternion inverseWorldRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: ObstacleController
    ObstacleController(GlobalNamespace::StretchableObstacle* stretchableObstacle_ = {}, float endDistanceOffset_ = {}, ::Array<UnityEngine::GameObject*>* visualWrappers_ = {}, GlobalNamespace::PlayerTransforms* playerTransforms_ = {}, GlobalNamespace::IAudioTimeSource* audioTimeSyncController_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* finishedMovementEvent_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* passedThreeQuartersOfMove2Event_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* passedAvoidedMarkEvent_ = {}, System::Action_1<GlobalNamespace::ObstacleController*>* didDissolveEvent_ = {}, System::Action_2<GlobalNamespace::ObstacleController*, float>* didUpdateProgress_ = {}, float width_ = {}, float height_ = {}, float length_ = {}, UnityEngine::Vector3 startPos_ = {}, UnityEngine::Vector3 midPos_ = {}, UnityEngine::Vector3 endPos_ = {}, float move1Duration_ = {}, float move2Duration_ = {}, float startTimeOffset_ = {}, float obstacleDuration_ = {}, bool passedThreeQuartersOfMove2Reported_ = {}, bool passedAvoidedMarkReported_ = {}, float passedAvoidedMarkTime_ = {}, float finishMovementTime_ = {}, UnityEngine::Bounds bounds_ = {}, bool dissolving_ = {}, GlobalNamespace::ObstacleData* obstacleData_ = {}, UnityEngine::Color color_ = {}, UnityEngine::Quaternion worldRotation_ = {}, UnityEngine::Quaternion inverseWorldRotation_ = {}) noexcept : stretchableObstacle{stretchableObstacle_}, endDistanceOffset{endDistanceOffset_}, visualWrappers{visualWrappers_}, playerTransforms{playerTransforms_}, audioTimeSyncController{audioTimeSyncController_}, colorManager{colorManager_}, finishedMovementEvent{finishedMovementEvent_}, passedThreeQuartersOfMove2Event{passedThreeQuartersOfMove2Event_}, passedAvoidedMarkEvent{passedAvoidedMarkEvent_}, didDissolveEvent{didDissolveEvent_}, didUpdateProgress{didUpdateProgress_}, width{width_}, height{height_}, length{length_}, startPos{startPos_}, midPos{midPos_}, endPos{endPos_}, move1Duration{move1Duration_}, move2Duration{move2Duration_}, startTimeOffset{startTimeOffset_}, obstacleDuration{obstacleDuration_}, passedThreeQuartersOfMove2Reported{passedThreeQuartersOfMove2Reported_}, passedAvoidedMarkReported{passedAvoidedMarkReported_}, passedAvoidedMarkTime{passedAvoidedMarkTime_}, finishMovementTime{finishMovementTime_}, bounds{bounds_}, dissolving{dissolving_}, obstacleData{obstacleData_}, color{color_}, worldRotation{worldRotation_}, inverseWorldRotation{inverseWorldRotation_} {}
    // static field const value: static public System.Single kAvoidMarkTimeOffset
    static constexpr const float kAvoidMarkTimeOffset = 0.15;
    // Get static field: static public System.Single kAvoidMarkTimeOffset
    static float _get_kAvoidMarkTimeOffset();
    // Set static field: static public System.Single kAvoidMarkTimeOffset
    static void _set_kAvoidMarkTimeOffset(float value);
    // public System.Void add_finishedMovementEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x11DC3BC
    void add_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_finishedMovementEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x11DC460
    void remove_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_passedThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0x11DC504
    void add_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_passedThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0x11DC5A8
    void remove_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_passedAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x11DC64C
    void add_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_passedAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x11DC6F0
    void remove_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_didDissolveEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x11DC794
    void add_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_didDissolveEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x11DC838
    void remove_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_didUpdateProgress(System.Action`2<ObstacleController,System.Single> value)
    // Offset: 0x11DC8DC
    void add_didUpdateProgress(System::Action_2<GlobalNamespace::ObstacleController*, float>* value);
    // public System.Void remove_didUpdateProgress(System.Action`2<ObstacleController,System.Single> value)
    // Offset: 0x11DC980
    void remove_didUpdateProgress(System::Action_2<GlobalNamespace::ObstacleController*, float>* value);
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0x11DCA24
    void set_hide(bool value);
    // public System.Void set_pause(System.Boolean value)
    // Offset: 0x11DCAA4
    void set_pause(bool value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x11DCAB4
    UnityEngine::Bounds get_bounds();
    // public ObstacleData get_obstacleData()
    // Offset: 0x11DCAC8
    GlobalNamespace::ObstacleData* get_obstacleData();
    // public System.Boolean get_hasPassedAvoidedMark()
    // Offset: 0x11DCAD0
    bool get_hasPassedAvoidedMark();
    // public System.Single get_move1Duration()
    // Offset: 0x11DCAD8
    float get_move1Duration();
    // public System.Single get_move2Duration()
    // Offset: 0x11DCAE0
    float get_move2Duration();
    // public System.Single get_width()
    // Offset: 0x11DCAE8
    float get_width();
    // public System.Single get_height()
    // Offset: 0x11DCAF0
    float get_height();
    // public System.Single get_length()
    // Offset: 0x11DCAF8
    float get_length();
    // public UnityEngine.Color get_color()
    // Offset: 0x11DCB00
    UnityEngine::Color get_color();
    // public System.Void Init(ObstacleData obstacleData, System.Single worldRotation, UnityEngine.Vector3 startPos, UnityEngine.Vector3 midPos, UnityEngine.Vector3 endPos, System.Single move1Duration, System.Single move2Duration, System.Single singleLineWidth, System.Single height)
    // Offset: 0x11DCB0C
    void Init(GlobalNamespace::ObstacleData* obstacleData, float worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 midPos, UnityEngine::Vector3 endPos, float move1Duration, float move2Duration, float singleLineWidth, float height);
    // protected System.Void Update()
    // Offset: 0x11DCEB8
    void Update();
    // public System.Void ManualUpdate()
    // Offset: 0x11DCEC4
    void ManualUpdate();
    // private UnityEngine.Vector3 GetPosForTime(System.Single time)
    // Offset: 0x11DD10C
    UnityEngine::Vector3 GetPosForTime(float time);
    // private System.Collections.IEnumerator DissolveCoroutine(System.Single duration)
    // Offset: 0x11DD280
    System::Collections::IEnumerator* DissolveCoroutine(float duration);
    // public System.Void Dissolve(System.Single duration)
    // Offset: 0x11DD32C
    void Dissolve(float duration);
    // public System.Void .ctor()
    // Offset: 0x11DD36C
    // Implemented from: ObstacleControllerBase
    // Base method: System.Void ObstacleControllerBase::.ctor()
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
  #pragma pack(pop)
  static check_size<sizeof(ObstacleController), 272 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_ObstacleControllerSizeCheck;
  static_assert(sizeof(ObstacleController) == 0x120);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleController*, "", "ObstacleController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::add_finishedMovementEvent
// Il2CppName: add_finishedMovementEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(System::Action_1<GlobalNamespace::ObstacleController*>*)>(&GlobalNamespace::ObstacleController::add_finishedMovementEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "add_finishedMovementEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::remove_finishedMovementEvent
// Il2CppName: remove_finishedMovementEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(System::Action_1<GlobalNamespace::ObstacleController*>*)>(&GlobalNamespace::ObstacleController::remove_finishedMovementEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "remove_finishedMovementEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::add_passedThreeQuartersOfMove2Event
// Il2CppName: add_passedThreeQuartersOfMove2Event
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(System::Action_1<GlobalNamespace::ObstacleController*>*)>(&GlobalNamespace::ObstacleController::add_passedThreeQuartersOfMove2Event)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "add_passedThreeQuartersOfMove2Event", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::remove_passedThreeQuartersOfMove2Event
// Il2CppName: remove_passedThreeQuartersOfMove2Event
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(System::Action_1<GlobalNamespace::ObstacleController*>*)>(&GlobalNamespace::ObstacleController::remove_passedThreeQuartersOfMove2Event)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "remove_passedThreeQuartersOfMove2Event", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::add_passedAvoidedMarkEvent
// Il2CppName: add_passedAvoidedMarkEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(System::Action_1<GlobalNamespace::ObstacleController*>*)>(&GlobalNamespace::ObstacleController::add_passedAvoidedMarkEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "add_passedAvoidedMarkEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::remove_passedAvoidedMarkEvent
// Il2CppName: remove_passedAvoidedMarkEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(System::Action_1<GlobalNamespace::ObstacleController*>*)>(&GlobalNamespace::ObstacleController::remove_passedAvoidedMarkEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "remove_passedAvoidedMarkEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::add_didDissolveEvent
// Il2CppName: add_didDissolveEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(System::Action_1<GlobalNamespace::ObstacleController*>*)>(&GlobalNamespace::ObstacleController::add_didDissolveEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "add_didDissolveEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::remove_didDissolveEvent
// Il2CppName: remove_didDissolveEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(System::Action_1<GlobalNamespace::ObstacleController*>*)>(&GlobalNamespace::ObstacleController::remove_didDissolveEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "remove_didDissolveEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::add_didUpdateProgress
// Il2CppName: add_didUpdateProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(System::Action_2<GlobalNamespace::ObstacleController*, float>*)>(&GlobalNamespace::ObstacleController::add_didUpdateProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "add_didUpdateProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::remove_didUpdateProgress
// Il2CppName: remove_didUpdateProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(System::Action_2<GlobalNamespace::ObstacleController*, float>*)>(&GlobalNamespace::ObstacleController::remove_didUpdateProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "remove_didUpdateProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::set_hide
// Il2CppName: set_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(bool)>(&GlobalNamespace::ObstacleController::set_hide)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "set_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::set_pause
// Il2CppName: set_pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(bool)>(&GlobalNamespace::ObstacleController::set_pause)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "set_pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::get_bounds
// Il2CppName: get_bounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::get_bounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "get_bounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::get_obstacleData
// Il2CppName: get_obstacleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ObstacleData* (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::get_obstacleData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "get_obstacleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::get_hasPassedAvoidedMark
// Il2CppName: get_hasPassedAvoidedMark
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::get_hasPassedAvoidedMark)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "get_hasPassedAvoidedMark", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::get_move1Duration
// Il2CppName: get_move1Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::get_move1Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "get_move1Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::get_move2Duration
// Il2CppName: get_move2Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::get_move2Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "get_move2Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(GlobalNamespace::ObstacleData*, float, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float, float, float, float)>(&GlobalNamespace::ObstacleController::Init)> {
  static const MethodInfo* get() {
    static auto* obstacleData = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* midPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* endPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* move1Duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* move2Duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* singleLineWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleData, worldRotation, startPos, midPos, endPos, move1Duration, move2Duration, singleLineWidth, height});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)()>(&GlobalNamespace::ObstacleController::ManualUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::GetPosForTime
// Il2CppName: GetPosForTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::ObstacleController::*)(float)>(&GlobalNamespace::ObstacleController::GetPosForTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "GetPosForTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::DissolveCoroutine
// Il2CppName: DissolveCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::ObstacleController::*)(float)>(&GlobalNamespace::ObstacleController::DissolveCoroutine)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "DissolveCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::Dissolve
// Il2CppName: Dissolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleController::*)(float)>(&GlobalNamespace::ObstacleController::Dissolve)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleController*), "Dissolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
