// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.TestFixtureAttribute
#include "NUnit/Framework/TestFixtureAttribute.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__0
  class TestFixtureAttribute::$BuildFrom$d__0 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>, public System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>*/ {
    public:
    // private NUnit.Framework.Internal.TestSuite <>2__current
    // Offset: 0x10
    NUnit::Framework::Internal::TestSuite* $$2__current;
    // private System.Int32 <>1__state
    // Offset: 0x18
    int $$1__state;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x1C
    int $$l__initialThreadId;
    // public NUnit.Framework.TestFixtureAttribute <>4__this
    // Offset: 0x20
    NUnit::Framework::TestFixtureAttribute* $$4__this;
    // public NUnit.Framework.Interfaces.ITypeInfo typeInfo
    // Offset: 0x28
    NUnit::Framework::Interfaces::ITypeInfo* typeInfo;
    // public NUnit.Framework.Interfaces.ITypeInfo <>3__typeInfo
    // Offset: 0x30
    NUnit::Framework::Interfaces::ITypeInfo* $$3__typeInfo;
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>
    operator System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>
    operator System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1ED64FC
    static TestFixtureAttribute::$BuildFrom$d__0* New_ctor(int $$1__state);
    // private System.Collections.Generic.IEnumerator`1<NUnit.Framework.Internal.TestSuite> System.Collections.Generic.IEnumerable<NUnit.Framework.Internal.TestSuite>.GetEnumerator()
    // Offset: 0x1ED6544
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1ED6604
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // private System.Boolean MoveNext()
    // Offset: 0x1ED6608
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private NUnit.Framework.Internal.TestSuite System.Collections.Generic.IEnumerator<NUnit.Framework.Internal.TestSuite>.get_Current()
    // Offset: 0x1ED66A0
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    NUnit::Framework::Internal::TestSuite* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1ED66A8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1ED6708
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1ED670C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__0*, "NUnit.Framework", "TestFixtureAttribute/<BuildFrom>d__0");
#pragma pack(pop)
