// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ResultsViewController
#include "GlobalNamespace/ResultsViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ResultsViewController/<StartFireworksAfterDelay>d__31
  // [CompilerGeneratedAttribute] Offset: D3268C
  class ResultsViewController::$StartFireworksAfterDelay$d__31 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x20
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: delay and: $$4__this
    char __padding2[0x4] = {};
    // public ResultsViewController <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ResultsViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // Creating value type constructor for type: $StartFireworksAfterDelay$d__31
    $StartFireworksAfterDelay$d__31(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, float delay_ = {}, GlobalNamespace::ResultsViewController* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, delay{delay_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x104946C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsViewController::$StartFireworksAfterDelay$d__31* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResultsViewController::$StartFireworksAfterDelay$d__31::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsViewController::$StartFireworksAfterDelay$d__31*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1049498
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x104949C
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x104955C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1049564
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10495C4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // ResultsViewController/<StartFireworksAfterDelay>d__31
  #pragma pack(pop)
  static check_size<sizeof(ResultsViewController::$StartFireworksAfterDelay$d__31), 40 + sizeof(GlobalNamespace::ResultsViewController*)> __GlobalNamespace_ResultsViewController_$StartFireworksAfterDelay$d__31SizeCheck;
  static_assert(sizeof(ResultsViewController::$StartFireworksAfterDelay$d__31) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsViewController::$StartFireworksAfterDelay$d__31*, "", "ResultsViewController/<StartFireworksAfterDelay>d__31");
