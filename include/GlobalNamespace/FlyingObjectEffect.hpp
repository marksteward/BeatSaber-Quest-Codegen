// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7D
  // Autogenerated type: FlyingObjectEffect
  // [] Offset: FFFFFFFF
  class FlyingObjectEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AnimationCurve _moveAnimationCurve
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AnimationCurve* moveAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _shakeFrequency
    // Size: 0x4
    // Offset: 0x20
    float shakeFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shakeStrength
    // Size: 0x4
    // Offset: 0x24
    float shakeStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _shakeStrengthAnimationCurve
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationCurve* shakeStrengthAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC6870
    // private System.Action`1<FlyingObjectEffect> didFinishEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::FlyingObjectEffect*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::FlyingObjectEffect*>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x38
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: shakeRotation
    char __padding5[0x3] = {};
    // private UnityEngine.Quaternion _shakeRotation
    // Size: 0x10
    // Offset: 0x3C
    UnityEngine::Quaternion shakeRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion _rotation
    // Size: 0x10
    // Offset: 0x4C
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single _elapsedTime
    // Size: 0x4
    // Offset: 0x5C
    float elapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _startPos
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _targetPos
    // Size: 0xC
    // Offset: 0x6C
    UnityEngine::Vector3 targetPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x78
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _shake
    // Size: 0x1
    // Offset: 0x7C
    bool shake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FlyingObjectEffect
    FlyingObjectEffect(UnityEngine::AnimationCurve* moveAnimationCurve_ = {}, float shakeFrequency_ = {}, float shakeStrength_ = {}, UnityEngine::AnimationCurve* shakeStrengthAnimationCurve_ = {}, System::Action_1<GlobalNamespace::FlyingObjectEffect*>* didFinishEvent_ = {}, bool initialized_ = {}, UnityEngine::Quaternion shakeRotation_ = {}, UnityEngine::Quaternion rotation_ = {}, float elapsedTime_ = {}, UnityEngine::Vector3 startPos_ = {}, UnityEngine::Vector3 targetPos_ = {}, float duration_ = {}, bool shake_ = {}) noexcept : moveAnimationCurve{moveAnimationCurve_}, shakeFrequency{shakeFrequency_}, shakeStrength{shakeStrength_}, shakeStrengthAnimationCurve{shakeStrengthAnimationCurve_}, didFinishEvent{didFinishEvent_}, initialized{initialized_}, shakeRotation{shakeRotation_}, rotation{rotation_}, elapsedTime{elapsedTime_}, startPos{startPos_}, targetPos{targetPos_}, duration{duration_}, shake{shake_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didFinishEvent(System.Action`1<FlyingObjectEffect> value)
    // Offset: 0x1A14AA4
    void add_didFinishEvent(System::Action_1<GlobalNamespace::FlyingObjectEffect*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<FlyingObjectEffect> value)
    // Offset: 0x1A14B48
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::FlyingObjectEffect*>* value);
    // public System.Void InitAndPresent(System.Single duration, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion rotation, System.Boolean shake)
    // Offset: 0x1A14BEC
    void InitAndPresent(float duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, bool shake);
    // protected System.Void Update()
    // Offset: 0x1A14CD8
    void Update();
    // protected System.Void ManualUpdate(System.Single t)
    // Offset: 0xFFFFFFFF
    void ManualUpdate(float t);
    // protected System.Void .ctor()
    // Offset: 0x1A14F90
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingObjectEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingObjectEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingObjectEffect*, creationType>()));
    }
  }; // FlyingObjectEffect
  static check_size<sizeof(FlyingObjectEffect), 124 + sizeof(bool)> __GlobalNamespace_FlyingObjectEffectSizeCheck;
  static_assert(sizeof(FlyingObjectEffect) == 0x7D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingObjectEffect*, "", "FlyingObjectEffect");
#pragma pack(pop)
