// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestActionCommand
#include "UnityEngine/TestTools/TestActionCommand.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestActionCommand/<InvokeAfter>d__3
  // [CompilerGeneratedAttribute] Offset: E3DA08
  class TestActionCommand::$InvokeAfter$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public NUnit.Framework.ITestAction action
    // Size: 0x8
    // Offset: 0x20
    NUnit::Framework::ITestAction* action;
    // Field size check
    static_assert(sizeof(NUnit::Framework::ITestAction*) == 0x8);
    // public NUnit.Framework.Internal.Test test
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Internal::Test* test;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Test*) == 0x8);
    // Creating value type constructor for type: $InvokeAfter$d__3
    $InvokeAfter$d__3(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, NUnit::Framework::ITestAction* action_ = {}, NUnit::Framework::Internal::Test* test_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, action{action_}, test{test_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14B9E40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestActionCommand::$InvokeAfter$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestActionCommand::$InvokeAfter$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14B9E74
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14B9E78
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x14B9F74
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14B9F7C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14B9FDC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.TestActionCommand/<InvokeAfter>d__3
  #pragma pack(pop)
  static check_size<sizeof(TestActionCommand::$InvokeAfter$d__3), 40 + sizeof(NUnit::Framework::Internal::Test*)> __UnityEngine_TestTools_TestActionCommand_$InvokeAfter$d__3SizeCheck;
  static_assert(sizeof(TestActionCommand::$InvokeAfter$d__3) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3*, "UnityEngine.TestTools", "TestActionCommand/<InvokeAfter>d__3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::*)()>(&UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::*)()>(&UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::*)()>(&UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::*)()>(&UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::*)()>(&UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
