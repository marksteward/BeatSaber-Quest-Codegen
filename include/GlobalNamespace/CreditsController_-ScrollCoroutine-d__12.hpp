// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CreditsController
#include "GlobalNamespace/CreditsController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CreditsController/<ScrollCoroutine>d__12
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF7B4
  class CreditsController::$ScrollCoroutine$d__12 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public CreditsController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::CreditsController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CreditsController*) == 0x8);
    // private System.Single <contentHeight>5__2
    // Size: 0x4
    // Offset: 0x28
    float $contentHeight$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <posY>5__3
    // Size: 0x4
    // Offset: 0x2C
    float $posY$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <contentWrapperHeight>5__4
    // Size: 0x4
    // Offset: 0x30
    float $contentWrapperHeight$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <scrollingSpeed>5__5
    // Size: 0x4
    // Offset: 0x34
    float $scrollingSpeed$5__5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $ScrollCoroutine$d__12
    $ScrollCoroutine$d__12(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::CreditsController* $$4__this_ = {}, float $contentHeight$5__2_ = {}, float $posY$5__3_ = {}, float $contentWrapperHeight$5__4_ = {}, float $scrollingSpeed$5__5_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $contentHeight$5__2{$contentHeight$5__2_}, $posY$5__3{$posY$5__3_}, $contentWrapperHeight$5__4{$contentWrapperHeight$5__4_}, $scrollingSpeed$5__5{$scrollingSpeed$5__5_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1A55934
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsController::$ScrollCoroutine$d__12* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CreditsController::$ScrollCoroutine$d__12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsController::$ScrollCoroutine$d__12*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1A55970
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1A55974
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1A55B9C
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1A55BA4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1A55C04
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // CreditsController/<ScrollCoroutine>d__12
  static check_size<sizeof(CreditsController::$ScrollCoroutine$d__12), 52 + sizeof(float)> __GlobalNamespace_CreditsController_$ScrollCoroutine$d__12SizeCheck;
  static_assert(sizeof(CreditsController::$ScrollCoroutine$d__12) == 0x38);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsController::$ScrollCoroutine$d__12*, "", "CreditsController/<ScrollCoroutine>d__12");
