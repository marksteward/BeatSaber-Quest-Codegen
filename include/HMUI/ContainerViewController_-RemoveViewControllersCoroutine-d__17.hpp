// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ContainerViewController
#include "HMUI/ContainerViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ContainerViewController/<RemoveViewControllersCoroutine>d__17
  class ContainerViewController::$RemoveViewControllersCoroutine$d__17 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public HMUI.ContainerViewController <>4__this
    // Offset: 0x20
    HMUI::ContainerViewController* $$4__this;
    // public HMUI.ViewController[] viewControllersToRemove
    // Offset: 0x28
    ::Array<HMUI::ViewController*>* viewControllersToRemove;
    // public System.Boolean immediately
    // Offset: 0x30
    bool immediately;
    // public System.Action`3<System.Single,HMUI.ViewController[],System.Collections.Generic.HashSet`1<HMUI.ViewController>> animationLayouter
    // Offset: 0x38
    System::Action_3<float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>* animationLayouter;
    // public System.Action finishedCallback
    // Offset: 0x40
    System::Action* finishedCallback;
    // private HMUI.ViewController[] <viewControllers>5__2
    // Offset: 0x48
    ::Array<HMUI::ViewController*>* $viewControllers$5__2;
    // private System.Collections.Generic.HashSet`1<HMUI.ViewController> <viewControllersToRemoveSet>5__3
    // Offset: 0x50
    System::Collections::Generic::HashSet_1<HMUI::ViewController*>* $viewControllersToRemoveSet$5__3;
    // private System.Single <transitionDuration>5__4
    // Offset: 0x58
    float $transitionDuration$5__4;
    // private System.Single <elapsedTime>5__5
    // Offset: 0x5C
    float $elapsedTime$5__5;
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x21823B0
    static ContainerViewController::$RemoveViewControllersCoroutine$d__17* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x21828E4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x21828E8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2182C08
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2182C10
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2182C70
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.ContainerViewController/<RemoveViewControllersCoroutine>d__17
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17*, "HMUI", "ContainerViewController/<RemoveViewControllersCoroutine>d__17");
#pragma pack(pop)
