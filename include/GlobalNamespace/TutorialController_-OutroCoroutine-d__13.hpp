// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TutorialController
#include "GlobalNamespace/TutorialController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: TutorialController/<OutroCoroutine>d__13
  // [CompilerGeneratedAttribute] Offset: D3210C
  class TutorialController::$OutroCoroutine$d__13 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public TutorialController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::TutorialController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialController*) == 0x8);
    // Creating value type constructor for type: $OutroCoroutine$d__13
    $OutroCoroutine$d__13(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::TutorialController* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFA9858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialController::$OutroCoroutine$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialController::$OutroCoroutine$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialController::$OutroCoroutine$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFA992C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xFA9930
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xFA9AB8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFA9AC0
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFA9B20
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // TutorialController/<OutroCoroutine>d__13
  #pragma pack(pop)
  static check_size<sizeof(TutorialController::$OutroCoroutine$d__13), 32 + sizeof(GlobalNamespace::TutorialController*)> __GlobalNamespace_TutorialController_$OutroCoroutine$d__13SizeCheck;
  static_assert(sizeof(TutorialController::$OutroCoroutine$d__13) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialController::$OutroCoroutine$d__13*, "", "TutorialController/<OutroCoroutine>d__13");
