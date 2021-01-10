// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  // Autogenerated type: HMUI.ViewControllerTransitionHelpers
  // [] Offset: FFFFFFFF
  class ViewControllerTransitionHelpers : public ::Il2CppObject {
    public:
    // Nested type: HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3
    class $DoPresentTransition$d__3;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4
    class $DoDismissTransition$d__4;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$DoHorizontalTransition$d__5
    class $DoHorizontalTransition$d__5;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6
    class $DoVerticalTransition$d__6;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$AnimationCoroutine$d__8
    class $AnimationCoroutine$d__8;
    // Creating value type constructor for type: ViewControllerTransitionHelpers
    ViewControllerTransitionHelpers() noexcept {}
    // static field const value: static private System.Single kTransitionDuration
    static constexpr const float kTransitionDuration = 0.4;
    // Get static field: static private System.Single kTransitionDuration
    static float _get_kTransitionDuration();
    // Set static field: static private System.Single kTransitionDuration
    static void _set_kTransitionDuration(float value);
    // static field const value: static private System.Single kHorizontalTransitionMoveOffset
    static constexpr const float kHorizontalTransitionMoveOffset = 2;
    // Get static field: static private System.Single kHorizontalTransitionMoveOffset
    static float _get_kHorizontalTransitionMoveOffset();
    // Set static field: static private System.Single kHorizontalTransitionMoveOffset
    static void _set_kHorizontalTransitionMoveOffset(float value);
    // static field const value: static private System.Single kVerticalTransitionMoveOffset
    static constexpr const float kVerticalTransitionMoveOffset = 0.5;
    // Get static field: static private System.Single kVerticalTransitionMoveOffset
    static float _get_kVerticalTransitionMoveOffset();
    // Set static field: static private System.Single kVerticalTransitionMoveOffset
    static void _set_kVerticalTransitionMoveOffset(float value);
    // static public System.Collections.IEnumerator DoPresentTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, HMUI.ViewController/AnimationDirection animationDirection, System.Single moveOffsetMultiplier)
    // Offset: 0x1981BA8
    static System::Collections::IEnumerator* DoPresentTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, HMUI::ViewController::AnimationDirection animationDirection, float moveOffsetMultiplier);
    // static public System.Collections.IEnumerator DoDismissTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, HMUI.ViewController/AnimationDirection animationDirection, System.Single moveOffsetMultiplier)
    // Offset: 0x1981754
    static System::Collections::IEnumerator* DoDismissTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, HMUI::ViewController::AnimationDirection animationDirection, float moveOffsetMultiplier);
    // static private System.Collections.IEnumerator DoHorizontalTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, System.Single moveOffsetMultiplier)
    // Offset: 0x19821C0
    static System::Collections::IEnumerator* DoHorizontalTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, float moveOffsetMultiplier);
    // static private System.Collections.IEnumerator DoVerticalTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, System.Single moveOffsetMultiplier)
    // Offset: 0x1982294
    static System::Collections::IEnumerator* DoVerticalTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, float moveOffsetMultiplier);
    // static public System.Void ImmediateTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController)
    // Offset: 0x1981804
    static void ImmediateTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController);
    // static private System.Collections.IEnumerator AnimationCoroutine(System.Action`1<System.Single> transitionAnimation)
    // Offset: 0x1982368
    static System::Collections::IEnumerator* AnimationCoroutine(System::Action_1<float>* transitionAnimation);
    // public System.Void .ctor()
    // Offset: 0x1982410
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewControllerTransitionHelpers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewControllerTransitionHelpers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewControllerTransitionHelpers*, creationType>()));
    }
  }; // HMUI.ViewControllerTransitionHelpers
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewControllerTransitionHelpers*, "HMUI", "ViewControllerTransitionHelpers");
#pragma pack(pop)
