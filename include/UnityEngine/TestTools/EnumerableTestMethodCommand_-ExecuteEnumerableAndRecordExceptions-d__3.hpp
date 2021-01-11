// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.EnumerableTestMethodCommand
#include "UnityEngine/TestTools/EnumerableTestMethodCommand.hpp"
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
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableTestMethodCommand/<ExecuteEnumerableAndRecordExceptions>d__3
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE65A0
  class EnumerableTestMethodCommand::$ExecuteEnumerableAndRecordExceptions$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Collections.IEnumerator enumerator
    // Size: 0x8
    // Offset: 0x20
    System::Collections::IEnumerator* enumerator;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // public NUnit.Framework.Internal.ITestExecutionContext context
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Internal::ITestExecutionContext* context;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // Creating value type constructor for type: $ExecuteEnumerableAndRecordExceptions$d__3
    $ExecuteEnumerableAndRecordExceptions$d__3(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, System::Collections::IEnumerator* enumerator_ = {}, NUnit::Framework::Internal::ITestExecutionContext* context_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, enumerator{enumerator_}, context{context_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x118F37C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableTestMethodCommand::$ExecuteEnumerableAndRecordExceptions$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerableAndRecordExceptions$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableTestMethodCommand::$ExecuteEnumerableAndRecordExceptions$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x118FFC0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x118FFC4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x11902E8
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x11902F0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1190350
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.EnumerableTestMethodCommand/<ExecuteEnumerableAndRecordExceptions>d__3
  static check_size<sizeof(EnumerableTestMethodCommand::$ExecuteEnumerableAndRecordExceptions$d__3), 40 + sizeof(NUnit::Framework::Internal::ITestExecutionContext*)> __UnityEngine_TestTools_EnumerableTestMethodCommand_$ExecuteEnumerableAndRecordExceptions$d__3SizeCheck;
  static_assert(sizeof(EnumerableTestMethodCommand::$ExecuteEnumerableAndRecordExceptions$d__3) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerableAndRecordExceptions$d__3*, "UnityEngine.TestTools", "EnumerableTestMethodCommand/<ExecuteEnumerableAndRecordExceptions>d__3");
