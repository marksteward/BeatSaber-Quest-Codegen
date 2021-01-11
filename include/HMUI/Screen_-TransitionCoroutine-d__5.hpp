// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.Screen
#include "HMUI/Screen.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: HMUI.ViewController/AnimationType
#include "HMUI/ViewController_AnimationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.Screen/<TransitionCoroutine>d__5
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA6390
  class Screen::$TransitionCoroutine$d__5 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public HMUI.Screen <>4__this
    // Size: 0x8
    // Offset: 0x20
    HMUI::Screen* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::Screen*) == 0x8);
    // public HMUI.ViewController newRootViewController
    // Size: 0x8
    // Offset: 0x28
    HMUI::ViewController* newRootViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public HMUI.ViewController/AnimationType animationType
    // Size: 0x4
    // Offset: 0x30
    HMUI::ViewController::AnimationType animationType;
    // Field size check
    static_assert(sizeof(HMUI::ViewController::AnimationType) == 0x4);
    // Padding between fields: animationType and: $oldRootViewController$5__2
    char __padding4[0x4] = {};
    // private HMUI.ViewController <oldRootViewController>5__2
    // Size: 0x8
    // Offset: 0x38
    HMUI::ViewController* $oldRootViewController$5__2;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // private System.Single <oldRootViewControllerStartAlpha>5__3
    // Size: 0x4
    // Offset: 0x40
    float $oldRootViewControllerStartAlpha$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <elapsedTime>5__4
    // Size: 0x4
    // Offset: 0x44
    float $elapsedTime$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $TransitionCoroutine$d__5
    $TransitionCoroutine$d__5(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, HMUI::Screen* $$4__this_ = {}, HMUI::ViewController* newRootViewController_ = {}, HMUI::ViewController::AnimationType animationType_ = {}, HMUI::ViewController* $oldRootViewController$5__2_ = {}, float $oldRootViewControllerStartAlpha$5__3_ = {}, float $elapsedTime$5__4_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, newRootViewController{newRootViewController_}, animationType{animationType_}, $oldRootViewController$5__2{$oldRootViewController$5__2_}, $oldRootViewControllerStartAlpha$5__3{$oldRootViewControllerStartAlpha$5__3_}, $elapsedTime$5__4{$elapsedTime$5__4_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x107E7E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Screen::$TransitionCoroutine$d__5* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::Screen::$TransitionCoroutine$d__5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Screen::$TransitionCoroutine$d__5*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x107E828
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x107E82C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x107EDFC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x107EE04
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x107EE64
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.Screen/<TransitionCoroutine>d__5
  static check_size<sizeof(Screen::$TransitionCoroutine$d__5), 68 + sizeof(float)> __HMUI_Screen_$TransitionCoroutine$d__5SizeCheck;
  static_assert(sizeof(Screen::$TransitionCoroutine$d__5) == 0x48);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(HMUI::Screen::$TransitionCoroutine$d__5*, "HMUI", "Screen/<TransitionCoroutine>d__5");
