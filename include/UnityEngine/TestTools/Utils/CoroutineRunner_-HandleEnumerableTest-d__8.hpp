// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Utils.CoroutineRunner
#include "UnityEngine/TestTools/Utils/CoroutineRunner.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.CoroutineRunner/<HandleEnumerableTest>d__8
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D47350
  class CoroutineRunner::$HandleEnumerableTest$d__8 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public UnityEngine.TestTools.Utils.CoroutineRunner <>4__this
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::TestTools::Utils::CoroutineRunner* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::Utils::CoroutineRunner*) == 0x8);
    // public System.Collections.IEnumerator testEnumerator
    // Size: 0x8
    // Offset: 0x28
    System::Collections::IEnumerator* testEnumerator;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: $HandleEnumerableTest$d__8
    $HandleEnumerableTest$d__8(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, UnityEngine::TestTools::Utils::CoroutineRunner* $$4__this_ = {}, System::Collections::IEnumerator* testEnumerator_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, testEnumerator{testEnumerator_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2177400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoroutineRunner::$HandleEnumerableTest$d__8* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Utils::CoroutineRunner::$HandleEnumerableTest$d__8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoroutineRunner::$HandleEnumerableTest$d__8*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x21777AC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x21777B0
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x21778C8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x21778D0
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2177930
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.Utils.CoroutineRunner/<HandleEnumerableTest>d__8
  #pragma pack(pop)
  static check_size<sizeof(CoroutineRunner::$HandleEnumerableTest$d__8), 40 + sizeof(System::Collections::IEnumerator*)> __UnityEngine_TestTools_Utils_CoroutineRunner_$HandleEnumerableTest$d__8SizeCheck;
  static_assert(sizeof(CoroutineRunner::$HandleEnumerableTest$d__8) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::CoroutineRunner::$HandleEnumerableTest$d__8*, "UnityEngine.TestTools.Utils", "CoroutineRunner/<HandleEnumerableTest>d__8");