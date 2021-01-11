// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerIntroAnimationController
#include "GlobalNamespace/MultiplayerIntroAnimationController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerIntroAnimationController/<PlayIntroAnimationCoroutine>d__11
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF604
  class MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Single maxDesiredIntroAnimationDuration
    // Size: 0x4
    // Offset: 0x20
    float maxDesiredIntroAnimationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxDesiredIntroAnimationDuration and: $$4__this
    char __padding2[0x4] = {};
    // public MultiplayerIntroAnimationController <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerIntroAnimationController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerIntroAnimationController*) == 0x8);
    // public System.Action onCompleted
    // Size: 0x8
    // Offset: 0x30
    System::Action* onCompleted;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Single <animationDurationMultiplier>5__2
    // Size: 0x4
    // Offset: 0x38
    float $animationDurationMultiplier$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: $animationDurationMultiplier$5__2 and: $allActivePlayer$5__3
    char __padding5[0x4] = {};
    // private System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> <allActivePlayer>5__3
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* $allActivePlayer$5__3;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // private System.Collections.Generic.Queue`1<System.Int32> <indexQueue>5__4
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::Queue_1<int>* $indexQueue$5__4;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<int>*) == 0x8);
    // private System.Single <timePerPlayer>5__5
    // Size: 0x4
    // Offset: 0x50
    float $timePerPlayer$5__5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <delayPerPlayer>5__6
    // Size: 0x4
    // Offset: 0x54
    float $delayPerPlayer$5__6;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $PlayIntroAnimationCoroutine$d__11
    $PlayIntroAnimationCoroutine$d__11(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, float maxDesiredIntroAnimationDuration_ = {}, GlobalNamespace::MultiplayerIntroAnimationController* $$4__this_ = {}, System::Action* onCompleted_ = {}, float $animationDurationMultiplier$5__2_ = {}, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* $allActivePlayer$5__3_ = {}, System::Collections::Generic::Queue_1<int>* $indexQueue$5__4_ = {}, float $timePerPlayer$5__5_ = {}, float $delayPerPlayer$5__6_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, maxDesiredIntroAnimationDuration{maxDesiredIntroAnimationDuration_}, $$4__this{$$4__this_}, onCompleted{onCompleted_}, $animationDurationMultiplier$5__2{$animationDurationMultiplier$5__2_}, $allActivePlayer$5__3{$allActivePlayer$5__3_}, $indexQueue$5__4{$indexQueue$5__4_}, $timePerPlayer$5__5{$timePerPlayer$5__5_}, $delayPerPlayer$5__6{$delayPerPlayer$5__6_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFB2E00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFB32E8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xFB32EC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xFB3CA4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFB3CAC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFB3D0C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MultiplayerIntroAnimationController/<PlayIntroAnimationCoroutine>d__11
  static check_size<sizeof(MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11), 84 + sizeof(float)> __GlobalNamespace_MultiplayerIntroAnimationController_$PlayIntroAnimationCoroutine$d__11SizeCheck;
  static_assert(sizeof(MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11) == 0x58);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11*, "", "MultiplayerIntroAnimationController/<PlayIntroAnimationCoroutine>d__11");
