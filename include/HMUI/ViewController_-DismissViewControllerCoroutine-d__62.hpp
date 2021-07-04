// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: HMUI.ViewController/AnimationDirection
#include "HMUI/ViewController_AnimationDirection.hpp"
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
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewController/<DismissViewControllerCoroutine>d__62
  // [CompilerGeneratedAttribute] Offset: DF7E10
  class ViewController::$DismissViewControllerCoroutine$d__62 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public HMUI.ViewController <>4__this
    // Size: 0x8
    // Offset: 0x20
    HMUI::ViewController* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public System.Boolean immediately
    // Size: 0x1
    // Offset: 0x28
    bool immediately;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: immediately and: animationDirection
    char __padding3[0x3] = {};
    // public HMUI.ViewController/AnimationDirection animationDirection
    // Size: 0x4
    // Offset: 0x2C
    HMUI::ViewController::AnimationDirection animationDirection;
    // Field size check
    static_assert(sizeof(HMUI::ViewController::AnimationDirection) == 0x4);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x30
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private HMUI.ViewController <movingInViewController>5__2
    // Size: 0x8
    // Offset: 0x38
    HMUI::ViewController* $movingInViewController$5__2;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // Creating value type constructor for type: $DismissViewControllerCoroutine$d__62
    $DismissViewControllerCoroutine$d__62(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, HMUI::ViewController* $$4__this_ = {}, bool immediately_ = {}, HMUI::ViewController::AnimationDirection animationDirection_ = {}, System::Action* finishedCallback_ = {}, HMUI::ViewController* $movingInViewController$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, immediately{immediately_}, animationDirection{animationDirection_}, finishedCallback{finishedCallback_}, $movingInViewController$5__2{$movingInViewController$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x238645C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewController::$DismissViewControllerCoroutine$d__62* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewController::$DismissViewControllerCoroutine$d__62::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewController::$DismissViewControllerCoroutine$d__62*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2386488
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x238648C
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x23867D8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x23867E0
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2386840
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.ViewController/<DismissViewControllerCoroutine>d__62
  #pragma pack(pop)
  static check_size<sizeof(ViewController::$DismissViewControllerCoroutine$d__62), 56 + sizeof(HMUI::ViewController*)> __HMUI_ViewController_$DismissViewControllerCoroutine$d__62SizeCheck;
  static_assert(sizeof(ViewController::$DismissViewControllerCoroutine$d__62) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController::$DismissViewControllerCoroutine$d__62*, "HMUI", "ViewController/<DismissViewControllerCoroutine>d__62");
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
// Cannot perform method pointer template specialization from operators!
