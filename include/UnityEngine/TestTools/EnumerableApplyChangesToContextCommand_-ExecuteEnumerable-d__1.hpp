// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.EnumerableApplyChangesToContextCommand
#include "UnityEngine/TestTools/EnumerableApplyChangesToContextCommand.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableApplyChangesToContextCommand/<ExecuteEnumerable>d__1
  // [CompilerGeneratedAttribute] Offset: E3D968
  class EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnityEngine.TestTools.EnumerableApplyChangesToContextCommand <>4__this
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::TestTools::EnumerableApplyChangesToContextCommand* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::EnumerableApplyChangesToContextCommand*) == 0x8);
    // private NUnit.Framework.Internal.ITestExecutionContext context
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Internal::ITestExecutionContext* context;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    // Size: 0x8
    // Offset: 0x38
    NUnit::Framework::Internal::ITestExecutionContext* $$3__context;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // private System.Collections.IEnumerator <>7__wrap1
    // Size: 0x8
    // Offset: 0x40
    System::Collections::IEnumerator* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: $ExecuteEnumerable$d__1
    $ExecuteEnumerable$d__1(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::TestTools::EnumerableApplyChangesToContextCommand* $$4__this_ = {}, NUnit::Framework::Internal::ITestExecutionContext* context_ = {}, NUnit::Framework::Internal::ITestExecutionContext* $$3__context_ = {}, System::Collections::IEnumerator* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, context{context_}, $$3__context{$$3__context_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14B4AF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14B4B28
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14B4C10
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x14B4B44
    void $$m__Finally1();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x14B5014
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14B501C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14B507C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0x14B5084
    System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x14B5138
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestTools.EnumerableApplyChangesToContextCommand/<ExecuteEnumerable>d__1
  #pragma pack(pop)
  static check_size<sizeof(EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1), 64 + sizeof(System::Collections::IEnumerator*)> __UnityEngine_TestTools_EnumerableApplyChangesToContextCommand_$ExecuteEnumerable$d__1SizeCheck;
  static_assert(sizeof(EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1*, "UnityEngine.TestTools", "EnumerableApplyChangesToContextCommand/<ExecuteEnumerable>d__1");
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1::$$m__Finally1
// Il2CppName: <>m__Finally1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1::System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
// Cannot perform method pointer template specialization from operators!
