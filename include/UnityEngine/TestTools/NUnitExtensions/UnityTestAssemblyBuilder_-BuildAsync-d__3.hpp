// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder
#include "UnityEngine/TestTools/NUnitExtensions/UnityTestAssemblyBuilder.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.TestTools.TestPlatform
#include "UnityEngine/TestTools/TestPlatform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
  // Size: 0x4C
  // Autogenerated type: UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder/<BuildAsync>d__3
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE6650
  class UnityTestAssemblyBuilder::$BuildAsync$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<NUnit::Framework::Interfaces::ITest*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private NUnit.Framework.Interfaces.ITest <>2__current
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Interfaces::ITest* $$2__current;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITest*) == 0x8);
    // public UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder <>4__this
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*) == 0x8);
    // public System.Reflection.Assembly[] assemblies
    // Size: 0x8
    // Offset: 0x28
    ::Array<System::Reflection::Assembly*>* assemblies;
    // Field size check
    static_assert(sizeof(::Array<System::Reflection::Assembly*>*) == 0x8);
    // public UnityEngine.TestTools.TestPlatform[] testPlatforms
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::TestTools::TestPlatform>* testPlatforms;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::TestTools::TestPlatform>*) == 0x8);
    // public System.Collections.Generic.IDictionary`2<System.String,System.Object> options
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*) == 0x8);
    // private NUnit.Framework.Internal.TestSuite <suite>5__2
    // Size: 0x8
    // Offset: 0x40
    NUnit::Framework::Internal::TestSuite* $suite$5__2;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestSuite*) == 0x8);
    // private System.Int32 <index>5__3
    // Size: 0x4
    // Offset: 0x48
    int $index$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $BuildAsync$d__3
    $BuildAsync$d__3(int $$1__state_ = {}, NUnit::Framework::Interfaces::ITest* $$2__current_ = {}, UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder* $$4__this_ = {}, ::Array<System::Reflection::Assembly*>* assemblies_ = {}, ::Array<UnityEngine::TestTools::TestPlatform>* testPlatforms_ = {}, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options_ = {}, NUnit::Framework::Internal::TestSuite* $suite$5__2_ = {}, int $index$5__3_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, assemblies{assemblies_}, testPlatforms{testPlatforms_}, options{options_}, $suite$5__2{$suite$5__2_}, $index$5__3{$index$5__3_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<NUnit::Framework::Interfaces::ITest*>
    operator System::Collections::Generic::IEnumerator_1<NUnit::Framework::Interfaces::ITest*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<NUnit::Framework::Interfaces::ITest*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1191ABC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTestAssemblyBuilder::$BuildAsync$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTestAssemblyBuilder::$BuildAsync$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1191BB8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1191BBC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private NUnit.Framework.Interfaces.ITest System.Collections.Generic.IEnumerator<NUnit.Framework.Interfaces.ITest>.get_Current()
    // Offset: 0x1191EAC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    NUnit::Framework::Interfaces::ITest* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1191EB4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1191F14
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder/<BuildAsync>d__3
  static check_size<sizeof(UnityTestAssemblyBuilder::$BuildAsync$d__3), 72 + sizeof(int)> __UnityEngine_TestTools_NUnitExtensions_UnityTestAssemblyBuilder_$BuildAsync$d__3SizeCheck;
  static_assert(sizeof(UnityTestAssemblyBuilder::$BuildAsync$d__3) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3*, "UnityEngine.TestTools.NUnitExtensions", "UnityTestAssemblyBuilder/<BuildAsync>d__3");
#pragma pack(pop)
