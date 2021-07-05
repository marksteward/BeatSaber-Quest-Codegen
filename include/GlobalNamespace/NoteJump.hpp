// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: PlayerSpaceConvertor
  class PlayerSpaceConvertor;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11C
  #pragma pack(push, 1)
  // Autogenerated type: NoteJump
  class NoteJump : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _rotatedObject
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* rotatedObject;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [SpaceAttribute] Offset: 0xE19584
    // private System.Single _yAvoidanceUp
    // Size: 0x4
    // Offset: 0x20
    float yAvoidanceUp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _yAvoidanceDown
    // Size: 0x4
    // Offset: 0x24
    float yAvoidanceDown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xE195CC
    // private System.Single _endDistanceOffset
    // Size: 0x4
    // Offset: 0x28
    float endDistanceOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: endDistanceOffset and: playerTransforms
    char __padding3[0x4] = {};
    // [InjectAttribute] Offset: 0xE19604
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0xE19614
    // private readonly PlayerSpaceConvertor _playerSpaceConvertor
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PlayerSpaceConvertor* playerSpaceConvertor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpaceConvertor*) == 0x8);
    // [InjectAttribute] Offset: 0xE19624
    // private readonly IAudioTimeSource _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IAudioTimeSource* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE19634
    // private System.Action noteJumpDidFinishEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* noteJumpDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE19644
    // private System.Action noteJumpDidPassMissedMarkerEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action* noteJumpDidPassMissedMarkerEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE19654
    // private System.Action`1<NoteJump> noteJumpDidPassThreeQuartersEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<GlobalNamespace::NoteJump*>* noteJumpDidPassThreeQuartersEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteJump*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE19664
    // private System.Action noteJumpDidPassHalfEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action* noteJumpDidPassHalfEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE19674
    // private System.Action`1<System.Single> noteJumpDidUpdateProgressEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_1<float>* noteJumpDidUpdateProgressEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // private UnityEngine.Vector3 _startPos
    // Size: 0xC
    // Offset: 0x70
    UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _endPos
    // Size: 0xC
    // Offset: 0x7C
    UnityEngine::Vector3 endPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _jumpDuration
    // Size: 0x4
    // Offset: 0x88
    float jumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _moveVec
    // Size: 0xC
    // Offset: 0x8C
    UnityEngine::Vector3 moveVec;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _beatTime
    // Size: 0x4
    // Offset: 0x98
    float beatTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startVerticalVelocity
    // Size: 0x4
    // Offset: 0x9C
    float startVerticalVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion _startRotation
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Quaternion startRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion _middleRotation
    // Size: 0x10
    // Offset: 0xB0
    UnityEngine::Quaternion middleRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion _endRotation
    // Size: 0x10
    // Offset: 0xC0
    UnityEngine::Quaternion endRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single _gravity
    // Size: 0x4
    // Offset: 0xD0
    float gravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _yAvoidance
    // Size: 0x4
    // Offset: 0xD4
    float yAvoidance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _missedTime
    // Size: 0x4
    // Offset: 0xD8
    float missedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _missedMarkReported
    // Size: 0x1
    // Offset: 0xDC
    bool missedMarkReported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _threeQuartersMarkReported
    // Size: 0x1
    // Offset: 0xDD
    bool threeQuartersMarkReported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _halfJumpMarkReported
    // Size: 0x1
    // Offset: 0xDE
    bool halfJumpMarkReported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: halfJumpMarkReported and: localPosition
    char __padding26[0x1] = {};
    // private UnityEngine.Vector3 _localPosition
    // Size: 0xC
    // Offset: 0xE0
    UnityEngine::Vector3 localPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: localPosition and: randomRotations
    char __padding27[0x4] = {};
    // private readonly UnityEngine.Vector3[] _randomRotations
    // Size: 0x8
    // Offset: 0xF0
    ::Array<UnityEngine::Vector3>* randomRotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private System.Int32 _randomRotationIdx
    // Size: 0x4
    // Offset: 0xF8
    int randomRotationIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Quaternion _worldRotation
    // Size: 0x10
    // Offset: 0xFC
    UnityEngine::Quaternion worldRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion _inverseWorldRotation
    // Size: 0x10
    // Offset: 0x10C
    UnityEngine::Quaternion inverseWorldRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: NoteJump
    NoteJump(UnityEngine::Transform* rotatedObject_ = {}, float yAvoidanceUp_ = {}, float yAvoidanceDown_ = {}, float endDistanceOffset_ = {}, GlobalNamespace::PlayerTransforms* playerTransforms_ = {}, GlobalNamespace::PlayerSpaceConvertor* playerSpaceConvertor_ = {}, GlobalNamespace::IAudioTimeSource* audioTimeSyncController_ = {}, System::Action* noteJumpDidFinishEvent_ = {}, System::Action* noteJumpDidPassMissedMarkerEvent_ = {}, System::Action_1<GlobalNamespace::NoteJump*>* noteJumpDidPassThreeQuartersEvent_ = {}, System::Action* noteJumpDidPassHalfEvent_ = {}, System::Action_1<float>* noteJumpDidUpdateProgressEvent_ = {}, UnityEngine::Vector3 startPos_ = {}, UnityEngine::Vector3 endPos_ = {}, float jumpDuration_ = {}, UnityEngine::Vector3 moveVec_ = {}, float beatTime_ = {}, float startVerticalVelocity_ = {}, UnityEngine::Quaternion startRotation_ = {}, UnityEngine::Quaternion middleRotation_ = {}, UnityEngine::Quaternion endRotation_ = {}, float gravity_ = {}, float yAvoidance_ = {}, float missedTime_ = {}, bool missedMarkReported_ = {}, bool threeQuartersMarkReported_ = {}, bool halfJumpMarkReported_ = {}, UnityEngine::Vector3 localPosition_ = {}, ::Array<UnityEngine::Vector3>* randomRotations_ = {}, int randomRotationIdx_ = {}, UnityEngine::Quaternion worldRotation_ = {}, UnityEngine::Quaternion inverseWorldRotation_ = {}) noexcept : rotatedObject{rotatedObject_}, yAvoidanceUp{yAvoidanceUp_}, yAvoidanceDown{yAvoidanceDown_}, endDistanceOffset{endDistanceOffset_}, playerTransforms{playerTransforms_}, playerSpaceConvertor{playerSpaceConvertor_}, audioTimeSyncController{audioTimeSyncController_}, noteJumpDidFinishEvent{noteJumpDidFinishEvent_}, noteJumpDidPassMissedMarkerEvent{noteJumpDidPassMissedMarkerEvent_}, noteJumpDidPassThreeQuartersEvent{noteJumpDidPassThreeQuartersEvent_}, noteJumpDidPassHalfEvent{noteJumpDidPassHalfEvent_}, noteJumpDidUpdateProgressEvent{noteJumpDidUpdateProgressEvent_}, startPos{startPos_}, endPos{endPos_}, jumpDuration{jumpDuration_}, moveVec{moveVec_}, beatTime{beatTime_}, startVerticalVelocity{startVerticalVelocity_}, startRotation{startRotation_}, middleRotation{middleRotation_}, endRotation{endRotation_}, gravity{gravity_}, yAvoidance{yAvoidance_}, missedTime{missedTime_}, missedMarkReported{missedMarkReported_}, threeQuartersMarkReported{threeQuartersMarkReported_}, halfJumpMarkReported{halfJumpMarkReported_}, localPosition{localPosition_}, randomRotations{randomRotations_}, randomRotationIdx{randomRotationIdx_}, worldRotation{worldRotation_}, inverseWorldRotation{inverseWorldRotation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kMissedTimeOffset
    static constexpr const float kMissedTimeOffset = 0.15;
    // Get static field: static public System.Single kMissedTimeOffset
    static float _get_kMissedTimeOffset();
    // Set static field: static public System.Single kMissedTimeOffset
    static void _set_kMissedTimeOffset(float value);
    // public System.Void add_noteJumpDidFinishEvent(System.Action value)
    // Offset: 0x11D8854
    void add_noteJumpDidFinishEvent(System::Action* value);
    // public System.Void remove_noteJumpDidFinishEvent(System.Action value)
    // Offset: 0x11D88F8
    void remove_noteJumpDidFinishEvent(System::Action* value);
    // public System.Void add_noteJumpDidPassMissedMarkerEvent(System.Action value)
    // Offset: 0x11D899C
    void add_noteJumpDidPassMissedMarkerEvent(System::Action* value);
    // public System.Void remove_noteJumpDidPassMissedMarkerEvent(System.Action value)
    // Offset: 0x11D8A40
    void remove_noteJumpDidPassMissedMarkerEvent(System::Action* value);
    // public System.Void add_noteJumpDidPassThreeQuartersEvent(System.Action`1<NoteJump> value)
    // Offset: 0x11D8AE4
    void add_noteJumpDidPassThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteJump*>* value);
    // public System.Void remove_noteJumpDidPassThreeQuartersEvent(System.Action`1<NoteJump> value)
    // Offset: 0x11D8B88
    void remove_noteJumpDidPassThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteJump*>* value);
    // public System.Void add_noteJumpDidPassHalfEvent(System.Action value)
    // Offset: 0x11D8C2C
    void add_noteJumpDidPassHalfEvent(System::Action* value);
    // public System.Void remove_noteJumpDidPassHalfEvent(System.Action value)
    // Offset: 0x11D8CD0
    void remove_noteJumpDidPassHalfEvent(System::Action* value);
    // public System.Void add_noteJumpDidUpdateProgressEvent(System.Action`1<System.Single> value)
    // Offset: 0x11D8D74
    void add_noteJumpDidUpdateProgressEvent(System::Action_1<float>* value);
    // public System.Void remove_noteJumpDidUpdateProgressEvent(System.Action`1<System.Single> value)
    // Offset: 0x11D8E18
    void remove_noteJumpDidUpdateProgressEvent(System::Action_1<float>* value);
    // public System.Single get_distanceToPlayer()
    // Offset: 0x11D8EBC
    float get_distanceToPlayer();
    // public UnityEngine.Vector3 get_beatPos()
    // Offset: 0x11D8FB0
    UnityEngine::Vector3 get_beatPos();
    // public System.Single get_jumpDuration()
    // Offset: 0x11D905C
    float get_jumpDuration();
    // public UnityEngine.Vector3 get_moveVec()
    // Offset: 0x11D9064
    UnityEngine::Vector3 get_moveVec();
    // public UnityEngine.Vector3 get_localPosition()
    // Offset: 0x11D9070
    UnityEngine::Vector3 get_localPosition();
    // public System.Void Init(System.Single beatTime, System.Single worldRotation, UnityEngine.Vector3 startPos, UnityEngine.Vector3 endPos, System.Single jumpDuration, System.Single gravity, System.Single flipYSide, System.Single endRotation)
    // Offset: 0x11D907C
    void Init(float beatTime, float worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 endPos, float jumpDuration, float gravity, float flipYSide, float endRotation);
    // public UnityEngine.Vector3 ManualUpdate()
    // Offset: 0x11D9384
    UnityEngine::Vector3 ManualUpdate();
    // public System.Void .ctor()
    // Offset: 0x11D9A78
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteJump* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteJump::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteJump*, creationType>()));
    }
  }; // NoteJump
  #pragma pack(pop)
  static check_size<sizeof(NoteJump), 268 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_NoteJumpSizeCheck;
  static_assert(sizeof(NoteJump) == 0x11C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteJump*, "", "NoteJump");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::add_noteJumpDidFinishEvent
// Il2CppName: add_noteJumpDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(System::Action*)>(&GlobalNamespace::NoteJump::add_noteJumpDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "add_noteJumpDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::remove_noteJumpDidFinishEvent
// Il2CppName: remove_noteJumpDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(System::Action*)>(&GlobalNamespace::NoteJump::remove_noteJumpDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "remove_noteJumpDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::add_noteJumpDidPassMissedMarkerEvent
// Il2CppName: add_noteJumpDidPassMissedMarkerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(System::Action*)>(&GlobalNamespace::NoteJump::add_noteJumpDidPassMissedMarkerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "add_noteJumpDidPassMissedMarkerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::remove_noteJumpDidPassMissedMarkerEvent
// Il2CppName: remove_noteJumpDidPassMissedMarkerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(System::Action*)>(&GlobalNamespace::NoteJump::remove_noteJumpDidPassMissedMarkerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "remove_noteJumpDidPassMissedMarkerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::add_noteJumpDidPassThreeQuartersEvent
// Il2CppName: add_noteJumpDidPassThreeQuartersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(System::Action_1<GlobalNamespace::NoteJump*>*)>(&GlobalNamespace::NoteJump::add_noteJumpDidPassThreeQuartersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteJump")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "add_noteJumpDidPassThreeQuartersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::remove_noteJumpDidPassThreeQuartersEvent
// Il2CppName: remove_noteJumpDidPassThreeQuartersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(System::Action_1<GlobalNamespace::NoteJump*>*)>(&GlobalNamespace::NoteJump::remove_noteJumpDidPassThreeQuartersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteJump")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "remove_noteJumpDidPassThreeQuartersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::add_noteJumpDidPassHalfEvent
// Il2CppName: add_noteJumpDidPassHalfEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(System::Action*)>(&GlobalNamespace::NoteJump::add_noteJumpDidPassHalfEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "add_noteJumpDidPassHalfEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::remove_noteJumpDidPassHalfEvent
// Il2CppName: remove_noteJumpDidPassHalfEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(System::Action*)>(&GlobalNamespace::NoteJump::remove_noteJumpDidPassHalfEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "remove_noteJumpDidPassHalfEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::add_noteJumpDidUpdateProgressEvent
// Il2CppName: add_noteJumpDidUpdateProgressEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(System::Action_1<float>*)>(&GlobalNamespace::NoteJump::add_noteJumpDidUpdateProgressEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "add_noteJumpDidUpdateProgressEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::remove_noteJumpDidUpdateProgressEvent
// Il2CppName: remove_noteJumpDidUpdateProgressEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(System::Action_1<float>*)>(&GlobalNamespace::NoteJump::remove_noteJumpDidUpdateProgressEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "remove_noteJumpDidUpdateProgressEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::get_distanceToPlayer
// Il2CppName: get_distanceToPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteJump::*)()>(&GlobalNamespace::NoteJump::get_distanceToPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "get_distanceToPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::get_beatPos
// Il2CppName: get_beatPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteJump::*)()>(&GlobalNamespace::NoteJump::get_beatPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "get_beatPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::get_jumpDuration
// Il2CppName: get_jumpDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteJump::*)()>(&GlobalNamespace::NoteJump::get_jumpDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "get_jumpDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::get_moveVec
// Il2CppName: get_moveVec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteJump::*)()>(&GlobalNamespace::NoteJump::get_moveVec)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "get_moveVec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::get_localPosition
// Il2CppName: get_localPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteJump::*)()>(&GlobalNamespace::NoteJump::get_localPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "get_localPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJump::*)(float, float, UnityEngine::Vector3, UnityEngine::Vector3, float, float, float, float)>(&GlobalNamespace::NoteJump::Init)> {
  static const MethodInfo* get() {
    static auto* beatTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* endPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* jumpDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* gravity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flipYSide = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* endRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatTime, worldRotation, startPos, endPos, jumpDuration, gravity, flipYSide, endRotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteJump::*)()>(&GlobalNamespace::NoteJump::ManualUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJump*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJump::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
