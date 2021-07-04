// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewControllerTransitionHelpers
#include "HMUI/ViewControllerTransitionHelpers.hpp"
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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewControllerTransitionHelpers/<DoPresentTransition>d__3
  // [CompilerGeneratedAttribute] Offset: DF7E20
  class ViewControllerTransitionHelpers::$DoPresentTransition$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public HMUI.ViewController/AnimationDirection animationDirection
    // Size: 0x4
    // Offset: 0x20
    HMUI::ViewController::AnimationDirection animationDirection;
    // Field size check
    static_assert(sizeof(HMUI::ViewController::AnimationDirection) == 0x4);
    // Padding between fields: animationDirection and: toPresentViewController
    char __padding2[0x4] = {};
    // public HMUI.ViewController toPresentViewController
    // Size: 0x8
    // Offset: 0x28
    HMUI::ViewController* toPresentViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public HMUI.ViewController toDismissViewController
    // Size: 0x8
    // Offset: 0x30
    HMUI::ViewController* toDismissViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public System.Single moveOffsetMultiplier
    // Size: 0x4
    // Offset: 0x38
    float moveOffsetMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $DoPresentTransition$d__3
    $DoPresentTransition$d__3(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, HMUI::ViewController::AnimationDirection animationDirection_ = {}, HMUI::ViewController* toPresentViewController_ = {}, HMUI::ViewController* toDismissViewController_ = {}, float moveOffsetMultiplier_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, animationDirection{animationDirection_}, toPresentViewController{toPresentViewController_}, toDismissViewController{toDismissViewController_}, moveOffsetMultiplier{moveOffsetMultiplier_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2387594
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewControllerTransitionHelpers::$DoPresentTransition$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewControllerTransitionHelpers::$DoPresentTransition$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2387F94
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2387F98
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2388038
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2388040
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x23880A0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.ViewControllerTransitionHelpers/<DoPresentTransition>d__3
  #pragma pack(pop)
  static check_size<sizeof(ViewControllerTransitionHelpers::$DoPresentTransition$d__3), 56 + sizeof(float)> __HMUI_ViewControllerTransitionHelpers_$DoPresentTransition$d__3SizeCheck;
  static_assert(sizeof(ViewControllerTransitionHelpers::$DoPresentTransition$d__3) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3*, "HMUI", "ViewControllerTransitionHelpers/<DoPresentTransition>d__3");
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
// Cannot perform method pointer template specialization from operators!
