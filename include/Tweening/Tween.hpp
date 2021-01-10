// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Tweening.InterpolationType
#include "Tweening/InterpolationType.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Size: 0x50
  // Autogenerated type: Tweening.Tween
  // [] Offset: FFFFFFFF
  class Tween : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDD3410
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD3420
    // private System.Single <duration>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD3430
    // private System.Boolean <loop>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loop and: delay
    char __padding2[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD3440
    // private System.Single <delay>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Action onStart
    // Size: 0x8
    // Offset: 0x20
    System::Action* onStart;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Action onCompleted
    // Size: 0x8
    // Offset: 0x28
    System::Action* onCompleted;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Action onKilled
    // Size: 0x8
    // Offset: 0x30
    System::Action* onKilled;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD3450
    // private System.Boolean <isStarted>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool isStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD3460
    // private System.Boolean <isKilled>k__BackingField
    // Size: 0x1
    // Offset: 0x39
    bool isKilled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isKilled and: interpolationType
    char __padding8[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD3470
    // private Tweening.InterpolationType <interpolationType>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    Tweening::InterpolationType interpolationType;
    // Field size check
    static_assert(sizeof(Tweening::InterpolationType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD3480
    // private Tweening.EaseType <easeType>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    Tweening::EaseType easeType;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // Padding between fields: easeType and: animationCurve
    char __padding10[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD3490
    // private UnityEngine.AnimationCurve <animationCurve>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AnimationCurve* animationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // Creating value type constructor for type: Tween
    Tween(float time_ = {}, float duration_ = {}, bool loop_ = {}, float delay_ = {}, System::Action* onStart_ = {}, System::Action* onCompleted_ = {}, System::Action* onKilled_ = {}, bool isStarted_ = {}, bool isKilled_ = {}, Tweening::InterpolationType interpolationType_ = {}, Tweening::EaseType easeType_ = {}, UnityEngine::AnimationCurve* animationCurve_ = {}) noexcept : time{time_}, duration{duration_}, loop{loop_}, delay{delay_}, onStart{onStart_}, onCompleted{onCompleted_}, onKilled{onKilled_}, isStarted{isStarted_}, isKilled{isKilled_}, interpolationType{interpolationType_}, easeType{easeType_}, animationCurve{animationCurve_} {}
    // public System.Single get_progress()
    // Offset: 0xFF47A4
    float get_progress();
    // public System.Single get_time()
    // Offset: 0xFF4840
    float get_time();
    // protected System.Void set_time(System.Single value)
    // Offset: 0xFF4848
    void set_time(float value);
    // public System.Single get_duration()
    // Offset: 0xFF4850
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0xFF4858
    void set_duration(float value);
    // public System.Boolean get_loop()
    // Offset: 0xFF4860
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0xFF4868
    void set_loop(bool value);
    // public System.Single get_delay()
    // Offset: 0xFF4874
    float get_delay();
    // public System.Void set_delay(System.Single value)
    // Offset: 0xFF487C
    void set_delay(float value);
    // public System.Boolean get_isStarted()
    // Offset: 0xFF4884
    bool get_isStarted();
    // protected System.Void set_isStarted(System.Boolean value)
    // Offset: 0xFF488C
    void set_isStarted(bool value);
    // public System.Boolean get_isActive()
    // Offset: 0xFF4898
    bool get_isActive();
    // public System.Boolean get_isComplete()
    // Offset: 0xFF48C8
    bool get_isComplete();
    // public System.Boolean get_isKilled()
    // Offset: 0xFF48E8
    bool get_isKilled();
    // private System.Void set_isKilled(System.Boolean value)
    // Offset: 0xFF48F0
    void set_isKilled(bool value);
    // public Tweening.InterpolationType get_interpolationType()
    // Offset: 0xFF48FC
    Tweening::InterpolationType get_interpolationType();
    // protected System.Void set_interpolationType(Tweening.InterpolationType value)
    // Offset: 0xFF4904
    void set_interpolationType(Tweening::InterpolationType value);
    // public Tweening.EaseType get_easeType()
    // Offset: 0xFF490C
    Tweening::EaseType get_easeType();
    // public System.Void set_easeType(Tweening.EaseType value)
    // Offset: 0xFF4914
    void set_easeType(Tweening::EaseType value);
    // public UnityEngine.AnimationCurve get_animationCurve()
    // Offset: 0xFF491C
    UnityEngine::AnimationCurve* get_animationCurve();
    // protected System.Void set_animationCurve(UnityEngine.AnimationCurve value)
    // Offset: 0xFF4924
    void set_animationCurve(UnityEngine::AnimationCurve* value);
    // public System.Void Kill()
    // Offset: 0xFF492C
    void Kill();
    // public System.Void Restart()
    // Offset: 0xFF4938
    void Restart();
    // public System.Void Update(System.Single deltaTime)
    // Offset: 0xFFFFFFFF
    void Update(float deltaTime);
    // public System.Void Sample(System.Single t)
    // Offset: 0xFFFFFFFF
    void Sample(float t);
    // protected System.Single Interpolate(System.Single t)
    // Offset: 0xFF417C
    float Interpolate(float t);
    // protected System.Void .ctor()
    // Offset: 0xFF4944
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tween*, creationType>()));
    }
  }; // Tweening.Tween
  static check_size<sizeof(Tween), 72 + sizeof(UnityEngine::AnimationCurve*)> __Tweening_TweenSizeCheck;
  static_assert(sizeof(Tween) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Tweening::Tween*, "Tweening", "Tween");
#pragma pack(pop)
