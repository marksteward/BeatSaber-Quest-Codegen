// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FPSCounterUIController
#include "GlobalNamespace/FPSCounterUIController.hpp"
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
  // Autogenerated type: FPSCounterUIController/<Start>d__8
  // [CompilerGeneratedAttribute] Offset: D3212C
  class FPSCounterUIController::$Start$d__8 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public FPSCounterUIController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FPSCounterUIController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FPSCounterUIController*) == 0x8);
    // Creating value type constructor for type: $Start$d__8
    $Start$d__8(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::FPSCounterUIController* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xF52098
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FPSCounterUIController::$Start$d__8* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FPSCounterUIController::$Start$d__8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FPSCounterUIController::$Start$d__8*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF521C4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xF521C8
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xF52268
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF52270
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF522D0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // FPSCounterUIController/<Start>d__8
  #pragma pack(pop)
  static check_size<sizeof(FPSCounterUIController::$Start$d__8), 32 + sizeof(GlobalNamespace::FPSCounterUIController*)> __GlobalNamespace_FPSCounterUIController_$Start$d__8SizeCheck;
  static_assert(sizeof(FPSCounterUIController::$Start$d__8) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FPSCounterUIController::$Start$d__8*, "", "FPSCounterUIController/<Start>d__8");
