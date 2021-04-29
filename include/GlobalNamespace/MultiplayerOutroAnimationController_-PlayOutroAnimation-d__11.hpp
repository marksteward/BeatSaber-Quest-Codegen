// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerOutroAnimationController
#include "GlobalNamespace/MultiplayerOutroAnimationController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerOutroAnimationController/<PlayOutroAnimation>d__11
  // [CompilerGeneratedAttribute] Offset: D3202C
  class MultiplayerOutroAnimationController::$PlayOutroAnimation$d__11 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MultiplayerOutroAnimationController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerOutroAnimationController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerOutroAnimationController*) == 0x8);
    // public MultiplayerResultsData multiplayerResultsData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerResultsData* multiplayerResultsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerResultsData*) == 0x8);
    // public System.Action onCompleted
    // Size: 0x8
    // Offset: 0x30
    System::Action* onCompleted;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Single <resultsTableAnimationDuration>5__2
    // Size: 0x4
    // Offset: 0x38
    float $resultsTableAnimationDuration$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $PlayOutroAnimation$d__11
    $PlayOutroAnimation$d__11(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::MultiplayerOutroAnimationController* $$4__this_ = {}, GlobalNamespace::MultiplayerResultsData* multiplayerResultsData_ = {}, System::Action* onCompleted_ = {}, float $resultsTableAnimationDuration$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, multiplayerResultsData{multiplayerResultsData_}, onCompleted{onCompleted_}, $resultsTableAnimationDuration$5__2{$resultsTableAnimationDuration$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1007BC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerOutroAnimationController::$PlayOutroAnimation$d__11* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerOutroAnimationController::$PlayOutroAnimation$d__11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerOutroAnimationController::$PlayOutroAnimation$d__11*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1008214
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1008218
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x10090DC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x10090E4
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1009144
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MultiplayerOutroAnimationController/<PlayOutroAnimation>d__11
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerOutroAnimationController::$PlayOutroAnimation$d__11), 56 + sizeof(float)> __GlobalNamespace_MultiplayerOutroAnimationController_$PlayOutroAnimation$d__11SizeCheck;
  static_assert(sizeof(MultiplayerOutroAnimationController::$PlayOutroAnimation$d__11) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerOutroAnimationController::$PlayOutroAnimation$d__11*, "", "MultiplayerOutroAnimationController/<PlayOutroAnimation>d__11");
