// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.PanelAnimation
#include "HMUI/PanelAnimation.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x74
  // Autogenerated type: HMUI.PanelAnimation/<AnimationCoroutine>d__1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA6250
  class PanelAnimation::$AnimationCoroutine$d__1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public UnityEngine.CanvasGroup canvasGroup
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x28
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: parentCanvasGroup
    char __padding3[0x4] = {};
    // public UnityEngine.CanvasGroup parentCanvasGroup
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::CanvasGroup* parentCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // public UnityEngine.AnimationCurve parentAlphaAnimationCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* parentAlphaAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve alphaAnimationCurve
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* alphaAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve scaleXAnimationCurve
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AnimationCurve* scaleXAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve scaleYAnimationCurve
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::AnimationCurve* scaleYAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public HMUI.PanelAnimation <>4__this
    // Size: 0x8
    // Offset: 0x58
    HMUI::PanelAnimation* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::PanelAnimation*) == 0x8);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x60
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private UnityEngine.Transform <canvasTransform>5__2
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* $canvasTransform$5__2;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Single <elapsedTime>5__3
    // Size: 0x4
    // Offset: 0x70
    float $elapsedTime$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $AnimationCoroutine$d__1
    $AnimationCoroutine$d__1(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, UnityEngine::CanvasGroup* canvasGroup_ = {}, float duration_ = {}, UnityEngine::CanvasGroup* parentCanvasGroup_ = {}, UnityEngine::AnimationCurve* parentAlphaAnimationCurve_ = {}, UnityEngine::AnimationCurve* alphaAnimationCurve_ = {}, UnityEngine::AnimationCurve* scaleXAnimationCurve_ = {}, UnityEngine::AnimationCurve* scaleYAnimationCurve_ = {}, HMUI::PanelAnimation* $$4__this_ = {}, System::Action* finishedCallback_ = {}, UnityEngine::Transform* $canvasTransform$5__2_ = {}, float $elapsedTime$5__3_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, canvasGroup{canvasGroup_}, duration{duration_}, parentCanvasGroup{parentCanvasGroup_}, parentAlphaAnimationCurve{parentAlphaAnimationCurve_}, alphaAnimationCurve{alphaAnimationCurve_}, scaleXAnimationCurve{scaleXAnimationCurve_}, scaleYAnimationCurve{scaleYAnimationCurve_}, $$4__this{$$4__this_}, finishedCallback{finishedCallback_}, $canvasTransform$5__2{$canvasTransform$5__2_}, $elapsedTime$5__3{$elapsedTime$5__3_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x107D3CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PanelAnimation::$AnimationCoroutine$d__1* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::PanelAnimation::$AnimationCoroutine$d__1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PanelAnimation::$AnimationCoroutine$d__1*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x107D400
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x107D404
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x107D714
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x107D71C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x107D77C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.PanelAnimation/<AnimationCoroutine>d__1
  static check_size<sizeof(PanelAnimation::$AnimationCoroutine$d__1), 112 + sizeof(float)> __HMUI_PanelAnimation_$AnimationCoroutine$d__1SizeCheck;
  static_assert(sizeof(PanelAnimation::$AnimationCoroutine$d__1) == 0x74);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::PanelAnimation::$AnimationCoroutine$d__1*, "HMUI", "PanelAnimation/<AnimationCoroutine>d__1");
#pragma pack(pop)
