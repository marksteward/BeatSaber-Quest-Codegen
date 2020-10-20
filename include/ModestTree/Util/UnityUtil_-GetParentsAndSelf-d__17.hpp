// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Autogenerated type: ModestTree.Util.UnityUtil/<GetParentsAndSelf>d__17
  class UnityUtil::$GetParentsAndSelf$d__17 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>, public System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*/ {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private UnityEngine.Transform <>2__current
    // Offset: 0x18
    UnityEngine::Transform* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // private UnityEngine.Transform transform
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // public UnityEngine.Transform <>3__transform
    // Offset: 0x30
    UnityEngine::Transform* $$3__transform;
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> <>7__wrap1
    // Offset: 0x38
    System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>* $$7__wrap1;
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFEC0E8
    static UnityUtil::$GetParentsAndSelf$d__17* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0xFED804
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFED7E8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xFED8C4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private UnityEngine.Transform System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
    // Offset: 0xFEDBD4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    UnityEngine::Transform* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFEDBDC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFEDC3C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
    // Offset: 0xFEDC44
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFEDCF8
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/<GetParentsAndSelf>d__17
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*, "ModestTree.Util", "UnityUtil/<GetParentsAndSelf>d__17");
#pragma pack(pop)
